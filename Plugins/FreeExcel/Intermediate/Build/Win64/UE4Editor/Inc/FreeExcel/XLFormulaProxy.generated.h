// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLFormula;
class UXLFormulaProxy;
#ifdef FREEEXCEL_XLFormulaProxy_generated_h
#error "XLFormulaProxy.generated.h already included, missing '#pragma once' in XLFormulaProxy.h"
#endif
#define FREEEXCEL_XLFormulaProxy_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFormula); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execString); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execSet);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFormula); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execString); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execSet);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLFormulaProxy(); \
	friend struct Z_Construct_UClass_UXLFormulaProxy_Statics; \
public: \
	DECLARE_CLASS(UXLFormulaProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLFormulaProxy)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUXLFormulaProxy(); \
	friend struct Z_Construct_UClass_UXLFormulaProxy_Statics; \
public: \
	DECLARE_CLASS(UXLFormulaProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLFormulaProxy)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLFormulaProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLFormulaProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLFormulaProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLFormulaProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLFormulaProxy(UXLFormulaProxy&&); \
	NO_API UXLFormulaProxy(const UXLFormulaProxy&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLFormulaProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLFormulaProxy(UXLFormulaProxy&&); \
	NO_API UXLFormulaProxy(const UXLFormulaProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLFormulaProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLFormulaProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLFormulaProxy)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_17_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLFormulaProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLFormulaProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
