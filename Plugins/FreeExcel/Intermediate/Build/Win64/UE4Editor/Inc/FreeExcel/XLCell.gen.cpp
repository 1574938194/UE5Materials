// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCell() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCell();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellReference_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLFormulaProxy_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellValueProxy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLCell::execFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLFormulaProxy**)Z_Param__Result=P_THIS->Formula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execHasFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFormula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rowOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param_colOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCell**)Z_Param__Result=P_THIS->Offset(Z_Param_rowOffset,Z_Param_colOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execCellReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellReference**)Z_Param__Result=P_THIS->CellReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCell::execValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellValueProxy**)Z_Param__Result=P_THIS->Value();
		P_NATIVE_END;
	}
	void UXLCell::StaticRegisterNativesUXLCell()
	{
		UClass* Class = UXLCell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CellReference", &UXLCell::execCellReference },
			{ "Formula", &UXLCell::execFormula },
			{ "HasFormula", &UXLCell::execHasFormula },
			{ "Offset", &UXLCell::execOffset },
			{ "Value", &UXLCell::execValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCell_CellReference_Statics
	{
		struct XLCell_eventCellReference_Parms
		{
			UXLCellReference* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCell_CellReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventCellReference_Parms, ReturnValue), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_CellReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_CellReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_CellReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_CellReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "CellReference", nullptr, nullptr, sizeof(XLCell_eventCellReference_Parms), Z_Construct_UFunction_UXLCell_CellReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_CellReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_CellReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_CellReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_CellReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_CellReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_Formula_Statics
	{
		struct XLCell_eventFormula_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCell_Formula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventFormula_Parms, ReturnValue), Z_Construct_UClass_UXLFormulaProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_Formula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Formula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_Formula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_Formula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "Formula", nullptr, nullptr, sizeof(XLCell_eventFormula_Parms), Z_Construct_UFunction_UXLCell_Formula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Formula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_Formula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Formula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_Formula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_Formula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_HasFormula_Statics
	{
		struct XLCell_eventHasFormula_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXLCell_HasFormula_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCell_eventHasFormula_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCell_HasFormula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCell_eventHasFormula_Parms), &Z_Construct_UFunction_UXLCell_HasFormula_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_HasFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_HasFormula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_HasFormula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_HasFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "HasFormula", nullptr, nullptr, sizeof(XLCell_eventHasFormula_Parms), Z_Construct_UFunction_UXLCell_HasFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_HasFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_HasFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_HasFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_HasFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_HasFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_Offset_Statics
	{
		struct XLCell_eventOffset_Parms
		{
			int32 rowOffset;
			int32 colOffset;
			UXLCell* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rowOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_colOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCell_Offset_Statics::NewProp_rowOffset = { "rowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventOffset_Parms, rowOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCell_Offset_Statics::NewProp_colOffset = { "colOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventOffset_Parms, colOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCell_Offset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventOffset_Parms, ReturnValue), Z_Construct_UClass_UXLCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_Offset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Offset_Statics::NewProp_rowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Offset_Statics::NewProp_colOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Offset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_Offset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// get the XLCell object from the current cell offset\n" },
		{ "ModuleRelativePath", "Public/XLCell.h" },
		{ "ToolTip", "get the XLCell object from the current cell offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_Offset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "Offset", nullptr, nullptr, sizeof(XLCell_eventOffset_Parms), Z_Construct_UFunction_UXLCell_Offset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Offset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_Offset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Offset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_Offset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_Offset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCell_Value_Statics
	{
		struct XLCell_eventValue_Parms
		{
			UXLCellValueProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCell_Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCell_eventValue_Parms, ReturnValue), Z_Construct_UClass_UXLCellValueProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCell_Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCell_Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCell_Value_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCell_Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCell, nullptr, "Value", nullptr, nullptr, sizeof(XLCell_eventValue_Parms), Z_Construct_UFunction_UXLCell_Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCell_Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCell_Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCell_Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCell_Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCell_NoRegister()
	{
		return UXLCell::StaticClass();
	}
	struct Z_Construct_UClass_UXLCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCell_CellReference, "CellReference" }, // 2610536240
		{ &Z_Construct_UFunction_UXLCell_Formula, "Formula" }, // 963637477
		{ &Z_Construct_UFunction_UXLCell_HasFormula, "HasFormula" }, // 3035169123
		{ &Z_Construct_UFunction_UXLCell_Offset, "Offset" }, // 1474093211
		{ &Z_Construct_UFunction_UXLCell_Value, "Value" }, // 1937622198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCell_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCell.h" },
		{ "ModuleRelativePath", "Public/XLCell.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCell_Statics::ClassParams = {
		&UXLCell::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCell, 479984574);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCell>()
	{
		return UXLCell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCell(Z_Construct_UClass_UXLCell, &UXLCell::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
