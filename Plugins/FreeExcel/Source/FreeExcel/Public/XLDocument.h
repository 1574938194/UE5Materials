// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLDocument.hpp"
#include "XLWorkbook.h"
#include "XLDocument.generated.h"
   

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

	 
	// 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		bool IsValid();


	//
	// 

	// UENUM(BlueprintType)
	//enum class EXLProperty :uint8 {
	//	Title UMETA(DisplayName = "Title"),
	//	Subject UMETA(DisplayName = "Subject"),
	//	Creator UMETA(DisplayName = "Creator"),
	//	Keywords UMETA(DisplayName = "Keywords"),
	//	Description UMETA(DisplayName = "Description"),
	//	LastModifiedBy UMETA(DisplayName = "LastModifiedBy"),
	//	LastPrinted UMETA(DisplayName = "LastPrinted"),
	//	CreationDate UMETA(DisplayName = "CreationDate"),
	//	ModificationDate UMETA(DisplayName = "ModificationDate"),
	//	Category UMETA(DisplayName = "Category"),
	//	Application UMETA(DisplayName = "Application"),
	//	DocSecurity UMETA(DisplayName = "DocSecurity"),
	//	ScaleCrop UMETA(DisplayName = "ScaleCrop"),
	//	Manager UMETA(DisplayName = "Manager"),
	//	Company UMETA(DisplayName = "Company"),
	//	LinksUpToDate UMETA(DisplayName = "LinksUpToDate"),
	//	SharedDoc UMETA(DisplayName = "SharedDoc"),
	//	HyperlinkBase UMETA(DisplayName = "HyperlinkBase"),
	//	HyperlinksChanged UMETA(DisplayName = "HyperlinksChanged"),
	//	AppVersion UMETA(DisplayName = "AppVersion"),
	//};
	////Get the requested document property.
	////UFUNCTION(BlueprintCallable, Category = "XLXS")
	//FString Property(EXLProperty prop);

	////Set a property
	//UFUNCTION(BlueprintCallable, Category = "XLXS")
	//	void SetProperty(EXLProperty prop, FString value);


	//// Delete the property from the document
	//UFUNCTION(BlueprintCallable, Category = "XLXS")
	//	void DeleteProperty(EXLProperty prop);


	//Get the underlying workbook object, as a const object.
	//UFUNCTION(BlueprintCallable, Category = "XLXS")
	UXLWorkbook* Workbook();
	 
	// Get the sheet (worksheet or chartsheet) at the given index.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		UXLSheet* SheetAt(int32 index);

	//Get the sheet (worksheet or chartsheet) with the given name.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		UXLSheet* Sheet(FString name);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		UXLWorksheet* Worksheet(FString name);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		UXLChartsheet* Chartsheet(FString name);

	// Delete sheet (worksheet or chartsheet) from the workbook.
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void DeleteSheet(FString name);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void AddWorksheet(FString name);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void CloneSheet(FString existingName, FString newName);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void SetSheetIndex(FString sheetName, int32 index);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		int32 IndexOfSheet(FString sheetName);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		EXLSheetType TypeOfSheet(FString sheetName);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		EXLSheetType TypeOfSheetAt(int32 index);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		int32 SheetCount();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		int32 WorksheetCount();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		int32 ChartsheetCount();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		TArray<FString> SheetNames();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		TArray<FString> WorksheetNames();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		TArray<FString> ChartsheetNames();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		bool SheetExists(FString name);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		bool WorksheetExists(FString sheetName);

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		bool ChartsheetExists(FString sheetName);
 
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void DeleteNamedRanges();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void SetFullCalculationOnLoad();
protected:
	OpenXLSX::XLDocument _Inner;
};
