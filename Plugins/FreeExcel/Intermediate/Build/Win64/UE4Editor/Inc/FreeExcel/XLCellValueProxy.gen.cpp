// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCellValueProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCellValueProxy() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValueProxy_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValueProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValue_NoRegister();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLValueType();
// End Cross Module References
	DEFINE_FUNCTION(UXLCellValueProxy::execSetProxy)
	{
		P_GET_OBJECT(UXLCellValueProxy,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProxy(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSet)
	{
		P_GET_OBJECT(UXLCellValue,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execToCellValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellValue**)Z_Param__Result=P_THIS->ToCellValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execTypeAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->TypeAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLValueType*)Z_Param__Result=P_THIS->Type();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSetError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellValueProxy**)Z_Param__Result=P_THIS->SetError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellValueProxy**)Z_Param__Result=P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->DateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Float();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->String();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->Integer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Bool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSetDateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateTime(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSetFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSetInteger)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteger(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellValueProxy::execSetBool)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBool(Z_Param_val);
		P_NATIVE_END;
	}
	void UXLCellValueProxy::StaticRegisterNativesUXLCellValueProxy()
	{
		UClass* Class = UXLCellValueProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bool", &UXLCellValueProxy::execBool },
			{ "Clear", &UXLCellValueProxy::execClear },
			{ "DateTime", &UXLCellValueProxy::execDateTime },
			{ "Float", &UXLCellValueProxy::execFloat },
			{ "Integer", &UXLCellValueProxy::execInteger },
			{ "Set", &UXLCellValueProxy::execSet },
			{ "SetBool", &UXLCellValueProxy::execSetBool },
			{ "SetDateTime", &UXLCellValueProxy::execSetDateTime },
			{ "SetError", &UXLCellValueProxy::execSetError },
			{ "SetFloat", &UXLCellValueProxy::execSetFloat },
			{ "SetInteger", &UXLCellValueProxy::execSetInteger },
			{ "SetProxy", &UXLCellValueProxy::execSetProxy },
			{ "SetString", &UXLCellValueProxy::execSetString },
			{ "String", &UXLCellValueProxy::execString },
			{ "ToCellValue", &UXLCellValueProxy::execToCellValue },
			{ "Type", &UXLCellValueProxy::execType },
			{ "TypeAsString", &UXLCellValueProxy::execTypeAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics
	{
		struct XLCellValueProxy_eventBool_Parms
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
	void Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellValueProxy_eventBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellValueProxy_eventBool_Parms), &Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "Bool", nullptr, nullptr, sizeof(XLCellValueProxy_eventBool_Parms), Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics
	{
		struct XLCellValueProxy_eventClear_Parms
		{
			UXLCellValueProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventClear_Parms, ReturnValue), Z_Construct_UClass_UXLCellValueProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "Clear", nullptr, nullptr, sizeof(XLCellValueProxy_eventClear_Parms), Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics
	{
		struct XLCellValueProxy_eventDateTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "DateTime", nullptr, nullptr, sizeof(XLCellValueProxy_eventDateTime_Parms), Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_Float_Statics
	{
		struct XLCellValueProxy_eventFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "Float", nullptr, nullptr, sizeof(XLCellValueProxy_eventFloat_Parms), Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics
	{
		struct XLCellValueProxy_eventInteger_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "Integer", nullptr, nullptr, sizeof(XLCellValueProxy_eventInteger_Parms), Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_Set_Statics
	{
		struct XLCellValueProxy_eventSet_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSet_Parms, val), Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "Set", nullptr, nullptr, sizeof(XLCellValueProxy_eventSet_Parms), Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics
	{
		struct XLCellValueProxy_eventSetBool_Parms
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
	void Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::NewProp_val_SetBit(void* Obj)
	{
		((XLCellValueProxy_eventSetBool_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellValueProxy_eventSetBool_Parms), &Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetBool", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetBool_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics
	{
		struct XLCellValueProxy_eventSetDateTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSetDateTime_Parms, val), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetDateTime", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetDateTime_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics
	{
		struct XLCellValueProxy_eventSetError_Parms
		{
			UXLCellValueProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSetError_Parms, ReturnValue), Z_Construct_UClass_UXLCellValueProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetError", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetError_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics
	{
		struct XLCellValueProxy_eventSetFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSetFloat_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetFloat", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetFloat_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics
	{
		struct XLCellValueProxy_eventSetInteger_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSetInteger_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetInteger", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetInteger_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics
	{
		struct XLCellValueProxy_eventSetProxy_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSetProxy_Parms, val), Z_Construct_UClass_UXLCellValueProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetProxy", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetProxy_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics
	{
		struct XLCellValueProxy_eventSetString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventSetString_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "SetString", nullptr, nullptr, sizeof(XLCellValueProxy_eventSetString_Parms), Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_String_Statics
	{
		struct XLCellValueProxy_eventString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellValueProxy_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_String_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "String", nullptr, nullptr, sizeof(XLCellValueProxy_eventString_Parms), Z_Construct_UFunction_UXLCellValueProxy_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics
	{
		struct XLCellValueProxy_eventToCellValue_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventToCellValue_Parms, ReturnValue), Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "ToCellValue", nullptr, nullptr, sizeof(XLCellValueProxy_eventToCellValue_Parms), Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_ToCellValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_ToCellValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_Type_Statics
	{
		struct XLCellValueProxy_eventType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventType_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "Type", nullptr, nullptr, sizeof(XLCellValueProxy_eventType_Parms), Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_Type()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_Type_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics
	{
		struct XLCellValueProxy_eventTypeAsString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellValueProxy_eventTypeAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellValueProxy, nullptr, "TypeAsString", nullptr, nullptr, sizeof(XLCellValueProxy_eventTypeAsString_Parms), Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellValueProxy_TypeAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellValueProxy_TypeAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCellValueProxy_NoRegister()
	{
		return UXLCellValueProxy::StaticClass();
	}
	struct Z_Construct_UClass_UXLCellValueProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCellValueProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCellValueProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCellValueProxy_Bool, "Bool" }, // 2586047524
		{ &Z_Construct_UFunction_UXLCellValueProxy_Clear, "Clear" }, // 3923341091
		{ &Z_Construct_UFunction_UXLCellValueProxy_DateTime, "DateTime" }, // 3072555737
		{ &Z_Construct_UFunction_UXLCellValueProxy_Float, "Float" }, // 128732906
		{ &Z_Construct_UFunction_UXLCellValueProxy_Integer, "Integer" }, // 3931300853
		{ &Z_Construct_UFunction_UXLCellValueProxy_Set, "Set" }, // 3761291747
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetBool, "SetBool" }, // 754623596
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetDateTime, "SetDateTime" }, // 3742972845
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetError, "SetError" }, // 703131824
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetFloat, "SetFloat" }, // 1451305053
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetInteger, "SetInteger" }, // 2694489322
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetProxy, "SetProxy" }, // 856500290
		{ &Z_Construct_UFunction_UXLCellValueProxy_SetString, "SetString" }, // 306643425
		{ &Z_Construct_UFunction_UXLCellValueProxy_String, "String" }, // 1894384829
		{ &Z_Construct_UFunction_UXLCellValueProxy_ToCellValue, "ToCellValue" }, // 1191453498
		{ &Z_Construct_UFunction_UXLCellValueProxy_Type, "Type" }, // 1888350814
		{ &Z_Construct_UFunction_UXLCellValueProxy_TypeAsString, "TypeAsString" }, // 3980363742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCellValueProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCellValueProxy.h" },
		{ "ModuleRelativePath", "Public/XLCellValueProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCellValueProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCellValueProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCellValueProxy_Statics::ClassParams = {
		&UXLCellValueProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCellValueProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCellValueProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCellValueProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCellValueProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCellValueProxy, 3553472259);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCellValueProxy>()
	{
		return UXLCellValueProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCellValueProxy(Z_Construct_UClass_UXLCellValueProxy, &UXLCellValueProxy::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCellValueProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCellValueProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
