// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXLProperty : uint8;
class UXLWorkbook;
#ifdef FREEEXCEL_XLDocument_generated_h
#error "XLDocument.generated.h already included, missing '#pragma once' in XLDocument.h"
#endif
#define FREEEXCEL_XLDocument_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteProperty); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execProperty); \
	DECLARE_FUNCTION(execWorkbook); \
	DECLARE_FUNCTION(execPath); \
	DECLARE_FUNCTION(execName); \
	DECLARE_FUNCTION(execSaveAs); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execColse); \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execOpen);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteProperty); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execProperty); \
	DECLARE_FUNCTION(execWorkbook); \
	DECLARE_FUNCTION(execPath); \
	DECLARE_FUNCTION(execName); \
	DECLARE_FUNCTION(execSaveAs); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execColse); \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execOpen);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLDocument(); \
	friend struct Z_Construct_UClass_UXLDocument_Statics; \
public: \
	DECLARE_CLASS(UXLDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLDocument)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUXLDocument(); \
	friend struct Z_Construct_UClass_UXLDocument_Statics; \
public: \
	DECLARE_CLASS(UXLDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLDocument)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLDocument(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLDocument) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLDocument); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLDocument(UXLDocument&&); \
	NO_API UXLDocument(const UXLDocument&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLDocument(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLDocument(UXLDocument&&); \
	NO_API UXLDocument(const UXLDocument&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLDocument); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLDocument)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_39_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLDocument>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h


#define FOREACH_ENUM_EXLPROPERTY(op) \
	op(EXLProperty::Title) \
	op(EXLProperty::Subject) \
	op(EXLProperty::Creator) \
	op(EXLProperty::Keywords) \
	op(EXLProperty::Description) \
	op(EXLProperty::LastModifiedBy) \
	op(EXLProperty::LastPrinted) \
	op(EXLProperty::CreationDate) \
	op(EXLProperty::ModificationDate) \
	op(EXLProperty::Category) \
	op(EXLProperty::Application) \
	op(EXLProperty::DocSecurity) \
	op(EXLProperty::ScaleCrop) \
	op(EXLProperty::Manager) \
	op(EXLProperty::Company) \
	op(EXLProperty::LinksUpToDate) \
	op(EXLProperty::SharedDoc) \
	op(EXLProperty::HyperlinkBase) \
	op(EXLProperty::HyperlinksChanged) \
	op(EXLProperty::AppVersion) 

enum class EXLProperty : uint8;
template<> FREEEXCEL_API UEnum* StaticEnum<EXLProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
