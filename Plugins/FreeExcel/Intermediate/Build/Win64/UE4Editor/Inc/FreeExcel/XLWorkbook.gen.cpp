// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLWorkbook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLWorkbook() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorkbook_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorkbook();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLChartsheet_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLSheet_NoRegister();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetType();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLWorkbook::execSetFullCalculationOnLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFullCalculationOnLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execDeleteNamedRanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteNamedRanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execChartsheetExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChartsheetExists(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execWorksheetExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WorksheetExists(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execSheetExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SheetExists(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execChartsheetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ChartsheetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execWorksheetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->WorksheetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execSheetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->SheetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execChartsheetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ChartsheetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execWorksheetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->WorksheetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execSheetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SheetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execTypeOfSheetAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLSheetType*)Z_Param__Result=P_THIS->TypeOfSheetAt(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execTypeOfSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLSheetType*)Z_Param__Result=P_THIS->TypeOfSheet(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execIndexOfSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IndexOfSheet(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execSetSheetIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSheetIndex(Z_Param_sheetName,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execCloneSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_existingName);
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloneSheet(Z_Param_existingName,Z_Param_newName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execAddWorksheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWorksheet(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execDeleteSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSheet(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execChartsheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLChartsheet**)Z_Param__Result=P_THIS->Chartsheet(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execWorksheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorksheet**)Z_Param__Result=P_THIS->Worksheet(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLSheet**)Z_Param__Result=P_THIS->Sheet(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorkbook::execSheetAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLSheet**)Z_Param__Result=P_THIS->SheetAt(Z_Param_index);
		P_NATIVE_END;
	}
	void UXLWorkbook::StaticRegisterNativesUXLWorkbook()
	{
		UClass* Class = UXLWorkbook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWorksheet", &UXLWorkbook::execAddWorksheet },
			{ "Chartsheet", &UXLWorkbook::execChartsheet },
			{ "ChartsheetCount", &UXLWorkbook::execChartsheetCount },
			{ "ChartsheetExists", &UXLWorkbook::execChartsheetExists },
			{ "ChartsheetNames", &UXLWorkbook::execChartsheetNames },
			{ "CloneSheet", &UXLWorkbook::execCloneSheet },
			{ "DeleteNamedRanges", &UXLWorkbook::execDeleteNamedRanges },
			{ "DeleteSheet", &UXLWorkbook::execDeleteSheet },
			{ "IndexOfSheet", &UXLWorkbook::execIndexOfSheet },
			{ "SetFullCalculationOnLoad", &UXLWorkbook::execSetFullCalculationOnLoad },
			{ "SetSheetIndex", &UXLWorkbook::execSetSheetIndex },
			{ "Sheet", &UXLWorkbook::execSheet },
			{ "SheetAt", &UXLWorkbook::execSheetAt },
			{ "SheetCount", &UXLWorkbook::execSheetCount },
			{ "SheetExists", &UXLWorkbook::execSheetExists },
			{ "SheetNames", &UXLWorkbook::execSheetNames },
			{ "TypeOfSheet", &UXLWorkbook::execTypeOfSheet },
			{ "TypeOfSheetAt", &UXLWorkbook::execTypeOfSheetAt },
			{ "Worksheet", &UXLWorkbook::execWorksheet },
			{ "WorksheetCount", &UXLWorkbook::execWorksheetCount },
			{ "WorksheetExists", &UXLWorkbook::execWorksheetExists },
			{ "WorksheetNames", &UXLWorkbook::execWorksheetNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics
	{
		struct XLWorkbook_eventAddWorksheet_Parms
		{
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventAddWorksheet_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "AddWorksheet", nullptr, nullptr, sizeof(XLWorkbook_eventAddWorksheet_Parms), Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_AddWorksheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_AddWorksheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics
	{
		struct XLWorkbook_eventChartsheet_Parms
		{
			FString name;
			UXLChartsheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventChartsheet_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventChartsheet_Parms, ReturnValue), Z_Construct_UClass_UXLChartsheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "Chartsheet", nullptr, nullptr, sizeof(XLWorkbook_eventChartsheet_Parms), Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_Chartsheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_Chartsheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics
	{
		struct XLWorkbook_eventChartsheetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventChartsheetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "ChartsheetCount", nullptr, nullptr, sizeof(XLWorkbook_eventChartsheetCount_Parms), Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_ChartsheetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_ChartsheetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics
	{
		struct XLWorkbook_eventChartsheetExists_Parms
		{
			FString sheetName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventChartsheetExists_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorkbook_eventChartsheetExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorkbook_eventChartsheetExists_Parms), &Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "ChartsheetExists", nullptr, nullptr, sizeof(XLWorkbook_eventChartsheetExists_Parms), Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_ChartsheetExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_ChartsheetExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics
	{
		struct XLWorkbook_eventChartsheetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventChartsheetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "ChartsheetNames", nullptr, nullptr, sizeof(XLWorkbook_eventChartsheetNames_Parms), Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_ChartsheetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_ChartsheetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics
	{
		struct XLWorkbook_eventCloneSheet_Parms
		{
			FString existingName;
			FString newName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_existingName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::NewProp_existingName = { "existingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventCloneSheet_Parms, existingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventCloneSheet_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::NewProp_existingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "CloneSheet", nullptr, nullptr, sizeof(XLWorkbook_eventCloneSheet_Parms), Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_CloneSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_CloneSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n    UFUNCTION(BlueprintCallable)\n    void UpdateSheetReferences(FString oldName, FString newName);\n\n\x09UFUNCTION(BlueprintCallable)\n    UXLSharedStrings* SharedStrings();\n\n\x09UFUNCTION(BlueprintCallable)\n    bool HasSharedStrings() ;\n*/" },
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid UpdateSheetReferences(FString oldName, FString newName);\n\n   UFUNCTION(BlueprintCallable)\nUXLSharedStrings* SharedStrings();\n\n   UFUNCTION(BlueprintCallable)\nbool HasSharedStrings() ;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "DeleteNamedRanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics
	{
		struct XLWorkbook_eventDeleteSheet_Parms
		{
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventDeleteSheet_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delete sheet (worksheet or chartsheet) from the workbook.\n" },
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
		{ "ToolTip", "Delete sheet (worksheet or chartsheet) from the workbook." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "DeleteSheet", nullptr, nullptr, sizeof(XLWorkbook_eventDeleteSheet_Parms), Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_DeleteSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_DeleteSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics
	{
		struct XLWorkbook_eventIndexOfSheet_Parms
		{
			FString sheetName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventIndexOfSheet_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventIndexOfSheet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "IndexOfSheet", nullptr, nullptr, sizeof(XLWorkbook_eventIndexOfSheet_Parms), Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_IndexOfSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_IndexOfSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "SetFullCalculationOnLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics
	{
		struct XLWorkbook_eventSetSheetIndex_Parms
		{
			FString sheetName;
			int32 index;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSetSheetIndex_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSetSheetIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "SetSheetIndex", nullptr, nullptr, sizeof(XLWorkbook_eventSetSheetIndex_Parms), Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_SetSheetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_SetSheetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_Sheet_Statics
	{
		struct XLWorkbook_eventSheet_Parms
		{
			FString name;
			UXLSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheet_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheet_Parms, ReturnValue), Z_Construct_UClass_UXLSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the sheet (worksheet or chartsheet) with the given name.\n" },
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
		{ "ToolTip", "Get the sheet (worksheet or chartsheet) with the given name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "Sheet", nullptr, nullptr, sizeof(XLWorkbook_eventSheet_Parms), Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_Sheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_Sheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics
	{
		struct XLWorkbook_eventSheetAt_Parms
		{
			int32 index;
			UXLSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheetAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheetAt_Parms, ReturnValue), Z_Construct_UClass_UXLSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the sheet (worksheet or chartsheet) at the given index.\n" },
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
		{ "ToolTip", "Get the sheet (worksheet or chartsheet) at the given index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "SheetAt", nullptr, nullptr, sizeof(XLWorkbook_eventSheetAt_Parms), Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_SheetAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_SheetAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics
	{
		struct XLWorkbook_eventSheetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "SheetCount", nullptr, nullptr, sizeof(XLWorkbook_eventSheetCount_Parms), Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_SheetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_SheetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics
	{
		struct XLWorkbook_eventSheetExists_Parms
		{
			FString name;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheetExists_Parms, name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorkbook_eventSheetExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorkbook_eventSheetExists_Parms), &Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "SheetExists", nullptr, nullptr, sizeof(XLWorkbook_eventSheetExists_Parms), Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_SheetExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_SheetExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics
	{
		struct XLWorkbook_eventSheetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventSheetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "SheetNames", nullptr, nullptr, sizeof(XLWorkbook_eventSheetNames_Parms), Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_SheetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_SheetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics
	{
		struct XLWorkbook_eventTypeOfSheet_Parms
		{
			FString sheetName;
			EXLSheetType ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventTypeOfSheet_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventTypeOfSheet_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLSheetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "TypeOfSheet", nullptr, nullptr, sizeof(XLWorkbook_eventTypeOfSheet_Parms), Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_TypeOfSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_TypeOfSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics
	{
		struct XLWorkbook_eventTypeOfSheetAt_Parms
		{
			int32 index;
			EXLSheetType ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventTypeOfSheetAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventTypeOfSheetAt_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLSheetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "TypeOfSheetAt", nullptr, nullptr, sizeof(XLWorkbook_eventTypeOfSheetAt_Parms), Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics
	{
		struct XLWorkbook_eventWorksheet_Parms
		{
			FString name;
			UXLWorksheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventWorksheet_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventWorksheet_Parms, ReturnValue), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "Worksheet", nullptr, nullptr, sizeof(XLWorkbook_eventWorksheet_Parms), Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_Worksheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_Worksheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics
	{
		struct XLWorkbook_eventWorksheetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventWorksheetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "WorksheetCount", nullptr, nullptr, sizeof(XLWorkbook_eventWorksheetCount_Parms), Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_WorksheetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_WorksheetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics
	{
		struct XLWorkbook_eventWorksheetExists_Parms
		{
			FString sheetName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventWorksheetExists_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorkbook_eventWorksheetExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorkbook_eventWorksheetExists_Parms), &Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "WorksheetExists", nullptr, nullptr, sizeof(XLWorkbook_eventWorksheetExists_Parms), Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_WorksheetExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_WorksheetExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics
	{
		struct XLWorkbook_eventWorksheetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorkbook_eventWorksheetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorkbook, nullptr, "WorksheetNames", nullptr, nullptr, sizeof(XLWorkbook_eventWorksheetNames_Parms), Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorkbook_WorksheetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorkbook_WorksheetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLWorkbook_NoRegister()
	{
		return UXLWorkbook::StaticClass();
	}
	struct Z_Construct_UClass_UXLWorkbook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLWorkbook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLWorkbook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLWorkbook_AddWorksheet, "AddWorksheet" }, // 3840756296
		{ &Z_Construct_UFunction_UXLWorkbook_Chartsheet, "Chartsheet" }, // 1650746277
		{ &Z_Construct_UFunction_UXLWorkbook_ChartsheetCount, "ChartsheetCount" }, // 4235435092
		{ &Z_Construct_UFunction_UXLWorkbook_ChartsheetExists, "ChartsheetExists" }, // 633216023
		{ &Z_Construct_UFunction_UXLWorkbook_ChartsheetNames, "ChartsheetNames" }, // 1378600208
		{ &Z_Construct_UFunction_UXLWorkbook_CloneSheet, "CloneSheet" }, // 4235668809
		{ &Z_Construct_UFunction_UXLWorkbook_DeleteNamedRanges, "DeleteNamedRanges" }, // 3902991493
		{ &Z_Construct_UFunction_UXLWorkbook_DeleteSheet, "DeleteSheet" }, // 254123510
		{ &Z_Construct_UFunction_UXLWorkbook_IndexOfSheet, "IndexOfSheet" }, // 4280930360
		{ &Z_Construct_UFunction_UXLWorkbook_SetFullCalculationOnLoad, "SetFullCalculationOnLoad" }, // 3869725447
		{ &Z_Construct_UFunction_UXLWorkbook_SetSheetIndex, "SetSheetIndex" }, // 4286071902
		{ &Z_Construct_UFunction_UXLWorkbook_Sheet, "Sheet" }, // 1957974979
		{ &Z_Construct_UFunction_UXLWorkbook_SheetAt, "SheetAt" }, // 2438090828
		{ &Z_Construct_UFunction_UXLWorkbook_SheetCount, "SheetCount" }, // 4163906943
		{ &Z_Construct_UFunction_UXLWorkbook_SheetExists, "SheetExists" }, // 1089330401
		{ &Z_Construct_UFunction_UXLWorkbook_SheetNames, "SheetNames" }, // 1038806237
		{ &Z_Construct_UFunction_UXLWorkbook_TypeOfSheet, "TypeOfSheet" }, // 2135149643
		{ &Z_Construct_UFunction_UXLWorkbook_TypeOfSheetAt, "TypeOfSheetAt" }, // 1206602813
		{ &Z_Construct_UFunction_UXLWorkbook_Worksheet, "Worksheet" }, // 3985700905
		{ &Z_Construct_UFunction_UXLWorkbook_WorksheetCount, "WorksheetCount" }, // 2256799346
		{ &Z_Construct_UFunction_UXLWorkbook_WorksheetExists, "WorksheetExists" }, // 2443715184
		{ &Z_Construct_UFunction_UXLWorkbook_WorksheetNames, "WorksheetNames" }, // 4154651366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLWorkbook_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLWorkbook.h" },
		{ "ModuleRelativePath", "Public/XLWorkbook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLWorkbook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLWorkbook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLWorkbook_Statics::ClassParams = {
		&UXLWorkbook::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXLWorkbook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLWorkbook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLWorkbook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLWorkbook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLWorkbook, 862067701);
	template<> FREEEXCEL_API UClass* StaticClass<UXLWorkbook>()
	{
		return UXLWorkbook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLWorkbook(Z_Construct_UClass_UXLWorkbook, &UXLWorkbook::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLWorkbook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLWorkbook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
