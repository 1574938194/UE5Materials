// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLCellValueProxy;
class UXLCellValue;
enum class EXLValueType : uint8;
struct FDateTime;
#ifdef FREEEXCEL_XLCellValueProxy_generated_h
#error "XLCellValueProxy.generated.h already included, missing '#pragma once' in XLCellValueProxy.h"
#endif
#define FREEEXCEL_XLCellValueProxy_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProxy); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execToCellValue); \
	DECLARE_FUNCTION(execTypeAsString); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execDateTime); \
	DECLARE_FUNCTION(execFloat); \
	DECLARE_FUNCTION(execString); \
	DECLARE_FUNCTION(execInteger); \
	DECLARE_FUNCTION(execBool); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetBool);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetProxy); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execToCellValue); \
	DECLARE_FUNCTION(execTypeAsString); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execDateTime); \
	DECLARE_FUNCTION(execFloat); \
	DECLARE_FUNCTION(execString); \
	DECLARE_FUNCTION(execInteger); \
	DECLARE_FUNCTION(execBool); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetBool);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLCellValueProxy(); \
	friend struct Z_Construct_UClass_UXLCellValueProxy_Statics; \
public: \
	DECLARE_CLASS(UXLCellValueProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCellValueProxy)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUXLCellValueProxy(); \
	friend struct Z_Construct_UClass_UXLCellValueProxy_Statics; \
public: \
	DECLARE_CLASS(UXLCellValueProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCellValueProxy)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLCellValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLCellValueProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLCellValueProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLCellValueProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLCellValueProxy(UXLCellValueProxy&&); \
	NO_API UXLCellValueProxy(const UXLCellValueProxy&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLCellValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLCellValueProxy(UXLCellValueProxy&&); \
	NO_API UXLCellValueProxy(const UXLCellValueProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLCellValueProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLCellValueProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLCellValueProxy)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_16_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLCellValueProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValueProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
