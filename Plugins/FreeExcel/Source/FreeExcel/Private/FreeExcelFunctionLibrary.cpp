// Fill out your copyright notice in the Description page of Project Settings.


#include "FreeExcelFunctionLibrary.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "Sheet.h"
#include "Kismet/KismetArrayLibrary.h"


 
	template <class T> T* FindFProperty2(const UStruct* Owner, FName FieldName)
	{
		// We know that a "none" field won't exist in this Struct
		if (FieldName.IsNone())
		{
			return nullptr;
		}

		// Search by comparing FNames (INTs), not strings
		for (TFieldIterator<T>It(Owner); It; ++It)
		{
			if ((It->GetFName() == FieldName) || (It->GetAuthoredName() == FieldName.ToString()))
			{
				return *It;
			}
		}
		// If we didn't find it, return no field
		return nullptr;
	}
 
  
void UFreeExcelFunctionLibrary::Array_SortV2(const TArray<int32>& TargetArray, FName PropertyName, bool bAscending)
{
	// We should never hit this!  stubs to avoid NoExport on the class.
	check(0);
}

void UFreeExcelFunctionLibrary::GenericArray_SortV2(void* TargetArray, FArrayProperty* ArrayProp, FName PropertyName, bool bAscending)
{
	if (!TargetArray)
	{
		return;
	}
	// Optimal
	UKismetArrayLibrary::GenericArray_Shuffle(TargetArray, ArrayProp);
	FScriptArrayHelper ArrayHelper(ArrayProp, TargetArray);

	FProperty* SortProp = nullptr;
	if (ArrayHelper.Num() < 2)
	{
		return;
	}
	else if (const FObjectProperty* ObjectProp = CastField<const FObjectProperty>(ArrayProp->Inner))
	{
		SortProp = FindFProperty<FProperty>(ObjectProp->PropertyClass, PropertyName);
	}
	else if (const FStructProperty* StructProp = CastField<const FStructProperty>(ArrayProp->Inner))
	{
		SortProp = FindFProperty2<FProperty>(StructProp->Struct, PropertyName);
	}
	else
	{
		SortProp = ArrayProp->Inner;
	}

	if (SortProp)
	{
		QuickSort_RecursiveByProperty(ArrayHelper, ArrayProp->Inner, SortProp, 0, ArrayHelper.Num() - 1, bAscending);
	}
}

void UFreeExcelFunctionLibrary::QuickSort_RecursiveByProperty(FScriptArrayHelper& ArrayHelper, FProperty* InnerProp, FProperty* SortProp, int32 Low, int32 High, bool bAscending)
{
	if (Low < High)
	{
		int32 Pivot = QuickSort_PartitionByProperty(ArrayHelper, InnerProp, SortProp, Low, High, bAscending);

		QuickSort_RecursiveByProperty(ArrayHelper, InnerProp, SortProp, Low, Pivot - 1, bAscending);
		QuickSort_RecursiveByProperty(ArrayHelper, InnerProp, SortProp, Pivot + 1, High, bAscending);
	}
}
 
int32 UFreeExcelFunctionLibrary::QuickSort_PartitionByProperty(FScriptArrayHelper& ArrayHelper, FProperty* InnerProp, FProperty* SortProp, int32 Low, int32 High, bool bAscending)
{
	int32 i = Low - 1;

	for (int32 j = Low; j < High; j++)
	{
		if (GenericComparePropertyValue(ArrayHelper, InnerProp, SortProp, j, High, bAscending))
		{
			i++;
			ArrayHelper.SwapValues(i, j);
		}
	}
	ArrayHelper.SwapValues(i + 1, High);
	return i + 1;
}

bool UFreeExcelFunctionLibrary::GenericComparePropertyValue(FScriptArrayHelper& ArrayHelper, FProperty* InnerProp, FProperty* SortProp, int32 j, int32 High, bool bAscending)
{
	bool bResult = false;
	void* LeftValueAddr = nullptr;
	void* RightValueAddr = nullptr;
	if (const FObjectProperty* ObjectProp = CastField<const FObjectProperty>(InnerProp))
	{
		UObject* LeftObject = ObjectProp->GetObjectPropertyValue(ArrayHelper.GetRawPtr(j));
		UObject* RightObject = ObjectProp->GetObjectPropertyValue(ArrayHelper.GetRawPtr(High));

		LeftValueAddr = SortProp->ContainerPtrToValuePtr<void>(LeftObject);
		RightValueAddr = SortProp->ContainerPtrToValuePtr<void>(RightObject);
	}
	else
	{
		LeftValueAddr = SortProp->ContainerPtrToValuePtr<void>(ArrayHelper.GetRawPtr(j));
		RightValueAddr = SortProp->ContainerPtrToValuePtr<void>(ArrayHelper.GetRawPtr(High));
	}

	if (const FNumericProperty* NumericProp = CastField<const FNumericProperty>(SortProp))
	{
		if (NumericProp->IsFloatingPoint())
		{
			bResult = NumericProp->GetFloatingPointPropertyValue(LeftValueAddr) < NumericProp->GetFloatingPointPropertyValue(RightValueAddr);
		}
		else if (NumericProp->IsInteger())
		{
			bResult = NumericProp->GetSignedIntPropertyValue(LeftValueAddr) < NumericProp->GetSignedIntPropertyValue(RightValueAddr);
		}
	}
	else if (const FBoolProperty* BoolProp = CastField<const FBoolProperty>(SortProp))
	{
		bResult = !BoolProp->GetPropertyValue(LeftValueAddr) && BoolProp->GetPropertyValue(RightValueAddr);
	}
	else if (const FNameProperty* NameProp = CastField<const FNameProperty>(SortProp))
	{
		bResult = NameProp->GetPropertyValue(LeftValueAddr).ToString() < NameProp->GetPropertyValue(RightValueAddr).ToString();
	}
	else if (const FStrProperty* StringProp = CastField<const FStrProperty>(SortProp))
	{
		bResult = (StringProp->GetPropertyValue(LeftValueAddr) < StringProp->GetPropertyValue(RightValueAddr));
	}
	else if (const FTextProperty* TextProp = CastField<const FTextProperty>(SortProp))
	{
		bResult = (TextProp->GetPropertyValue(LeftValueAddr).ToString() < TextProp->GetPropertyValue(RightValueAddr).ToString());
	}

	return bResult == bAscending;
}

 
void UFreeExcelFunctionLibrary::Offset(FCellReference Ref, int32 row, int32 col)
{
	Ref.Col += row;
	Ref.Row += col; 
}
 
bool  UFreeExcelFunctionLibrary::Equal(FCellReference A, FCellReference B)
{
	return A.Row == B.Col && A.Col == B.Col;
}


bool  UFreeExcelFunctionLibrary::NotEqual(FCellReference A, FCellReference B)
{
	return A.Row != B.Col && A.Col != B.Col;
}

  
void UFreeExcelFunctionLibrary::BreakCellReference(FCellReference Ref, int& Row, int& Col)
{
	Row = Ref.Row;
	Col = Ref.Col;
}
 
 
FCellReference UFreeExcelFunctionLibrary::MakeCellReferenceWithString(FString ref)
{ 
	return FCellReference(ref);
}

 
FCellReference UFreeExcelFunctionLibrary::MakeCellReference(int32 row, int32 column) {
	FCellReference ret;
	if (FCellReference::address_is_valid(row, column))
	{
		ret.Row = row; ret.Col = column;
	}
	return ret;
}
 
 FString UFreeExcelFunctionLibrary::ToString_CellReference(FCellReference& ref)
{
	 return ref.ToString();
}
  
FCellRange UFreeExcelFunctionLibrary::MakeCellRangeWithString(FString ref)
 {
	 FCellRange ret;
	 auto pos = 0;
	 for (int i = 0; i < ref.Len(); ++i)
	 {
		 if (ref[i] == TEXT(':'))
		 {
			 pos = i;
			 break;
		 }
	 }
	 ret.Min = MakeCellReferenceWithString(ref.Mid(0, pos));
	 ret.Max = MakeCellReferenceWithString(ref.Mid(pos));

	 return ret;
 }
	  
FCellRange UFreeExcelFunctionLibrary::MakeCellRange(int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol)
 {
	 FCellRange ret;
	 ret.Min.Row = MinRow;
	 ret.Min.Col = MinCol;
	 ret.Max.Row = MaxRow;
	 ret.Max.Col = MaxCol;

	 return ret;
 }

FCellRange UFreeExcelFunctionLibrary::MakeCellRangeWithString2(USheet* sheet, FString ref)
{
	FCellRange ret = MakeCellRangeWithString(ref);
	if (sheet)
	{
		ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(sheet->_Inner.xmlDocument().first_child().child("sheetData"));
		
		ret.sharedStrings = sheet->_Inner.parentDoc().execQuery(OpenXLSX::XLQuery(OpenXLSX::XLQueryType::QuerySharedStrings)).result<OpenXLSX::XLSharedStrings>();
	} 

	return ret;
}

FCellRange UFreeExcelFunctionLibrary::MakeCellRange2(USheet* sheet,int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol)
{
	FCellRange ret;
	ret.Min.Row = MinRow;
	ret.Min.Col = MinCol;
	ret.Max.Row = MaxRow;
	ret.Max.Col = MaxCol;

	return ret;
}