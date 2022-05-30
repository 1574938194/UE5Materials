// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLDocument.hpp"
 
#include "XLDocument.generated.h"
   
class UXLSheet;
class UXLWorksheet;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLDocument : public UObject
{
	GENERATED_BODY()
public:
	   
	 //  Open the .xlsx file with the given path
	UFUNCTION(BlueprintCallable ,Category = "XLXS")
	static UXLDocument* OpenExcel(FString path);

	// Create a new .xlsx file with the given path.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
	static UXLDocument* CreateExcel(FString path);

	// Close the current document
	UFUNCTION(BlueprintCallable, Category = "XLXS")
	void CloseExcel();

	//Save the current document using the current filename, overwriting the existing file.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
	void SaveExcel();

	//Save the document with a new name. If a file exists with that name, it will be overwritten.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
	void SaveExcelAs(FString path);

	// Get the filename of the current document, e.g. "spreadsheet.xlsx".
	UFUNCTION(BlueprintCallable, Category = "XLXS")
	FString ExcelFileName() ;

	//Get the full path of the current document, e.g. "drive/blah/spreadsheet.xlsx"
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		FString ExcelFullPath() ;
	  
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		bool ExcelIsValid();
	 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
	UXLWorksheet* GetSheetAt(int32 index);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
	UXLWorksheet* GetOrCreateSheetWithName(FString name);

	// Delete sheet (worksheet or chartsheet) from the workbook.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void DeleteSheet(FString name);
	 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void CloneSheet(FString existingName, FString newName);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void SetSheetIndex(FString sheetName, int32 index);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		int32 IndexOfSheet(FString sheetName);
	 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		int32 SheetCount();

	 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		TArray<FString> SheetNames();
 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		bool SheetExists(FString name);
  
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void DeleteNamedRanges();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void SetFullCalculationOnLoad();
protected:
	OpenXLSX::XLDocument _Inner;
};
