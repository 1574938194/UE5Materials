// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCell.hpp"
#include "CellReference.h" 
#include "XLValueType.h"
#include "CellValue.h"
#include "Cell.generated.h"

 
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
	  
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void SetFormula(FString formula);

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    FCellValue Value()const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Cell Value (Cell)"), Category = "FreeExcel")
    void SetCellValue(const FCellValue& val);

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    bool HasValue() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear (Cell)"), Category = "FreeExcel")
    void Clear();
	 
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Bool (Cell)"), Category = "FreeExcel")
		void SetBool(bool val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Int (Cell)"), Category = "FreeExcel")
		void SetInt(int32 val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set String (Cell)"), Category = "FreeExcel")
		void SetString(FString val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set DateTime (Cell)"), Category = "FreeExcel")
		void SetDateTime(FDateTime val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Float (Cell)"), Category = "FreeExcel")
		void SetFloat(float val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Bool (Cell)"), Category = "FreeExcel")
		bool ToBool()const;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Int (Cell)"), Category = "FreeExcel")
		int32 ToInt()const;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Float (Cell)"), Category = "FreeExcel")
		float ToFloat()const;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Cell)"), Category = "FreeExcel")
		FString ToString()const;
	 
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To DateTime (Cell)"), Category = "FreeExcel")
		FDateTime ToDateTime()const;
	 
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Type (Cell)"), Category = "FreeExcel")
		EXLCellType Type()const;

protected:
	OpenXLSX::XLCell _Inner;       

    friend class USheet;
    friend struct FCellIterator;  
	friend class UCell;
	friend class UFreeExcelLibrary;
};
