// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FREEEXCEL_XLSheetState_generated_h
#error "XLSheetState.generated.h already included, missing '#pragma once' in XLSheetState.h"
#endif
#define FREEEXCEL_XLSheetState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ueTest_Plugins_FreeExcel_Source_FreeExcel_Public_XLSheetState_h


#define FOREACH_ENUM_EXLSHEETSTATE(op) \
	op(EXLSheetState::Visible) \
	op(EXLSheetState::Hidden) \
	op(EXLSheetState::VeryHidden) 

enum class EXLSheetState : uint8;
template<> FREEEXCEL_API UEnum* StaticEnum<EXLSheetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
