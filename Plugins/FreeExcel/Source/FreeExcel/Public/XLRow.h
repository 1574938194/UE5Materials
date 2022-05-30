// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLRow.hpp"
#include "XLRowDataProxy.h"
#include "XLRowDataRange.h"
#include "XLRow.generated.h"
 
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLRow : public UObject
{
	GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable)
    float Height();

    UFUNCTION(BlueprintCallable)
    void SetHeight(float height);

    // Get the descent of the row, which is the vertical distance in pixels from the bottom of the cells
    UFUNCTION(BlueprintCallable)
    float Descent() ;

    // Set the descent of the row, which is he vertical distance in pixels from the bottom of the cells
    UFUNCTION(BlueprintCallable)
    void SetDescent(float descent);

    UFUNCTION(BlueprintCallable)
    bool IsHidden() ;

    UFUNCTION(BlueprintCallable)
    void SetHidden(bool state);

    UFUNCTION(BlueprintCallable)
    int32 RowNumber() ;

    UFUNCTION(BlueprintCallable)
    int32 CellCount() ;

    UFUNCTION(BlueprintCallable)
    UXLRowDataProxy* Values();
  
    UFUNCTION(BlueprintCallable)
    UXLRowDataRange* Cells();

    UFUNCTION(BlueprintCallable)
    UXLRowDataRange* CellsAt(int32 cellCount);

    UFUNCTION(BlueprintCallable)
    UXLRowDataRange* CellsRange(int32 firstCell, int32 lastCell) ;

protected:
	OpenXLSX::XLRow _Inner;

    friend class UXLWorksheet;
    friend class UXLRowIterator;
};
