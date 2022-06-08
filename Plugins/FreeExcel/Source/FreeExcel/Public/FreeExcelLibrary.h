// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CellReference.h"
#include "CellRange.h"
#include "CellValue.h"
#include "FreeExcelLibrary.generated.h"



 
/**
 *
 */
UCLASS(Meta=(BlueprintThreadSafe))
class FREEEXCEL_API UFreeExcelLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
  
	UFUNCTION(BlueprintPure, Category = "FreeExcel", meta = (NativeBreakFunc))
		static void BreakCellReference(FCellReference Ref, int& Row, int& Col);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		static void Offset(FCellReference Ref, int32 row, int32 col);
   
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Equal (CellReference)", CompactNodeTitle = "==", ScriptMethod = "Equals", ScriptOperator = "==", Keywords = "== equal"), Category = "FreeExcel")
		static bool Equal_CellReference(FCellReference A, FCellReference B);
	 
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Not Equal (CellReference)", CompactNodeTitle = "!=", ScriptMethod = "NotEqual", ScriptOperator = "==", Keywords = "== not equal"), Category = "FreeExcel")
		static bool NotEqual_CellReference(FCellReference A, FCellReference B);
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Equal (CellRange)", CompactNodeTitle = "==", ScriptMethod = "Equals", ScriptOperator = "==", Keywords = "== equal"), Category = "FreeExcel")
		static bool Equal_CellRange(FCellRange A, FCellRange B);
	 
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Not Equal (CellRange)", CompactNodeTitle = "!=", ScriptMethod = "NotEqual", ScriptOperator = "==", Keywords = "== not equal"), Category = "FreeExcel")
		static bool NotEqual_CellRange(FCellRange A, FCellRange B);
	 
	// The constructor creates a new XLCellReference from a string, e.g. 'A1'. If there's no input,
	// the default reference will be cell A1.
	UFUNCTION(BlueprintPure, meta = ( NativeMakeFunc), Category = "FreeExcel")
	static FCellReference MakeCellReferenceWithString(FString ref);
	 
	// Creates a new FCellReference from a given row and column number, e.g. 1,1 (=A1)
	UFUNCTION(BlueprintPure, meta = ( NativeMakeFunc), Category = "FreeExcel")
	static FCellReference MakeCellReference(int32 row, int32 col);
	  
	 
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "FreeExcel")
	static FCellRange MakeCellRangeWithString(FString ref);

	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "FreeExcel")
	static FCellRange MakeCellRange(int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol);

	UFUNCTION(BlueprintPure, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
	static FCellRange MakeCellRange_Internal(USheet* sheet, const FCellRange& range);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (CellReference)"), Category = "FreeExcel")
	static FString ToString_CellReference(FCellReference ref) ;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make CellValue (Bool)", NativeMakeFunc), Category = "FreeExcel")
	 static FCellValue MakeCellValue_Bool(bool val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make CellValue (Int)", NativeMakeFunc), Category = "FreeExcel")
		static FCellValue  MakeCellValue_Int(int32 val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make CellValue (Float)", NativeMakeFunc), Category = "FreeExcel")
		static FCellValue  MakeCellValue_Float(float val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make CellValue (String)", NativeMakeFunc), Category = "FreeExcel")
		static FCellValue  MakeCellValue_String(FString val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make CellValue (DateTime)", NativeMakeFunc), Category = "FreeExcel")
		static FCellValue  MakeCellValue_DateTime(FDateTime val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Bool (CellValue)"), Category = "FreeExcel")
		static	bool  ToBool_CellValue(const FCellValue& val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Int (CellValue)"), Category = "FreeExcel")
		static	int32  ToInt_CellValue(const FCellValue& val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Float (CellValue)"), Category = "FreeExcel")
		static	float  ToFloat_CellValue(const FCellValue& val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (CellValue)"), Category = "FreeExcel")
		static	FString  ToString_CellValue(const FCellValue& val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To DateTime (CellValue)"), Category = "FreeExcel")
		static	FDateTime  ToDateTime_CellValue(const FCellValue& val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear (CellValue)"), Category = "FreeExcel")
		static	void  Clear_CellValue( FCellValue& val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Type (CellValue)"), Category = "FreeExcel")
		static	EXLValueType  Type_CellValue(const FCellValue& val);
	   
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (CustomStructureParam = "Target,Ref,Value", BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void SetCellValue(const int32& Target, const int32& Ref, const int32& Value);
	static void Generic_SetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref, FProperty* ValProperty, void* Value);
	DECLARE_FUNCTION(execSetCellValue)
	{
		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* SelfProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* SelfPtr = Stack.MostRecentPropertyAddress;

		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* RefProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* RefPtr = Stack.MostRecentPropertyAddress;

		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* ValProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* ValPtr = Stack.MostRecentPropertyAddress;

		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generic_SetCellValue(SelfProperty, SelfPtr,RefProperty, RefPtr, ValProperty, ValPtr);
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, meta = (CustomStructureParam = "Target,Ref,ReturnValue", BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void GetCellValue(const int32& Target, const int32& Ref ,  int32& ReturnValue);
	static void Generic_GetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref , FProperty* RetProperty, void* Ret);
	DECLARE_FUNCTION(execGetCellValue)
	{
		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* SelfProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* SelfPtr = Stack.MostRecentPropertyAddress;

		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* RefProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* RefPtr = Stack.MostRecentPropertyAddress;
		 
		Stack.StepCompiledInRef<FStructProperty,void*>(NULL);
		FProperty* RetProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* RetPtr = Stack.MostRecentPropertyAddress;

		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generic_GetCellValue(SelfProperty, SelfPtr, RefProperty, RefPtr, RetProperty, RetPtr);
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, meta = ( BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
	static void CellIterator_Forward(const FCellIterator& Target);
	 
	UFUNCTION(BlueprintPure, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void Range_Begin(const FCellRange& Target,FCellIterator& ReturnValue);

	UFUNCTION(BlueprintPure, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void Range_End(const FCellRange& Target, FCellIterator& ReturnValue);

	UFUNCTION(BlueprintPure, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void CellIterator_CellReference(const FCellIterator& Target, FCellReference& ReturnValue);

	UFUNCTION(BlueprintPure, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void CellIterator_Cell(const FCellIterator& Target, UCell*& ReturnValue);

	UFUNCTION(BlueprintPure, meta = (BlueprintInternalUseOnly = "true"), Category = "FreeExcel")
		static void CellIterator_NotEqual(const FCellIterator& A, const FCellIterator& B, bool& ReturnValue);

 
};