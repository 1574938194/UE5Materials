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


	UFUNCTION(BlueprintCallable, CustomThunk, meta = (CustomStructureParam = "Ref,Value", BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		void SetCellValue(const int32& Ref, const int32& Value);
	void Generic_SetCellValue(FProperty* RefProperty, void* Ref, FProperty* ValProperty, void* Value);
	DECLARE_FUNCTION(execSetCellValue)
	{

		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* RefProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* RefPtr = Stack.MostRecentPropertyAddress;

		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* ValProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* ValPtr = Stack.MostRecentPropertyAddress;

		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generic_SetCellValue(RefProperty, RefPtr, ValProperty, ValPtr);
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	void SetFormula(FCellReference& ref, FString val);

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
	bool HasFormula(FCellReference& ref) const;
	
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetBool(FCellReference& ref,bool val);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetInt(FCellReference& ref, int32 val);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetString(FCellReference& ref, FString val);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetDateTime(FCellReference& ref, FDateTime val);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetFloat(FCellReference& ref, float val);

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		bool ToBool(FCellReference& ref )const;

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		int32 ToInt(FCellReference& ref )const;

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		float ToFloat(FCellReference& ref)const;

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		FString ToString(FCellReference& ref )const;

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		FDateTime ToDateTime(FCellReference& ref )const;

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void Clear(FCellReference& ref );

	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		EXLValueType Type(FCellReference& rer)const;
	 
protected:
	TUniquePtr<OpenXLSX::XLDocument> _Inner; 
	USheet* _curSheet;
};
