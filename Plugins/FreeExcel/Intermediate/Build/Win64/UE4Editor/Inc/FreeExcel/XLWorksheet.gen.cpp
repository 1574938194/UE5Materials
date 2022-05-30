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
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetType();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellReference_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellRange_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRow_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowRange_NoRegister();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetState();
// End Cross Module References
	static UEnum* EXLSheetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FreeExcel_EXLSheetType, Z_Construct_UPackage__Script_FreeExcel(), TEXT("EXLSheetType"));
		}
		return Singleton;
	}
	template<> FREEEXCEL_API UEnum* StaticEnum<EXLSheetType>()
	{
		return EXLSheetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXLSheetType(EXLSheetType_StaticEnum, TEXT("/Script/FreeExcel"), TEXT("EXLSheetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FreeExcel_EXLSheetType_Hash() { return 1393107551U; }
	UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FreeExcel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXLSheetType"), 0, Get_Z_Construct_UEnum_FreeExcel_EXLSheetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXLSheetType::Worksheet", (int64)EXLSheetType::Worksheet },
				{ "EXLSheetType::Chartsheet", (int64)EXLSheetType::Chartsheet },
				{ "EXLSheetType::Dialogsheet", (int64)EXLSheetType::Dialogsheet },
				{ "EXLSheetType::Macrosheet", (int64)EXLSheetType::Macrosheet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chartsheet.DisplayName", "Chartsheet" },
				{ "Chartsheet.Name", "EXLSheetType::Chartsheet" },
				{ "Dialogsheet.DisplayName", "Dialogsheet" },
				{ "Dialogsheet.Name", "EXLSheetType::Dialogsheet" },
				{ "Macrosheet.DisplayName", "Macrosheet" },
				{ "Macrosheet.Name", "EXLSheetType::Macrosheet" },
				{ "ModuleRelativePath", "Public/XLWorksheet.h" },
				{ "Worksheet.DisplayName", "Worksheet" },
				{ "Worksheet.Name", "EXLSheetType::Worksheet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FreeExcel,
				nullptr,
				"EXLSheetType",
				"EXLSheetType",
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
	DEFINE_FUNCTION(UXLWorksheet::execUpdateSheetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_oldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSheetName(Z_Param_oldName,Z_Param_newName);
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
	DEFINE_FUNCTION(UXLWorksheet::execRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRow**)Z_Param__Result=P_THIS->Row(Z_Param_rowNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execRowsRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_firstRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_lastRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowRange**)Z_Param__Result=P_THIS->RowsRange(Z_Param_firstRow,Z_Param_lastRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execRowsAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowRange**)Z_Param__Result=P_THIS->RowsAt(Z_Param_rowCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLWorksheet::execRows)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowRange**)Z_Param__Result=P_THIS->Rows();
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
			{ "CellWithRef", &UXLWorksheet::execCellWithRef },
			{ "Clone", &UXLWorksheet::execClone },
			{ "ColCount", &UXLWorksheet::execColCount },
			{ "Color", &UXLWorksheet::execColor },
			{ "Index", &UXLWorksheet::execIndex },
			{ "IsActive", &UXLWorksheet::execIsActive },
			{ "IsSelected", &UXLWorksheet::execIsSelected },
			{ "LastCell", &UXLWorksheet::execLastCell },
			{ "Name", &UXLWorksheet::execName },
			{ "Range", &UXLWorksheet::execRange },
			{ "RangeInUse", &UXLWorksheet::execRangeInUse },
			{ "Row", &UXLWorksheet::execRow },
			{ "RowCount", &UXLWorksheet::execRowCount },
			{ "Rows", &UXLWorksheet::execRows },
			{ "RowsAt", &UXLWorksheet::execRowsAt },
			{ "RowsRange", &UXLWorksheet::execRowsRange },
			{ "SetActive", &UXLWorksheet::execSetActive },
			{ "SetColor", &UXLWorksheet::execSetColor },
			{ "SetIndex", &UXLWorksheet::execSetIndex },
			{ "SetName", &UXLWorksheet::execSetName },
			{ "SetSelected", &UXLWorksheet::execSetSelected },
			{ "SetVisible", &UXLWorksheet::execSetVisible },
			{ "UpdateSheetName", &UXLWorksheet::execUpdateSheetName },
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
	struct Z_Construct_UFunction_UXLWorksheet_Row_Statics
	{
		struct XLWorksheet_eventRow_Parms
		{
			int32 rowNumber;
			UXLRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowNumber;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_Row_Statics::NewProp_rowNumber = { "rowNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRow_Parms, rowNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_Row_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRow_Parms, ReturnValue), Z_Construct_UClass_UXLRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Row_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Row_Statics::NewProp_rowNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Row_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Row_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the row with the given row number.\n" },
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
		{ "ToolTip", "Get the row with the given row number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Row_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Row", nullptr, nullptr, sizeof(XLWorksheet_eventRow_Parms), Z_Construct_UFunction_UXLWorksheet_Row_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Row_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Row_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Row_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Row()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Row_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UXLWorksheet_Rows_Statics
	{
		struct XLWorksheet_eventRows_Parms
		{
			UXLRowRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_Rows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRows_Parms, ReturnValue), Z_Construct_UClass_UXLRowRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_Rows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_Rows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_Rows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_Rows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "Rows", nullptr, nullptr, sizeof(XLWorksheet_eventRows_Parms), Z_Construct_UFunction_UXLWorksheet_Rows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Rows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_Rows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_Rows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_Rows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_Rows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics
	{
		struct XLWorksheet_eventRowsAt_Parms
		{
			int32 rowCount;
			UXLRowRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::NewProp_rowCount = { "rowCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRowsAt_Parms, rowCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRowsAt_Parms, ReturnValue), Z_Construct_UClass_UXLRowRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::NewProp_rowCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "RowsAt", nullptr, nullptr, sizeof(XLWorksheet_eventRowsAt_Parms), Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_RowsAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_RowsAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics
	{
		struct XLWorksheet_eventRowsRange_Parms
		{
			int32 firstRow;
			int32 lastRow;
			UXLRowRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_firstRow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lastRow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::NewProp_firstRow = { "firstRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRowsRange_Parms, firstRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::NewProp_lastRow = { "lastRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRowsRange_Parms, lastRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventRowsRange_Parms, ReturnValue), Z_Construct_UClass_UXLRowRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::NewProp_firstRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::NewProp_lastRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "RowsRange", nullptr, nullptr, sizeof(XLWorksheet_eventRowsRange_Parms), Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_RowsRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_RowsRange_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics
	{
		struct XLWorksheet_eventUpdateSheetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::NewProp_oldName = { "oldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventUpdateSheetName_Parms, oldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLWorksheet_eventUpdateSheetName_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::NewProp_oldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLWorksheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLWorksheet, nullptr, "UpdateSheetName", nullptr, nullptr, sizeof(XLWorksheet_eventUpdateSheetName_Parms), Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLWorksheet_UpdateSheetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLWorksheet_UpdateSheetName_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UXLWorksheet_Cell, "Cell" }, // 1830405862
		{ &Z_Construct_UFunction_UXLWorksheet_CellAt, "CellAt" }, // 1728493964
		{ &Z_Construct_UFunction_UXLWorksheet_CellWithRef, "CellWithRef" }, // 1839963463
		{ &Z_Construct_UFunction_UXLWorksheet_Clone, "Clone" }, // 1397516281
		{ &Z_Construct_UFunction_UXLWorksheet_ColCount, "ColCount" }, // 3141574533
		{ &Z_Construct_UFunction_UXLWorksheet_Color, "Color" }, // 3883772828
		{ &Z_Construct_UFunction_UXLWorksheet_Index, "Index" }, // 1191779858
		{ &Z_Construct_UFunction_UXLWorksheet_IsActive, "IsActive" }, // 2302875825
		{ &Z_Construct_UFunction_UXLWorksheet_IsSelected, "IsSelected" }, // 1821077929
		{ &Z_Construct_UFunction_UXLWorksheet_LastCell, "LastCell" }, // 4264909719
		{ &Z_Construct_UFunction_UXLWorksheet_Name, "Name" }, // 3218604842
		{ &Z_Construct_UFunction_UXLWorksheet_Range, "Range" }, // 907261517
		{ &Z_Construct_UFunction_UXLWorksheet_RangeInUse, "RangeInUse" }, // 3498767686
		{ &Z_Construct_UFunction_UXLWorksheet_Row, "Row" }, // 3538361026
		{ &Z_Construct_UFunction_UXLWorksheet_RowCount, "RowCount" }, // 3798255829
		{ &Z_Construct_UFunction_UXLWorksheet_Rows, "Rows" }, // 3582631001
		{ &Z_Construct_UFunction_UXLWorksheet_RowsAt, "RowsAt" }, // 1296885947
		{ &Z_Construct_UFunction_UXLWorksheet_RowsRange, "RowsRange" }, // 4120360373
		{ &Z_Construct_UFunction_UXLWorksheet_SetActive, "SetActive" }, // 1702636076
		{ &Z_Construct_UFunction_UXLWorksheet_SetColor, "SetColor" }, // 3441834040
		{ &Z_Construct_UFunction_UXLWorksheet_SetIndex, "SetIndex" }, // 2298391853
		{ &Z_Construct_UFunction_UXLWorksheet_SetName, "SetName" }, // 3525519033
		{ &Z_Construct_UFunction_UXLWorksheet_SetSelected, "SetSelected" }, // 2080082170
		{ &Z_Construct_UFunction_UXLWorksheet_SetVisible, "SetVisible" }, // 3299780359
		{ &Z_Construct_UFunction_UXLWorksheet_UpdateSheetName, "UpdateSheetName" }, // 3028305301
		{ &Z_Construct_UFunction_UXLWorksheet_Visible, "Visible" }, // 927132615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLWorksheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLWorksheet.h" },
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
	IMPLEMENT_CLASS(UXLWorksheet, 2637879976);
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
