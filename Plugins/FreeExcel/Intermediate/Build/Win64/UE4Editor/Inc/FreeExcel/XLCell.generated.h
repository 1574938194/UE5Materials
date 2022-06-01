// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLCell;
enum class EXLValueType : uint8;
struct FDateTime;
#ifdef FREEEXCEL_XLCell_generated_h
#error "XLCell.generated.h already included, missing '#pragma once' in XLCell.h"
#endif
#define FREEEXCEL_XLCell_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCellValue); \
	DECLARE_FUNCTION(execGetFormula); \
	DECLARE_FUNCTION(execSetFormula); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execClearCell); \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execIsFormula); \
	DECLARE_FUNCTION(execCellOffset); \
	DECLARE_FUNCTION(execGetCellReference);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCellValue); \
	DECLARE_FUNCTION(execGetFormula); \
	DECLARE_FUNCTION(execSetFormula); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execClearCell); \
	DECLARE_FUNCTION(execGetDateTime); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execIsFormula); \
	DECLARE_FUNCTION(execCellOffset); \
	DECLARE_FUNCTION(execGetCellReference);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLCell(); \
	friend struct Z_Construct_UClass_UXLCell_Statics; \
public: \
	DECLARE_CLASS(UXLCell, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCell)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUXLCell(); \
	friend struct Z_Construct_UClass_UXLCell_Statics; \
public: \
	DECLARE_CLASS(UXLCell, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCell)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_STANDARD_CONSTRUCTORS \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_ENHANCED_CONSTRUCTORS \
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


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_17_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
