// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineSweepMesh/Public/SplineSweepMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineSweepMeshComponent() {}
// Cross Module References
	SPLINESWEEPMESH_API UClass* Z_Construct_UClass_USplineSweepMeshComponent_NoRegister();
	SPLINESWEEPMESH_API UClass* Z_Construct_UClass_USplineSweepMeshComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_SplineSweepMesh();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USplineSweepMeshComponent::execUpdatePathSpline)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Path);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RateOfProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePathSpline(Z_Param_Path,Z_Param_RateOfProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineSweepMeshComponent::execCreateSweepMesh)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_SplineToSweep);
		P_GET_OBJECT(USplineComponent,Z_Param_SplineAsPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSegments);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RateOfProgress);
		P_GET_UBOOL(Z_Param_SmoothNormal);
		P_GET_UBOOL(Z_Param_CreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSweepMesh(Z_Param_SplineToSweep,Z_Param_SplineAsPath,Z_Param_NumberOfSegments,Z_Param_RateOfProgress,Z_Param_SmoothNormal,Z_Param_CreateCollision);
		P_NATIVE_END;
	}
	void USplineSweepMeshComponent::StaticRegisterNativesUSplineSweepMeshComponent()
	{
		UClass* Class = USplineSweepMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSweepMesh", &USplineSweepMeshComponent::execCreateSweepMesh },
			{ "UpdatePathSpline", &USplineSweepMeshComponent::execUpdatePathSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics
	{
		struct SplineSweepMeshComponent_eventCreateSweepMesh_Parms
		{
			USplineComponent* SplineToSweep;
			USplineComponent* SplineAsPath;
			int32 NumberOfSegments;
			float RateOfProgress;
			bool SmoothNormal;
			bool CreateCollision;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineToSweep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineToSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineAsPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineAsPath;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfSegments;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfProgress;
		static void NewProp_SmoothNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SmoothNormal;
		static void NewProp_CreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineToSweep_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineToSweep = { "SplineToSweep", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshComponent_eventCreateSweepMesh_Parms, SplineToSweep), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineToSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineToSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineAsPath_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineAsPath = { "SplineAsPath", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshComponent_eventCreateSweepMesh_Parms, SplineAsPath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineAsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineAsPath_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_NumberOfSegments = { "NumberOfSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshComponent_eventCreateSweepMesh_Parms, NumberOfSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_RateOfProgress = { "RateOfProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshComponent_eventCreateSweepMesh_Parms, RateOfProgress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SmoothNormal_SetBit(void* Obj)
	{
		((SplineSweepMeshComponent_eventCreateSweepMesh_Parms*)Obj)->SmoothNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SmoothNormal = { "SmoothNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineSweepMeshComponent_eventCreateSweepMesh_Parms), &Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SmoothNormal_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_CreateCollision_SetBit(void* Obj)
	{
		((SplineSweepMeshComponent_eventCreateSweepMesh_Parms*)Obj)->CreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_CreateCollision = { "CreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineSweepMeshComponent_eventCreateSweepMesh_Parms), &Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_CreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineToSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SplineAsPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_NumberOfSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_RateOfProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_SmoothNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::NewProp_CreateCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "/**\n\x09 *\x09""Create spline sweep mesh with two splines\n\x09 *\x09@param\x09SplineToSweep\x09\x09    A spline component reference which is used to sweep along path\n\x09 *\x09@param\x09SplineAsPath\x09\x09    A spline component reference which is used as path\n\x09 *\x09@param\x09NumberOfSegments\x09\x09How many segments should be created along path\n\x09 *\x09@param\x09RateOfProgress\x09\x09    To make grow animation.Rate of grow progress along path\n\x09 *\x09@param\x09SmoothNormal\x09\x09    Whether should use smoothed normal for side surface,vertex would be shared if use smoothed normal\n\x09 *\x09@param\x09""CreateCollision\x09        Whether collision should be created for this section. This adds significant cost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshComponent.h" },
		{ "ToolTip", "Create spline sweep mesh with two splines\n@param  SplineToSweep               A spline component reference which is used to sweep along path\n@param  SplineAsPath                A spline component reference which is used as path\n@param  NumberOfSegments                How many segments should be created along path\n@param  RateOfProgress              To make grow animation.Rate of grow progress along path\n@param  SmoothNormal                Whether should use smoothed normal for side surface,vertex would be shared if use smoothed normal\n@param  CreateCollision         Whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineSweepMeshComponent, nullptr, "CreateSweepMesh", nullptr, nullptr, sizeof(SplineSweepMeshComponent_eventCreateSweepMesh_Parms), Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics
	{
		struct SplineSweepMeshComponent_eventUpdatePathSpline_Parms
		{
			USplineComponent* Path;
			float RateOfProgress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_Path_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshComponent_eventUpdatePathSpline_Parms, Path), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_RateOfProgress = { "RateOfProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineSweepMeshComponent_eventUpdatePathSpline_Parms, RateOfProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::NewProp_RateOfProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineSweep" },
		{ "Comment", "/**\n\x09 *\x09Updates spline sweep mesh. This is faster than CreateCreateSweepMesh, but does not let you change topology. Collision info is also updated.\n\x09 *\x09@param\x09Path\x09\x09            A spline component reference which is used as path\n\x09 * \x09@param\x09RateOfProgress\x09\x09    To make grow animation.Rate of grow progress along path\n\x09 */" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshComponent.h" },
		{ "ToolTip", "Updates spline sweep mesh. This is faster than CreateCreateSweepMesh, but does not let you change topology. Collision info is also updated.\n@param  Path                        A spline component reference which is used as path\n@param  RateOfProgress              To make grow animation.Rate of grow progress along path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineSweepMeshComponent, nullptr, "UpdatePathSpline", nullptr, nullptr, sizeof(SplineSweepMeshComponent_eventUpdatePathSpline_Parms), Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplineSweepMeshComponent_NoRegister()
	{
		return USplineSweepMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplineSweepMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineSweepMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SplineSweepMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineSweepMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineSweepMeshComponent_CreateSweepMesh, "CreateSweepMesh" }, // 1941950106
		{ &Z_Construct_UFunction_USplineSweepMeshComponent_UpdatePathSpline, "UpdatePathSpline" }, // 2274205691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineSweepMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "SplineSweepMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SplineSweepMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineSweepMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineSweepMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplineSweepMeshComponent_Statics::ClassParams = {
		&USplineSweepMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USplineSweepMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineSweepMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineSweepMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplineSweepMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplineSweepMeshComponent, 3226707292);
	template<> SPLINESWEEPMESH_API UClass* StaticClass<USplineSweepMeshComponent>()
	{
		return USplineSweepMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplineSweepMeshComponent(Z_Construct_UClass_USplineSweepMeshComponent, &USplineSweepMeshComponent::StaticClass, TEXT("/Script/SplineSweepMesh"), TEXT("USplineSweepMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineSweepMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
