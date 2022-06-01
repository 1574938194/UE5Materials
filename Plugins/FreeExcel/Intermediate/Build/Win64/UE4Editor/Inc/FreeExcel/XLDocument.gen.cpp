// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLDocument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLDocument() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLDocument_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLDocument();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLDocument::execSetCurrentSheet)
	{
		P_GET_OBJECT(UXLWorksheet,Z_Param__New);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentSheet(Z_Param__New);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execGetPreviousSheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorksheet**)Z_Param__Result=P_THIS->GetPreviousSheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execGetCurrentSheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorksheet**)Z_Param__Result=P_THIS->GetCurrentSheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSetFullCalculationOnLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFullCalculationOnLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execDeleteNamedRanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteNamedRanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSheetExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SheetExists(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSheetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->SheetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSheetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SheetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execIndexOfSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IndexOfSheet(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSetSheetIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSheetIndex(Z_Param_sheetName,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execCloneSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_existingName);
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloneSheet(Z_Param_existingName,Z_Param_newName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execDeleteSheet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSheet(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execGetOrCreateSheetWithName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorksheet**)Z_Param__Result=P_THIS->GetOrCreateSheetWithName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execGetSheetAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorksheet**)Z_Param__Result=P_THIS->GetSheetAt(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execExcelIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExcelIsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execExcelFullPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ExcelFullPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execExcelFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ExcelFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSaveExcelAs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveExcelAs(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSaveExcel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveExcel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execCloseExcel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseExcel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execCreateExcel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLDocument**)Z_Param__Result=UXLDocument::CreateExcel(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execOpenExcel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLDocument**)Z_Param__Result=UXLDocument::OpenExcel(Z_Param_path);
		P_NATIVE_END;
	}
	void UXLDocument::StaticRegisterNativesUXLDocument()
	{
		UClass* Class = UXLDocument::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloneSheet", &UXLDocument::execCloneSheet },
			{ "CloseExcel", &UXLDocument::execCloseExcel },
			{ "CreateExcel", &UXLDocument::execCreateExcel },
			{ "DeleteNamedRanges", &UXLDocument::execDeleteNamedRanges },
			{ "DeleteSheet", &UXLDocument::execDeleteSheet },
			{ "ExcelFileName", &UXLDocument::execExcelFileName },
			{ "ExcelFullPath", &UXLDocument::execExcelFullPath },
			{ "ExcelIsValid", &UXLDocument::execExcelIsValid },
			{ "GetCurrentSheet", &UXLDocument::execGetCurrentSheet },
			{ "GetOrCreateSheetWithName", &UXLDocument::execGetOrCreateSheetWithName },
			{ "GetPreviousSheet", &UXLDocument::execGetPreviousSheet },
			{ "GetSheetAt", &UXLDocument::execGetSheetAt },
			{ "IndexOfSheet", &UXLDocument::execIndexOfSheet },
			{ "OpenExcel", &UXLDocument::execOpenExcel },
			{ "SaveExcel", &UXLDocument::execSaveExcel },
			{ "SaveExcelAs", &UXLDocument::execSaveExcelAs },
			{ "SetCurrentSheet", &UXLDocument::execSetCurrentSheet },
			{ "SetFullCalculationOnLoad", &UXLDocument::execSetFullCalculationOnLoad },
			{ "SetSheetIndex", &UXLDocument::execSetSheetIndex },
			{ "SheetCount", &UXLDocument::execSheetCount },
			{ "SheetExists", &UXLDocument::execSheetExists },
			{ "SheetNames", &UXLDocument::execSheetNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLDocument_CloneSheet_Statics
	{
		struct XLDocument_eventCloneSheet_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::NewProp_existingName = { "existingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventCloneSheet_Parms, existingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventCloneSheet_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::NewProp_existingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "CloneSheet", nullptr, nullptr, sizeof(XLDocument_eventCloneSheet_Parms), Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_CloneSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_CloneSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_CloseExcel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_CloseExcel_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Close the current document\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Close the current document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_CloseExcel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "CloseExcel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_CloseExcel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_CloseExcel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_CloseExcel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_CloseExcel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_CreateExcel_Statics
	{
		struct XLDocument_eventCreateExcel_Parms
		{
			FString path;
			UXLDocument* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventCreateExcel_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventCreateExcel_Parms, ReturnValue), Z_Construct_UClass_UXLDocument_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Create a new .xlsx file with the given path.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Create a new .xlsx file with the given path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "CreateExcel", nullptr, nullptr, sizeof(XLDocument_eventCreateExcel_Parms), Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_CreateExcel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_CreateExcel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_DeleteNamedRanges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_DeleteNamedRanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_DeleteNamedRanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "DeleteNamedRanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_DeleteNamedRanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_DeleteNamedRanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_DeleteNamedRanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_DeleteNamedRanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics
	{
		struct XLDocument_eventDeleteSheet_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventDeleteSheet_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Delete sheet (worksheet or chartsheet) from the workbook.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Delete sheet (worksheet or chartsheet) from the workbook." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "DeleteSheet", nullptr, nullptr, sizeof(XLDocument_eventDeleteSheet_Parms), Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_DeleteSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_DeleteSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics
	{
		struct XLDocument_eventExcelFileName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventExcelFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Get the filename of the current document, e.g. \"spreadsheet.xlsx\".\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Get the filename of the current document, e.g. \"spreadsheet.xlsx\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "ExcelFileName", nullptr, nullptr, sizeof(XLDocument_eventExcelFileName_Parms), Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_ExcelFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_ExcelFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics
	{
		struct XLDocument_eventExcelFullPath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventExcelFullPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "//Get the full path of the current document, e.g. \"drive/blah/spreadsheet.xlsx\"\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Get the full path of the current document, e.g. \"drive/blah/spreadsheet.xlsx\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "ExcelFullPath", nullptr, nullptr, sizeof(XLDocument_eventExcelFullPath_Parms), Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_ExcelFullPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_ExcelFullPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics
	{
		struct XLDocument_eventExcelIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLDocument_eventExcelIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLDocument_eventExcelIsValid_Parms), &Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "ExcelIsValid", nullptr, nullptr, sizeof(XLDocument_eventExcelIsValid_Parms), Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_ExcelIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_ExcelIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics
	{
		struct XLDocument_eventGetCurrentSheet_Parms
		{
			UXLWorksheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventGetCurrentSheet_Parms, ReturnValue), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "GetCurrentSheet", nullptr, nullptr, sizeof(XLDocument_eventGetCurrentSheet_Parms), Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_GetCurrentSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_GetCurrentSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics
	{
		struct XLDocument_eventGetOrCreateSheetWithName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventGetOrCreateSheetWithName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventGetOrCreateSheetWithName_Parms, ReturnValue), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "GetOrCreateSheetWithName", nullptr, nullptr, sizeof(XLDocument_eventGetOrCreateSheetWithName_Parms), Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics
	{
		struct XLDocument_eventGetPreviousSheet_Parms
		{
			UXLWorksheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventGetPreviousSheet_Parms, ReturnValue), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "GetPreviousSheet", nullptr, nullptr, sizeof(XLDocument_eventGetPreviousSheet_Parms), Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_GetPreviousSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_GetPreviousSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics
	{
		struct XLDocument_eventGetSheetAt_Parms
		{
			int32 index;
			UXLWorksheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventGetSheetAt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventGetSheetAt_Parms, ReturnValue), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "GetSheetAt", nullptr, nullptr, sizeof(XLDocument_eventGetSheetAt_Parms), Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_GetSheetAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_GetSheetAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics
	{
		struct XLDocument_eventIndexOfSheet_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventIndexOfSheet_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventIndexOfSheet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "IndexOfSheet", nullptr, nullptr, sizeof(XLDocument_eventIndexOfSheet_Parms), Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_IndexOfSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_IndexOfSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_OpenExcel_Statics
	{
		struct XLDocument_eventOpenExcel_Parms
		{
			FString path;
			UXLDocument* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventOpenExcel_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventOpenExcel_Parms, ReturnValue), Z_Construct_UClass_UXLDocument_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "//  Open the .xlsx file with the given path\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Open the .xlsx file with the given path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "OpenExcel", nullptr, nullptr, sizeof(XLDocument_eventOpenExcel_Parms), Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_OpenExcel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_OpenExcel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SaveExcel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SaveExcel_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "//Save the current document using the current filename, overwriting the existing file.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Save the current document using the current filename, overwriting the existing file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SaveExcel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SaveExcel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SaveExcel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SaveExcel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SaveExcel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SaveExcel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics
	{
		struct XLDocument_eventSaveExcelAs_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSaveExcelAs_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "//Save the document with a new name. If a file exists with that name, it will be overwritten.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Save the document with a new name. If a file exists with that name, it will be overwritten." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SaveExcelAs", nullptr, nullptr, sizeof(XLDocument_eventSaveExcelAs_Parms), Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SaveExcelAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SaveExcelAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics
	{
		struct XLDocument_eventSetCurrentSheet_Parms
		{
			UXLWorksheet* _New;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__New;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::NewProp__New = { "_New", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSetCurrentSheet_Parms, _New), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::NewProp__New,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SetCurrentSheet", nullptr, nullptr, sizeof(XLDocument_eventSetCurrentSheet_Parms), Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SetCurrentSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SetCurrentSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SetFullCalculationOnLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics
	{
		struct XLDocument_eventSetSheetIndex_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSetSheetIndex_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSetSheetIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::NewProp_sheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SetSheetIndex", nullptr, nullptr, sizeof(XLDocument_eventSetSheetIndex_Parms), Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SetSheetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SetSheetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SheetCount_Statics
	{
		struct XLDocument_eventSheetCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLDocument_SheetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSheetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SheetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SheetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SheetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SheetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SheetCount", nullptr, nullptr, sizeof(XLDocument_eventSheetCount_Parms), Z_Construct_UFunction_UXLDocument_SheetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SheetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SheetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SheetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SheetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SheetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SheetExists_Statics
	{
		struct XLDocument_eventSheetExists_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_SheetExists_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSheetExists_Parms, name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLDocument_SheetExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLDocument_eventSheetExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLDocument_SheetExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLDocument_eventSheetExists_Parms), &Z_Construct_UFunction_UXLDocument_SheetExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SheetExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SheetExists_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SheetExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SheetExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SheetExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SheetExists", nullptr, nullptr, sizeof(XLDocument_eventSheetExists_Parms), Z_Construct_UFunction_UXLDocument_SheetExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SheetExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SheetExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SheetExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SheetExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SheetExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SheetNames_Statics
	{
		struct XLDocument_eventSheetNames_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_SheetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLDocument_SheetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSheetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SheetNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SheetNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SheetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SheetNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SheetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SheetNames", nullptr, nullptr, sizeof(XLDocument_eventSheetNames_Parms), Z_Construct_UFunction_UXLDocument_SheetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SheetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SheetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SheetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SheetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SheetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLDocument_NoRegister()
	{
		return UXLDocument::StaticClass();
	}
	struct Z_Construct_UClass_UXLDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLDocument_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLDocument_CloneSheet, "CloneSheet" }, // 3914114129
		{ &Z_Construct_UFunction_UXLDocument_CloseExcel, "CloseExcel" }, // 514216563
		{ &Z_Construct_UFunction_UXLDocument_CreateExcel, "CreateExcel" }, // 641281994
		{ &Z_Construct_UFunction_UXLDocument_DeleteNamedRanges, "DeleteNamedRanges" }, // 1523147541
		{ &Z_Construct_UFunction_UXLDocument_DeleteSheet, "DeleteSheet" }, // 1898537662
		{ &Z_Construct_UFunction_UXLDocument_ExcelFileName, "ExcelFileName" }, // 3667650591
		{ &Z_Construct_UFunction_UXLDocument_ExcelFullPath, "ExcelFullPath" }, // 3637574438
		{ &Z_Construct_UFunction_UXLDocument_ExcelIsValid, "ExcelIsValid" }, // 3896486921
		{ &Z_Construct_UFunction_UXLDocument_GetCurrentSheet, "GetCurrentSheet" }, // 294913992
		{ &Z_Construct_UFunction_UXLDocument_GetOrCreateSheetWithName, "GetOrCreateSheetWithName" }, // 106106215
		{ &Z_Construct_UFunction_UXLDocument_GetPreviousSheet, "GetPreviousSheet" }, // 1038064465
		{ &Z_Construct_UFunction_UXLDocument_GetSheetAt, "GetSheetAt" }, // 4229997320
		{ &Z_Construct_UFunction_UXLDocument_IndexOfSheet, "IndexOfSheet" }, // 3596892828
		{ &Z_Construct_UFunction_UXLDocument_OpenExcel, "OpenExcel" }, // 3615390647
		{ &Z_Construct_UFunction_UXLDocument_SaveExcel, "SaveExcel" }, // 1816593481
		{ &Z_Construct_UFunction_UXLDocument_SaveExcelAs, "SaveExcelAs" }, // 1669295512
		{ &Z_Construct_UFunction_UXLDocument_SetCurrentSheet, "SetCurrentSheet" }, // 2006805604
		{ &Z_Construct_UFunction_UXLDocument_SetFullCalculationOnLoad, "SetFullCalculationOnLoad" }, // 3640476914
		{ &Z_Construct_UFunction_UXLDocument_SetSheetIndex, "SetSheetIndex" }, // 944410531
		{ &Z_Construct_UFunction_UXLDocument_SheetCount, "SheetCount" }, // 1992144568
		{ &Z_Construct_UFunction_UXLDocument_SheetExists, "SheetExists" }, // 3826357104
		{ &Z_Construct_UFunction_UXLDocument_SheetNames, "SheetNames" }, // 3476382856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLDocument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLDocument.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLDocument>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLDocument_Statics::ClassParams = {
		&UXLDocument::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLDocument_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLDocument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLDocument()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLDocument_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLDocument, 1576397708);
	template<> FREEEXCEL_API UClass* StaticClass<UXLDocument>()
	{
		return UXLDocument::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLDocument(Z_Construct_UClass_UXLDocument, &UXLDocument::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLDocument"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLDocument);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
