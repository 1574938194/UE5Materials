// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/Demo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo1() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_ADemo1_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_ADemo1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
// End Cross Module References
	DEFINE_FUNCTION(ADemo1::execRunDemo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunDemo();
		P_NATIVE_END;
	}
	void ADemo1::StaticRegisterNativesADemo1()
	{
		UClass* Class = ADemo1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunDemo", &ADemo1::execRunDemo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADemo1_RunDemo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemo1_RunDemo_Statics::Function_MetaDataParams[] = {
		{ "Category", "XLXS" },
		{ "ModuleRelativePath", "Public/Demo1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemo1_RunDemo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemo1, nullptr, "RunDemo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemo1_RunDemo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemo1_RunDemo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemo1_RunDemo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemo1_RunDemo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADemo1_NoRegister()
	{
		return ADemo1::StaticClass();
	}
	struct Z_Construct_UClass_ADemo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADemo1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemo1_RunDemo, "RunDemo" }, // 1493530319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemo1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Demo1.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Demo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADemo1_Statics::ClassParams = {
		&ADemo1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADemo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADemo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemo1, 545866680);
	template<> FREEEXCEL_API UClass* StaticClass<ADemo1>()
	{
		return ADemo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemo1(Z_Construct_UClass_ADemo1, &ADemo1::StaticClass, TEXT("/Script/FreeExcel"), TEXT("ADemo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
