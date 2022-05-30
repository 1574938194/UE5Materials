// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLRowDataIterator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLRowDataIterator() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataIterator_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataIterator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLRowDataIterator::execNotEqual)
	{
		P_GET_OBJECT(UXLRowDataIterator,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotEqual(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataIterator::execEqual)
	{
		P_GET_OBJECT(UXLRowDataIterator,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataIterator::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataIterator::execForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataIterator**)Z_Param__Result=P_THIS->Forward();
		P_NATIVE_END;
	}
	void UXLRowDataIterator::StaticRegisterNativesUXLRowDataIterator()
	{
		UClass* Class = UXLRowDataIterator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equal", &UXLRowDataIterator::execEqual },
			{ "Forward", &UXLRowDataIterator::execForward },
			{ "Get", &UXLRowDataIterator::execGet },
			{ "NotEqual", &UXLRowDataIterator::execNotEqual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics
	{
		struct XLRowDataIterator_eventEqual_Parms
		{
			UXLRowDataIterator* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataIterator_eventEqual_Parms, other), Z_Construct_UClass_UXLRowDataIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLRowDataIterator_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLRowDataIterator_eventEqual_Parms), &Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataIterator, nullptr, "Equal", nullptr, nullptr, sizeof(XLRowDataIterator_eventEqual_Parms), Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataIterator_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataIterator_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics
	{
		struct XLRowDataIterator_eventForward_Parms
		{
			UXLRowDataIterator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataIterator_eventForward_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataIterator, nullptr, "Forward", nullptr, nullptr, sizeof(XLRowDataIterator_eventForward_Parms), Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataIterator_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataIterator_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataIterator_Get_Statics
	{
		struct XLRowDataIterator_eventGet_Parms
		{
			UXLCell* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataIterator_eventGet_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataIterator, nullptr, "Get", nullptr, nullptr, sizeof(XLRowDataIterator_eventGet_Parms), Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataIterator_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataIterator_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics
	{
		struct XLRowDataIterator_eventNotEqual_Parms
		{
			UXLRowDataIterator* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataIterator_eventNotEqual_Parms, other), Z_Construct_UClass_UXLRowDataIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLRowDataIterator_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLRowDataIterator_eventNotEqual_Parms), &Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataIterator, nullptr, "NotEqual", nullptr, nullptr, sizeof(XLRowDataIterator_eventNotEqual_Parms), Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataIterator_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataIterator_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLRowDataIterator_NoRegister()
	{
		return UXLRowDataIterator::StaticClass();
	}
	struct Z_Construct_UClass_UXLRowDataIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLRowDataIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLRowDataIterator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLRowDataIterator_Equal, "Equal" }, // 1870625722
		{ &Z_Construct_UFunction_UXLRowDataIterator_Forward, "Forward" }, // 490853957
		{ &Z_Construct_UFunction_UXLRowDataIterator_Get, "Get" }, // 3691573669
		{ &Z_Construct_UFunction_UXLRowDataIterator_NotEqual, "NotEqual" }, // 1978541763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLRowDataIterator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLRowDataIterator.h" },
		{ "ModuleRelativePath", "Public/XLRowDataIterator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLRowDataIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLRowDataIterator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLRowDataIterator_Statics::ClassParams = {
		&UXLRowDataIterator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLRowDataIterator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLRowDataIterator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLRowDataIterator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLRowDataIterator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLRowDataIterator, 416220431);
	template<> FREEEXCEL_API UClass* StaticClass<UXLRowDataIterator>()
	{
		return UXLRowDataIterator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLRowDataIterator(Z_Construct_UClass_UXLRowDataIterator, &UXLRowDataIterator::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLRowDataIterator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLRowDataIterator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
