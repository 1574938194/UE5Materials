// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CellReference.h"
#include "CellRange.h"
#include "FreeExcelFunctionLibrary.generated.h"



 
/**
 *
 */
UCLASS(Meta=(BlueprintThreadSafe))
class FREEEXCEL_API UFreeExcelFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	 
	/** Generic sort array by property using quick sort algorithm.
	*
	*	@param	TargetArray	Target array to sort
	*	@param	PropertyName	Name is the variable to sort by for struct or object array. Otherwise, the parameter is ignored.
	*	@param	bAscending	If true, sort by ascending order.
	*/
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (ArrayParm = "TargetArray", BlueprintInternalUseOnly = "true"), Category = "Utilities|Array")
		static void Array_SortV2(const TArray<int32>& TargetArray, FName PropertyName, bool bAscending);

	// generic quick sort array by property
	static void GenericArray_SortV2(void* TargetArray, FArrayProperty* ArrayProp, FName PropertyName, bool bAscending);

	// sort array by property
	DECLARE_FUNCTION(execArray_SortV2)
	{
		Stack.MostRecentProperty = nullptr;
		Stack.StepCompiledIn<FArrayProperty>(NULL);
		void* ArrayAddr = Stack.MostRecentPropertyAddress;
		FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Stack.MostRecentProperty);
		if (!ArrayProperty)
		{
			Stack.bArrayContextFailed = true;
			return;
		} 

		P_GET_PROPERTY(FNameProperty, PropertyName);
		P_GET_UBOOL(bAscending);
		P_FINISH;

		P_NATIVE_BEGIN;
		GenericArray_SortV2(ArrayAddr, ArrayProperty, PropertyName, bAscending);
		P_NATIVE_END;
	}
	 
	UFUNCTION(BlueprintPure, Category = "FreeExcel", meta = (NativeBreakFunc))
		static void BreakCellReference(FCellReference Ref, int& Row, int& Col);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		static void Offset(FCellReference Ref, int32 row, int32 col);
   
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Equal (CellReference)", CompactNodeTitle = "==", ScriptMethod = "Equals", ScriptOperator = "==", Keywords = "== equal"), Category = "FreeExcel")
		static bool Equal(FCellReference A, FCellReference B);

	/** Returns true if IntPoint A is NOT equal to IntPoint B (A != B) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Not Equal (CellReference)", CompactNodeTitle = "!=", ScriptMethod = "NotEqual", ScriptOperator = "==", Keywords = "== not equal"), Category = "FreeExcel")
		static bool NotEqual(FCellReference A, FCellReference B);
	 
	 
	// The constructor creates a new XLCellReference from a string, e.g. 'A1'. If there's no input,
	// the default reference will be cell A1.
	UFUNCTION(BlueprintPure, meta = ( NativeMakeFunc), Category = "FreeExcel")
	static FCellReference MakeCellReferenceWithString(FString ref);
	 
	// Creates a new FCellReference from a given row and column number, e.g. 1,1 (=A1)
	UFUNCTION(BlueprintPure, meta = ( NativeMakeFunc), Category = "FreeExcel")
	static FCellReference MakeCellReference(int32 row, int32 column);
	  
	 
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "FreeExcel")
	static FCellRange MakeCellRangeWithString(FString ref);

	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "FreeExcel")
	static FCellRange MakeCellRange(int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol);

	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "FreeExcel")
	static FCellRange MakeCellRangeWithString2(USheet* sheet,FString ref);

	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "FreeExcel")
	static FCellRange MakeCellRange2(USheet* sheet, int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "To String (CellReference)"), Category = "FreeExcel")
	static FString ToString_CellReference(FCellReference& ref) ;

private:
	// Low  --> Starting index,  High  --> Ending index
	static void QuickSort_RecursiveByProperty(FScriptArrayHelper& ArrayHelper, FProperty* InnerProp, FProperty* SortProp, int32 Low, int32 High, bool bAscending);
	// swapping items in place and partitioning the section of an array
	static int32 QuickSort_PartitionByProperty(FScriptArrayHelper& ArrayHelper, FProperty* InnerProp, FProperty* SortProp, int32 Low, int32 High, bool bAscending);
	// generic compare two element of array by property
	static bool GenericComparePropertyValue(FScriptArrayHelper& ArrayHelper, FProperty* InnerProp, FProperty* SortProp, int32 j, int32 High, bool bAscending);
	// internal function of GenericArray_Sort
	static bool GenericArray_SortCompare(const FProperty* LeftProperty, void* LeftValuePtr, const FProperty* RightProperty, void* RightValuePtr);

};