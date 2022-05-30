// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

UENUM(BlueprintType)
enum class EXLSheetState : uint8
{
	Visible UMETA(DisplayName = "Visible"),
	Hidden UMETA(DisplayName = "Hidden"),
	VeryHidden UMETA(DisplayName = "VeryHidden")
};
