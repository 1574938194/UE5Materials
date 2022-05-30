// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCell.hpp"
#include "XLCellValueProxy.h"
#include "XLCellReference.h"
#include "XLFormulaProxy.h"
#include "XLCell.generated.h"

 
 
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCell : public UObject
{
	GENERATED_BODY()
	
public:
 
    UFUNCTION(BlueprintCallable)
    UXLCellValueProxy* Value();
  
    UFUNCTION(BlueprintCallable)
    UXLCellReference* CellReference() ;

    // get the XLCell object from the current cell offset
    UFUNCTION(BlueprintCallable)
    UXLCell* Offset(int32 rowOffset, int32 colOffset) ;

    UFUNCTION(BlueprintCallable)
    bool HasFormula() ;

    UFUNCTION(BlueprintCallable)
    UXLFormulaProxy* Formula();
     
protected:
    OpenXLSX::XLCell _Inner;

    friend class UXLWorksheet;
    friend class UXLSheet;
    friend class UXLRowDataIterator;
    friend class UXLCellIterator;
};
