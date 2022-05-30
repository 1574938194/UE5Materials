// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLChartsheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLChartsheet() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLChartsheet_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLChartsheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetState();
// End Cross Module References
	DEFINE_FUNCTION(UXLChartsheet::execClone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clone(Z_Param_newName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_selected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_selected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execIsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sheetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_sheetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Name();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execSetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Index();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execSetColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->Color();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execSetVisible)
	{
		P_GET_ENUM(EXLSheetState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(EXLSheetState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLChartsheet::execVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLSheetState*)Z_Param__Result=P_THIS->Visible();
		P_NATIVE_END;
	}
	void UXLChartsheet::StaticRegisterNativesUXLChartsheet()
	{
		UClass* Class = UXLChartsheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clone", &UXLChartsheet::execClone },
			{ "Color", &UXLChartsheet::execColor },
			{ "Index", &UXLChartsheet::execIndex },
			{ "IsSelected", &UXLChartsheet::execIsSelected },
			{ "Name", &UXLChartsheet::execName },
			{ "SetColor", &UXLChartsheet::execSetColor },
			{ "SetIndex", &UXLChartsheet::execSetIndex },
			{ "SetName", &UXLChartsheet::execSetName },
			{ "SetSelected", &UXLChartsheet::execSetSelected },
			{ "SetVisible", &UXLChartsheet::execSetVisible },
			{ "Visible", &UXLChartsheet::execVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLChartsheet_Clone_Statics
	{
		struct XLChartsheet_eventClone_Parms
		{
			FString newName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLChartsheet_Clone_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventClone_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_Clone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_Clone_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_Clone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "Clone", nullptr, nullptr, sizeof(XLChartsheet_eventClone_Parms), Z_Construct_UFunction_UXLChartsheet_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Clone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_Clone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Clone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_Color_Statics
	{
		struct XLChartsheet_eventColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLChartsheet_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_Color_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_Color_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "Color", nullptr, nullptr, sizeof(XLChartsheet_eventColor_Parms), Z_Construct_UFunction_UXLChartsheet_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_Index_Statics
	{
		struct XLChartsheet_eventIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLChartsheet_Index_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_Index_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_Index_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_Index_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_Index_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "Index", nullptr, nullptr, sizeof(XLChartsheet_eventIndex_Parms), Z_Construct_UFunction_UXLChartsheet_Index_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Index_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_Index_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Index_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_Index()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_Index_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics
	{
		struct XLChartsheet_eventIsSelected_Parms
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
	void Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLChartsheet_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLChartsheet_eventIsSelected_Parms), &Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "IsSelected", nullptr, nullptr, sizeof(XLChartsheet_eventIsSelected_Parms), Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_IsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_IsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_Name_Statics
	{
		struct XLChartsheet_eventName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLChartsheet_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_Name_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "Name", nullptr, nullptr, sizeof(XLChartsheet_eventName_Parms), Z_Construct_UFunction_UXLChartsheet_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_SetColor_Statics
	{
		struct XLChartsheet_eventSetColor_Parms
		{
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventSetColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "SetColor", nullptr, nullptr, sizeof(XLChartsheet_eventSetColor_Parms), Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics
	{
		struct XLChartsheet_eventSetIndex_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventSetIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "SetIndex", nullptr, nullptr, sizeof(XLChartsheet_eventSetIndex_Parms), Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_SetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_SetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_SetName_Statics
	{
		struct XLChartsheet_eventSetName_Parms
		{
			FString sheetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sheetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLChartsheet_SetName_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventSetName_Parms, sheetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_SetName_Statics::NewProp_sheetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_SetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "SetName", nullptr, nullptr, sizeof(XLChartsheet_eventSetName_Parms), Z_Construct_UFunction_UXLChartsheet_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics
	{
		struct XLChartsheet_eventSetSelected_Parms
		{
			bool selected;
		};
		static void NewProp_selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_selected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((XLChartsheet_eventSetSelected_Parms*)Obj)->selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLChartsheet_eventSetSelected_Parms), &Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::NewProp_selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::NewProp_selected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "SetSelected", nullptr, nullptr, sizeof(XLChartsheet_eventSetSelected_Parms), Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics
	{
		struct XLChartsheet_eventSetVisible_Parms
		{
			EXLSheetState state;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventSetVisible_Parms, state), Z_Construct_UEnum_FreeExcel_EXLSheetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "SetVisible", nullptr, nullptr, sizeof(XLChartsheet_eventSetVisible_Parms), Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLChartsheet_Visible_Statics
	{
		struct XLChartsheet_eventVisible_Parms
		{
			EXLSheetState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLChartsheet_Visible_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLChartsheet_Visible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLChartsheet_eventVisible_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLSheetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLChartsheet_Visible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_Visible_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLChartsheet_Visible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLChartsheet_Visible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLChartsheet_Visible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLChartsheet, nullptr, "Visible", nullptr, nullptr, sizeof(XLChartsheet_eventVisible_Parms), Z_Construct_UFunction_UXLChartsheet_Visible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Visible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLChartsheet_Visible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLChartsheet_Visible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLChartsheet_Visible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLChartsheet_Visible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLChartsheet_NoRegister()
	{
		return UXLChartsheet::StaticClass();
	}
	struct Z_Construct_UClass_UXLChartsheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLChartsheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLChartsheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLChartsheet_Clone, "Clone" }, // 2210318830
		{ &Z_Construct_UFunction_UXLChartsheet_Color, "Color" }, // 538702900
		{ &Z_Construct_UFunction_UXLChartsheet_Index, "Index" }, // 1648184641
		{ &Z_Construct_UFunction_UXLChartsheet_IsSelected, "IsSelected" }, // 277632960
		{ &Z_Construct_UFunction_UXLChartsheet_Name, "Name" }, // 2501851849
		{ &Z_Construct_UFunction_UXLChartsheet_SetColor, "SetColor" }, // 1977838491
		{ &Z_Construct_UFunction_UXLChartsheet_SetIndex, "SetIndex" }, // 3276303568
		{ &Z_Construct_UFunction_UXLChartsheet_SetName, "SetName" }, // 1333721081
		{ &Z_Construct_UFunction_UXLChartsheet_SetSelected, "SetSelected" }, // 1026377114
		{ &Z_Construct_UFunction_UXLChartsheet_SetVisible, "SetVisible" }, // 3967145479
		{ &Z_Construct_UFunction_UXLChartsheet_Visible, "Visible" }, // 3797116754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLChartsheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLChartsheet.h" },
		{ "ModuleRelativePath", "Public/XLChartsheet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLChartsheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLChartsheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLChartsheet_Statics::ClassParams = {
		&UXLChartsheet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLChartsheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLChartsheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLChartsheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLChartsheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLChartsheet, 71232654);
	template<> FREEEXCEL_API UClass* StaticClass<UXLChartsheet>()
	{
		return UXLChartsheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLChartsheet(Z_Construct_UClass_UXLChartsheet, &UXLChartsheet::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLChartsheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLChartsheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
