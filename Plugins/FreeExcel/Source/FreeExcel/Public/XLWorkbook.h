// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLWorkbook.hpp"
#include "XLSheet.h"
#include "XLWorksheet.h"
#include "XLChartsheet.h" 
#include "XLWorkbook.generated.h"

 


/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLWorkbook : public UObject
{
	GENERATED_BODY()
public:
 

	// Get the sheet (worksheet or chartsheet) at the given index.
	UFUNCTION(BlueprintCallable)
	UXLSheet* SheetAt(int32 index);

	//Get the sheet (worksheet or chartsheet) with the given name.
	UFUNCTION(BlueprintCallable)
		UXLSheet* Sheet(FString name);

	UFUNCTION(BlueprintCallable)
		UXLWorksheet* Worksheet(FString name);

	UFUNCTION(BlueprintCallable)
	UXLChartsheet* Chartsheet(FString name);

	// Delete sheet (worksheet or chartsheet) from the workbook.
	UFUNCTION(BlueprintCallable)
	void DeleteSheet(FString name);

	UFUNCTION(BlueprintCallable)
	void AddWorksheet(FString name);

	UFUNCTION(BlueprintCallable)
	void CloneSheet(FString existingName, FString newName);

	UFUNCTION(BlueprintCallable)
	void SetSheetIndex(FString sheetName, int32 index);

	UFUNCTION(BlueprintCallable)
	 int32 IndexOfSheet(FString sheetName);

	UFUNCTION(BlueprintCallable)
	EXLSheetType TypeOfSheet(FString sheetName);

	UFUNCTION(BlueprintCallable)
	EXLSheetType TypeOfSheetAt(int32 index) ;

    UFUNCTION(BlueprintCallable)
    int32 SheetCount() ;

    UFUNCTION(BlueprintCallable)
    int32 WorksheetCount() ;

    UFUNCTION(BlueprintCallable)
        int32 ChartsheetCount() ;

    UFUNCTION(BlueprintCallable)
    TArray<FString> SheetNames() ;

    UFUNCTION(BlueprintCallable)
        TArray<FString> WorksheetNames();

    UFUNCTION(BlueprintCallable)
        TArray<FString> ChartsheetNames() ;

    UFUNCTION(BlueprintCallable)
    bool SheetExists(FString name) ;

    UFUNCTION(BlueprintCallable)
    bool WorksheetExists(FString sheetName) ;

    UFUNCTION(BlueprintCallable)
    bool ChartsheetExists(FString sheetName) ;
	/*
    UFUNCTION(BlueprintCallable)
    void UpdateSheetReferences(FString oldName, FString newName);

	UFUNCTION(BlueprintCallable)
    UXLSharedStrings* SharedStrings();

	UFUNCTION(BlueprintCallable)
    bool HasSharedStrings() ;
*/
	UFUNCTION(BlueprintCallable)
    void DeleteNamedRanges();

	UFUNCTION(BlueprintCallable)
    void SetFullCalculationOnLoad();

protected:
	OpenXLSX::XLWorkbook _Inner;

	friend class UXLDocument;
};
