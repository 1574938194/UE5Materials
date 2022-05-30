// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLFormula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLFormula() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLFormula_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLFormula();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
// End Cross Module References
	DEFINE_FUNCTION(UXLFormula::execNotEqual)
	{
		P_GET_OBJECT(UXLFormula,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotEqual(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormula::execEqual)
	{
		P_GET_OBJECT(UXLFormula,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormula::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLFormula**)Z_Param__Result=P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormula::execString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->String();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormula::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormula::execSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set(Z_Param_x);
		P_NATIVE_END;
	}
	void UXLFormula::StaticRegisterNativesUXLFormula()
	{
		UClass* Class = UXLFormula::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UXLFormula::execClear },
			{ "Equal", &UXLFormula::execEqual },
			{ "Get", &UXLFormula::execGet },
			{ "NotEqual", &UXLFormula::execNotEqual },
			{ "Set", &UXLFormula::execSet },
			{ "String", &UXLFormula::execString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLFormula_Clear_Statics
	{
		struct XLFormula_eventClear_Parms
		{
			UXLFormula* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLFormula_Clear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormula_eventClear_Parms, ReturnValue), Z_Construct_UClass_UXLFormula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormula_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_Clear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormula_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormula_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormula, nullptr, "Clear", nullptr, nullptr, sizeof(XLFormula_eventClear_Parms), Z_Construct_UFunction_UXLFormula_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormula_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormula_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormula_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormula_Equal_Statics
	{
		struct XLFormula_eventEqual_Parms
		{
			UXLFormula* other;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLFormula_Equal_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormula_eventEqual_Parms, other), Z_Construct_UClass_UXLFormula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLFormula_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLFormula_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLFormula_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLFormula_eventEqual_Parms), &Z_Construct_UFunction_UXLFormula_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormula_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_Equal_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormula_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormula_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormula, nullptr, "Equal", nullptr, nullptr, sizeof(XLFormula_eventEqual_Parms), Z_Construct_UFunction_UXLFormula_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormula_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormula_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormula_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormula_Get_Statics
	{
		struct XLFormula_eventGet_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLFormula_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormula_eventGet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormula_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormula_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormula_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormula, nullptr, "Get", nullptr, nullptr, sizeof(XLFormula_eventGet_Parms), Z_Construct_UFunction_UXLFormula_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormula_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormula_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormula_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormula_NotEqual_Statics
	{
		struct XLFormula_eventNotEqual_Parms
		{
			UXLFormula* other;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLFormula_NotEqual_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormula_eventNotEqual_Parms, other), Z_Construct_UClass_UXLFormula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLFormula_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLFormula_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLFormula_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLFormula_eventNotEqual_Parms), &Z_Construct_UFunction_UXLFormula_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormula_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_NotEqual_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormula_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormula_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormula, nullptr, "NotEqual", nullptr, nullptr, sizeof(XLFormula_eventNotEqual_Parms), Z_Construct_UFunction_UXLFormula_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormula_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormula_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormula_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormula_Set_Statics
	{
		struct XLFormula_eventSet_Parms
		{
			FString x;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLFormula_Set_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormula_eventSet_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormula_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_Set_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormula_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormula_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormula, nullptr, "Set", nullptr, nullptr, sizeof(XLFormula_eventSet_Parms), Z_Construct_UFunction_UXLFormula_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormula_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormula_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormula_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormula_String_Statics
	{
		struct XLFormula_eventString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLFormula_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormula_eventString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormula_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormula_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormula_String_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormula_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormula, nullptr, "String", nullptr, nullptr, sizeof(XLFormula_eventString_Parms), Z_Construct_UFunction_UXLFormula_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormula_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormula_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormula_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormula_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLFormula_NoRegister()
	{
		return UXLFormula::StaticClass();
	}
	struct Z_Construct_UClass_UXLFormula_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLFormula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLFormula_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLFormula_Clear, "Clear" }, // 787685391
		{ &Z_Construct_UFunction_UXLFormula_Equal, "Equal" }, // 819809582
		{ &Z_Construct_UFunction_UXLFormula_Get, "Get" }, // 1397758490
		{ &Z_Construct_UFunction_UXLFormula_NotEqual, "NotEqual" }, // 3640536088
		{ &Z_Construct_UFunction_UXLFormula_Set, "Set" }, // 1274432922
		{ &Z_Construct_UFunction_UXLFormula_String, "String" }, // 2852948605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLFormula_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLFormula.h" },
		{ "ModuleRelativePath", "Public/XLFormula.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLFormula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLFormula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLFormula_Statics::ClassParams = {
		&UXLFormula::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLFormula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLFormula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLFormula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLFormula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLFormula, 1660579923);
	template<> FREEEXCEL_API UClass* StaticClass<UXLFormula>()
	{
		return UXLFormula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLFormula(Z_Construct_UClass_UXLFormula, &UXLFormula::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLFormula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLFormula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
