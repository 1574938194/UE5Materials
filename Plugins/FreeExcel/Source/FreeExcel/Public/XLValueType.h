// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"


/**
 * 
 */
UENUM(BlueprintType)
enum class EXLValueType:uint8 { 
	Empty UMETA(DisplayName = "Empty"),
	Boolean UMETA(DisplayName = "Boolean"),
	Integer UMETA(DisplayName = "Integer"),
	Float UMETA(DisplayName = "Float"),
	Error UMETA(DisplayName = "Error"),
	String UMETA(DisplayName = "String")
};