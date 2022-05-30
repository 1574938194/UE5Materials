// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXLSheetType : uint8;
class UXLChartsheet;
class UXLWorksheet;
class UXLSheet;
#ifdef FREEEXCEL_XLWorkbook_generated_h
#error "XLWorkbook.generated.h already included, missing '#pragma once' in XLWorkbook.h"
#endif
#define FREEEXCEL_XLWorkbook_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFullCalculationOnLoad); \
	DECLARE_FUNCTION(execDeleteNamedRanges); \
	DECLARE_FUNCTION(execChartsheetExists); \
	DECLARE_FUNCTION(execWorksheetExists); \
	DECLARE_FUNCTION(execSheetExists); \
	DECLARE_FUNCTION(execChartsheetNames); \
	DECLARE_FUNCTION(execWorksheetNames); \
	DECLARE_FUNCTION(execSheetNames); \
	DECLARE_FUNCTION(execChartsheetCount); \
	DECLARE_FUNCTION(execWorksheetCount); \
	DECLARE_FUNCTION(execSheetCount); \
	DECLARE_FUNCTION(execTypeOfSheetAt); \
	DECLARE_FUNCTION(execTypeOfSheet); \
	DECLARE_FUNCTION(execIndexOfSheet); \
	DECLARE_FUNCTION(execSetSheetIndex); \
	DECLARE_FUNCTION(execCloneSheet); \
	DECLARE_FUNCTION(execAddWorksheet); \
	DECLARE_FUNCTION(execDeleteSheet); \
	DECLARE_FUNCTION(execChartsheet); \
	DECLARE_FUNCTION(execWorksheet); \
	DECLARE_FUNCTION(execSheet); \
	DECLARE_FUNCTION(execSheetAt);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFullCalculationOnLoad); \
	DECLARE_FUNCTION(execDeleteNamedRanges); \
	DECLARE_FUNCTION(execChartsheetExists); \
	DECLARE_FUNCTION(execWorksheetExists); \
	DECLARE_FUNCTION(execSheetExists); \
	DECLARE_FUNCTION(execChartsheetNames); \
	DECLARE_FUNCTION(execWorksheetNames); \
	DECLARE_FUNCTION(execSheetNames); \
	DECLARE_FUNCTION(execChartsheetCount); \
	DECLARE_FUNCTION(execWorksheetCount); \
	DECLARE_FUNCTION(execSheetCount); \
	DECLARE_FUNCTION(execTypeOfSheetAt); \
	DECLARE_FUNCTION(execTypeOfSheet); \
	DECLARE_FUNCTION(execIndexOfSheet); \
	DECLARE_FUNCTION(execSetSheetIndex); \
	DECLARE_FUNCTION(execCloneSheet); \
	DECLARE_FUNCTION(execAddWorksheet); \
	DECLARE_FUNCTION(execDeleteSheet); \
	DECLARE_FUNCTION(execChartsheet); \
	DECLARE_FUNCTION(execWorksheet); \
	DECLARE_FUNCTION(execSheet); \
	DECLARE_FUNCTION(execSheetAt);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLWorkbook(); \
	friend struct Z_Construct_UClass_UXLWorkbook_Statics; \
public: \
	DECLARE_CLASS(UXLWorkbook, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLWorkbook)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUXLWorkbook(); \
	friend struct Z_Construct_UClass_UXLWorkbook_Statics; \
public: \
	DECLARE_CLASS(UXLWorkbook, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLWorkbook)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLWorkbook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLWorkbook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLWorkbook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLWorkbook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLWorkbook(UXLWorkbook&&); \
	NO_API UXLWorkbook(const UXLWorkbook&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLWorkbook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLWorkbook(UXLWorkbook&&); \
	NO_API UXLWorkbook(const UXLWorkbook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLWorkbook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLWorkbook); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLWorkbook)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_19_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLWorkbook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorkbook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
