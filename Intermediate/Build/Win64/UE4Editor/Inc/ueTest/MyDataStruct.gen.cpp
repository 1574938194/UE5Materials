// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ueTest/Public/MyDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDataStruct() {}
// Cross Module References
	UETEST_API UScriptStruct* Z_Construct_UScriptStruct_FMyDataStruct();
	UPackage* Z_Construct_UPackage__Script_ueTest();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References

static_assert(std::is_polymorphic<FMyDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMyDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMyDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UETEST_API uint32 Get_Z_Construct_UScriptStruct_FMyDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyDataStruct, Z_Construct_UPackage__Script_ueTest(), TEXT("MyDataStruct"), sizeof(FMyDataStruct), Get_Z_Construct_UScriptStruct_FMyDataStruct_Hash());
	}
	return Singleton;
}
template<> UETEST_API UScriptStruct* StaticStruct<FMyDataStruct>()
{
	return FMyDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyDataStruct(FMyDataStruct::StaticStruct, TEXT("/Script/ueTest"), TEXT("MyDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_ueTest_StaticRegisterNativesFMyDataStruct
{
	FScriptStruct_ueTest_StaticRegisterNativesFMyDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FMyDataStruct>(FName(TEXT("MyDataStruct")));
	}
} ScriptStruct_ueTest_StaticRegisterNativesFMyDataStruct;
	struct Z_Construct_UScriptStruct_FMyDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vec4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vec4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MyDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Int_MetaData[] = {
		{ "Category", "MyDataStruct" },
		{ "ModuleRelativePath", "Public/MyDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyDataStruct, Int), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Int_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_String_MetaData[] = {
		{ "Category", "MyDataStruct" },
		{ "ModuleRelativePath", "Public/MyDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyDataStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Vec4_MetaData[] = {
		{ "Category", "MyDataStruct" },
		{ "ModuleRelativePath", "Public/MyDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Vec4 = { "Vec4", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyDataStruct, Vec4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Vec4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Vec4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Int,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataStruct_Statics::NewProp_Vec4,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ueTest,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MyDataStruct",
		sizeof(FMyDataStruct),
		alignof(FMyDataStruct),
		Z_Construct_UScriptStruct_FMyDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ueTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyDataStruct"), sizeof(FMyDataStruct), Get_Z_Construct_UScriptStruct_FMyDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyDataStruct_Hash() { return 534788676U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
