// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralTerrainMeshComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), Blueprintable)
class UETEST_API UProceduralTerrainMeshComponent : public UProceduralMeshComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Procedural")
		void CreateTerrain(FVector2D BlockNum, FVector2D BlockSize, int32 seed=0);


protected:

};
