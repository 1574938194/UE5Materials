// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLSheetState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLSheetState() {}
// Cross Module References
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetState();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
// End Cross Module References
	static UEnum* EXLSheetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FreeExcel_EXLSheetState, Z_Construct_UPackage__Script_FreeExcel(), TEXT("EXLSheetState"));
		}
		return Singleton;
	}
	template<> FREEEXCEL_API UEnum* StaticEnum<EXLSheetState>()
	{
		return EXLSheetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXLSheetState(EXLSheetState_StaticEnum, TEXT("/Script/FreeExcel"), TEXT("EXLSheetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FreeExcel_EXLSheetState_Hash() { return 308785449U; }
	UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FreeExcel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXLSheetState"), 0, Get_Z_Construct_UEnum_FreeExcel_EXLSheetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXLSheetState::Visible", (int64)EXLSheetState::Visible },
				{ "EXLSheetState::Hidden", (int64)EXLSheetState::Hidden },
				{ "EXLSheetState::VeryHidden", (int64)EXLSheetState::VeryHidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hidden.DisplayName", "Hidden" },
				{ "Hidden.Name", "EXLSheetState::Hidden" },
				{ "ModuleRelativePath", "Public/XLSheetState.h" },
				{ "VeryHidden.DisplayName", "VeryHidden" },
				{ "VeryHidden.Name", "EXLSheetState::VeryHidden" },
				{ "Visible.DisplayName", "Visible" },
				{ "Visible.Name", "EXLSheetState::Visible" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FreeExcel,
				nullptr,
				"EXLSheetState",
				"EXLSheetState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
