// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLSheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLSheet() {}
// Cross Module References
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLSheet_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLSheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLSheetState();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLChartsheet_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorksheet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXLSheet::execToChartsheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLChartsheet**)Z_Param__Result=P_THIS->ToChartsheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execToWorksheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorksheet**)Z_Param__Result=P_THIS->ToWorksheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execClone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clone(Z_Param_newName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execIsChartsheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChartsheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execIsWorksheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWorksheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_selected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_selected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Name();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execSetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Index();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execSetColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->Color();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execSetVisibility)
	{
		P_GET_ENUM(EXLSheetState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(EXLSheetState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLSheet::execVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EXLSheetState*)Z_Param__Result=P_THIS->Visibility();
		P_NATIVE_END;
	}
	void UXLSheet::StaticRegisterNativesUXLSheet()
	{
		UClass* Class = UXLSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clone", &UXLSheet::execClone },
			{ "Color", &UXLSheet::execColor },
			{ "Index", &UXLSheet::execIndex },
			{ "IsChartsheet", &UXLSheet::execIsChartsheet },
			{ "IsWorksheet", &UXLSheet::execIsWorksheet },
			{ "Name", &UXLSheet::execName },
			{ "SetColor", &UXLSheet::execSetColor },
			{ "SetIndex", &UXLSheet::execSetIndex },
			{ "SetName", &UXLSheet::execSetName },
			{ "SetSelected", &UXLSheet::execSetSelected },
			{ "SetVisibility", &UXLSheet::execSetVisibility },
			{ "ToChartsheet", &UXLSheet::execToChartsheet },
			{ "ToWorksheet", &UXLSheet::execToWorksheet },
			{ "Visibility", &UXLSheet::execVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLSheet_Clone_Statics
	{
		struct XLSheet_eventClone_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLSheet_Clone_Statics::NewProp_newName = { "newName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventClone_Parms, newName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_Clone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_Clone_Statics::NewProp_newName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_Clone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method for cloning the sheet.\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method for cloning the sheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "Clone", nullptr, nullptr, sizeof(XLSheet_eventClone_Parms), Z_Construct_UFunction_UXLSheet_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Clone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_Clone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Clone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_Color_Statics
	{
		struct XLSheet_eventColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLSheet_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_Color_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_Color_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "Color", nullptr, nullptr, sizeof(XLSheet_eventColor_Parms), Z_Construct_UFunction_UXLSheet_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_Index_Statics
	{
		struct XLSheet_eventIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLSheet_Index_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_Index_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_Index_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_Index_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method for getting the index of the sheet.\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method for getting the index of the sheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_Index_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "Index", nullptr, nullptr, sizeof(XLSheet_eventIndex_Parms), Z_Construct_UFunction_UXLSheet_Index_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Index_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_Index_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Index_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_Index()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_Index_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics
	{
		struct XLSheet_eventIsChartsheet_Parms
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
	void Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLSheet_eventIsChartsheet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLSheet_eventIsChartsheet_Parms), &Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "IsChartsheet", nullptr, nullptr, sizeof(XLSheet_eventIsChartsheet_Parms), Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_IsChartsheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_IsChartsheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics
	{
		struct XLSheet_eventIsWorksheet_Parms
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
	void Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLSheet_eventIsWorksheet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLSheet_eventIsWorksheet_Parms), &Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "IsWorksheet", nullptr, nullptr, sizeof(XLSheet_eventIsWorksheet_Parms), Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_IsWorksheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_IsWorksheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_Name_Statics
	{
		struct XLSheet_eventName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLSheet_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_Name_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Method to retrieve the name of the sheet.\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method to retrieve the name of the sheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "Name", nullptr, nullptr, sizeof(XLSheet_eventName_Parms), Z_Construct_UFunction_UXLSheet_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_SetColor_Statics
	{
		struct XLSheet_eventSetColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXLSheet_SetColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventSetColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_SetColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_SetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "SetColor", nullptr, nullptr, sizeof(XLSheet_eventSetColor_Parms), Z_Construct_UFunction_UXLSheet_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_SetIndex_Statics
	{
		struct XLSheet_eventSetIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXLSheet_SetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventSetIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_SetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_SetIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_SetIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method for setting the index of the sheet. This effectively moves the sheet to a different position.\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method for setting the index of the sheet. This effectively moves the sheet to a different position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_SetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "SetIndex", nullptr, nullptr, sizeof(XLSheet_eventSetIndex_Parms), Z_Construct_UFunction_UXLSheet_SetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_SetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_SetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_SetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_SetName_Statics
	{
		struct XLSheet_eventSetName_Parms
		{
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLSheet_SetName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventSetName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_SetName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_SetName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method for renaming the sheet.\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method for renaming the sheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "SetName", nullptr, nullptr, sizeof(XLSheet_eventSetName_Parms), Z_Construct_UFunction_UXLSheet_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_SetSelected_Statics
	{
		struct XLSheet_eventSetSelected_Parms
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
	void Z_Construct_UFunction_UXLSheet_SetSelected_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((XLSheet_eventSetSelected_Parms*)Obj)->selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLSheet_SetSelected_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLSheet_eventSetSelected_Parms), &Z_Construct_UFunction_UXLSheet_SetSelected_Statics::NewProp_selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_SetSelected_Statics::NewProp_selected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "SetSelected", nullptr, nullptr, sizeof(XLSheet_eventSetSelected_Parms), Z_Construct_UFunction_UXLSheet_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_SetVisibility_Statics
	{
		struct XLSheet_eventSetVisibility_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventSetVisibility_Parms, state), Z_Construct_UEnum_FreeExcel_EXLSheetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method for setting the state of the sheet\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method for setting the state of the sheet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "SetVisibility", nullptr, nullptr, sizeof(XLSheet_eventSetVisibility_Parms), Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics
	{
		struct XLSheet_eventToChartsheet_Parms
		{
			UXLChartsheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventToChartsheet_Parms, ReturnValue), Z_Construct_UClass_UXLChartsheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// NOLINT\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "NOLINT" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "ToChartsheet", nullptr, nullptr, sizeof(XLSheet_eventToChartsheet_Parms), Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_ToChartsheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_ToChartsheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics
	{
		struct XLSheet_eventToWorksheet_Parms
		{
			UXLWorksheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventToWorksheet_Parms, ReturnValue), Z_Construct_UClass_UXLWorksheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "ToWorksheet", nullptr, nullptr, sizeof(XLSheet_eventToWorksheet_Parms), Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_ToWorksheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_ToWorksheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLSheet_Visibility_Statics
	{
		struct XLSheet_eventVisibility_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLSheet_Visibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLSheet_Visibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLSheet_eventVisibility_Parms, ReturnValue), Z_Construct_UEnum_FreeExcel_EXLSheetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLSheet_Visibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_Visibility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLSheet_Visibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLSheet_Visibility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Method for getting the current visibility state of the sheet.\n" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
		{ "ToolTip", "Method for getting the current visibility state of the sheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLSheet_Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLSheet, nullptr, "Visibility", nullptr, nullptr, sizeof(XLSheet_eventVisibility_Parms), Z_Construct_UFunction_UXLSheet_Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Visibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLSheet_Visibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLSheet_Visibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLSheet_Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLSheet_Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLSheet_NoRegister()
	{
		return UXLSheet::StaticClass();
	}
	struct Z_Construct_UClass_UXLSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLSheet_Clone, "Clone" }, // 84884685
		{ &Z_Construct_UFunction_UXLSheet_Color, "Color" }, // 4103391805
		{ &Z_Construct_UFunction_UXLSheet_Index, "Index" }, // 2687890546
		{ &Z_Construct_UFunction_UXLSheet_IsChartsheet, "IsChartsheet" }, // 748663257
		{ &Z_Construct_UFunction_UXLSheet_IsWorksheet, "IsWorksheet" }, // 2411524145
		{ &Z_Construct_UFunction_UXLSheet_Name, "Name" }, // 1736097038
		{ &Z_Construct_UFunction_UXLSheet_SetColor, "SetColor" }, // 1333001221
		{ &Z_Construct_UFunction_UXLSheet_SetIndex, "SetIndex" }, // 3444538255
		{ &Z_Construct_UFunction_UXLSheet_SetName, "SetName" }, // 1797147670
		{ &Z_Construct_UFunction_UXLSheet_SetSelected, "SetSelected" }, // 64742696
		{ &Z_Construct_UFunction_UXLSheet_SetVisibility, "SetVisibility" }, // 4027795511
		{ &Z_Construct_UFunction_UXLSheet_ToChartsheet, "ToChartsheet" }, // 2918100558
		{ &Z_Construct_UFunction_UXLSheet_ToWorksheet, "ToWorksheet" }, // 3740301298
		{ &Z_Construct_UFunction_UXLSheet_Visibility, "Visibility" }, // 3427021737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XLSheet.h" },
		{ "ModuleRelativePath", "Public/XLSheet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLSheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLSheet_Statics::ClassParams = {
		&UXLSheet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLSheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLSheet, 3916378947);
	template<> FREEEXCEL_API UClass* StaticClass<UXLSheet>()
	{
		return UXLSheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLSheet(Z_Construct_UClass_UXLSheet, &UXLSheet::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
