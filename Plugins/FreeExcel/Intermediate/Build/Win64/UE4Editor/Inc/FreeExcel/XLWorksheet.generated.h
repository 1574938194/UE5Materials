// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXLValueType : uint8;
struct FDateTime;
class UXLCellReference;
class UXLCellRange;
class UXLCell;
struct FColor;
enum class EXLSheetState : uint8;
#ifdef FREEEXCEL_XLWorksheet_generated_h
#error "XLWorksheet.generated.h already included, missing '#pragma once' in XLWorksheet.h"
#endif
#define FREEEXCEL_XLWorksheet_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRowCellCount); \
	DECLARE_FUNCTION(execSetRowHidden); \
	DECLARE_FUNCTION(execIsRowHidden); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetSourceAt); \
	DECLARE_FUNCTION(execIsFormulaCell); \
	DECLARE_FUNCTION(execIsFormulaCellAt); \
	DECLARE_FUNCTION(execSetFormula); \
	DECLARE_FUNCTION(execSetFormulaAt); \
	DECLARE_FUNCTION(execCellType); \
	DECLARE_FUNCTION(execCellTypeAt); \
	DECLARE_FUNCTION(execClearCell); \
	DECLARE_FUNCTION(execClearCellAt); \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execGetDateTimeAt); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetFloatAt); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetStringAt); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetIntegerAt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetBoolAt); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetDateTimeAt); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetFloatAt); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetStringAt); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetIntegerAt); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execSetBoolAt); \
	DECLARE_FUNCTION(execSheetRename); \
	DECLARE_FUNCTION(execRowCount); \
	DECLARE_FUNCTION(execColCount); \
	DECLARE_FUNCTION(execLastCell); \
	DECLARE_FUNCTION(execRange); \
	DECLARE_FUNCTION(execRangeInUse); \
	DECLARE_FUNCTION(execCellAt); \
	DECLARE_FUNCTION(execCellWithRef); \
	DECLARE_FUNCTION(execCell); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execName); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execColor); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execVisible);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRowCellCount); \
	DECLARE_FUNCTION(execSetRowHidden); \
	DECLARE_FUNCTION(execIsRowHidden); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetSourceAt); \
	DECLARE_FUNCTION(execIsFormulaCell); \
	DECLARE_FUNCTION(execIsFormulaCellAt); \
	DECLARE_FUNCTION(execSetFormula); \
	DECLARE_FUNCTION(execSetFormulaAt); \
	DECLARE_FUNCTION(execCellType); \
	DECLARE_FUNCTION(execCellTypeAt); \
	DECLARE_FUNCTION(execClearCell); \
	DECLARE_FUNCTION(execClearCellAt); \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execGetDateTimeAt); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetFloatAt); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetStringAt); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetIntegerAt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetBoolAt); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetDateTimeAt); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetFloatAt); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetStringAt); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetIntegerAt); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execSetBoolAt); \
	DECLARE_FUNCTION(execSheetRename); \
	DECLARE_FUNCTION(execRowCount); \
	DECLARE_FUNCTION(execColCount); \
	DECLARE_FUNCTION(execLastCell); \
	DECLARE_FUNCTION(execRange); \
	DECLARE_FUNCTION(execRangeInUse); \
	DECLARE_FUNCTION(execCellAt); \
	DECLARE_FUNCTION(execCellWithRef); \
	DECLARE_FUNCTION(execCell); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execName); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execColor); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execVisible);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLWorksheet(); \
	friend struct Z_Construct_UClass_UXLWorksheet_Statics; \
public: \
	DECLARE_CLASS(UXLWorksheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLWorksheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUXLWorksheet(); \
	friend struct Z_Construct_UClass_UXLWorksheet_Statics; \
public: \
	DECLARE_CLASS(UXLWorksheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLWorksheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLWorksheet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLWorksheet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLWorksheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLWorksheet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLWorksheet(UXLWorksheet&&); \
	NO_API UXLWorksheet(const UXLWorksheet&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLWorksheet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLWorksheet(UXLWorksheet&&); \
	NO_API UXLWorksheet(const UXLWorksheet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLWorksheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLWorksheet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLWorksheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_21_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLWorksheet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
