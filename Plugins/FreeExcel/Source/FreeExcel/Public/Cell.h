// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCell.hpp"
#include "CellReference.h" 
#include "XLValueType.h"
#include "Cell.generated.h"

 
class UCellValue;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UCell : public UObject
{
	GENERATED_BODY()
	
public:
  
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    FCellReference GetReference()const;
	 
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    bool HasFormula() const ;

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
	FString ToString()const;

    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void SetFormula(FString formula);

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    UCellValue* Value()const;

    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void SetCellValue(UCellValue* val);

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    bool HasValue() const;

    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void Clear();
protected:
    OpenXLSX::XLCell _Inner;

    friend class USheet;
    friend class UXLSheet;
    friend class UXLRowDataIterator;
    friend class CellIterator;
};
