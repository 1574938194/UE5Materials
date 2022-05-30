// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "XLCell.h"
#include "XLCellReference.h"
#include "XLCellRange.h"
#include "XLRow.h"
#include "XLRowRange.h" 
#include "XLSheetState.h"
#include "XLWorksheet.generated.h"


 

UENUM(BlueprintType)
enum class EXLSheetType :uint8 { 
    Worksheet UMETA(DisplayName = "Worksheet"),
    Chartsheet UMETA(DisplayName = "Chartsheet"),
    Dialogsheet UMETA(DisplayName = "Dialogsheet"),
    Macrosheet UMETA(DisplayName = "Macrosheet")
};

class UXLWorkbook;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLWorksheet : public UObject
{
	GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable)
    EXLSheetState Visible();

    UFUNCTION(BlueprintCallable)
    void SetVisible(EXLSheetState state);

    UFUNCTION(BlueprintCallable)
        FColor Color();

    UFUNCTION(BlueprintCallable)
        void SetColor(FColor color);

    UFUNCTION(BlueprintCallable)
        int32 Index();

    UFUNCTION(BlueprintCallable)
        void SetIndex(int32 index);

    UFUNCTION(BlueprintCallable)
        FString Name();

    UFUNCTION(BlueprintCallable)
        void SetName(FString sheetName);

    UFUNCTION(BlueprintCallable)
        bool IsSelected();

    UFUNCTION(BlueprintCallable)
        void SetSelected(bool selected);

    UFUNCTION(BlueprintCallable)
        bool IsActive();

    UFUNCTION(BlueprintCallable)
    void SetActive();

    UFUNCTION(BlueprintCallable)
    void Clone(FString newName);

   
    UFUNCTION(BlueprintCallable)
    UXLCell* Cell(FString ref) ;

    // Get a pointer to the XLCell object for the given cell reference.
    UFUNCTION(BlueprintCallable)
    UXLCell* CellWithRef( UXLCellReference* ref) ;

    // Get the cell at the given coordinates.
    UFUNCTION(BlueprintCallable)
    UXLCell* CellAt(int32 rowNumber, int32 columnNumber);

    //Get a range for the area currently in use (i.e. from cell A1 to the last cell being in use).
    UFUNCTION(BlueprintCallable)
    UXLCellRange* RangeInUse() ;

   //Get a range with the given coordinates.
    UFUNCTION(BlueprintCallable)
    UXLCellRange* Range(UXLCellReference* topLeft, UXLCellReference* bottomRight);
   
    UFUNCTION(BlueprintCallable)
    UXLRowRange* Rows() ;

    UFUNCTION(BlueprintCallable)
    UXLRowRange* RowsAt(int32 rowCount) ;

    UFUNCTION(BlueprintCallable)
    UXLRowRange* RowsRange(int32 firstRow, int32 lastRow) ;

    //Get the row with the given row number.
    UFUNCTION(BlueprintCallable)
    UXLRow* Row(int32 rowNumber) ;

    // Get an XLCellReference to the last (bottom right) cell in the worksheet.
    UFUNCTION(BlueprintCallable)
    UXLCellReference* LastCell();

    // Get the number of columns in the worksheet.
    UFUNCTION(BlueprintCallable)
    int32 ColCount();

    // Get the number of rows in the worksheet.
    UFUNCTION(BlueprintCallable)
    int32 RowCount() ;

    UFUNCTION(BlueprintCallable)
    void UpdateSheetName(FString oldName, FString newName);


protected:
    OpenXLSX::XLWorksheet _Inner;

    friend class UXLWorkbook;
    friend class UXLSheet;
};
