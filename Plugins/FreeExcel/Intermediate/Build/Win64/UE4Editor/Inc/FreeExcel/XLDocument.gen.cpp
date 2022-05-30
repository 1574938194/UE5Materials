// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeExcel/Public/XLDocument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXLDocument() {}
// Cross Module References
	FREEEXCEL_API UEnum* Z_Construct_UEnum_FreeExcel_EXLProperty();
	UPackage* Z_Construct_UPackage__Script_FreeExcel();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLDocument_NoRegister();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLDocument();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FREEEXCEL_API UClass* Z_Construct_UClass_UXLWorkbook_NoRegister();
// End Cross Module References
	static UEnum* EXLProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FreeExcel_EXLProperty, Z_Construct_UPackage__Script_FreeExcel(), TEXT("EXLProperty"));
		}
		return Singleton;
	}
	template<> FREEEXCEL_API UEnum* StaticEnum<EXLProperty>()
	{
		return EXLProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXLProperty(EXLProperty_StaticEnum, TEXT("/Script/FreeExcel"), TEXT("EXLProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FreeExcel_EXLProperty_Hash() { return 1262747413U; }
	UEnum* Z_Construct_UEnum_FreeExcel_EXLProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FreeExcel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXLProperty"), 0, Get_Z_Construct_UEnum_FreeExcel_EXLProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXLProperty::Title", (int64)EXLProperty::Title },
				{ "EXLProperty::Subject", (int64)EXLProperty::Subject },
				{ "EXLProperty::Creator", (int64)EXLProperty::Creator },
				{ "EXLProperty::Keywords", (int64)EXLProperty::Keywords },
				{ "EXLProperty::Description", (int64)EXLProperty::Description },
				{ "EXLProperty::LastModifiedBy", (int64)EXLProperty::LastModifiedBy },
				{ "EXLProperty::LastPrinted", (int64)EXLProperty::LastPrinted },
				{ "EXLProperty::CreationDate", (int64)EXLProperty::CreationDate },
				{ "EXLProperty::ModificationDate", (int64)EXLProperty::ModificationDate },
				{ "EXLProperty::Category", (int64)EXLProperty::Category },
				{ "EXLProperty::Application", (int64)EXLProperty::Application },
				{ "EXLProperty::DocSecurity", (int64)EXLProperty::DocSecurity },
				{ "EXLProperty::ScaleCrop", (int64)EXLProperty::ScaleCrop },
				{ "EXLProperty::Manager", (int64)EXLProperty::Manager },
				{ "EXLProperty::Company", (int64)EXLProperty::Company },
				{ "EXLProperty::LinksUpToDate", (int64)EXLProperty::LinksUpToDate },
				{ "EXLProperty::SharedDoc", (int64)EXLProperty::SharedDoc },
				{ "EXLProperty::HyperlinkBase", (int64)EXLProperty::HyperlinkBase },
				{ "EXLProperty::HyperlinksChanged", (int64)EXLProperty::HyperlinksChanged },
				{ "EXLProperty::AppVersion", (int64)EXLProperty::AppVersion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Application.DisplayName", "Application" },
				{ "Application.Name", "EXLProperty::Application" },
				{ "AppVersion.DisplayName", "AppVersion" },
				{ "AppVersion.Name", "EXLProperty::AppVersion" },
				{ "BlueprintType", "true" },
				{ "Category.DisplayName", "Category" },
				{ "Category.Name", "EXLProperty::Category" },
				{ "Company.DisplayName", "Company" },
				{ "Company.Name", "EXLProperty::Company" },
				{ "CreationDate.DisplayName", "CreationDate" },
				{ "CreationDate.Name", "EXLProperty::CreationDate" },
				{ "Creator.DisplayName", "Creator" },
				{ "Creator.Name", "EXLProperty::Creator" },
				{ "Description.DisplayName", "Description" },
				{ "Description.Name", "EXLProperty::Description" },
				{ "DocSecurity.DisplayName", "DocSecurity" },
				{ "DocSecurity.Name", "EXLProperty::DocSecurity" },
				{ "HyperlinkBase.DisplayName", "HyperlinkBase" },
				{ "HyperlinkBase.Name", "EXLProperty::HyperlinkBase" },
				{ "HyperlinksChanged.DisplayName", "HyperlinksChanged" },
				{ "HyperlinksChanged.Name", "EXLProperty::HyperlinksChanged" },
				{ "Keywords.DisplayName", "Keywords" },
				{ "Keywords.Name", "EXLProperty::Keywords" },
				{ "LastModifiedBy.DisplayName", "LastModifiedBy" },
				{ "LastModifiedBy.Name", "EXLProperty::LastModifiedBy" },
				{ "LastPrinted.DisplayName", "LastPrinted" },
				{ "LastPrinted.Name", "EXLProperty::LastPrinted" },
				{ "LinksUpToDate.DisplayName", "LinksUpToDate" },
				{ "LinksUpToDate.Name", "EXLProperty::LinksUpToDate" },
				{ "Manager.DisplayName", "Manager" },
				{ "Manager.Name", "EXLProperty::Manager" },
				{ "ModificationDate.DisplayName", "ModificationDate" },
				{ "ModificationDate.Name", "EXLProperty::ModificationDate" },
				{ "ModuleRelativePath", "Public/XLDocument.h" },
				{ "ScaleCrop.DisplayName", "ScaleCrop" },
				{ "ScaleCrop.Name", "EXLProperty::ScaleCrop" },
				{ "SharedDoc.DisplayName", "SharedDoc" },
				{ "SharedDoc.Name", "EXLProperty::SharedDoc" },
				{ "Subject.DisplayName", "Subject" },
				{ "Subject.Name", "EXLProperty::Subject" },
				{ "Title.DisplayName", "Title" },
				{ "Title.Name", "EXLProperty::Title" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FreeExcel,
				nullptr,
				"EXLProperty",
				"EXLProperty",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UXLDocument::execDeleteProperty)
	{
		P_GET_ENUM(EXLProperty,Z_Param_prop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteProperty(EXLProperty(Z_Param_prop));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSetProperty)
	{
		P_GET_ENUM(EXLProperty,Z_Param_prop);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProperty(EXLProperty(Z_Param_prop),Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execProperty)
	{
		P_GET_ENUM(EXLProperty,Z_Param_prop);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Property(EXLProperty(Z_Param_prop));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execWorkbook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXLWorkbook**)Z_Param__Result=P_THIS->Workbook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Path();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Name();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSaveAs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAs(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execColse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Colse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execCreate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Create(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXLDocument::execOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open(Z_Param_path);
		P_NATIVE_END;
	}
	void UXLDocument::StaticRegisterNativesUXLDocument()
	{
		UClass* Class = UXLDocument::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Colse", &UXLDocument::execColse },
			{ "Create", &UXLDocument::execCreate },
			{ "DeleteProperty", &UXLDocument::execDeleteProperty },
			{ "IsValid", &UXLDocument::execIsValid },
			{ "Name", &UXLDocument::execName },
			{ "Open", &UXLDocument::execOpen },
			{ "Path", &UXLDocument::execPath },
			{ "Property", &UXLDocument::execProperty },
			{ "Save", &UXLDocument::execSave },
			{ "SaveAs", &UXLDocument::execSaveAs },
			{ "SetProperty", &UXLDocument::execSetProperty },
			{ "Workbook", &UXLDocument::execWorkbook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXLDocument_Colse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Colse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Close the current document\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Close the current document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Colse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Colse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Colse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Colse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Colse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Colse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Create_Statics
	{
		struct XLDocument_eventCreate_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_Create_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventCreate_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Create_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Create_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Create a new .xlsx file with the given path.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Create a new .xlsx file with the given path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Create", nullptr, nullptr, sizeof(XLDocument_eventCreate_Parms), Z_Construct_UFunction_UXLDocument_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics
	{
		struct XLDocument_eventDeleteProperty_Parms
		{
			EXLProperty prop;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_prop_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_prop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::NewProp_prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::NewProp_prop = { "prop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventDeleteProperty_Parms, prop), Z_Construct_UEnum_FreeExcel_EXLProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::NewProp_prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::NewProp_prop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delete the property from the document\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Delete the property from the document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "DeleteProperty", nullptr, nullptr, sizeof(XLDocument_eventDeleteProperty_Parms), Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_DeleteProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_DeleteProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_IsValid_Statics
	{
		struct XLDocument_eventIsValid_Parms
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
	void Z_Construct_UFunction_UXLDocument_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XLDocument_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXLDocument_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XLDocument_eventIsValid_Parms), &Z_Construct_UFunction_UXLDocument_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "IsValid", nullptr, nullptr, sizeof(XLDocument_eventIsValid_Parms), Z_Construct_UFunction_UXLDocument_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Name_Statics
	{
		struct XLDocument_eventName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Name_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the filename of the current document, e.g. \"spreadsheet.xlsx\".\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Get the filename of the current document, e.g. \"spreadsheet.xlsx\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Name", nullptr, nullptr, sizeof(XLDocument_eventName_Parms), Z_Construct_UFunction_UXLDocument_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Open_Statics
	{
		struct XLDocument_eventOpen_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_Open_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventOpen_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_Open_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Open_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Open_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//  Open the .xlsx file with the given path\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Open the .xlsx file with the given path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Open", nullptr, nullptr, sizeof(XLDocument_eventOpen_Parms), Z_Construct_UFunction_UXLDocument_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Path_Statics
	{
		struct XLDocument_eventPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_Path_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_Path_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Path_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Path_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the full path of the current document, e.g. \"drive/blah/spreadsheet.xlsx\"\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Get the full path of the current document, e.g. \"drive/blah/spreadsheet.xlsx\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Path_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Path", nullptr, nullptr, sizeof(XLDocument_eventPath_Parms), Z_Construct_UFunction_UXLDocument_Path_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Path_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Path_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Path_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Path()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Path_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Property_Statics
	{
		struct XLDocument_eventProperty_Parms
		{
			EXLProperty prop;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_prop_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_prop;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLDocument_Property_Statics::NewProp_prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLDocument_Property_Statics::NewProp_prop = { "prop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventProperty_Parms, prop), Z_Construct_UEnum_FreeExcel_EXLProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_Property_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_Property_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Property_Statics::NewProp_prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Property_Statics::NewProp_prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Property_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Property_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the requested document property.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Get the requested document property." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Property_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Property", nullptr, nullptr, sizeof(XLDocument_eventProperty_Parms), Z_Construct_UFunction_UXLDocument_Property_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Property_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Property_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Property_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Property()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Property_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Save_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Save_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Save the current document using the current filename, overwriting the existing file.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Save the current document using the current filename, overwriting the existing file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Save", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SaveAs_Statics
	{
		struct XLDocument_eventSaveAs_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_SaveAs_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSaveAs_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SaveAs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SaveAs_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SaveAs_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Save the document with a new name. If a file exists with that name, it will be overwritten.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Save the document with a new name. If a file exists with that name, it will be overwritten." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SaveAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SaveAs", nullptr, nullptr, sizeof(XLDocument_eventSaveAs_Parms), Z_Construct_UFunction_UXLDocument_SaveAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SaveAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SaveAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SaveAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SaveAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SaveAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_SetProperty_Statics
	{
		struct XLDocument_eventSetProperty_Parms
		{
			EXLProperty prop;
			FString value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_prop_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_prop;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXLDocument_SetProperty_Statics::NewProp_prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXLDocument_SetProperty_Statics::NewProp_prop = { "prop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSetProperty_Parms, prop), Z_Construct_UEnum_FreeExcel_EXLProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXLDocument_SetProperty_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventSetProperty_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_SetProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SetProperty_Statics::NewProp_prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SetProperty_Statics::NewProp_prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_SetProperty_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_SetProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Set a property\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Set a property" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_SetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "SetProperty", nullptr, nullptr, sizeof(XLDocument_eventSetProperty_Parms), Z_Construct_UFunction_UXLDocument_SetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_SetProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_SetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_SetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_SetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXLDocument_Workbook_Statics
	{
		struct XLDocument_eventWorkbook_Parms
		{
			UXLWorkbook* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXLDocument_Workbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XLDocument_eventWorkbook_Parms, ReturnValue), Z_Construct_UClass_UXLWorkbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXLDocument_Workbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXLDocument_Workbook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXLDocument_Workbook_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the underlying workbook object, as a const object.\n" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
		{ "ToolTip", "Get the underlying workbook object, as a const object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXLDocument_Workbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXLDocument, nullptr, "Workbook", nullptr, nullptr, sizeof(XLDocument_eventWorkbook_Parms), Z_Construct_UFunction_UXLDocument_Workbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Workbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXLDocument_Workbook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXLDocument_Workbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXLDocument_Workbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXLDocument_Workbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXLDocument_NoRegister()
	{
		return UXLDocument::StaticClass();
	}
	struct Z_Construct_UClass_UXLDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXLDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeExcel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXLDocument_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXLDocument_Colse, "Colse" }, // 3313051321
		{ &Z_Construct_UFunction_UXLDocument_Create, "Create" }, // 1900542394
		{ &Z_Construct_UFunction_UXLDocument_DeleteProperty, "DeleteProperty" }, // 1341521883
		{ &Z_Construct_UFunction_UXLDocument_IsValid, "IsValid" }, // 3854916762
		{ &Z_Construct_UFunction_UXLDocument_Name, "Name" }, // 3881567543
		{ &Z_Construct_UFunction_UXLDocument_Open, "Open" }, // 726938079
		{ &Z_Construct_UFunction_UXLDocument_Path, "Path" }, // 4141878097
		{ &Z_Construct_UFunction_UXLDocument_Property, "Property" }, // 3397811829
		{ &Z_Construct_UFunction_UXLDocument_Save, "Save" }, // 2228721646
		{ &Z_Construct_UFunction_UXLDocument_SaveAs, "SaveAs" }, // 2112885906
		{ &Z_Construct_UFunction_UXLDocument_SetProperty, "SetProperty" }, // 1495858212
		{ &Z_Construct_UFunction_UXLDocument_Workbook, "Workbook" }, // 2240561964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXLDocument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XLDocument.h" },
		{ "ModuleRelativePath", "Public/XLDocument.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXLDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXLDocument>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXLDocument_Statics::ClassParams = {
		&UXLDocument::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXLDocument_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXLDocument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXLDocument()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXLDocument_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXLDocument, 600661870);
	template<> FREEEXCEL_API UClass* StaticClass<UXLDocument>()
	{
		return UXLDocument::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXLDocument(Z_Construct_UClass_UXLDocument, &UXLDocument::StaticClass, TEXT("/Script/FreeExcel"), TEXT("UXLDocument"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXLDocument);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
