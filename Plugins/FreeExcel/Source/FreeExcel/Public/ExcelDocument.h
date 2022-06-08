// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h" 
#include "OpenXLSX/include/OpenXLSX.hpp"
#include "CellReference.h"
#include "Templates/UniquePtr.h"
#include "ExcelDocument.generated.h"

class USheet;
 
/**
 * 
 */
UCLASS(Blueprintable)
class FREEEXCEL_API UExcelDocument : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	   
	 //  Open the .FreeExcel file with the given path
	UFUNCTION(BlueprintCallable ,Category = "FreeExcel")
	void Open(FString path);

	// Create a new .FreeExcel file with the given path.
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void Create(FString path);

	// Close the current document
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	void Close();

	//Save the current document using the current filename, overwriting the existing file.
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	void Save();

	//Save the document with a new name. If a file exists with that name, it will be overwritten.
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	void SaveAs(FString path);

	// Get the filename of the current document, e.g. "spreadsheet.FreeExcel".
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
	FString FileName()const ;

	//Get the full path of the current document, e.g. "drive/blah/spreadsheet.FreeExcel"
	UFUNCTION(BlueprintPure, Category = "FreeExcel") 
		FString FullPath()const ;
	  
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Valid (ExcelDocument)"), Category = "FreeExcel")
	bool IsValid() const;
	 
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
	USheet* GetSheetAt(int32 index) const;

	// Get the sheet with name, and set CurrentSheet to it
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	USheet* GetOrCreateSheetWithName(FString name);

	// Delete sheet (worksheet or chartsheet) from the workbook.
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void DeleteSheet(FString name);
	 
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void CloneSheet(FString existingName, FString newName);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetSheetIndex(FString sheetName, int32 index);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		int32 GetSheetIndex(FString sheetName);
	 
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		int32 GetSheetCount()const;
     
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		TArray<FString> GetSheetNames() const;
 
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		bool HasSheet(FString name)const;
  
 /*
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetFullCalculationOnLoad();*/

    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
         USheet* GetCurrentSheet();


	 
protected:
	TUniquePtr<OpenXLSX::XLDocument> _Inner; 
	USheet* _curSheet;
};
