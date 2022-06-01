// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLWorksheet;
class UXLDocument;
#ifdef FREEEXCEL_XLDocument_generated_h
#error "XLDocument.generated.h already included, missing '#pragma once' in XLDocument.h"
#endif
#define FREEEXCEL_XLDocument_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentSheet); \
	DECLARE_FUNCTION(execGetPreviousSheet); \
	DECLARE_FUNCTION(execGetCurrentSheet); \
	DECLARE_FUNCTION(execSetFullCalculationOnLoad); \
	DECLARE_FUNCTION(execDeleteNamedRanges); \
	DECLARE_FUNCTION(execSheetExists); \
	DECLARE_FUNCTION(execSheetNames); \
	DECLARE_FUNCTION(execSheetCount); \
	DECLARE_FUNCTION(execIndexOfSheet); \
	DECLARE_FUNCTION(execSetSheetIndex); \
	DECLARE_FUNCTION(execCloneSheet); \
	DECLARE_FUNCTION(execDeleteSheet); \
	DECLARE_FUNCTION(execGetOrCreateSheetWithName); \
	DECLARE_FUNCTION(execGetSheetAt); \
	DECLARE_FUNCTION(execExcelIsValid); \
	DECLARE_FUNCTION(execExcelFullPath); \
	DECLARE_FUNCTION(execExcelFileName); \
	DECLARE_FUNCTION(execSaveExcelAs); \
	DECLARE_FUNCTION(execSaveExcel); \
	DECLARE_FUNCTION(execCloseExcel); \
	DECLARE_FUNCTION(execCreateExcel); \
	DECLARE_FUNCTION(execOpenExcel);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentSheet); \
	DECLARE_FUNCTION(execGetPreviousSheet); \
	DECLARE_FUNCTION(execGetCurrentSheet); \
	DECLARE_FUNCTION(execSetFullCalculationOnLoad); \
	DECLARE_FUNCTION(execDeleteNamedRanges); \
	DECLARE_FUNCTION(execSheetExists); \
	DECLARE_FUNCTION(execSheetNames); \
	DECLARE_FUNCTION(execSheetCount); \
	DECLARE_FUNCTION(execIndexOfSheet); \
	DECLARE_FUNCTION(execSetSheetIndex); \
	DECLARE_FUNCTION(execCloneSheet); \
	DECLARE_FUNCTION(execDeleteSheet); \
	DECLARE_FUNCTION(execGetOrCreateSheetWithName); \
	DECLARE_FUNCTION(execGetSheetAt); \
	DECLARE_FUNCTION(execExcelIsValid); \
	DECLARE_FUNCTION(execExcelFullPath); \
	DECLARE_FUNCTION(execExcelFileName); \
	DECLARE_FUNCTION(execSaveExcelAs); \
	DECLARE_FUNCTION(execSaveExcel); \
	DECLARE_FUNCTION(execCloseExcel); \
	DECLARE_FUNCTION(execCreateExcel); \
	DECLARE_FUNCTION(execOpenExcel);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLDocument(); \
	friend struct Z_Construct_UClass_UXLDocument_Statics; \
public: \
	DECLARE_CLASS(UXLDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLDocument)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUXLDocument(); \
	friend struct Z_Construct_UClass_UXLDocument_Statics; \
public: \
	DECLARE_CLASS(UXLDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLDocument)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_STANDARD_CONSTRUCTORS \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_ENHANCED_CONSTRUCTORS \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_16_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLDocument>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLDocument_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
