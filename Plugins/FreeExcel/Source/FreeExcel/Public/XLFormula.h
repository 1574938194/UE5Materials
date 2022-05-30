// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLFormula.hpp"
#include "XLFormula.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLFormula : public UObject
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
	UXLFormula* Clear();


	UFUNCTION(BlueprintCallable)
		bool Equal(UXLFormula* other);

	UFUNCTION(BlueprintCallable)
		bool NotEqual(UXLFormula* other);
protected:
	OpenXLSX::XLFormula _Inner;

	friend class UXLFormulaProxy;

};
