// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellIterator.hpp"
#include "XLCell.h"
#include "XLCellIterator.generated.h"
  
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCellIterator : public UObject
{
	GENERATED_BODY()
public:
  
    UFUNCTION(BlueprintCallable)
        void Forward();

    UFUNCTION(BlueprintCallable)
    UXLCell* Get();

    UFUNCTION(BlueprintCallable)
    bool Equal(UXLCellIterator* right) ;

    UFUNCTION(BlueprintCallable)
        bool NotEqual(UXLCellIterator* right);

    UFUNCTION(BlueprintCallable)
    int64 Different(UXLCellIterator* last);
protected:
    OpenXLSX::XLCellIterator _Inner;

    friend class UXLCellRange;
};
