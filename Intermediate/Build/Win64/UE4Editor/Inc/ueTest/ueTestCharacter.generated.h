// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UETEST_ueTestCharacter_generated_h
#error "ueTestCharacter.generated.h already included, missing '#pragma once' in ueTestCharacter.h"
#endif
#define UETEST_ueTestCharacter_generated_h

#define ueTest_Source_ueTest_ueTestCharacter_h_12_SPARSE_DATA
#define ueTest_Source_ueTest_ueTestCharacter_h_12_RPC_WRAPPERS
#define ueTest_Source_ueTest_ueTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ueTest_Source_ueTest_ueTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAueTestCharacter(); \
	friend struct Z_Construct_UClass_AueTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AueTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ueTest"), NO_API) \
	DECLARE_SERIALIZER(AueTestCharacter)


#define ueTest_Source_ueTest_ueTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAueTestCharacter(); \
	friend struct Z_Construct_UClass_AueTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AueTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ueTest"), NO_API) \
	DECLARE_SERIALIZER(AueTestCharacter)


#define ueTest_Source_ueTest_ueTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AueTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AueTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AueTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AueTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AueTestCharacter(AueTestCharacter&&); \
	NO_API AueTestCharacter(const AueTestCharacter&); \
public:


#define ueTest_Source_ueTest_ueTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AueTestCharacter(AueTestCharacter&&); \
	NO_API AueTestCharacter(const AueTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AueTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AueTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AueTestCharacter)


#define ueTest_Source_ueTest_ueTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AueTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AueTestCharacter, FollowCamera); }


#define ueTest_Source_ueTest_ueTestCharacter_h_9_PROLOG
#define ueTest_Source_ueTest_ueTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Source_ueTest_ueTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ueTest_Source_ueTest_ueTestCharacter_h_12_SPARSE_DATA \
	ueTest_Source_ueTest_ueTestCharacter_h_12_RPC_WRAPPERS \
	ueTest_Source_ueTest_ueTestCharacter_h_12_INCLASS \
	ueTest_Source_ueTest_ueTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ueTest_Source_ueTest_ueTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ueTest_Source_ueTest_ueTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ueTest_Source_ueTest_ueTestCharacter_h_12_SPARSE_DATA \
	ueTest_Source_ueTest_ueTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ueTest_Source_ueTest_ueTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ueTest_Source_ueTest_ueTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UETEST_API UClass* StaticClass<class AueTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Source_ueTest_ueTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
