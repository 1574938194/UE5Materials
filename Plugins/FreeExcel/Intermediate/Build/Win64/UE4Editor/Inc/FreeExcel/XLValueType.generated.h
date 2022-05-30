// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FREEEXCEL_XLValueType_generated_h
#error "XLValueType.generated.h already included, missing '#pragma once' in XLValueType.h"
#endif
#define FREEEXCEL_XLValueType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLValueType_h


#define FOREACH_ENUM_EXLVALUETYPE(op) \
	op(EXLValueType::Empty) \
	op(EXLValueType::Boolean) \
	op(EXLValueType::Integer) \
	op(EXLValueType::Float) \
	op(EXLValueType::Error) \
	op(EXLValueType::String) 

enum class EXLValueType : uint8;
template<> FREEEXCEL_API UEnum* StaticEnum<EXLValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
