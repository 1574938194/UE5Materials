// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ueTest/ueTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeueTestGameMode() {}
// Cross Module References
	UETEST_API UClass* Z_Construct_UClass_AueTestGameMode_NoRegister();
	UETEST_API UClass* Z_Construct_UClass_AueTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ueTest();
// End Cross Module References
	void AueTestGameMode::StaticRegisterNativesAueTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AueTestGameMode_NoRegister()
	{
		return AueTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AueTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AueTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ueTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AueTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ueTestGameMode.h" },
		{ "ModuleRelativePath", "ueTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AueTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AueTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AueTestGameMode_Statics::ClassParams = {
		&AueTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AueTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AueTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AueTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AueTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AueTestGameMode, 1085114405);
	template<> UETEST_API UClass* StaticClass<AueTestGameMode>()
	{
		return AueTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AueTestGameMode(Z_Construct_UClass_AueTestGameMode, &AueTestGameMode::StaticClass, TEXT("/Script/ueTest"), TEXT("AueTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AueTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
