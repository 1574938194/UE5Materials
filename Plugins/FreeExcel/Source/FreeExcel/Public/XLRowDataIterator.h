// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLRowData.hpp"
#include "XLCell.h"
#include "XLRowDataIterator.generated.h"

class UXLRowDataIterator;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLRowDataIterator : public UObject
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
        UXLRowDataIterator* Forward();
      
    UFUNCTION(BlueprintCallable)
    UXLCell* Get();
 

    UFUNCTION(BlueprintCallable)
    bool Equal(UXLRowDataIterator* other);

    UFUNCTION(BlueprintCallable)
    bool NotEqual(UXLRowDataIterator* other) ;

protected:
	OpenXLSX::XLRowDataIterator _Inner;

    friend class UXLRowDataRange;
};
