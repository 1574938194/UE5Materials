// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLCellReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLCellReference() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellReference_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLCellReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
// End Cross Module References
	DEFINE_FUNCTION(UXLCellReference::execLessEqual)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LessEqual(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execGreaterEqual)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GreaterEqual(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execGreater)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Greater(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execLess)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Less(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execNotEqual)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotEqual(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execEqual)
	{
		P_GET_OBJECT(UXLCellReference,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execSetAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_addr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAddress(Z_Param_addr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Address();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execSetCol)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCol(Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execCol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Col();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execSetRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRow(Z_Param_row);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Row();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Backward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Forward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execMakeCellReference2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellReference**)Z_Param__Result=UXLCellReference::MakeCellReference2(Z_Param_row,Z_Param_col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLCellReference::execMakeCellReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLCellReference**)Z_Param__Result=UXLCellReference::MakeCellReference(Z_Param_ref);
		P_NATIVE_END;
	}
	void UXLCellReference::StaticRegisterNativesUXLCellReference()
	{
		UClass* Class = UXLCellReference::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Address", &UXLCellReference::execAddress },
			{ "Backward", &UXLCellReference::execBackward },
			{ "Col", &UXLCellReference::execCol },
			{ "Equal", &UXLCellReference::execEqual },
			{ "Forward", &UXLCellReference::execForward },
			{ "Greater", &UXLCellReference::execGreater },
			{ "GreaterEqual", &UXLCellReference::execGreaterEqual },
			{ "Less", &UXLCellReference::execLess },
			{ "LessEqual", &UXLCellReference::execLessEqual },
			{ "MakeCellReference", &UXLCellReference::execMakeCellReference },
			{ "MakeCellReference2", &UXLCellReference::execMakeCellReference2 },
			{ "NotEqual", &UXLCellReference::execNotEqual },
			{ "Row", &UXLCellReference::execRow },
			{ "Set", &UXLCellReference::execSet },
			{ "SetAddress", &UXLCellReference::execSetAddress },
			{ "SetCol", &UXLCellReference::execSetCol },
			{ "SetRow", &UXLCellReference::execSetRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLCellReference_Address_Statics
	{
		struct XLCellReference_eventAddress_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellReference_Address_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Address_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Address_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Address_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Address_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Address", nullptr, nullptr, sizeof(XLCellReference_eventAddress_Parms), Z_Construct_UFunction_UXLCellReference_Address_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Address_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Address_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Address_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Address()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Address_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Backward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Backward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Backward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Backward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Backward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Backward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Backward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Backward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Col_Statics
	{
		struct XLCellReference_eventCol_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_Col_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventCol_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Col_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Col_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Col_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Col_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Col", nullptr, nullptr, sizeof(XLCellReference_eventCol_Parms), Z_Construct_UFunction_UXLCellReference_Col_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Col_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Col_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Col_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Col()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Col_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Equal_Statics
	{
		struct XLCellReference_eventEqual_Parms
		{
			UXLCellReference* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_Equal_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventEqual_Parms, right), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellReference_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellReference_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellReference_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellReference_eventEqual_Parms), &Z_Construct_UFunction_UXLCellReference_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Equal_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Equal", nullptr, nullptr, sizeof(XLCellReference_eventEqual_Parms), Z_Construct_UFunction_UXLCellReference_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Forward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Forward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Forward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Greater_Statics
	{
		struct XLCellReference_eventGreater_Parms
		{
			UXLCellReference* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_Greater_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventGreater_Parms, right), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellReference_Greater_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellReference_eventGreater_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellReference_Greater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellReference_eventGreater_Parms), &Z_Construct_UFunction_UXLCellReference_Greater_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Greater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Greater_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Greater_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Greater_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Greater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Greater", nullptr, nullptr, sizeof(XLCellReference_eventGreater_Parms), Z_Construct_UFunction_UXLCellReference_Greater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Greater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Greater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Greater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Greater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Greater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics
	{
		struct XLCellReference_eventGreaterEqual_Parms
		{
			UXLCellReference* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventGreaterEqual_Parms, right), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellReference_eventGreaterEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellReference_eventGreaterEqual_Parms), &Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "GreaterEqual", nullptr, nullptr, sizeof(XLCellReference_eventGreaterEqual_Parms), Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_GreaterEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_GreaterEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Less_Statics
	{
		struct XLCellReference_eventLess_Parms
		{
			UXLCellReference* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_Less_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventLess_Parms, right), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellReference_Less_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellReference_eventLess_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellReference_Less_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellReference_eventLess_Parms), &Z_Construct_UFunction_UXLCellReference_Less_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Less_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Less_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Less_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Less_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Less_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Less", nullptr, nullptr, sizeof(XLCellReference_eventLess_Parms), Z_Construct_UFunction_UXLCellReference_Less_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Less_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Less_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Less_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Less()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Less_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_LessEqual_Statics
	{
		struct XLCellReference_eventLessEqual_Parms
		{
			UXLCellReference* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventLessEqual_Parms, right), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellReference_eventLessEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellReference_eventLessEqual_Parms), &Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "LessEqual", nullptr, nullptr, sizeof(XLCellReference_eventLessEqual_Parms), Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_LessEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_LessEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics
	{
		struct XLCellReference_eventMakeCellReference_Parms
		{
			FString ref;
			UXLCellReference* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ref;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventMakeCellReference_Parms, ref), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventMakeCellReference_Parms, ReturnValue), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "MakeCellReference", nullptr, nullptr, sizeof(XLCellReference_eventMakeCellReference_Parms), Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_MakeCellReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_MakeCellReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics
	{
		struct XLCellReference_eventMakeCellReference2_Parms
		{
			int32 row;
			int32 col;
			UXLCellReference* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventMakeCellReference2_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventMakeCellReference2_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventMakeCellReference2_Parms, ReturnValue), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "MakeCellReference2", nullptr, nullptr, sizeof(XLCellReference_eventMakeCellReference2_Parms), Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_MakeCellReference2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_MakeCellReference2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_NotEqual_Statics
	{
		struct XLCellReference_eventNotEqual_Parms
		{
			UXLCellReference* right;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventNotEqual_Parms, right), Z_Construct_UClass_UXLCellReference_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLCellReference_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLCellReference_eventNotEqual_Parms), &Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::NewProp_right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "NotEqual", nullptr, nullptr, sizeof(XLCellReference_eventNotEqual_Parms), Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Row_Statics
	{
		struct XLCellReference_eventRow_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_Row_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventRow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Row_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Row_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Row_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Row_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Row", nullptr, nullptr, sizeof(XLCellReference_eventRow_Parms), Z_Construct_UFunction_UXLCellReference_Row_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Row_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Row_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Row_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Row()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Row_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_Set_Statics
	{
		struct XLCellReference_eventSet_Parms
		{
			int32 row;
			int32 col;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_Set_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventSet_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_Set_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventSet_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Set_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_Set_Statics::NewProp_col,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "Set", nullptr, nullptr, sizeof(XLCellReference_eventSet_Parms), Z_Construct_UFunction_UXLCellReference_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_SetAddress_Statics
	{
		struct XLCellReference_eventSetAddress_Parms
		{
			FString addr;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::NewProp_addr = { "addr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventSetAddress_Parms, addr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::NewProp_addr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "SetAddress", nullptr, nullptr, sizeof(XLCellReference_eventSetAddress_Parms), Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_SetAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_SetAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_SetCol_Statics
	{
		struct XLCellReference_eventSetCol_Parms
		{
			int32 col;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_SetCol_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventSetCol_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_SetCol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_SetCol_Statics::NewProp_col,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_SetCol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_SetCol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "SetCol", nullptr, nullptr, sizeof(XLCellReference_eventSetCol_Parms), Z_Construct_UFunction_UXLCellReference_SetCol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_SetCol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_SetCol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_SetCol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_SetCol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_SetCol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLCellReference_SetRow_Statics
	{
		struct XLCellReference_eventSetRow_Parms
		{
			int32 row;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLCellReference_SetRow_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLCellReference_eventSetRow_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLCellReference_SetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLCellReference_SetRow_Statics::NewProp_row,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLCellReference_SetRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLCellReference_SetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLCellReference, nullptr, "SetRow", nullptr, nullptr, sizeof(XLCellReference_eventSetRow_Parms), Z_Construct_UFunction_UXLCellReference_SetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_SetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLCellReference_SetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLCellReference_SetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLCellReference_SetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLCellReference_SetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLCellReference_NoRegister()
	{
		return UXLCellReference::StaticClass();
	}
	struct Z_Construct_UClass_UXLCellReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLCellReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLCellReference_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLCellReference_Address, "Address" }, // 67450871
		{ &Z_Construct_UFunction_UXLCellReference_Backward, "Backward" }, // 753734737
		{ &Z_Construct_UFunction_UXLCellReference_Col, "Col" }, // 4065664885
		{ &Z_Construct_UFunction_UXLCellReference_Equal, "Equal" }, // 1824089680
		{ &Z_Construct_UFunction_UXLCellReference_Forward, "Forward" }, // 2143214376
		{ &Z_Construct_UFunction_UXLCellReference_Greater, "Greater" }, // 2931858318
		{ &Z_Construct_UFunction_UXLCellReference_GreaterEqual, "GreaterEqual" }, // 1199569023
		{ &Z_Construct_UFunction_UXLCellReference_Less, "Less" }, // 318230905
		{ &Z_Construct_UFunction_UXLCellReference_LessEqual, "LessEqual" }, // 1783771521
		{ &Z_Construct_UFunction_UXLCellReference_MakeCellReference, "MakeCellReference" }, // 586524020
		{ &Z_Construct_UFunction_UXLCellReference_MakeCellReference2, "MakeCellReference2" }, // 498242043
		{ &Z_Construct_UFunction_UXLCellReference_NotEqual, "NotEqual" }, // 4221095580
		{ &Z_Construct_UFunction_UXLCellReference_Row, "Row" }, // 2293172265
		{ &Z_Construct_UFunction_UXLCellReference_Set, "Set" }, // 3505671991
		{ &Z_Construct_UFunction_UXLCellReference_SetAddress, "SetAddress" }, // 2317310705
		{ &Z_Construct_UFunction_UXLCellReference_SetCol, "SetCol" }, // 3903059608
		{ &Z_Construct_UFunction_UXLCellReference_SetRow, "SetRow" }, // 4256227343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLCellReference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLCellReference.h" },
		{ "ModuleRelativePath", "Public/XLCellReference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLCellReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLCellReference>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLCellReference_Statics::ClassParams = {
		&UXLCellReference::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLCellReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLCellReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLCellReference()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLCellReference_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLCellReference, 1293512333);
	template<> FREEEXCEL_API UClass* StaticClass<UXLCellReference>()
	{
		return UXLCellReference::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLCellReference(Z_Construct_UClass_UXLCellReference, &UXLCellReference::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLCellReference"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLCellReference);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
