// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLFormulaProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLFormulaProxy() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLFormulaProxy_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLFormulaProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLFormula_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLFormulaProxy::execFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLFormula**)Z_Param__Result=P_THIS->Formula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormulaProxy::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLFormulaProxy**)Z_Param__Result=P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormulaProxy::execString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->String();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormulaProxy::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLFormulaProxy::execSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set(Z_Param_x);
		P_NATIVE_END;
	}
	void UXLFormulaProxy::StaticRegisterNativesUXLFormulaProxy()
	{
		UClass* Class = UXLFormulaProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UXLFormulaProxy::execClear },
			{ "Formula", &UXLFormulaProxy::execFormula },
			{ "Get", &UXLFormulaProxy::execGet },
			{ "Set", &UXLFormulaProxy::execSet },
			{ "String", &UXLFormulaProxy::execString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics
	{
		struct XLFormulaProxy_eventClear_Parms
		{
			UXLFormulaProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormulaProxy_eventClear_Parms, ReturnValue), Z_Construct_UClass_UXLFormulaProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormulaProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormulaProxy, nullptr, "Clear", nullptr, nullptr, sizeof(XLFormulaProxy_eventClear_Parms), Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormulaProxy_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormulaProxy_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics
	{
		struct XLFormulaProxy_eventFormula_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormulaProxy_eventFormula_Parms, ReturnValue), Z_Construct_UClass_UXLFormula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormulaProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormulaProxy, nullptr, "Formula", nullptr, nullptr, sizeof(XLFormulaProxy_eventFormula_Parms), Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormulaProxy_Formula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormulaProxy_Formula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormulaProxy_Get_Statics
	{
		struct XLFormulaProxy_eventGet_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormulaProxy_eventGet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormulaProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormulaProxy, nullptr, "Get", nullptr, nullptr, sizeof(XLFormulaProxy_eventGet_Parms), Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormulaProxy_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormulaProxy_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormulaProxy_Set_Statics
	{
		struct XLFormulaProxy_eventSet_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormulaProxy_eventSet_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormulaProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormulaProxy, nullptr, "Set", nullptr, nullptr, sizeof(XLFormulaProxy_eventSet_Parms), Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormulaProxy_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormulaProxy_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLFormulaProxy_String_Statics
	{
		struct XLFormulaProxy_eventString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLFormulaProxy_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLFormulaProxy_eventString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLFormulaProxy_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLFormulaProxy_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLFormulaProxy_String_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLFormulaProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLFormulaProxy_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLFormulaProxy, nullptr, "String", nullptr, nullptr, sizeof(XLFormulaProxy_eventString_Parms), Z_Construct_UFunction_UXLFormulaProxy_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLFormulaProxy_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLFormulaProxy_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLFormulaProxy_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLFormulaProxy_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLFormulaProxy_NoRegister()
	{
		return UXLFormulaProxy::StaticClass();
	}
	struct Z_Construct_UClass_UXLFormulaProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLFormulaProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLFormulaProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLFormulaProxy_Clear, "Clear" }, // 723513809
		{ &Z_Construct_UFunction_UXLFormulaProxy_Formula, "Formula" }, // 1688541131
		{ &Z_Construct_UFunction_UXLFormulaProxy_Get, "Get" }, // 973416731
		{ &Z_Construct_UFunction_UXLFormulaProxy_Set, "Set" }, // 2887886705
		{ &Z_Construct_UFunction_UXLFormulaProxy_String, "String" }, // 740947043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLFormulaProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLFormulaProxy.h" },
		{ "ModuleRelativePath", "Public/XLFormulaProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLFormulaProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLFormulaProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLFormulaProxy_Statics::ClassParams = {
		&UXLFormulaProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLFormulaProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLFormulaProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLFormulaProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLFormulaProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLFormulaProxy, 1237608932);
	template<> FREEEXCEL_API UClass* StaticClass<UXLFormulaProxy>()
	{
		return UXLFormulaProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLFormulaProxy(Z_Construct_UClass_UXLFormulaProxy, &UXLFormulaProxy::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLFormulaProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLFormulaProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
