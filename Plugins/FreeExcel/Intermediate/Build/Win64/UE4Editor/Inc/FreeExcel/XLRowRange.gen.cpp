// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLRowRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLRowRange() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowRange_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowRange();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowIterator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLRowRange::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowIterator**)Z_Param__Result=P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowRange::execBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowIterator**)Z_Param__Result=P_THIS->Begin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowRange::execRowCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RowCount();
		P_NATIVE_END;
	}
	void UXLRowRange::StaticRegisterNativesUXLRowRange()
	{
		UClass* Class = UXLRowRange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin", &UXLRowRange::execBegin },
			{ "End", &UXLRowRange::execEnd },
			{ "RowCount", &UXLRowRange::execRowCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLRowRange_Begin_Statics
	{
		struct XLRowRange_eventBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowRange_Begin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowRange_eventBegin_Parms, ReturnValue), Z_Construct_UClass_UXLRowIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowRange_Begin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowRange_Begin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowRange_Begin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowRange_Begin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowRange, nullptr, "Begin", nullptr, nullptr, sizeof(XLRowRange_eventBegin_Parms), Z_Construct_UFunction_UXLRowRange_Begin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowRange_Begin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowRange_Begin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowRange_Begin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowRange_Begin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowRange_Begin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowRange_End_Statics
	{
		struct XLRowRange_eventEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowRange_End_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowRange_eventEnd_Parms, ReturnValue), Z_Construct_UClass_UXLRowIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowRange_End_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowRange_End_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowRange_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowRange_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowRange, nullptr, "End", nullptr, nullptr, sizeof(XLRowRange_eventEnd_Parms), Z_Construct_UFunction_UXLRowRange_End_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowRange_End_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowRange_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowRange_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowRange_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowRange_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowRange_RowCount_Statics
	{
		struct XLRowRange_eventRowCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRowRange_RowCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowRange_eventRowCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowRange_RowCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowRange_RowCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowRange_RowCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowRange_RowCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowRange, nullptr, "RowCount", nullptr, nullptr, sizeof(XLRowRange_eventRowCount_Parms), Z_Construct_UFunction_UXLRowRange_RowCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowRange_RowCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowRange_RowCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowRange_RowCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowRange_RowCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowRange_RowCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLRowRange_NoRegister()
	{
		return UXLRowRange::StaticClass();
	}
	struct Z_Construct_UClass_UXLRowRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLRowRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLRowRange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLRowRange_Begin, "Begin" }, // 1557018449
		{ &Z_Construct_UFunction_UXLRowRange_End, "End" }, // 2560307180
		{ &Z_Construct_UFunction_UXLRowRange_RowCount, "RowCount" }, // 1479658251
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLRowRange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLRowRange.h" },
		{ "ModuleRelativePath", "Public/XLRowRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLRowRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLRowRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLRowRange_Statics::ClassParams = {
		&UXLRowRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLRowRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLRowRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLRowRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLRowRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLRowRange, 196904702);
	template<> FREEEXCEL_API UClass* StaticClass<UXLRowRange>()
	{
		return UXLRowRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLRowRange(Z_Construct_UClass_UXLRowRange, &UXLRowRange::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLRowRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLRowRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
