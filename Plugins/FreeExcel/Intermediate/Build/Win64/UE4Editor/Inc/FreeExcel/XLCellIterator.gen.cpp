// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCellIterator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCellIterator() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellIterator_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellIterator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLCellIterator::execDifferent)
	{
		P_GET_OBJECT(UXLCellIterator,Z_Param_last);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->Different(Z_Param_last);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellIterator::execNotEqual)
	{
		P_GET_OBJECT(UXLCellIterator,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotEqual(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellIterator::execEqual)
	{
		P_GET_OBJECT(UXLCellIterator,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellIterator::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellIterator::execForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Forward();
		P_NATIVE_END;
	}
	void UXLCellIterator::StaticRegisterNativesUXLCellIterator()
	{
		UClass* Class = UXLCellIterator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Different", &UXLCellIterator::execDifferent },
			{ "Equal", &UXLCellIterator::execEqual },
			{ "Forward", &UXLCellIterator::execForward },
			{ "Get", &UXLCellIterator::execGet },
			{ "NotEqual", &UXLCellIterator::execNotEqual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCellIterator_Different_Statics
	{
		struct XLCellIterator_eventDifferent_Parms
		{
			UXLCellIterator* last;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_last;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellIterator_Different_Statics::NewProp_last = { "last", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellIterator_eventDifferent_Parms, last), Z_Construct_UClass_UXLCellIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UXLCellIterator_Different_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellIterator_eventDifferent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellIterator_Different_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_Different_Statics::NewProp_last,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_Different_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellIterator_Different_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellIterator_Different_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellIterator, nullptr, "Different", nullptr, nullptr, sizeof(XLCellIterator_eventDifferent_Parms), Z_Construct_UFunction_UXLCellIterator_Different_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Different_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellIterator_Different_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Different_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellIterator_Different()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellIterator_Different_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellIterator_Equal_Statics
	{
		struct XLCellIterator_eventEqual_Parms
		{
			UXLCellIterator* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellIterator_Equal_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellIterator_eventEqual_Parms, right), Z_Construct_UClass_UXLCellIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellIterator_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellIterator_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellIterator_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellIterator_eventEqual_Parms), &Z_Construct_UFunction_UXLCellIterator_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellIterator_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_Equal_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellIterator_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellIterator_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellIterator, nullptr, "Equal", nullptr, nullptr, sizeof(XLCellIterator_eventEqual_Parms), Z_Construct_UFunction_UXLCellIterator_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellIterator_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellIterator_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellIterator_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellIterator_Forward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellIterator_Forward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellIterator_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellIterator, nullptr, "Forward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellIterator_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellIterator_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellIterator_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellIterator_Get_Statics
	{
		struct XLCellIterator_eventGet_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellIterator_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellIterator_eventGet_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellIterator_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellIterator_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellIterator_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellIterator, nullptr, "Get", nullptr, nullptr, sizeof(XLCellIterator_eventGet_Parms), Z_Construct_UFunction_UXLCellIterator_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellIterator_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellIterator_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellIterator_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics
	{
		struct XLCellIterator_eventNotEqual_Parms
		{
			UXLCellIterator* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellIterator_eventNotEqual_Parms, right), Z_Construct_UClass_UXLCellIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellIterator_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellIterator_eventNotEqual_Parms), &Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellIterator, nullptr, "NotEqual", nullptr, nullptr, sizeof(XLCellIterator_eventNotEqual_Parms), Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellIterator_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellIterator_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCellIterator_NoRegister()
	{
		return UXLCellIterator::StaticClass();
	}
	struct Z_Construct_UClass_UXLCellIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCellIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCellIterator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCellIterator_Different, "Different" }, // 4041375973
		{ &Z_Construct_UFunction_UXLCellIterator_Equal, "Equal" }, // 3815321696
		{ &Z_Construct_UFunction_UXLCellIterator_Forward, "Forward" }, // 1551618657
		{ &Z_Construct_UFunction_UXLCellIterator_Get, "Get" }, // 1393878274
		{ &Z_Construct_UFunction_UXLCellIterator_NotEqual, "NotEqual" }, // 4272977970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCellIterator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCellIterator.h" },
		{ "ModuleRelativePath", "Public/XLCellIterator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCellIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCellIterator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCellIterator_Statics::ClassParams = {
		&UXLCellIterator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCellIterator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCellIterator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCellIterator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCellIterator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCellIterator, 2474691325);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCellIterator>()
	{
		return UXLCellIterator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCellIterator(Z_Construct_UClass_UXLCellIterator, &UXLCellIterator::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCellIterator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCellIterator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
