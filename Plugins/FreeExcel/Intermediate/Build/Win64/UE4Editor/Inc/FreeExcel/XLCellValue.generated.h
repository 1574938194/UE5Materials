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
#ifdef FREEEXCEL_XLCellValue_generated_h
#error "XLCellValue.generated.h already included, missing '#pragma once' in XLCellValue.h"
#endif
#define FREEEXCEL_XLCellValue_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProxy); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execTypeAsString); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execDateTime); \
	DECLARE_FUNCTION(execString); \
	DECLARE_FUNCTION(execFloat); \
	DECLARE_FUNCTION(execInteger); \
	DECLARE_FUNCTION(execBool); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetBool);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetProxy); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execTypeAsString); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execDateTime); \
	DECLARE_FUNCTION(execString); \
	DECLARE_FUNCTION(execFloat); \
	DECLARE_FUNCTION(execInteger); \
	DECLARE_FUNCTION(execBool); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetDateTime); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetBool);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLCellValue(); \
	friend struct Z_Construct_UClass_UXLCellValue_Statics; \
public: \
	DECLARE_CLASS(UXLCellValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCellValue)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUXLCellValue(); \
	friend struct Z_Construct_UClass_UXLCellValue_Statics; \
public: \
	DECLARE_CLASS(UXLCellValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLCellValue)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLCellValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLCellValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLCellValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLCellValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLCellValue(UXLCellValue&&); \
	NO_API UXLCellValue(const UXLCellValue&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLCellValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLCellValue(UXLCellValue&&); \
	NO_API UXLCellValue(const UXLCellValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLCellValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLCellValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLCellValue)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_17_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLCellValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLCellValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
