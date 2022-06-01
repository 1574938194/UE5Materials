// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLWorksheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLWorksheet() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell_NoRegister();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLValueType();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellReference_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellRange_NoRegister();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetState();
// End Cross Module References
	DEFINE_FUNCTION(UXLWorksheet::execGetRowCellCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRowCellCount(Z_Param_rowNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetRowHidden)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowNo);
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRowHidden(Z_Param_rowNo,Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execIsRowHidden)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRowHidden(Z_Param_rowNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetSource)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSource(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetSourceAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSourceAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execIsFormulaCell)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFormulaCell(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execIsFormulaCellAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFormulaCellAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetFormula)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFormula(Z_Param_ref,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetFormulaAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFormulaAt(Z_Param_row,Z_Param_col,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execCellType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLValueType*)Z_Param__Result=P_THIS->CellType(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execCellTypeAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLValueType*)Z_Param__Result=P_THIS->CellTypeAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execClearCell)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCell(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execClearCellAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCellAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetDateTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetDateTimeAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTimeAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetFloatAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetStringAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetInteger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetInteger(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetIntegerAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetIntegerAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execGetBoolAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolAt(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetDateTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_GET_STRUCT(FDateTime,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateTime(Z_Param_ref,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetDateTimeAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_STRUCT(FDateTime,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateTimeAt(Z_Param_row,Z_Param_col,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_ref,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetFloatAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatAt(Z_Param_row,Z_Param_col,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param_ref,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetStringAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringAt(Z_Param_row,Z_Param_col,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetInteger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_GET_PROPERTY(FInt64Property,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteger(Z_Param_ref,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetIntegerAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_PROPERTY(FInt64Property,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntegerAt(Z_Param_row,Z_Param_col,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBool(Z_Param_ref,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetBoolAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolAt(Z_Param_row,Z_Param_col,Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSheetRename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_oldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SheetRename(Z_Param_oldName,Z_Param_newName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execRowCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RowCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execColCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ColCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execLastCell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellReference**)Z_Param__Result=P_THIS->LastCell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execRange)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_topLeft);
		P_GET_OBJECT(UXLCellReference,Z_Param_bottomRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellRange**)Z_Param__Result=P_THIS->Range(Z_Param_topLeft,Z_Param_bottomRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execRangeInUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellRange**)Z_Param__Result=P_THIS->RangeInUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execCellAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowNumber);
		P_GET_PROPERTY(FIntProperty,Z_Param_columnNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->CellAt(Z_Param_rowNumber,Z_Param_columnNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execCellWithRef)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->CellWithRef(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execCell)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->Cell(Z_Param_ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execClone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clone(Z_Param_newName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_selected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_selected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execIsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Name();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Index();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->Color();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execSetVisible)
	{
		P_GET_ENUM(EXLSheetState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(EXLSheetState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLSheetState*)Z_Param__Result=P_THIS->Visible();
		P_NATIVE_END;
	}
	void UXLWorksheet::StaticRegisterNativesUXLWorksheet()
	{
		UClass* Class = UXLWorksheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cell", &UXLWorksheet::execCell },
			{ "CellAt", &UXLWorksheet::execCellAt },
			{ "CellType", &UXLWorksheet::execCellType },
			{ "CellTypeAt", &UXLWorksheet::execCellTypeAt },
			{ "CellWithRef", &UXLWorksheet::execCellWithRef },
			{ "ClearCell", &UXLWorksheet::execClearCell },
			{ "ClearCellAt", &UXLWorksheet::execClearCellAt },
			{ "Clone", &UXLWorksheet::execClone },
			{ "ColCount", &UXLWorksheet::execColCount },
			{ "Color", &UXLWorksheet::execColor },
			{ "GetBool", &UXLWorksheet::execGetBool },
			{ "GetBoolAt", &UXLWorksheet::execGetBoolAt },
			{ "GetDateTime", &UXLWorksheet::execGetDateTime },
			{ "GetDateTimeAt", &UXLWorksheet::execGetDateTimeAt },
			{ "GetFloat", &UXLWorksheet::execGetFloat },
			{ "GetFloatAt", &UXLWorksheet::execGetFloatAt },
			{ "GetInteger", &UXLWorksheet::execGetInteger },
			{ "GetIntegerAt", &UXLWorksheet::execGetIntegerAt },
			{ "GetRowCellCount", &UXLWorksheet::execGetRowCellCount },
			{ "GetSource", &UXLWorksheet::execGetSource },
			{ "GetSourceAt", &UXLWorksheet::execGetSourceAt },
			{ "GetString", &UXLWorksheet::execGetString },
			{ "GetStringAt", &UXLWorksheet::execGetStringAt },
			{ "Index", &UXLWorksheet::execIndex },
			{ "IsActive", &UXLWorksheet::execIsActive },
			{ "IsFormulaCell", &UXLWorksheet::execIsFormulaCell },
			{ "IsFormulaCellAt", &UXLWorksheet::execIsFormulaCellAt },
			{ "IsRowHidden", &UXLWorksheet::execIsRowHidden },
			{ "IsSelected", &UXLWorksheet::execIsSelected },
			{ "LastCell", &UXLWorksheet::execLastCell },
			{ "Name", &UXLWorksheet::execName },
			{ "Range", &UXLWorksheet::execRange },
			{ "RangeInUse", &UXLWorksheet::execRangeInUse },
			{ "RowCount", &UXLWorksheet::execRowCount },
			{ "SetActive", &UXLWorksheet::execSetActive },
			{ "SetBool", &UXLWorksheet::execSetBool },
			{ "SetBoolAt", &UXLWorksheet::execSetBoolAt },
			{ "SetColor", &UXLWorksheet::execSetColor },
			{ "SetDateTime", &UXLWorksheet::execSetDateTime },
			{ "SetDateTimeAt", &UXLWorksheet::execSetDateTimeAt },
			{ "SetFloat", &UXLWorksheet::execSetFloat },
			{ "SetFloatAt", &UXLWorksheet::execSetFloatAt },
			{ "SetFormula", &UXLWorksheet::execSetFormula },
			{ "SetFormulaAt", &UXLWorksheet::execSetFormulaAt },
			{ "SetIndex", &UXLWorksheet::execSetIndex },
			{ "SetInteger", &UXLWorksheet::execSetInteger },
			{ "SetIntegerAt", &UXLWorksheet::execSetIntegerAt },
			{ "SetName", &UXLWorksheet::execSetName },
			{ "SetRowHidden", &UXLWorksheet::execSetRowHidden },
			{ "SetSelected", &UXLWorksheet::execSetSelected },
			{ "SetString", &UXLWorksheet::execSetString },
			{ "SetStringAt", &UXLWorksheet::execSetStringAt },
			{ "SetVisible", &UXLWorksheet::execSetVisible },
			{ "SheetRename", &UXLWorksheet::execSheetRename },
			{ "Visible", &UXLWorksheet::execVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLWorksheet_Cell_Statics
	{
		struct XLWorksheet_eventCell_Parms
		{
			FString ref;
			UXLCell* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_Cell_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCell_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCell_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Cell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Cell_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Cell", nullptr, nullptr, sizeof(XLWorksheet_eventCell_Parms), Z_Construct_UFunction_UXLWorksheet_Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_CellAt_Statics
	{
		struct XLWorksheet_eventCellAt_Parms
		{
			int32 rowNumber;
			int32 columnNumber;
			UXLCell* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowNumber;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_columnNumber;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::NewProp_rowNumber = { "rowNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellAt_Parms, rowNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::NewProp_columnNumber = { "columnNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellAt_Parms, columnNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellAt_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::NewProp_rowNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::NewProp_columnNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Get the cell at the given coordinates.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get the cell at the given coordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "CellAt", nullptr, nullptr, sizeof(XLWorksheet_eventCellAt_Parms), Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_CellAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_CellAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_CellType_Statics
	{
		struct XLWorksheet_eventCellType_Parms
		{
			FString ref;
			EXLValueType ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_CellType_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellType_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLWorksheet_CellType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLWorksheet_CellType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellType_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_CellType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellType_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_CellType_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_CellType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "CellType", nullptr, nullptr, sizeof(XLWorksheet_eventCellType_Parms), Z_Construct_UFunction_UXLWorksheet_CellType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_CellType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_CellType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_CellType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics
	{
		struct XLWorksheet_eventCellTypeAt_Parms
		{
			int32 row;
			int32 col;
			EXLValueType ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellTypeAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellTypeAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellTypeAt_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "CellTypeAt", nullptr, nullptr, sizeof(XLWorksheet_eventCellTypeAt_Parms), Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_CellTypeAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_CellTypeAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics
	{
		struct XLWorksheet_eventCellWithRef_Parms
		{
			UXLCellReference* ref;
			UXLCell* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellWithRef_Parms, ref), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventCellWithRef_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Get a pointer to the XLCell object for the given cell reference.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get a pointer to the XLCell object for the given cell reference." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "CellWithRef", nullptr, nullptr, sizeof(XLWorksheet_eventCellWithRef_Parms), Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_CellWithRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_CellWithRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics
	{
		struct XLWorksheet_eventClearCell_Parms
		{
			FString ref;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventClearCell_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::NewProp_ref,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "ClearCell", nullptr, nullptr, sizeof(XLWorksheet_eventClearCell_Parms), Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_ClearCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_ClearCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics
	{
		struct XLWorksheet_eventClearCellAt_Parms
		{
			int32 row;
			int32 col;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventClearCellAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventClearCellAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::NewProp_col,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "ClearCellAt", nullptr, nullptr, sizeof(XLWorksheet_eventClearCellAt_Parms), Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_ClearCellAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_ClearCellAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_Clone_Statics
	{
		struct XLWorksheet_eventClone_Parms
		{
			FString newName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_Clone_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventClone_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Clone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Clone_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Clone_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Clone", nullptr, nullptr, sizeof(XLWorksheet_eventClone_Parms), Z_Construct_UFunction_UXLWorksheet_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Clone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Clone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Clone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_ColCount_Statics
	{
		struct XLWorksheet_eventColCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventColCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Get the number of columns in the worksheet.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get the number of columns in the worksheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "ColCount", nullptr, nullptr, sizeof(XLWorksheet_eventColCount_Parms), Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_ColCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_ColCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_Color_Statics
	{
		struct XLWorksheet_eventColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLWorksheet_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Color_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Color_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Color", nullptr, nullptr, sizeof(XLWorksheet_eventColor_Parms), Z_Construct_UFunction_UXLWorksheet_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetBool_Statics
	{
		struct XLWorksheet_eventGetBool_Parms
		{
			FString ref;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetBool_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventGetBool_Parms), &Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetBool", nullptr, nullptr, sizeof(XLWorksheet_eventGetBool_Parms), Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics
	{
		struct XLWorksheet_eventGetBoolAt_Parms
		{
			int32 row;
			int32 col;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetBoolAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetBoolAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventGetBoolAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventGetBoolAt_Parms), &Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetBoolAt", nullptr, nullptr, sizeof(XLWorksheet_eventGetBoolAt_Parms), Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetBoolAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetBoolAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics
	{
		struct XLWorksheet_eventGetDateTime_Parms
		{
			FString ref;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetDateTime_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetDateTime", nullptr, nullptr, sizeof(XLWorksheet_eventGetDateTime_Parms), Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics
	{
		struct XLWorksheet_eventGetDateTimeAt_Parms
		{
			int32 row;
			int32 col;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetDateTimeAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetDateTimeAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetDateTimeAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetDateTimeAt", nullptr, nullptr, sizeof(XLWorksheet_eventGetDateTimeAt_Parms), Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics
	{
		struct XLWorksheet_eventGetFloat_Parms
		{
			FString ref;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetFloat_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetFloat", nullptr, nullptr, sizeof(XLWorksheet_eventGetFloat_Parms), Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics
	{
		struct XLWorksheet_eventGetFloatAt_Parms
		{
			int32 row;
			int32 col;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetFloatAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetFloatAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetFloatAt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetFloatAt", nullptr, nullptr, sizeof(XLWorksheet_eventGetFloatAt_Parms), Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetFloatAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetFloatAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics
	{
		struct XLWorksheet_eventGetInteger_Parms
		{
			FString ref;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetInteger_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetInteger", nullptr, nullptr, sizeof(XLWorksheet_eventGetInteger_Parms), Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics
	{
		struct XLWorksheet_eventGetIntegerAt_Parms
		{
			int32 row;
			int32 col;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetIntegerAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetIntegerAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetIntegerAt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetIntegerAt", nullptr, nullptr, sizeof(XLWorksheet_eventGetIntegerAt_Parms), Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetIntegerAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetIntegerAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics
	{
		struct XLWorksheet_eventGetRowCellCount_Parms
		{
			int32 rowNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::NewProp_rowNo = { "rowNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetRowCellCount_Parms, rowNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetRowCellCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::NewProp_rowNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetRowCellCount", nullptr, nullptr, sizeof(XLWorksheet_eventGetRowCellCount_Parms), Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetRowCellCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetRowCellCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetSource_Statics
	{
		struct XLWorksheet_eventGetSource_Parms
		{
			FString ref;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetSource_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetSource", nullptr, nullptr, sizeof(XLWorksheet_eventGetSource_Parms), Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics
	{
		struct XLWorksheet_eventGetSourceAt_Parms
		{
			int32 row;
			int32 col;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetSourceAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetSourceAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetSourceAt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetSourceAt", nullptr, nullptr, sizeof(XLWorksheet_eventGetSourceAt_Parms), Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetSourceAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetSourceAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetString_Statics
	{
		struct XLWorksheet_eventGetString_Parms
		{
			FString ref;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetString_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetString_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetString_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetString", nullptr, nullptr, sizeof(XLWorksheet_eventGetString_Parms), Z_Construct_UFunction_UXLWorksheet_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics
	{
		struct XLWorksheet_eventGetStringAt_Parms
		{
			int32 row;
			int32 col;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetStringAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetStringAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventGetStringAt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "GetStringAt", nullptr, nullptr, sizeof(XLWorksheet_eventGetStringAt_Parms), Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_GetStringAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_GetStringAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_Index_Statics
	{
		struct XLWorksheet_eventIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_Index_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Index_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Index_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Index_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Index_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Index", nullptr, nullptr, sizeof(XLWorksheet_eventIndex_Parms), Z_Construct_UFunction_UXLWorksheet_Index_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Index_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Index_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Index_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Index()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Index_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_IsActive_Statics
	{
		struct XLWorksheet_eventIsActive_Parms
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
	void Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventIsActive_Parms), &Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "IsActive", nullptr, nullptr, sizeof(XLWorksheet_eventIsActive_Parms), Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics
	{
		struct XLWorksheet_eventIsFormulaCell_Parms
		{
			FString ref;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventIsFormulaCell_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventIsFormulaCell_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventIsFormulaCell_Parms), &Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "IsFormulaCell", nullptr, nullptr, sizeof(XLWorksheet_eventIsFormulaCell_Parms), Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_IsFormulaCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_IsFormulaCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics
	{
		struct XLWorksheet_eventIsFormulaCellAt_Parms
		{
			int32 row;
			int32 col;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventIsFormulaCellAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventIsFormulaCellAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventIsFormulaCellAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventIsFormulaCellAt_Parms), &Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "IsFormulaCellAt", nullptr, nullptr, sizeof(XLWorksheet_eventIsFormulaCellAt_Parms), Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics
	{
		struct XLWorksheet_eventIsRowHidden_Parms
		{
			int32 rowNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::NewProp_rowNo = { "rowNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventIsRowHidden_Parms, rowNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventIsRowHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventIsRowHidden_Parms), &Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::NewProp_rowNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "IsRowHidden", nullptr, nullptr, sizeof(XLWorksheet_eventIsRowHidden_Parms), Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_IsRowHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_IsRowHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics
	{
		struct XLWorksheet_eventIsSelected_Parms
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
	void Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLWorksheet_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventIsSelected_Parms), &Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "IsSelected", nullptr, nullptr, sizeof(XLWorksheet_eventIsSelected_Parms), Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_IsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_IsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_LastCell_Statics
	{
		struct XLWorksheet_eventLastCell_Parms
		{
			UXLCellReference* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventLastCell_Parms, ReturnValue), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Get an XLCellReference to the last (bottom right) cell in the worksheet.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get an XLCellReference to the last (bottom right) cell in the worksheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "LastCell", nullptr, nullptr, sizeof(XLWorksheet_eventLastCell_Parms), Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_LastCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_LastCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_Name_Statics
	{
		struct XLWorksheet_eventName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Name_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Name", nullptr, nullptr, sizeof(XLWorksheet_eventName_Parms), Z_Construct_UFunction_UXLWorksheet_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_Range_Statics
	{
		struct XLWorksheet_eventRange_Parms
		{
			UXLCellReference* topLeft;
			UXLCellReference* bottomRight;
			UXLCellRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_topLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bottomRight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_Range_Statics::NewProp_topLeft = { "topLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRange_Parms, topLeft), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_Range_Statics::NewProp_bottomRight = { "bottomRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRange_Parms, bottomRight), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_Range_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRange_Parms, ReturnValue), Z_Construct_UClass_UXLCellRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Range_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Range_Statics::NewProp_topLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Range_Statics::NewProp_bottomRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Range_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Range_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "//Get a range with the given coordinates.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get a range with the given coordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Range_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Range", nullptr, nullptr, sizeof(XLWorksheet_eventRange_Parms), Z_Construct_UFunction_UXLWorksheet_Range_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Range_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Range_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Range_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Range()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Range_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics
	{
		struct XLWorksheet_eventRangeInUse_Parms
		{
			UXLCellRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRangeInUse_Parms, ReturnValue), Z_Construct_UClass_UXLCellRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "//Get a range for the area currently in use (i.e. from cell A1 to the last cell being in use).\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get a range for the area currently in use (i.e. from cell A1 to the last cell being in use)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "RangeInUse", nullptr, nullptr, sizeof(XLWorksheet_eventRangeInUse_Parms), Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_RangeInUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_RangeInUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_RowCount_Statics
	{
		struct XLWorksheet_eventRowCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRowCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "Comment", "// Get the number of rows in the worksheet.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get the number of rows in the worksheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "RowCount", nullptr, nullptr, sizeof(XLWorksheet_eventRowCount_Parms), Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_RowCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_RowCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetBool_Statics
	{
		struct XLWorksheet_eventSetBool_Parms
		{
			FString ref;
			bool val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static void NewProp_val_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetBool_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::NewProp_val_SetBit(void* Obj)
	{
		((XLWorksheet_eventSetBool_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventSetBool_Parms), &Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetBool", nullptr, nullptr, sizeof(XLWorksheet_eventSetBool_Parms), Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics
	{
		struct XLWorksheet_eventSetBoolAt_Parms
		{
			int32 row;
			int32 col;
			bool val;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static void NewProp_val_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetBoolAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetBoolAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_val_SetBit(void* Obj)
	{
		((XLWorksheet_eventSetBoolAt_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventSetBoolAt_Parms), &Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetBoolAt", nullptr, nullptr, sizeof(XLWorksheet_eventSetBoolAt_Parms), Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetBoolAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetBoolAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetColor_Statics
	{
		struct XLWorksheet_eventSetColor_Parms
		{
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetColor", nullptr, nullptr, sizeof(XLWorksheet_eventSetColor_Parms), Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics
	{
		struct XLWorksheet_eventSetDateTime_Parms
		{
			FString ref;
			FDateTime val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetDateTime_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetDateTime_Parms, val), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetDateTime", nullptr, nullptr, sizeof(XLWorksheet_eventSetDateTime_Parms), Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics
	{
		struct XLWorksheet_eventSetDateTimeAt_Parms
		{
			int32 row;
			int32 col;
			FDateTime val;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetDateTimeAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetDateTimeAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetDateTimeAt_Parms, val), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetDateTimeAt", nullptr, nullptr, sizeof(XLWorksheet_eventSetDateTimeAt_Parms), Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics
	{
		struct XLWorksheet_eventSetFloat_Parms
		{
			FString ref;
			float val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFloat_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFloat_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetFloat", nullptr, nullptr, sizeof(XLWorksheet_eventSetFloat_Parms), Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics
	{
		struct XLWorksheet_eventSetFloatAt_Parms
		{
			int32 row;
			int32 col;
			float val;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFloatAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFloatAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFloatAt_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetFloatAt", nullptr, nullptr, sizeof(XLWorksheet_eventSetFloatAt_Parms), Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetFloatAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetFloatAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics
	{
		struct XLWorksheet_eventSetFormula_Parms
		{
			FString ref;
			FString val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFormula_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFormula_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetFormula", nullptr, nullptr, sizeof(XLWorksheet_eventSetFormula_Parms), Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics
	{
		struct XLWorksheet_eventSetFormulaAt_Parms
		{
			int32 row;
			int32 col;
			FString val;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFormulaAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFormulaAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetFormulaAt_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetFormulaAt", nullptr, nullptr, sizeof(XLWorksheet_eventSetFormulaAt_Parms), Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetFormulaAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetFormulaAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics
	{
		struct XLWorksheet_eventSetIndex_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetIndex", nullptr, nullptr, sizeof(XLWorksheet_eventSetIndex_Parms), Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics
	{
		struct XLWorksheet_eventSetInteger_Parms
		{
			FString ref;
			int64 val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetInteger_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetInteger_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetInteger", nullptr, nullptr, sizeof(XLWorksheet_eventSetInteger_Parms), Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics
	{
		struct XLWorksheet_eventSetIntegerAt_Parms
		{
			int32 row;
			int32 col;
			int64 val;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetIntegerAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetIntegerAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetIntegerAt_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetIntegerAt", nullptr, nullptr, sizeof(XLWorksheet_eventSetIntegerAt_Parms), Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetIntegerAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetIntegerAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetName_Statics
	{
		struct XLWorksheet_eventSetName_Parms
		{
			FString sheetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetName_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetName_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetName_Statics::NewProp_sheetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetName", nullptr, nullptr, sizeof(XLWorksheet_eventSetName_Parms), Z_Construct_UFunction_UXLWorksheet_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics
	{
		struct XLWorksheet_eventSetRowHidden_Parms
		{
			int32 rowNo;
			bool state;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowNo;
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::NewProp_rowNo = { "rowNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetRowHidden_Parms, rowNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::NewProp_state_SetBit(void* Obj)
	{
		((XLWorksheet_eventSetRowHidden_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventSetRowHidden_Parms), &Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::NewProp_rowNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetRowHidden", nullptr, nullptr, sizeof(XLWorksheet_eventSetRowHidden_Parms), Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetRowHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetRowHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics
	{
		struct XLWorksheet_eventSetSelected_Parms
		{
			bool selected;
		};
		static void NewProp_selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_selected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((XLWorksheet_eventSetSelected_Parms*)Obj)->selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLWorksheet_eventSetSelected_Parms), &Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::NewProp_selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::NewProp_selected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetSelected", nullptr, nullptr, sizeof(XLWorksheet_eventSetSelected_Parms), Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetString_Statics
	{
		struct XLWorksheet_eventSetString_Parms
		{
			FString ref;
			FString val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetString_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetString_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetString_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetString_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetString_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetString_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetString", nullptr, nullptr, sizeof(XLWorksheet_eventSetString_Parms), Z_Construct_UFunction_UXLWorksheet_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics
	{
		struct XLWorksheet_eventSetStringAt_Parms
		{
			int32 row;
			int32 col;
			FString val;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetStringAt_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetStringAt_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetStringAt_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetStringAt", nullptr, nullptr, sizeof(XLWorksheet_eventSetStringAt_Parms), Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetStringAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetStringAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics
	{
		struct XLWorksheet_eventSetVisible_Parms
		{
			EXLSheetState state;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSetVisible_Parms, state), Z_Construct_UEnum_FreeExcel_EXLSheetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SetVisible", nullptr, nullptr, sizeof(XLWorksheet_eventSetVisible_Parms), Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics
	{
		struct XLWorksheet_eventSheetRename_Parms
		{
			FString oldName;
			FString newName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_oldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::NewProp_oldName = { "oldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSheetRename_Parms, oldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventSheetRename_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::NewProp_oldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "SheetRename", nullptr, nullptr, sizeof(XLWorksheet_eventSheetRename_Parms), Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_SheetRename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_SheetRename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_Visible_Statics
	{
		struct XLWorksheet_eventVisible_Parms
		{
			EXLSheetState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLWorksheet_Visible_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLWorksheet_Visible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventVisible_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLSheetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Visible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Visible_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Visible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Visible_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Visible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Visible", nullptr, nullptr, sizeof(XLWorksheet_eventVisible_Parms), Z_Construct_UFunction_UXLWorksheet_Visible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Visible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Visible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Visible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Visible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Visible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLWorksheet_NoRegister()
	{
		return UXLWorksheet::StaticClass();
	}
	struct Z_Construct_UClass_UXLWorksheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLWorksheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLWorksheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLWorksheet_Cell, "Cell" }, // 4115350951
		{ &Z_Construct_UFunction_UXLWorksheet_CellAt, "CellAt" }, // 1234003637
		{ &Z_Construct_UFunction_UXLWorksheet_CellType, "CellType" }, // 4190668983
		{ &Z_Construct_UFunction_UXLWorksheet_CellTypeAt, "CellTypeAt" }, // 2013959072
		{ &Z_Construct_UFunction_UXLWorksheet_CellWithRef, "CellWithRef" }, // 3187259843
		{ &Z_Construct_UFunction_UXLWorksheet_ClearCell, "ClearCell" }, // 1021037540
		{ &Z_Construct_UFunction_UXLWorksheet_ClearCellAt, "ClearCellAt" }, // 3415758404
		{ &Z_Construct_UFunction_UXLWorksheet_Clone, "Clone" }, // 1480186235
		{ &Z_Construct_UFunction_UXLWorksheet_ColCount, "ColCount" }, // 2365902911
		{ &Z_Construct_UFunction_UXLWorksheet_Color, "Color" }, // 1877779
		{ &Z_Construct_UFunction_UXLWorksheet_GetBool, "GetBool" }, // 1623046331
		{ &Z_Construct_UFunction_UXLWorksheet_GetBoolAt, "GetBoolAt" }, // 3289968791
		{ &Z_Construct_UFunction_UXLWorksheet_GetDateTime, "GetDateTime" }, // 2517273281
		{ &Z_Construct_UFunction_UXLWorksheet_GetDateTimeAt, "GetDateTimeAt" }, // 550728784
		{ &Z_Construct_UFunction_UXLWorksheet_GetFloat, "GetFloat" }, // 3969384538
		{ &Z_Construct_UFunction_UXLWorksheet_GetFloatAt, "GetFloatAt" }, // 4208596011
		{ &Z_Construct_UFunction_UXLWorksheet_GetInteger, "GetInteger" }, // 3545636094
		{ &Z_Construct_UFunction_UXLWorksheet_GetIntegerAt, "GetIntegerAt" }, // 1239573841
		{ &Z_Construct_UFunction_UXLWorksheet_GetRowCellCount, "GetRowCellCount" }, // 2682973092
		{ &Z_Construct_UFunction_UXLWorksheet_GetSource, "GetSource" }, // 4110305192
		{ &Z_Construct_UFunction_UXLWorksheet_GetSourceAt, "GetSourceAt" }, // 1383193231
		{ &Z_Construct_UFunction_UXLWorksheet_GetString, "GetString" }, // 1610365706
		{ &Z_Construct_UFunction_UXLWorksheet_GetStringAt, "GetStringAt" }, // 1193674223
		{ &Z_Construct_UFunction_UXLWorksheet_Index, "Index" }, // 846583644
		{ &Z_Construct_UFunction_UXLWorksheet_IsActive, "IsActive" }, // 2892315544
		{ &Z_Construct_UFunction_UXLWorksheet_IsFormulaCell, "IsFormulaCell" }, // 4131668618
		{ &Z_Construct_UFunction_UXLWorksheet_IsFormulaCellAt, "IsFormulaCellAt" }, // 945392995
		{ &Z_Construct_UFunction_UXLWorksheet_IsRowHidden, "IsRowHidden" }, // 1163524308
		{ &Z_Construct_UFunction_UXLWorksheet_IsSelected, "IsSelected" }, // 2696927737
		{ &Z_Construct_UFunction_UXLWorksheet_LastCell, "LastCell" }, // 2932185728
		{ &Z_Construct_UFunction_UXLWorksheet_Name, "Name" }, // 3631318927
		{ &Z_Construct_UFunction_UXLWorksheet_Range, "Range" }, // 2856396432
		{ &Z_Construct_UFunction_UXLWorksheet_RangeInUse, "RangeInUse" }, // 3599321731
		{ &Z_Construct_UFunction_UXLWorksheet_RowCount, "RowCount" }, // 1921527224
		{ &Z_Construct_UFunction_UXLWorksheet_SetActive, "SetActive" }, // 1958102605
		{ &Z_Construct_UFunction_UXLWorksheet_SetBool, "SetBool" }, // 4207126889
		{ &Z_Construct_UFunction_UXLWorksheet_SetBoolAt, "SetBoolAt" }, // 2815488018
		{ &Z_Construct_UFunction_UXLWorksheet_SetColor, "SetColor" }, // 2111522035
		{ &Z_Construct_UFunction_UXLWorksheet_SetDateTime, "SetDateTime" }, // 1088475098
		{ &Z_Construct_UFunction_UXLWorksheet_SetDateTimeAt, "SetDateTimeAt" }, // 3422816122
		{ &Z_Construct_UFunction_UXLWorksheet_SetFloat, "SetFloat" }, // 2354281482
		{ &Z_Construct_UFunction_UXLWorksheet_SetFloatAt, "SetFloatAt" }, // 3534948992
		{ &Z_Construct_UFunction_UXLWorksheet_SetFormula, "SetFormula" }, // 3340470530
		{ &Z_Construct_UFunction_UXLWorksheet_SetFormulaAt, "SetFormulaAt" }, // 1941237369
		{ &Z_Construct_UFunction_UXLWorksheet_SetIndex, "SetIndex" }, // 2300725914
		{ &Z_Construct_UFunction_UXLWorksheet_SetInteger, "SetInteger" }, // 2505353138
		{ &Z_Construct_UFunction_UXLWorksheet_SetIntegerAt, "SetIntegerAt" }, // 1440164169
		{ &Z_Construct_UFunction_UXLWorksheet_SetName, "SetName" }, // 1150238954
		{ &Z_Construct_UFunction_UXLWorksheet_SetRowHidden, "SetRowHidden" }, // 1910325548
		{ &Z_Construct_UFunction_UXLWorksheet_SetSelected, "SetSelected" }, // 1228602099
		{ &Z_Construct_UFunction_UXLWorksheet_SetString, "SetString" }, // 3270476155
		{ &Z_Construct_UFunction_UXLWorksheet_SetStringAt, "SetStringAt" }, // 3373520179
		{ &Z_Construct_UFunction_UXLWorksheet_SetVisible, "SetVisible" }, // 3430511058
		{ &Z_Construct_UFunction_UXLWorksheet_SheetRename, "SheetRename" }, // 1990865110
		{ &Z_Construct_UFunction_UXLWorksheet_Visible, "Visible" }, // 1269362361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLWorksheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLWorksheet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLWorksheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLWorksheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLWorksheet_Statics::ClassParams = {
		&UXLWorksheet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLWorksheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLWorksheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLWorksheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLWorksheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLWorksheet, 3300860954);
	template<> FREEEXCEL_API UClass* StaticClass<UXLWorksheet>()
	{
		return UXLWorksheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLWorksheet(Z_Construct_UClass_UXLWorksheet, &UXLWorksheet::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLWorksheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLWorksheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
