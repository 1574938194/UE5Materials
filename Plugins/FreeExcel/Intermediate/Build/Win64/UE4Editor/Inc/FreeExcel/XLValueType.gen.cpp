// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLValueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLValueType() {}
// Cross Module References
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLValueType();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
// End Cross Module References
	static UEnum* EXLValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FreeExcel_EXLValueType, Z_Construct_UPackage__Script_FreeExcel(), TEXT("EXLValueType"));
		}
		return Singleton;
	}
	template<> FREEEXCEL_API UEnum* StaticEnum<EXLValueType>()
	{
		return EXLValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXLValueType(EXLValueType_StaticEnum, TEXT("/Script/FreeExcel"), TEXT("EXLValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FreeExcel_EXLValueType_Hash() { return 1641721467U; }
	UEnum* Z_Construct_UEnum_FreeExcel_EXLValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FreeExcel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXLValueType"), 0, Get_Z_Construct_UEnum_FreeExcel_EXLValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXLValueType::Empty", (int64)EXLValueType::Empty },
				{ "EXLValueType::Boolean", (int64)EXLValueType::Boolean },
				{ "EXLValueType::Integer", (int64)EXLValueType::Integer },
				{ "EXLValueType::Float", (int64)EXLValueType::Float },
				{ "EXLValueType::Error", (int64)EXLValueType::Error },
				{ "EXLValueType::String", (int64)EXLValueType::String },
				{ "EXLValueType::Formula", (int64)EXLValueType::Formula },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Comment", "/**\n * \n */" },
				{ "Boolean.DisplayName", "Boolean" },
				{ "Boolean.Name", "EXLValueType::Boolean" },
				{ "Comment", "/**\n * \n */" },
				{ "Empty.Comment", "/**\n * \n */" },
				{ "Empty.DisplayName", "Empty" },
				{ "Empty.Name", "EXLValueType::Empty" },
				{ "Error.Comment", "/**\n * \n */" },
				{ "Error.DisplayName", "Error" },
				{ "Error.Name", "EXLValueType::Error" },
				{ "Float.Comment", "/**\n * \n */" },
				{ "Float.DisplayName", "Float" },
				{ "Float.Name", "EXLValueType::Float" },
				{ "Formula.Comment", "/**\n * \n */" },
				{ "Formula.DisplayName", "Formula" },
				{ "Formula.Name", "EXLValueType::Formula" },
				{ "Integer.Comment", "/**\n * \n */" },
				{ "Integer.DisplayName", "Integer" },
				{ "Integer.Name", "EXLValueType::Integer" },
				{ "ModuleRelativePath", "Public/XLValueType.h" },
				{ "String.Comment", "/**\n * \n */" },
				{ "String.DisplayName", "String" },
				{ "String.Name", "EXLValueType::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FreeExcel,
				nullptr,
				"EXLValueType",
				"EXLValueType",
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
