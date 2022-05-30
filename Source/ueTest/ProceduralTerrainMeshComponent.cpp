// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralTerrainMeshComponent.h"
#include "perlin_noise.h"
#include "uniform_random.h"

void UProceduralTerrainMeshComponent::CreateTerrain(FVector2D BlockNum,FVector2D BlockSize, int32 seed)
{ 
	ClearAllMeshSections();
	 
	_UniformRandom urng(seed);

	perlin_noise noise(&urng);


	TArray<FVector> vertices;
	TArray<int> indices;
	TArray<FVector> normals;
	TArray<FVector2D> UVs;
	TArray<FColor> color;
	TArray<FProcMeshTangent> tangent;

	int Nx = BlockNum.X, Ny = BlockNum.Y;
	auto TotalSize = BlockNum * BlockSize;
	FVector2D base = TotalSize * -0.5f;
	size_t Pos = 0;
	size_t iLd=0, iRd=0, iLt=0,iRt=0;

	float Steepness = 1000;
	for (int j = 0; j < Nx; j++)
	{
		 
		for (int i = 0; i < Ny; i++)
		{ 
			 
			if (i == 0 && j==0)
			{
				auto ld = FVector(base.X + j * BlockSize.X, base.Y + i * BlockSize.Y, 0);
				ld.Z = Steepness *noise.noise3D(ld.X / TotalSize.X, ld.Y / TotalSize.Y, 0, 8);

				vertices.Add(ld);
				iLd = Pos;
				Pos++;
			}
			else 
			{ 
				if (i == 0)
				{
					 
					if (j > 1)
					{
						iLd = vertices.Num() -  Ny -1 ;
					}
					else
					{
						iLd = vertices.Num() - (Ny * 2 );
					}

				}
				else
				{
					iLd = iRd;
				}
			}
		 

			if (j == 0)
			{
				auto rd = FVector(base.X + j * BlockSize.X, base.Y + (i + 1) * BlockSize.Y, 0);
				rd.Z = Steepness * noise.noise3D(rd.X / TotalSize.X, rd.Y / TotalSize.Y, 0, 8);

				vertices.Add(rd);
				iRd = Pos;
				Pos++;
			}
			else
			{
				if (j > 1)
				{
					iRd = vertices.Num() - (i > 0 ? (i + 1) : 0) - (Ny - i -1)-1;
				 }
				else
				{
					iRd = vertices.Num() - (i > 0 ? (i + 1) : 0) - ((Ny - i - 1) * 2) -1;
				}
			}

			if (i == 0)
			{
				auto lt = FVector(base.X + (j + 1) * BlockSize.X, base.Y + i * BlockSize.Y, 0);
				lt.Z = Steepness * noise.noise3D(lt.X / TotalSize.X, lt.Y / TotalSize.Y, 0, 8);

				vertices.Add(lt);
				iLt = Pos; 
				Pos++;
			}
			else
			{ 
				 iLt = iRt; 
			}

			auto rt = FVector(base.X + (j + 1) * BlockSize.X, base.Y + (i + 1) * BlockSize.Y, 0);
			rt.Z = Steepness *  noise.noise3D(rt.X / TotalSize.X, rt.Y / TotalSize.Y, 0, 8);

			vertices.Add(rt);
			iRt = Pos;
			Pos++;

			// counter-clockwise 
			indices.Add(iLd);	indices.Add(iRd);	indices.Add(iRt);
			indices.Add(iLd);	indices.Add(iRt);	indices.Add(iLt);
			 
		}

		
	}
	 
	CreateMeshSection(0, vertices, indices, normals, UVs, color, tangent, true);
	 
}