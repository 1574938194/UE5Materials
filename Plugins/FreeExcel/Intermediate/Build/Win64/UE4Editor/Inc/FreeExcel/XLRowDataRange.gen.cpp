// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLRowDataRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLRowDataRange() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataRange_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataRange();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLRowDataIterator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLRowDataRange::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataIterator**)Z_Param__Result=P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataRange::execBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLRowDataIterator**)Z_Param__Result=P_THIS->Begin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLRowDataRange::execSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Size();
		P_NATIVE_END;
	}
	void UXLRowDataRange::StaticRegisterNativesUXLRowDataRange()
	{
		UClass* Class = UXLRowDataRange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin", &UXLRowDataRange::execBegin },
			{ "End", &UXLRowDataRange::execEnd },
			{ "Size", &UXLRowDataRange::execSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLRowDataRange_Begin_Statics
	{
		struct XLRowDataRange_eventBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataRange_eventBegin_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataRange, nullptr, "Begin", nullptr, nullptr, sizeof(XLRowDataRange_eventBegin_Parms), Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataRange_Begin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataRange_Begin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataRange_End_Statics
	{
		struct XLRowDataRange_eventEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLRowDataRange_End_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataRange_eventEnd_Parms, ReturnValue), Z_Construct_UClass_UXLRowDataIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataRange_End_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataRange_End_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataRange_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataRange_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataRange, nullptr, "End", nullptr, nullptr, sizeof(XLRowDataRange_eventEnd_Parms), Z_Construct_UFunction_UXLRowDataRange_End_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataRange_End_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataRange_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataRange_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataRange_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataRange_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLRowDataRange_Size_Statics
	{
		struct XLRowDataRange_eventSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLRowDataRange_Size_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLRowDataRange_eventSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLRowDataRange_Size_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLRowDataRange_Size_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLRowDataRange_Size_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLRowDataRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLRowDataRange_Size_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLRowDataRange, nullptr, "Size", nullptr, nullptr, sizeof(XLRowDataRange_eventSize_Parms), Z_Construct_UFunction_UXLRowDataRange_Size_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataRange_Size_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLRowDataRange_Size_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLRowDataRange_Size_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLRowDataRange_Size()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLRowDataRange_Size_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLRowDataRange_NoRegister()
	{
		return UXLRowDataRange::StaticClass();
	}
	struct Z_Construct_UClass_UXLRowDataRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLRowDataRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLRowDataRange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLRowDataRange_Begin, "Begin" }, // 1063631236
		{ &Z_Construct_UFunction_UXLRowDataRange_End, "End" }, // 4031492244
		{ &Z_Construct_UFunction_UXLRowDataRange_Size, "Size" }, // 3619094149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLRowDataRange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLRowDataRange.h" },
		{ "ModuleRelativePath", "Public/XLRowDataRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLRowDataRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLRowDataRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLRowDataRange_Statics::ClassParams = {
		&UXLRowDataRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLRowDataRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLRowDataRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLRowDataRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLRowDataRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLRowDataRange, 270481463);
	template<> FREEEXCEL_API UClass* StaticClass<UXLRowDataRange>()
	{
		return UXLRowDataRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLRowDataRange(Z_Construct_UClass_UXLRowDataRange, &UXLRowDataRange::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLRowDataRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLRowDataRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
