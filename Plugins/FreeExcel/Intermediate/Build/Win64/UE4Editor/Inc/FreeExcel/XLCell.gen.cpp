// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCell() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLValueType();
// End Cross Module References
	DEFINE_FUNCTION(UXLCell::execSetCellValue)
	{
		P_GET_OBJECT(UXLCell,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCellValue(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFormula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execSetFormula)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_v);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFormula(Z_Param_v);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLValueType*)Z_Param__Result=P_THIS->Type();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execClearCell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetInteger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execSetFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execSetDateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateTime(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execSetInteger)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteger(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execSetBool)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBool(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execIsFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFormula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execCellOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param_colOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->CellOffset(Z_Param_rowOffset,Z_Param_colOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execGetCellReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCellReference();
		P_NATIVE_END;
	}
	void UXLCell::StaticRegisterNativesUXLCell()
	{
		UClass* Class = UXLCell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CellOffset", &UXLCell::execCellOffset },
			{ "ClearCell", &UXLCell::execClearCell },
			{ "GetBool", &UXLCell::execGetBool },
			{ "GetCellReference", &UXLCell::execGetCellReference },
			{ "GetDateTime", &UXLCell::execGetDateTime },
			{ "GetFloat", &UXLCell::execGetFloat },
			{ "GetFormula", &UXLCell::execGetFormula },
			{ "GetInteger", &UXLCell::execGetInteger },
			{ "GetString", &UXLCell::execGetString },
			{ "IsFormula", &UXLCell::execIsFormula },
			{ "SetBool", &UXLCell::execSetBool },
			{ "SetCellValue", &UXLCell::execSetCellValue },
			{ "SetDateTime", &UXLCell::execSetDateTime },
			{ "SetFloat", &UXLCell::execSetFloat },
			{ "SetFormula", &UXLCell::execSetFormula },
			{ "SetInteger", &UXLCell::execSetInteger },
			{ "SetString", &UXLCell::execSetString },
			{ "Type", &UXLCell::execType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCell_CellOffset_Statics
	{
		struct XLCell_eventCellOffset_Parms
		{
			int32 rowOffset;
			int32 colOffset;
			UXLCell* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_colOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCell_CellOffset_Statics::NewProp_rowOffset = { "rowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventCellOffset_Parms, rowOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCell_CellOffset_Statics::NewProp_colOffset = { "colOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventCellOffset_Parms, colOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCell_CellOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventCellOffset_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_CellOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_CellOffset_Statics::NewProp_rowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_CellOffset_Statics::NewProp_colOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_CellOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_CellOffset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// get the XLCell object from the current cell offset\n" },
		{ "ModuleRelativePath", "Public/XLCell.h" },
		{ "ToolTip", "get the XLCell object from the current cell offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_CellOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "CellOffset", nullptr, nullptr, sizeof(XLCell_eventCellOffset_Parms), Z_Construct_UFunction_UXLCell_CellOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_CellOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_CellOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_CellOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_CellOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_CellOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_ClearCell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_ClearCell_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_ClearCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "ClearCell", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_ClearCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_ClearCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_ClearCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_ClearCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetBool_Statics
	{
		struct XLCell_eventGetBool_Parms
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
	void Z_Construct_UFunction_UXLCell_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCell_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCell_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCell_eventGetBool_Parms), &Z_Construct_UFunction_UXLCell_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetBool", nullptr, nullptr, sizeof(XLCell_eventGetBool_Parms), Z_Construct_UFunction_UXLCell_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetCellReference_Statics
	{
		struct XLCell_eventGetCellReference_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCell_GetCellReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventGetCellReference_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetCellReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetCellReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetCellReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetCellReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetCellReference", nullptr, nullptr, sizeof(XLCell_eventGetCellReference_Parms), Z_Construct_UFunction_UXLCell_GetCellReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetCellReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetCellReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetCellReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetCellReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetCellReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetDateTime_Statics
	{
		struct XLCell_eventGetDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLCell_GetDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventGetDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetDateTime", nullptr, nullptr, sizeof(XLCell_eventGetDateTime_Parms), Z_Construct_UFunction_UXLCell_GetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetFloat_Statics
	{
		struct XLCell_eventGetFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLCell_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetFloat", nullptr, nullptr, sizeof(XLCell_eventGetFloat_Parms), Z_Construct_UFunction_UXLCell_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetFormula_Statics
	{
		struct XLCell_eventGetFormula_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCell_GetFormula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventGetFormula_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetFormula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetFormula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetFormula", nullptr, nullptr, sizeof(XLCell_eventGetFormula_Parms), Z_Construct_UFunction_UXLCell_GetFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetInteger_Statics
	{
		struct XLCell_eventGetInteger_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCell_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventGetInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetInteger", nullptr, nullptr, sizeof(XLCell_eventGetInteger_Parms), Z_Construct_UFunction_UXLCell_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_GetString_Statics
	{
		struct XLCell_eventGetString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCell_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_GetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "GetString", nullptr, nullptr, sizeof(XLCell_eventGetString_Parms), Z_Construct_UFunction_UXLCell_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_IsFormula_Statics
	{
		struct XLCell_eventIsFormula_Parms
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
	void Z_Construct_UFunction_UXLCell_IsFormula_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCell_eventIsFormula_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCell_IsFormula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCell_eventIsFormula_Parms), &Z_Construct_UFunction_UXLCell_IsFormula_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_IsFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_IsFormula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_IsFormula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_IsFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "IsFormula", nullptr, nullptr, sizeof(XLCell_eventIsFormula_Parms), Z_Construct_UFunction_UXLCell_IsFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_IsFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_IsFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_IsFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_IsFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_IsFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetBool_Statics
	{
		struct XLCell_eventSetBool_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXLCell_SetBool_Statics::NewProp_val_SetBit(void* Obj)
	{
		((XLCell_eventSetBool_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCell_SetBool_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCell_eventSetBool_Parms), &Z_Construct_UFunction_UXLCell_SetBool_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetBool_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetBool", nullptr, nullptr, sizeof(XLCell_eventSetBool_Parms), Z_Construct_UFunction_UXLCell_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetCellValue_Statics
	{
		struct XLCell_eventSetCellValue_Parms
		{
			UXLCell* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCell_SetCellValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventSetCellValue_Parms, other), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetCellValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetCellValue_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetCellValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetCellValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetCellValue", nullptr, nullptr, sizeof(XLCell_eventSetCellValue_Parms), Z_Construct_UFunction_UXLCell_SetCellValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetCellValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetCellValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetCellValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetCellValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetCellValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetDateTime_Statics
	{
		struct XLCell_eventSetDateTime_Parms
		{
			FDateTime val;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLCell_SetDateTime_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventSetDateTime_Parms, val), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetDateTime_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetDateTime", nullptr, nullptr, sizeof(XLCell_eventSetDateTime_Parms), Z_Construct_UFunction_UXLCell_SetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetFloat_Statics
	{
		struct XLCell_eventSetFloat_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLCell_SetFloat_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventSetFloat_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetFloat_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetFloat", nullptr, nullptr, sizeof(XLCell_eventSetFloat_Parms), Z_Construct_UFunction_UXLCell_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetFormula_Statics
	{
		struct XLCell_eventSetFormula_Parms
		{
			FString v;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_v;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCell_SetFormula_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventSetFormula_Parms, v), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetFormula_Statics::NewProp_v,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetFormula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetFormula", nullptr, nullptr, sizeof(XLCell_eventSetFormula_Parms), Z_Construct_UFunction_UXLCell_SetFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetInteger_Statics
	{
		struct XLCell_eventSetInteger_Parms
		{
			int64 val;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCell_SetInteger_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventSetInteger_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetInteger_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetInteger", nullptr, nullptr, sizeof(XLCell_eventSetInteger_Parms), Z_Construct_UFunction_UXLCell_SetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_SetString_Statics
	{
		struct XLCell_eventSetString_Parms
		{
			FString val;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCell_SetString_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventSetString_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_SetString_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_SetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "SetString", nullptr, nullptr, sizeof(XLCell_eventSetString_Parms), Z_Construct_UFunction_UXLCell_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_Type_Statics
	{
		struct XLCell_eventType_Parms
		{
			EXLValueType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLCell_Type_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLCell_Type_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventType_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_Type_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Type_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Type_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_Type_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_Type_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "Type", nullptr, nullptr, sizeof(XLCell_eventType_Parms), Z_Construct_UFunction_UXLCell_Type_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Type_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_Type_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Type_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_Type()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_Type_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCell_NoRegister()
	{
		return UXLCell::StaticClass();
	}
	struct Z_Construct_UClass_UXLCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCell_CellOffset, "CellOffset" }, // 3386519129
		{ &Z_Construct_UFunction_UXLCell_ClearCell, "ClearCell" }, // 3780994392
		{ &Z_Construct_UFunction_UXLCell_GetBool, "GetBool" }, // 2708470174
		{ &Z_Construct_UFunction_UXLCell_GetCellReference, "GetCellReference" }, // 3463109217
		{ &Z_Construct_UFunction_UXLCell_GetDateTime, "GetDateTime" }, // 1946068525
		{ &Z_Construct_UFunction_UXLCell_GetFloat, "GetFloat" }, // 2087602832
		{ &Z_Construct_UFunction_UXLCell_GetFormula, "GetFormula" }, // 3186717596
		{ &Z_Construct_UFunction_UXLCell_GetInteger, "GetInteger" }, // 2749328105
		{ &Z_Construct_UFunction_UXLCell_GetString, "GetString" }, // 4243609250
		{ &Z_Construct_UFunction_UXLCell_IsFormula, "IsFormula" }, // 3604740432
		{ &Z_Construct_UFunction_UXLCell_SetBool, "SetBool" }, // 4229188257
		{ &Z_Construct_UFunction_UXLCell_SetCellValue, "SetCellValue" }, // 593840257
		{ &Z_Construct_UFunction_UXLCell_SetDateTime, "SetDateTime" }, // 1699117678
		{ &Z_Construct_UFunction_UXLCell_SetFloat, "SetFloat" }, // 1886307000
		{ &Z_Construct_UFunction_UXLCell_SetFormula, "SetFormula" }, // 1626090228
		{ &Z_Construct_UFunction_UXLCell_SetInteger, "SetInteger" }, // 53714020
		{ &Z_Construct_UFunction_UXLCell_SetString, "SetString" }, // 3236704142
		{ &Z_Construct_UFunction_UXLCell_Type, "Type" }, // 1953123702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCell_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCell.h" },
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCell_Statics::ClassParams = {
		&UXLCell::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCell, 1510383609);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCell>()
	{
		return UXLCell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCell(Z_Construct_UClass_UXLCell, &UXLCell::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
