// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLRow.hpp"
#include "XLRow.h"
#include "XLRowIterator.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLRowIterator : public UObject
{
	GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable)
    UXLRowIterator* Forward();

    UFUNCTION(BlueprintCallable)
    UXLRow* Get();

    UFUNCTION(BlueprintCallable)
    bool Equal(UXLRowIterator* right);

    UFUNCTION(BlueprintCallable)
    bool NotEqual(UXLRowIterator* right);
 
protected:
	OpenXLSX::XLRowIterator _Inner;

    friend class UXLRowRange;
};
