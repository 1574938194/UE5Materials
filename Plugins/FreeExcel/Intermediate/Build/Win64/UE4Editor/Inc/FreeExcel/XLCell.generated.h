// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLFormulaProxy;
class UXLCell;
class UXLCellReference;
class UXLCellValueProxy;
#ifdef FREEEXCEL_XLCell_generated_h
#error "XLCell.generated.h already included, missing '#pragma once' in XLCell.h"
#endif
#define FREEEXCEL_XLCell_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFormula); \
	DECLARE_FUNCTION(execHasFormula); \
	DECLARE_FUNCTION(execOffset); \
	DECLARE_FUNCTION(execCellReference); \
	DECLARE_FUNCTION(execValue);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFormula); \
	DECLARE_FUNCTION(execHasFormula); \
	DECLARE_FUNCTION(execOffset); \
	DECLARE_FUNCTION(execCellReference); \
	DECLARE_FUNCTION(execValue);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLCell(); \
	friend struct Z_Construct_UClass_UXLCell_Statics; \
public: \
	DECLARE_CLASS(UXLCell, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCell)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUXLCell(); \
	friend struct Z_Construct_UClass_UXLCell_Statics; \
public: \
	DECLARE_CLASS(UXLCell, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCell)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLCell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLCell(UXLCell&&); \
	NO_API UXLCell(const UXLCell&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLCell(UXLCell&&); \
	NO_API UXLCell(const UXLCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLCell); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLCell)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_18_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
