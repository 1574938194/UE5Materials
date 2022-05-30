// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLRowDataProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLRowDataProxy() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataProxy_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLRowDataProxy::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execAsDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDateTime>*)Z_Param__Result=P_THIS->AsDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execAsFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->AsFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execAsInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int64>*)Z_Param__Result=P_THIS->AsInteger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UXLCellValue*>*)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execFillDateTime)
	{
		P_GET_TARRAY(FDateTime,Z_Param_ls);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillDateTime(Z_Param_ls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execFillFloat)
	{
		P_GET_TARRAY(float,Z_Param_ls);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillFloat(Z_Param_ls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execFillString)
	{
		P_GET_TARRAY(FString,Z_Param_ls);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillString(Z_Param_ls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execFillInteger)
	{
		P_GET_TARRAY(int64,Z_Param_ls);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillInteger(Z_Param_ls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataProxy::execFill)
	{
		P_GET_TARRAY(UXLCellValue*,Z_Param_ls);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fill(Z_Param_ls);
		P_NATIVE_END;
	}
	void UXLRowDataProxy::StaticRegisterNativesUXLRowDataProxy()
	{
		UClass* Class = UXLRowDataProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsDateTime", &UXLRowDataProxy::execAsDateTime },
			{ "AsFloat", &UXLRowDataProxy::execAsFloat },
			{ "AsInteger", &UXLRowDataProxy::execAsInteger },
			{ "AsString", &UXLRowDataProxy::execAsString },
			{ "Clear", &UXLRowDataProxy::execClear },
			{ "Fill", &UXLRowDataProxy::execFill },
			{ "FillDateTime", &UXLRowDataProxy::execFillDateTime },
			{ "FillFloat", &UXLRowDataProxy::execFillFloat },
			{ "FillInteger", &UXLRowDataProxy::execFillInteger },
			{ "FillString", &UXLRowDataProxy::execFillString },
			{ "Get", &UXLRowDataProxy::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics
	{
		struct XLRowDataProxy_eventAsDateTime_Parms
		{
			TArray<FDateTime> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventAsDateTime_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "AsDateTime", nullptr, nullptr, sizeof(XLRowDataProxy_eventAsDateTime_Parms), Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_AsDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_AsDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics
	{
		struct XLRowDataProxy_eventAsFloat_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventAsFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "AsFloat", nullptr, nullptr, sizeof(XLRowDataProxy_eventAsFloat_Parms), Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_AsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_AsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics
	{
		struct XLRowDataProxy_eventAsInteger_Parms
		{
			TArray<int64> ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventAsInteger_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "AsInteger", nullptr, nullptr, sizeof(XLRowDataProxy_eventAsInteger_Parms), Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_AsInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_AsInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics
	{
		struct XLRowDataProxy_eventAsString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventAsString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "AsString", nullptr, nullptr, sizeof(XLRowDataProxy_eventAsString_Parms), Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics
	{
		struct XLRowDataProxy_eventFill_Parms
		{
			TArray<UXLCellValue*> ls;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ls_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::NewProp_ls_Inner = { "ls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::NewProp_ls = { "ls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventFill_Parms, ls), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::NewProp_ls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::NewProp_ls,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "Fill", nullptr, nullptr, sizeof(XLRowDataProxy_eventFill_Parms), Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_Fill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_Fill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics
	{
		struct XLRowDataProxy_eventFillDateTime_Parms
		{
			TArray<FDateTime> ls;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ls_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::NewProp_ls_Inner = { "ls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::NewProp_ls = { "ls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventFillDateTime_Parms, ls), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::NewProp_ls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::NewProp_ls,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "FillDateTime", nullptr, nullptr, sizeof(XLRowDataProxy_eventFillDateTime_Parms), Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_FillDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_FillDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics
	{
		struct XLRowDataProxy_eventFillFloat_Parms
		{
			TArray<float> ls;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ls_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::NewProp_ls_Inner = { "ls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::NewProp_ls = { "ls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventFillFloat_Parms, ls), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::NewProp_ls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::NewProp_ls,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "FillFloat", nullptr, nullptr, sizeof(XLRowDataProxy_eventFillFloat_Parms), Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_FillFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_FillFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics
	{
		struct XLRowDataProxy_eventFillInteger_Parms
		{
			TArray<int64> ls;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ls_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::NewProp_ls_Inner = { "ls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::NewProp_ls = { "ls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventFillInteger_Parms, ls), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::NewProp_ls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::NewProp_ls,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "FillInteger", nullptr, nullptr, sizeof(XLRowDataProxy_eventFillInteger_Parms), Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_FillInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_FillInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics
	{
		struct XLRowDataProxy_eventFillString_Parms
		{
			TArray<FString> ls;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ls_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::NewProp_ls_Inner = { "ls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::NewProp_ls = { "ls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventFillString_Parms, ls), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::NewProp_ls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::NewProp_ls,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "FillString", nullptr, nullptr, sizeof(XLRowDataProxy_eventFillString_Parms), Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_FillString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_FillString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataProxy_Get_Statics
	{
		struct XLRowDataProxy_eventGet_Parms
		{
			TArray<UXLCellValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UXLCellValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataProxy_eventGet_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataProxy, nullptr, "Get", nullptr, nullptr, sizeof(XLRowDataProxy_eventGet_Parms), Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataProxy_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataProxy_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLRowDataProxy_NoRegister()
	{
		return UXLRowDataProxy::StaticClass();
	}
	struct Z_Construct_UClass_UXLRowDataProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLRowDataProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLRowDataProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLRowDataProxy_AsDateTime, "AsDateTime" }, // 845142334
		{ &Z_Construct_UFunction_UXLRowDataProxy_AsFloat, "AsFloat" }, // 1013169716
		{ &Z_Construct_UFunction_UXLRowDataProxy_AsInteger, "AsInteger" }, // 4048901085
		{ &Z_Construct_UFunction_UXLRowDataProxy_AsString, "AsString" }, // 4171742142
		{ &Z_Construct_UFunction_UXLRowDataProxy_Clear, "Clear" }, // 1469518039
		{ &Z_Construct_UFunction_UXLRowDataProxy_Fill, "Fill" }, // 1130659495
		{ &Z_Construct_UFunction_UXLRowDataProxy_FillDateTime, "FillDateTime" }, // 586580930
		{ &Z_Construct_UFunction_UXLRowDataProxy_FillFloat, "FillFloat" }, // 3223801478
		{ &Z_Construct_UFunction_UXLRowDataProxy_FillInteger, "FillInteger" }, // 370344623
		{ &Z_Construct_UFunction_UXLRowDataProxy_FillString, "FillString" }, // 1061902000
		{ &Z_Construct_UFunction_UXLRowDataProxy_Get, "Get" }, // 1939978648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLRowDataProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLRowDataProxy.h" },
		{ "ModuleRelativePath", "Public/XLRowDataProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLRowDataProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLRowDataProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLRowDataProxy_Statics::ClassParams = {
		&UXLRowDataProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLRowDataProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLRowDataProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLRowDataProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLRowDataProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLRowDataProxy, 3991655767);
	template<> FREEEXCEL_API UClass* StaticClass<UXLRowDataProxy>()
	{
		return UXLRowDataProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLRowDataProxy(Z_Construct_UClass_UXLRowDataProxy, &UXLRowDataProxy::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLRowDataProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLRowDataProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
