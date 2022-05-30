// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCellRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCellRange() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellRange_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellRange();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellIterator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLCellRange::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellRange::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellIterator**)Z_Param__Result=P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellRange::execBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellIterator**)Z_Param__Result=P_THIS->Begin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellRange::execNumCols)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumCols();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellRange::execNumRows)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumRows();
		P_NATIVE_END;
	}
	void UXLCellRange::StaticRegisterNativesUXLCellRange()
	{
		UClass* Class = UXLCellRange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin", &UXLCellRange::execBegin },
			{ "Clear", &UXLCellRange::execClear },
			{ "End", &UXLCellRange::execEnd },
			{ "NumCols", &UXLCellRange::execNumCols },
			{ "NumRows", &UXLCellRange::execNumRows },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCellRange_Begin_Statics
	{
		struct XLCellRange_eventBegin_Parms
		{
			UXLCellIterator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellRange_Begin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellRange_eventBegin_Parms, ReturnValue), Z_Construct_UClass_UXLCellIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellRange_Begin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellRange_Begin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellRange_Begin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellRange_Begin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellRange, nullptr, "Begin", nullptr, nullptr, sizeof(XLCellRange_eventBegin_Parms), Z_Construct_UFunction_UXLCellRange_Begin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_Begin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellRange_Begin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_Begin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellRange_Begin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellRange_Begin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellRange_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellRange_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellRange_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellRange, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellRange_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellRange_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellRange_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellRange_End_Statics
	{
		struct XLCellRange_eventEnd_Parms
		{
			UXLCellIterator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellRange_End_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellRange_eventEnd_Parms, ReturnValue), Z_Construct_UClass_UXLCellIterator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellRange_End_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellRange_End_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellRange_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellRange_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellRange, nullptr, "End", nullptr, nullptr, sizeof(XLCellRange_eventEnd_Parms), Z_Construct_UFunction_UXLCellRange_End_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_End_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellRange_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellRange_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellRange_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellRange_NumCols_Statics
	{
		struct XLCellRange_eventNumCols_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellRange_NumCols_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellRange_eventNumCols_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellRange_NumCols_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellRange_NumCols_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellRange_NumCols_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellRange_NumCols_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellRange, nullptr, "NumCols", nullptr, nullptr, sizeof(XLCellRange_eventNumCols_Parms), Z_Construct_UFunction_UXLCellRange_NumCols_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_NumCols_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellRange_NumCols_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_NumCols_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellRange_NumCols()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellRange_NumCols_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellRange_NumRows_Statics
	{
		struct XLCellRange_eventNumRows_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellRange_NumRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellRange_eventNumRows_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellRange_NumRows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellRange_NumRows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellRange_NumRows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellRange_NumRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellRange, nullptr, "NumRows", nullptr, nullptr, sizeof(XLCellRange_eventNumRows_Parms), Z_Construct_UFunction_UXLCellRange_NumRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_NumRows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellRange_NumRows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellRange_NumRows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellRange_NumRows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellRange_NumRows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCellRange_NoRegister()
	{
		return UXLCellRange::StaticClass();
	}
	struct Z_Construct_UClass_UXLCellRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCellRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCellRange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCellRange_Begin, "Begin" }, // 1246432397
		{ &Z_Construct_UFunction_UXLCellRange_Clear, "Clear" }, // 3545511144
		{ &Z_Construct_UFunction_UXLCellRange_End, "End" }, // 2503243397
		{ &Z_Construct_UFunction_UXLCellRange_NumCols, "NumCols" }, // 2355191134
		{ &Z_Construct_UFunction_UXLCellRange_NumRows, "NumRows" }, // 2675405179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCellRange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCellRange.h" },
		{ "ModuleRelativePath", "Public/XLCellRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCellRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCellRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCellRange_Statics::ClassParams = {
		&UXLCellRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCellRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCellRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCellRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCellRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCellRange, 3128680075);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCellRange>()
	{
		return UXLCellRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCellRange(Z_Construct_UClass_UXLCellRange, &UXLCellRange::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCellRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCellRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
