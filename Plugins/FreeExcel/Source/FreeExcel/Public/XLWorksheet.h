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


// 
//
//UENUM(BlueprintType)
//enum class EXLSheetType :uint8 { 
//    Worksheet UMETA(DisplayName = "Worksheet"),
//    Chartsheet UMETA(DisplayName = "Chartsheet"),
//    Dialogsheet UMETA(DisplayName = "Dialogsheet"),
//    Macrosheet UMETA(DisplayName = "Macrosheet")
//};

class UXLDocument;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLWorksheet : public UObject
{
	GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    EXLSheetState Visible();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    void SetVisible(EXLSheetState state);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FColor Color();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetColor(FColor color);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        int32 Index();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetIndex(int32 index);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FString Name();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetName(FString sheetName);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        bool IsSelected();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetSelected(bool selected);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        bool IsActive();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    void SetActive();

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    void Clone(FString newName);
     
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLCell* Cell(FString ref) ;

    // Get a pointer to the XLCell object for the given cell reference.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLCell* CellWithRef( UXLCellReference* ref) ;

    // Get the cell at the given coordinates.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLCell* CellAt(int32 rowNumber, int32 columnNumber);

    //Get a range for the area currently in use (i.e. from cell A1 to the last cell being in use).
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLCellRange* RangeInUse() ;

   //Get a range with the given coordinates.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLCellRange* Range(UXLCellReference* topLeft, UXLCellReference* bottomRight);
   
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLRowRange* Rows() ;

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLRowRange* RowsAt(int32 rowCount) ;

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLRowRange* RowsRange(int32 firstRow, int32 lastRow) ;

    //Get the row with the given row number.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLRow* Row(int32 rowNumber) ;

    // Get an XLCellReference to the last (bottom right) cell in the worksheet.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    UXLCellReference* LastCell();

    // Get the number of columns in the worksheet.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    int32 ColCount();

    // Get the number of rows in the worksheet.
    UFUNCTION(BlueprintCallable, Category = "XLXS")
    int32 RowCount() ;

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    void SheetRename(FString oldName, FString newName);
     
    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetBoolAt(int32 row,int32 col, bool val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetBool(FString ref, bool val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetIntegerAt(int32 row, int32 col, int64 val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetInteger(FString ref,int64 val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetStringAt(int32 row, int32 col, FString val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetString(FString ref,FString val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetFloatAt(int32 row, int32 col, float val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetFloat(FString ref, float val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetDateTimeAt(int32 row, int32 col, FDateTime val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetDateTime(FString ref, FDateTime val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
    bool GetBoolAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        bool GetBool(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        int64 GetIntegerAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        int64 GetInteger(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FString GetStringAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FString GetString(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        float GetFloatAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        float GetFloat(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FDateTime GetDateTimeAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FDateTime GetDateTime(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
     void ClearCellAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void ClearCell(FString ref);
     
    UFUNCTION(BlueprintCallable, Category = "XLXS")
        EXLValueType CellTypeAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        EXLValueType CellType(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetFormulaAt(int32 row, int32 col, FString val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        void SetFormula(FString ref, FString val);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        bool IsFormulaCellAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        bool IsFormulaCell(FString ref);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FString GetSourceAt(int32 row, int32 col);

    UFUNCTION(BlueprintCallable, Category = "XLXS")
        FString GetSource(FString ref);
 
protected:
    OpenXLSX::XLWorksheet _Inner;

    friend class UXLDocument;
    friend class UXLSheet;
    
};
