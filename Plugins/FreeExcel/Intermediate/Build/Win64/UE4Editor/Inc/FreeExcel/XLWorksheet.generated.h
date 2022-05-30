// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLCellReference;
class UXLRow;
class UXLRowRange;
class UXLCellRange;
class UXLCell;
struct FColor;
enum class EXLSheetState : uint8;
#ifdef FREEEXCEL_XLWorksheet_generated_h
#error "XLWorksheet.generated.h already included, missing '#pragma once' in XLWorksheet.h"
#endif
#define FREEEXCEL_XLWorksheet_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSheetName); \
	DECLARE_FUNCTION(execRowCount); \
	DECLARE_FUNCTION(execColCount); \
	DECLARE_FUNCTION(execLastCell); \
	DECLARE_FUNCTION(execRow); \
	DECLARE_FUNCTION(execRowsRange); \
	DECLARE_FUNCTION(execRowsAt); \
	DECLARE_FUNCTION(execRows); \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSheetName); \
	DECLARE_FUNCTION(execRowCount); \
	DECLARE_FUNCTION(execColCount); \
	DECLARE_FUNCTION(execLastCell); \
	DECLARE_FUNCTION(execRow); \
	DECLARE_FUNCTION(execRowsRange); \
	DECLARE_FUNCTION(execRowsAt); \
	DECLARE_FUNCTION(execRows); \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLWorksheet(); \
	friend struct Z_Construct_UClass_UXLWorksheet_Statics; \
public: \
	DECLARE_CLASS(UXLWorksheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLWorksheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUXLWorksheet(); \
	friend struct Z_Construct_UClass_UXLWorksheet_Statics; \
public: \
	DECLARE_CLASS(UXLWorksheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLWorksheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_STANDARD_CONSTRUCTORS \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_ENHANCED_CONSTRUCTORS \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_31_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLWorksheet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLWorksheet_h


#define FOREACH_ENUM_EXLSHEETTYPE(op) \
	op(EXLSheetType::Worksheet) \
	op(EXLSheetType::Chartsheet) \
	op(EXLSheetType::Dialogsheet) \
	op(EXLSheetType::Macrosheet) 

enum class EXLSheetType : uint8;
template<> FREEEXCEL_API UEnum* StaticEnum<EXLSheetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
