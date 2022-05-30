// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineSweepMesh/Public/SplineSweepMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineSweepMeshActor() {}
// Cross Module References
	SPLINESWEEPMESH_API UClass* Z_Construct_UClass_ASplineSweepMeshActor_NoRegister();
	SPLINESWEEPMESH_API UClass* Z_Construct_UClass_ASplineSweepMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SplineSweepMesh();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SPLINESWEEPMESH_API UClass* Z_Construct_UClass_USplineSweepMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASplineSweepMeshActor::execUpdatePathSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePathSpline(Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASplineSweepMeshActor::execCreateSweepMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSweepMesh();
		P_NATIVE_END;
	}
	void ASplineSweepMeshActor::StaticRegisterNativesASplineSweepMeshActor()
	{
		UClass* Class = ASplineSweepMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSweepMesh", &ASplineSweepMeshActor::execCreateSweepMesh },
			{ "UpdatePathSpline", &ASplineSweepMeshActor::execUpdatePathSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//Call SweepMeshComponent->CreateSweepMesh();\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Call SweepMeshComponent->CreateSweepMesh();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineSweepMeshActor, nullptr, "CreateSweepMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics
	{
		struct SplineSweepMeshActor_eventUpdatePathSpline_Parms
		{
			float Progress;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshActor_eventUpdatePathSpline_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//Call \x09SweepMeshComponent->UpdatePathSpline();\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Call    SweepMeshComponent->UpdatePathSpline();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineSweepMeshActor, nullptr, "UpdatePathSpline", nullptr, nullptr, sizeof(SplineSweepMeshActor_eventUpdatePathSpline_Parms), Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASplineSweepMeshActor_NoRegister()
	{
		return ASplineSweepMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ASplineSweepMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineToSweep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineToSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineAsPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineAsPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSmoothNormal_MetaData[];
#endif
		static void NewProp_bUseSmoothNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSmoothNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[];
#endif
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SweepMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineSweepMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SplineSweepMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineSweepMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineSweepMeshActor_CreateSweepMesh, "CreateSweepMesh" }, // 264647862
		{ &Z_Construct_UFunction_ASplineSweepMeshActor_UpdatePathSpline, "UpdatePathSpline" }, // 1266890022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineSweepMeshActor.h" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineToSweep_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//A spline component reference which is used to sweep along path\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "A spline component reference which is used to sweep along path" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineToSweep = { "SplineToSweep", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, SplineToSweep), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineToSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineToSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineAsPath_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//A spline component reference which is used as path\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "A spline component reference which is used as path" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineAsPath = { "SplineAsPath", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, SplineAsPath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineAsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineAsPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_CoverMaterial_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//Materials\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_CoverMaterial = { "CoverMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, CoverMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_CoverMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_CoverMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SideMaterial_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SideMaterial = { "SideMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, SideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SideMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//Whether should use smoothed normal for side surface,verticles would be shared if use smoothed normal\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Whether should use smoothed normal for side surface,verticles would be shared if use smoothed normal" },
	};
#endif
	void Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal_SetBit(void* Obj)
	{
		((ASplineSweepMeshActor*)Obj)->bUseSmoothNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal = { "bUseSmoothNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineSweepMeshActor), &Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//Whether collision should be created for this section.\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Whether collision should be created for this section." },
	};
#endif
	void Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((ASplineSweepMeshActor*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineSweepMeshActor), &Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_NumSegments_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//How many degments should be created along path\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "How many degments should be created along path" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, NumSegments), METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_NumSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_NumSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_RateOfProgress_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//To make grow animation.Rate of grow progress along path.Should be in[0,1]\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "To make grow animation.Rate of grow progress along path.Should be in[0,1]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_RateOfProgress = { "RateOfProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, RateOfProgress), METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_RateOfProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_RateOfProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_Param1_MetaData[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "//Addition\n//To make grow animation.Rate of grow progress along path.Should be in[0,1]\n" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Addition\nTo make grow animation.Rate of grow progress along path.Should be in[0,1]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, Param1), METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SweepMeshComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Spline sweep mesh component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshActor.h" },
		{ "ToolTip", "Spline sweep mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SweepMeshComponent = { "SweepMeshComponent", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineSweepMeshActor, SweepMeshComponent), Z_Construct_UClass_USplineSweepMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SweepMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SweepMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineSweepMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineToSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SplineAsPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_CoverMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SideMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bUseSmoothNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_bCreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_NumSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_RateOfProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_Param1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineSweepMeshActor_Statics::NewProp_SweepMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineSweepMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineSweepMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineSweepMeshActor_Statics::ClassParams = {
		&ASplineSweepMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineSweepMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineSweepMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineSweepMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineSweepMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplineSweepMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplineSweepMeshActor, 2733669378);
	template<> SPLINESWEEPMESH_API UClass* StaticClass<ASplineSweepMeshActor>()
	{
		return ASplineSweepMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineSweepMeshActor(Z_Construct_UClass_ASplineSweepMeshActor, &ASplineSweepMeshActor::StaticClass, TEXT("/Script/SplineSweepMesh"), TEXT("ASplineSweepMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineSweepMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
