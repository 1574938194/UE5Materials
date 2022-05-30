// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXLChartsheet;
class UXLWorksheet;
struct FColor;
enum class EXLSheetState : uint8;
#ifdef FREEEXCEL_XLSheet_generated_h
#error "XLSheet.generated.h already included, missing '#pragma once' in XLSheet.h"
#endif
#define FREEEXCEL_XLSheet_generated_h

#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_SPARSE_DATA
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToChartsheet); \
	DECLARE_FUNCTION(execToWorksheet); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execIsChartsheet); \
	DECLARE_FUNCTION(execIsWorksheet); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execName); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execColor); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execVisibility);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToChartsheet); \
	DECLARE_FUNCTION(execToWorksheet); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execIsChartsheet); \
	DECLARE_FUNCTION(execIsWorksheet); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execName); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execColor); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execVisibility);


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXLSheet(); \
	friend struct Z_Construct_UClass_UXLSheet_Statics; \
public: \
	DECLARE_CLASS(UXLSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLSheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUXLSheet(); \
	friend struct Z_Construct_UClass_UXLSheet_Statics; \
public: \
	DECLARE_CLASS(UXLSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FreeExcel"), NO_API) \
	DECLARE_SERIALIZER(UXLSheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLSheet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLSheet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLSheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLSheet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLSheet(UXLSheet&&); \
	NO_API UXLSheet(const UXLSheet&); \
public:


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXLSheet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXLSheet(UXLSheet&&); \
	NO_API UXLSheet(const UXLSheet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXLSheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXLSheet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXLSheet)


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_PRIVATE_PROPERTY_OFFSET
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_20_PROLOG
#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_RPC_WRAPPERS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_INCLASS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_PRIVATE_PROPERTY_OFFSET \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_SPARSE_DATA \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_INCLASS_NO_PURE_DECLS \
	ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEEXCEL_API UClass* StaticClass<class UXLSheet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
