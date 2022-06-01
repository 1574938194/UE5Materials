// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FreeExcelBPFunctionLibrary.generated.h"


 
/**
 *
 */
UCLASS()
class FREEEXCEL_API UFreeExcelBPFunctionLibrary : public UBlueprintFunctionLibrary
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