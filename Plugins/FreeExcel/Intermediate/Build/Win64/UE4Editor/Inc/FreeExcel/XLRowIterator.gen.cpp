// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLRowIterator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLRowIterator() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowIterator_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowIterator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRow_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLRowIterator::execNotEqual)
	{
		P_GET_OBJECT(UXLRowIterator,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotEqual(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowIterator::execEqual)
	{
		P_GET_OBJECT(UXLRowIterator,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowIterator::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRow**)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowIterator::execForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowIterator**)Z_Param__Result=P_THIS->Forward();
		P_NATIVE_END;
	}
	void UXLRowIterator::StaticRegisterNativesUXLRowIterator()
	{
		UClass* Class = UXLRowIterator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equal", &UXLRowIterator::execEqual },
			{ "Forward", &UXLRowIterator::execForward },
			{ "Get", &UXLRowIterator::execGet },
			{ "NotEqual", &UXLRowIterator::execNotEqual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLRowIterator_Equal_Statics
	{
		struct XLRowIterator_eventEqual_Parms
		{
			UXLRowIterator* right;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowIterator_Equal_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowIterator_eventEqual_Parms, right), Z_Construct_UClass_UXLRowIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLRowIterator_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLRowIterator_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLRowIterator_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLRowIterator_eventEqual_Parms), &Z_Construct_UFunction_UXLRowIterator_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowIterator_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowIterator_Equal_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowIterator_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowIterator_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowIterator_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowIterator, nullptr, "Equal", nullptr, nullptr, sizeof(XLRowIterator_eventEqual_Parms), Z_Construct_UFunction_UXLRowIterator_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowIterator_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowIterator_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowIterator_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowIterator_Forward_Statics
	{
		struct XLRowIterator_eventForward_Parms
		{
			UXLRowIterator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowIterator_Forward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowIterator_eventForward_Parms, ReturnValue), Z_Construct_UClass_UXLRowIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowIterator_Forward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowIterator_Forward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowIterator_Forward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowIterator_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowIterator, nullptr, "Forward", nullptr, nullptr, sizeof(XLRowIterator_eventForward_Parms), Z_Construct_UFunction_UXLRowIterator_Forward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_Forward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowIterator_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowIterator_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowIterator_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowIterator_Get_Statics
	{
		struct XLRowIterator_eventGet_Parms
		{
			UXLRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowIterator_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowIterator_eventGet_Parms, ReturnValue), Z_Construct_UClass_UXLRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowIterator_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowIterator_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowIterator_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowIterator_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowIterator, nullptr, "Get", nullptr, nullptr, sizeof(XLRowIterator_eventGet_Parms), Z_Construct_UFunction_UXLRowIterator_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowIterator_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowIterator_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowIterator_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics
	{
		struct XLRowIterator_eventNotEqual_Parms
		{
			UXLRowIterator* right;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowIterator_eventNotEqual_Parms, right), Z_Construct_UClass_UXLRowIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLRowIterator_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLRowIterator_eventNotEqual_Parms), &Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowIterator, nullptr, "NotEqual", nullptr, nullptr, sizeof(XLRowIterator_eventNotEqual_Parms), Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowIterator_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowIterator_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLRowIterator_NoRegister()
	{
		return UXLRowIterator::StaticClass();
	}
	struct Z_Construct_UClass_UXLRowIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLRowIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLRowIterator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLRowIterator_Equal, "Equal" }, // 2406196738
		{ &Z_Construct_UFunction_UXLRowIterator_Forward, "Forward" }, // 2746656129
		{ &Z_Construct_UFunction_UXLRowIterator_Get, "Get" }, // 3201073885
		{ &Z_Construct_UFunction_UXLRowIterator_NotEqual, "NotEqual" }, // 1767172960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLRowIterator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLRowIterator.h" },
		{ "ModuleRelativePath", "Public/XLRowIterator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLRowIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLRowIterator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLRowIterator_Statics::ClassParams = {
		&UXLRowIterator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLRowIterator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLRowIterator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLRowIterator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLRowIterator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLRowIterator, 804606752);
	template<> FREEEXCEL_API UClass* StaticClass<UXLRowIterator>()
	{
		return UXLRowIterator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLRowIterator(Z_Construct_UClass_UXLRowIterator, &UXLRowIterator::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLRowIterator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLRowIterator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
