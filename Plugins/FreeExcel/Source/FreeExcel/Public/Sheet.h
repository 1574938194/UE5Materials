// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "Cell.h"
#include "CellReference.h"
#include "CellRange.h"
  
#include "Sheet.generated.h"


 
class UExcelDocument;
class UFreeExcelFunctionLibrary;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API USheet : public UObject
{
	GENERATED_BODY()
public:
     
    // Get the title of sheet
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    FString Name() const;

    // Set the title for the sheet
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void SetName(FString sheetName);
   
    // Get a pointer to the XLCell object for the given cell reference.
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    UCell* Cell( FCellReference ref) const;
    
    // Get an XLCellReference to the last (bottom right) cell in the worksheet.
    UFUNCTION(BlueprintPure, Category = "FreeExcel") 
    FCellReference LastCell()const;
     
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
        bool HasCell(FCellReference ref)const;

    // Get the number of columns in the worksheet.
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    void SheetSize(int32& RowSize,int32&ColSize)const;
    
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        int32 GetRowCellCount(int32 rowNo)const;

 /*   UFUNCTION(BlueprintCallable, Category = "FreeExcel")
     TArray<FCellValue> GetRows(int32 rowNo)const;*/
    
protected:
    OpenXLSX::XLWorksheet _Inner;

    friend class UExcelDocument; 
    friend class UFreeExcelFunctionLibrary;
    friend class ADemo1;
};
