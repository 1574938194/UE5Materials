// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLFormula.hpp"

#include "XLFormulaProxy.generated.h"


class UXLFormula;

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLFormulaProxy : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		void Set(FString x);

	UFUNCTION(BlueprintCallable)
		FString Get();

	UFUNCTION(BlueprintCallable)
		FString String();

	UFUNCTION(BlueprintCallable)
		UXLFormulaProxy* Clear();

	UFUNCTION(BlueprintCallable)
		UXLFormula* Formula();

protected:
	OpenXLSX::XLFormulaProxy _Inner;

	friend class  UXLCell;
};
