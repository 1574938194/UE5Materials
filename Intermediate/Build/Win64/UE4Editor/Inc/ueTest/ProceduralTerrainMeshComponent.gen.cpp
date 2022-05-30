// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ueTest/ProceduralTerrainMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralTerrainMeshComponent() {}
// Cross Module References
	UETEST_API UClass* Z_Construct_UClass_UProceduralTerrainMeshComponent_NoRegister();
	UETEST_API UClass* Z_Construct_UClass_UProceduralTerrainMeshComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ueTest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralTerrainMeshComponent::execCreateTerrain)
	{
		P_GET_STRUCT(FVector2D,Z_Param_BlockNum);
		P_GET_STRUCT(FVector2D,Z_Param_BlockSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTerrain(Z_Param_BlockNum,Z_Param_BlockSize,Z_Param_seed);
		P_NATIVE_END;
	}
	void UProceduralTerrainMeshComponent::StaticRegisterNativesUProceduralTerrainMeshComponent()
	{
		UClass* Class = UProceduralTerrainMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTerrain", &UProceduralTerrainMeshComponent::execCreateTerrain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics
	{
		struct ProceduralTerrainMeshComponent_eventCreateTerrain_Parms
		{
			FVector2D BlockNum;
			FVector2D BlockSize;
			int32 seed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::NewProp_BlockNum = { "BlockNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralTerrainMeshComponent_eventCreateTerrain_Parms, BlockNum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralTerrainMeshComponent_eventCreateTerrain_Parms, BlockSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralTerrainMeshComponent_eventCreateTerrain_Parms, seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::NewProp_BlockNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::NewProp_BlockSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "CPP_Default_seed", "0" },
		{ "ModuleRelativePath", "ProceduralTerrainMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralTerrainMeshComponent, nullptr, "CreateTerrain", nullptr, nullptr, sizeof(ProceduralTerrainMeshComponent_eventCreateTerrain_Parms), Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralTerrainMeshComponent_NoRegister()
	{
		return UProceduralTerrainMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ueTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralTerrainMeshComponent_CreateTerrain, "CreateTerrain" }, // 4095903023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "ProceduralTerrainMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ProceduralTerrainMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralTerrainMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::ClassParams = {
		&UProceduralTerrainMeshComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralTerrainMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralTerrainMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralTerrainMeshComponent, 2059862586);
	template<> UETEST_API UClass* StaticClass<UProceduralTerrainMeshComponent>()
	{
		return UProceduralTerrainMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralTerrainMeshComponent(Z_Construct_UClass_UProceduralTerrainMeshComponent, &UProceduralTerrainMeshComponent::StaticClass, TEXT("/Script/ueTest"), TEXT("UProceduralTerrainMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralTerrainMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
