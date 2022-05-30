// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLRow() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRow_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataRange_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataProxy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLRow::execCellsRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_firstCell);
		P_GET_PROPERTY(FIntProperty,Z_Param_lastCell);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataRange**)Z_Param__Result=P_THIS->CellsRange(Z_Param_firstCell,Z_Param_lastCell);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execCellsAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_cellCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataRange**)Z_Param__Result=P_THIS->CellsAt(Z_Param_cellCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execCells)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataRange**)Z_Param__Result=P_THIS->Cells();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataProxy**)Z_Param__Result=P_THIS->Values();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execCellCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CellCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execRowNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RowNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execSetHidden)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHidden(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execIsHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execSetDescent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_descent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDescent(Z_Param_descent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execDescent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Descent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execSetHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeight(Z_Param_height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRow::execHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Height();
		P_NATIVE_END;
	}
	void UXLRow::StaticRegisterNativesUXLRow()
	{
		UClass* Class = UXLRow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CellCount", &UXLRow::execCellCount },
			{ "Cells", &UXLRow::execCells },
			{ "CellsAt", &UXLRow::execCellsAt },
			{ "CellsRange", &UXLRow::execCellsRange },
			{ "Descent", &UXLRow::execDescent },
			{ "Height", &UXLRow::execHeight },
			{ "IsHidden", &UXLRow::execIsHidden },
			{ "RowNumber", &UXLRow::execRowNumber },
			{ "SetDescent", &UXLRow::execSetDescent },
			{ "SetHeight", &UXLRow::execSetHeight },
			{ "SetHidden", &UXLRow::execSetHidden },
			{ "Values", &UXLRow::execValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLRow_CellCount_Statics
	{
		struct XLRow_eventCellCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRow_CellCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCellCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_CellCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_CellCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_CellCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_CellCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "CellCount", nullptr, nullptr, sizeof(XLRow_eventCellCount_Parms), Z_Construct_UFunction_UXLRow_CellCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_CellCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_CellCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_CellCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_CellCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_CellCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_Cells_Statics
	{
		struct XLRow_eventCells_Parms
		{
			UXLRowDataRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRow_Cells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCells_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_Cells_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_Cells_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_Cells_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_Cells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "Cells", nullptr, nullptr, sizeof(XLRow_eventCells_Parms), Z_Construct_UFunction_UXLRow_Cells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Cells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_Cells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Cells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_Cells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_Cells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_CellsAt_Statics
	{
		struct XLRow_eventCellsAt_Parms
		{
			int32 cellCount;
			UXLRowDataRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cellCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRow_CellsAt_Statics::NewProp_cellCount = { "cellCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCellsAt_Parms, cellCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRow_CellsAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCellsAt_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_CellsAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_CellsAt_Statics::NewProp_cellCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_CellsAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_CellsAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_CellsAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "CellsAt", nullptr, nullptr, sizeof(XLRow_eventCellsAt_Parms), Z_Construct_UFunction_UXLRow_CellsAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_CellsAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_CellsAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_CellsAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_CellsAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_CellsAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_CellsRange_Statics
	{
		struct XLRow_eventCellsRange_Parms
		{
			int32 firstCell;
			int32 lastCell;
			UXLRowDataRange* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_firstCell;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lastCell;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRow_CellsRange_Statics::NewProp_firstCell = { "firstCell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCellsRange_Parms, firstCell), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRow_CellsRange_Statics::NewProp_lastCell = { "lastCell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCellsRange_Parms, lastCell), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRow_CellsRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventCellsRange_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataRange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_CellsRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_CellsRange_Statics::NewProp_firstCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_CellsRange_Statics::NewProp_lastCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_CellsRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_CellsRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_CellsRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "CellsRange", nullptr, nullptr, sizeof(XLRow_eventCellsRange_Parms), Z_Construct_UFunction_UXLRow_CellsRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_CellsRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_CellsRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_CellsRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_CellsRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_CellsRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_Descent_Statics
	{
		struct XLRow_eventDescent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLRow_Descent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventDescent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_Descent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_Descent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_Descent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the descent of the row, which is the vertical distance in pixels from the bottom of the cells\n" },
		{ "ModuleRelativePath", "Public/XLRow.h" },
		{ "ToolTip", "Get the descent of the row, which is the vertical distance in pixels from the bottom of the cells" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_Descent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "Descent", nullptr, nullptr, sizeof(XLRow_eventDescent_Parms), Z_Construct_UFunction_UXLRow_Descent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Descent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_Descent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Descent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_Descent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_Descent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_Height_Statics
	{
		struct XLRow_eventHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLRow_Height_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_Height_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_Height_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_Height_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_Height_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "Height", nullptr, nullptr, sizeof(XLRow_eventHeight_Parms), Z_Construct_UFunction_UXLRow_Height_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Height_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_Height_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Height_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_Height()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_Height_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_IsHidden_Statics
	{
		struct XLRow_eventIsHidden_Parms
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
	void Z_Construct_UFunction_UXLRow_IsHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLRow_eventIsHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLRow_IsHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLRow_eventIsHidden_Parms), &Z_Construct_UFunction_UXLRow_IsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_IsHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_IsHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_IsHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_IsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "IsHidden", nullptr, nullptr, sizeof(XLRow_eventIsHidden_Parms), Z_Construct_UFunction_UXLRow_IsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_IsHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_IsHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_IsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_IsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_IsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_RowNumber_Statics
	{
		struct XLRow_eventRowNumber_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRow_RowNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventRowNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_RowNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_RowNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_RowNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_RowNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "RowNumber", nullptr, nullptr, sizeof(XLRow_eventRowNumber_Parms), Z_Construct_UFunction_UXLRow_RowNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_RowNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_RowNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_RowNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_RowNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_RowNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_SetDescent_Statics
	{
		struct XLRow_eventSetDescent_Parms
		{
			float descent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_descent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLRow_SetDescent_Statics::NewProp_descent = { "descent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventSetDescent_Parms, descent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_SetDescent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_SetDescent_Statics::NewProp_descent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_SetDescent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Set the descent of the row, which is he vertical distance in pixels from the bottom of the cells\n" },
		{ "ModuleRelativePath", "Public/XLRow.h" },
		{ "ToolTip", "Set the descent of the row, which is he vertical distance in pixels from the bottom of the cells" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_SetDescent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "SetDescent", nullptr, nullptr, sizeof(XLRow_eventSetDescent_Parms), Z_Construct_UFunction_UXLRow_SetDescent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_SetDescent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_SetDescent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_SetDescent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_SetDescent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_SetDescent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_SetHeight_Statics
	{
		struct XLRow_eventSetHeight_Parms
		{
			float height;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLRow_SetHeight_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventSetHeight_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_SetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_SetHeight_Statics::NewProp_height,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_SetHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_SetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "SetHeight", nullptr, nullptr, sizeof(XLRow_eventSetHeight_Parms), Z_Construct_UFunction_UXLRow_SetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_SetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_SetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_SetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_SetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_SetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_SetHidden_Statics
	{
		struct XLRow_eventSetHidden_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXLRow_SetHidden_Statics::NewProp_state_SetBit(void* Obj)
	{
		((XLRow_eventSetHidden_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLRow_SetHidden_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLRow_eventSetHidden_Parms), &Z_Construct_UFunction_UXLRow_SetHidden_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_SetHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_SetHidden_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_SetHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_SetHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "SetHidden", nullptr, nullptr, sizeof(XLRow_eventSetHidden_Parms), Z_Construct_UFunction_UXLRow_SetHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_SetHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_SetHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_SetHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_SetHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_SetHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRow_Values_Statics
	{
		struct XLRow_eventValues_Parms
		{
			UXLRowDataProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRow_Values_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRow_eventValues_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRow_Values_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRow_Values_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRow_Values_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRow_Values_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRow, nullptr, "Values", nullptr, nullptr, sizeof(XLRow_eventValues_Parms), Z_Construct_UFunction_UXLRow_Values_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Values_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRow_Values_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRow_Values_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRow_Values()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRow_Values_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLRow_NoRegister()
	{
		return UXLRow::StaticClass();
	}
	struct Z_Construct_UClass_UXLRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLRow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLRow_CellCount, "CellCount" }, // 1480302528
		{ &Z_Construct_UFunction_UXLRow_Cells, "Cells" }, // 741060882
		{ &Z_Construct_UFunction_UXLRow_CellsAt, "CellsAt" }, // 30632983
		{ &Z_Construct_UFunction_UXLRow_CellsRange, "CellsRange" }, // 2945489798
		{ &Z_Construct_UFunction_UXLRow_Descent, "Descent" }, // 1033311321
		{ &Z_Construct_UFunction_UXLRow_Height, "Height" }, // 4177754029
		{ &Z_Construct_UFunction_UXLRow_IsHidden, "IsHidden" }, // 29134054
		{ &Z_Construct_UFunction_UXLRow_RowNumber, "RowNumber" }, // 820382112
		{ &Z_Construct_UFunction_UXLRow_SetDescent, "SetDescent" }, // 528838550
		{ &Z_Construct_UFunction_UXLRow_SetHeight, "SetHeight" }, // 2353130645
		{ &Z_Construct_UFunction_UXLRow_SetHidden, "SetHidden" }, // 3890737108
		{ &Z_Construct_UFunction_UXLRow_Values, "Values" }, // 2691688531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLRow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLRow.h" },
		{ "ModuleRelativePath", "Public/XLRow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLRow_Statics::ClassParams = {
		&UXLRow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLRow, 2563041447);
	template<> FREEEXCEL_API UClass* StaticClass<UXLRow>()
	{
		return UXLRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLRow(Z_Construct_UClass_UXLRow, &UXLRow::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
