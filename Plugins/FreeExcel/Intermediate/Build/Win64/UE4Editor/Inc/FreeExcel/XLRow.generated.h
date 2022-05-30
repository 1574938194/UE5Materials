// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLRowDataRange;
class UXLRowDataProxy;
#ifdef FREEEXCEL_XLRow_generated_h
#error "XLRow.generated.h already included, missing '#pragma once' in XLRow.h"
#endif
#define FREEEXCEL_XLRow_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCellsRange); \
	DECLARE_FUNCTION(execCellsAt); \
	DECLARE_FUNCTION(execCells); \
	DECLARE_FUNCTION(execValues); \
	DECLARE_FUNCTION(execCellCount); \
	DECLARE_FUNCTION(execRowNumber); \
	DECLARE_FUNCTION(execSetHidden); \
	DECLARE_FUNCTION(execIsHidden); \
	DECLARE_FUNCTION(execSetDescent); \
	DECLARE_FUNCTION(execDescent); \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execHeight);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCellsRange); \
	DECLARE_FUNCTION(execCellsAt); \
	DECLARE_FUNCTION(execCells); \
	DECLARE_FUNCTION(execValues); \
	DECLARE_FUNCTION(execCellCount); \
	DECLARE_FUNCTION(execRowNumber); \
	DECLARE_FUNCTION(execSetHidden); \
	DECLARE_FUNCTION(execIsHidden); \
	DECLARE_FUNCTION(execSetDescent); \
	DECLARE_FUNCTION(execDescent); \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execHeight);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLRow(); \
	friend struct Z_Construct_UClass_UXLRow_Statics; \
public: \
	DECLARE_CLASS(UXLRow, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLRow)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUXLRow(); \
	friend struct Z_Construct_UClass_UXLRow_Statics; \
public: \
	DECLARE_CLASS(UXLRow, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLRow)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLRow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLRow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLRow(UXLRow&&); \
	NO_API UXLRow(const UXLRow&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLRow(UXLRow&&); \
	NO_API UXLRow(const UXLRow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLRow)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_15_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLRow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLRow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
