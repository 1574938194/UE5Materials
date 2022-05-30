// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCellValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCellValue() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValue_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValueProxy_NoRegister();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLValueType();
// End Cross Module References
	DEFINE_FUNCTION(UXLCellValue::execSetProxy)
	{
		P_GET_OBJECT(UXLCellValueProxy,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProxy(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSet)
	{
		P_GET_OBJECT(UXLCellValue,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execTypeAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->TypeAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLValueType*)Z_Param__Result=P_THIS->Type();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSetError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellValue**)Z_Param__Result=P_THIS->SetError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellValue**)Z_Param__Result=P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->DateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->String();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Float();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->Integer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Bool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSetFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSetDateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateTime(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSetInteger)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteger(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValue::execSetBool)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBool(Z_Param_val);
		P_NATIVE_END;
	}
	void UXLCellValue::StaticRegisterNativesUXLCellValue()
	{
		UClass* Class = UXLCellValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bool", &UXLCellValue::execBool },
			{ "Clear", &UXLCellValue::execClear },
			{ "DateTime", &UXLCellValue::execDateTime },
			{ "Float", &UXLCellValue::execFloat },
			{ "Integer", &UXLCellValue::execInteger },
			{ "Set", &UXLCellValue::execSet },
			{ "SetBool", &UXLCellValue::execSetBool },
			{ "SetDateTime", &UXLCellValue::execSetDateTime },
			{ "SetError", &UXLCellValue::execSetError },
			{ "SetFloat", &UXLCellValue::execSetFloat },
			{ "SetInteger", &UXLCellValue::execSetInteger },
			{ "SetProxy", &UXLCellValue::execSetProxy },
			{ "SetString", &UXLCellValue::execSetString },
			{ "String", &UXLCellValue::execString },
			{ "Type", &UXLCellValue::execType },
			{ "TypeAsString", &UXLCellValue::execTypeAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCellValue_Bool_Statics
	{
		struct XLCellValue_eventBool_Parms
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
	void Z_Construct_UFunction_UXLCellValue_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellValue_eventBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellValue_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellValue_eventBool_Parms), &Z_Construct_UFunction_UXLCellValue_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_Bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Bool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_Bool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "Bool", nullptr, nullptr, sizeof(XLCellValue_eventBool_Parms), Z_Construct_UFunction_UXLCellValue_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_Clear_Statics
	{
		struct XLCellValue_eventClear_Parms
		{
			UXLCellValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValue_Clear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventClear_Parms, ReturnValue), Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Clear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "Clear", nullptr, nullptr, sizeof(XLCellValue_eventClear_Parms), Z_Construct_UFunction_UXLCellValue_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_DateTime_Statics
	{
		struct XLCellValue_eventDateTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLCellValue_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_DateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "DateTime", nullptr, nullptr, sizeof(XLCellValue_eventDateTime_Parms), Z_Construct_UFunction_UXLCellValue_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_Float_Statics
	{
		struct XLCellValue_eventFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLCellValue_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_Float_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "Float", nullptr, nullptr, sizeof(XLCellValue_eventFloat_Parms), Z_Construct_UFunction_UXLCellValue_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_Integer_Statics
	{
		struct XLCellValue_eventInteger_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCellValue_Integer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_Integer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Integer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_Integer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "Integer", nullptr, nullptr, sizeof(XLCellValue_eventInteger_Parms), Z_Construct_UFunction_UXLCellValue_Integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Integer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_Integer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_Set_Statics
	{
		struct XLCellValue_eventSet_Parms
		{
			UXLCellValue* val;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValue_Set_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSet_Parms, val), Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Set_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "Set", nullptr, nullptr, sizeof(XLCellValue_eventSet_Parms), Z_Construct_UFunction_UXLCellValue_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetBool_Statics
	{
		struct XLCellValue_eventSetBool_Parms
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
	void Z_Construct_UFunction_UXLCellValue_SetBool_Statics::NewProp_val_SetBit(void* Obj)
	{
		((XLCellValue_eventSetBool_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellValue_SetBool_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellValue_eventSetBool_Parms), &Z_Construct_UFunction_UXLCellValue_SetBool_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetBool_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetBool", nullptr, nullptr, sizeof(XLCellValue_eventSetBool_Parms), Z_Construct_UFunction_UXLCellValue_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics
	{
		struct XLCellValue_eventSetDateTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSetDateTime_Parms, val), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetDateTime", nullptr, nullptr, sizeof(XLCellValue_eventSetDateTime_Parms), Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetError_Statics
	{
		struct XLCellValue_eventSetError_Parms
		{
			UXLCellValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValue_SetError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSetError_Parms, ReturnValue), Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetError", nullptr, nullptr, sizeof(XLCellValue_eventSetError_Parms), Z_Construct_UFunction_UXLCellValue_SetError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetFloat_Statics
	{
		struct XLCellValue_eventSetFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSetFloat_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetFloat", nullptr, nullptr, sizeof(XLCellValue_eventSetFloat_Parms), Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetInteger_Statics
	{
		struct XLCellValue_eventSetInteger_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSetInteger_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetInteger", nullptr, nullptr, sizeof(XLCellValue_eventSetInteger_Parms), Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetProxy_Statics
	{
		struct XLCellValue_eventSetProxy_Parms
		{
			UXLCellValueProxy* val;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSetProxy_Parms, val), Z_Construct_UClass_UXLCellValueProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetProxy", nullptr, nullptr, sizeof(XLCellValue_eventSetProxy_Parms), Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_SetString_Statics
	{
		struct XLCellValue_eventSetString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellValue_SetString_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventSetString_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_SetString_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_SetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "SetString", nullptr, nullptr, sizeof(XLCellValue_eventSetString_Parms), Z_Construct_UFunction_UXLCellValue_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_String_Statics
	{
		struct XLCellValue_eventString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellValue_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_String_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "String", nullptr, nullptr, sizeof(XLCellValue_eventString_Parms), Z_Construct_UFunction_UXLCellValue_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_Type_Statics
	{
		struct XLCellValue_eventType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLCellValue_Type_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLCellValue_Type_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventType_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_Type_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Type_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_Type_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_Type_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_Type_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "Type", nullptr, nullptr, sizeof(XLCellValue_eventType_Parms), Z_Construct_UFunction_UXLCellValue_Type_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Type_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_Type_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_Type_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_Type()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_Type_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics
	{
		struct XLCellValue_eventTypeAsString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValue_eventTypeAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValue, nullptr, "TypeAsString", nullptr, nullptr, sizeof(XLCellValue_eventTypeAsString_Parms), Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValue_TypeAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValue_TypeAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCellValue_NoRegister()
	{
		return UXLCellValue::StaticClass();
	}
	struct Z_Construct_UClass_UXLCellValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCellValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCellValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCellValue_Bool, "Bool" }, // 1676132434
		{ &Z_Construct_UFunction_UXLCellValue_Clear, "Clear" }, // 3683091053
		{ &Z_Construct_UFunction_UXLCellValue_DateTime, "DateTime" }, // 3103991834
		{ &Z_Construct_UFunction_UXLCellValue_Float, "Float" }, // 1572120976
		{ &Z_Construct_UFunction_UXLCellValue_Integer, "Integer" }, // 2429158087
		{ &Z_Construct_UFunction_UXLCellValue_Set, "Set" }, // 3126313615
		{ &Z_Construct_UFunction_UXLCellValue_SetBool, "SetBool" }, // 754568057
		{ &Z_Construct_UFunction_UXLCellValue_SetDateTime, "SetDateTime" }, // 3950807262
		{ &Z_Construct_UFunction_UXLCellValue_SetError, "SetError" }, // 2049218880
		{ &Z_Construct_UFunction_UXLCellValue_SetFloat, "SetFloat" }, // 2199498141
		{ &Z_Construct_UFunction_UXLCellValue_SetInteger, "SetInteger" }, // 2852235780
		{ &Z_Construct_UFunction_UXLCellValue_SetProxy, "SetProxy" }, // 2999452507
		{ &Z_Construct_UFunction_UXLCellValue_SetString, "SetString" }, // 4050019354
		{ &Z_Construct_UFunction_UXLCellValue_String, "String" }, // 3138565201
		{ &Z_Construct_UFunction_UXLCellValue_Type, "Type" }, // 2414129502
		{ &Z_Construct_UFunction_UXLCellValue_TypeAsString, "TypeAsString" }, // 1835123927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCellValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCellValue.h" },
		{ "ModuleRelativePath", "Public/XLCellValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCellValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCellValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCellValue_Statics::ClassParams = {
		&UXLCellValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCellValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCellValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCellValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCellValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCellValue, 502441856);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCellValue>()
	{
		return UXLCellValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCellValue(Z_Construct_UClass_UXLCellValue, &UXLCellValue::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCellValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCellValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
