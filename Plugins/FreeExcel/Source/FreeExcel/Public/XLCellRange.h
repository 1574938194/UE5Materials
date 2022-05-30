// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "XLCellIterator.h"
#include "XLCellRange.generated.h"
 
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCellRange : public UObject
{
	GENERATED_BODY()
public:
 

    UFUNCTION(BlueprintCallable)
    int32 NumRows();

    UFUNCTION(BlueprintCallable)
    int32 NumCols() ;

    UFUNCTION(BlueprintCallable)
    UXLCellIterator* Begin() ;

    UFUNCTION(BlueprintCallable)
    UXLCellIterator* End() ;

    UFUNCTION(BlueprintCallable)
    void Clear();
protected:
    OpenXLSX::XLCellRange _Inner;

    friend class UXLWorksheet;
};
