// Fill out your copyright notice in the Description page of Project Settings.
#pragma optimize("",off)

#include "FreeExcelFunctionLibrary.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "Sheet.h"
#include "CellValue.h"
#include "ExcelDocument.h"
#include "UObject/Field.h"
#include "Kismet/KismetArrayLibrary.h"


 
	template <class _Ty> _Ty* FindFProperty2(const UStruct* Owner, FName FieldName)
	{
		// We know that a "none" field won't exist in this Struct
		if (FieldName.IsNone())
		{
			return nullptr;
		}

		// Search by comparing FNames (INTs), not strings
		for (TFieldIterator<_Ty>It(Owner); It; ++It)
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
 
bool  UFreeExcelFunctionLibrary::Equal_CellReference(FCellReference A, FCellReference B)
{
	return A.Row == B.Col && A.Col == B.Col;
}


bool  UFreeExcelFunctionLibrary::NotEqual_CellReference(FCellReference A, FCellReference B)
{
	return A.Row != B.Col && A.Col != B.Col;
}

bool  UFreeExcelFunctionLibrary::Equal_CellRange(FCellRange A, FCellRange B)
{
	return A.Min == B.Min && A.Max == B.Max;
}


bool  UFreeExcelFunctionLibrary::NotEqual_CellRange(FCellRange A, FCellRange B)
{
	return A.Min != B.Min && A.Max != B.Max;
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

 
FCellReference UFreeExcelFunctionLibrary::MakeCellReference(int32 row, int32 col) {
	FCellReference ret;
	if (FCellReference::address_is_valid(row, col))
	{
		ret.Row = row; ret.Col = col;
	}
	return ret;
}
 
 FString UFreeExcelFunctionLibrary::ToString_CellReference(FCellReference ref)
{
	 return ref.to_string();
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
	 ret.Min.Row = std::min(MinRow,MaxRow);
	 ret.Min.Col = std::min(MinCol, MaxCol);
	 ret.Max.Row = std::max(MinRow, MaxRow);
	 ret.Max.Col = std::max(MinCol, MaxCol);

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
 
 FCellValue UFreeExcelFunctionLibrary::MakeCellValue_Bool(bool val)
{
	 return FCellValue(val);
}
 
 FCellValue  UFreeExcelFunctionLibrary::MakeCellValue_Int(int32 val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelFunctionLibrary::MakeCellValue_Float(float val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelFunctionLibrary::MakeCellValue_String(FString val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelFunctionLibrary::MakeCellValue_DateTime(FDateTime val)
{
	 return FCellValue(val);
}

	bool  UFreeExcelFunctionLibrary::ToBool_CellValue(const FCellValue& val)
{
		return val;
}

	int32  UFreeExcelFunctionLibrary::ToInt_CellValue(const FCellValue& val)
{
		return val;
}

	float  UFreeExcelFunctionLibrary::ToFloat_CellValue(const FCellValue& val)
{
		return val;
}

	FString  UFreeExcelFunctionLibrary::ToString_CellValue(const FCellValue& val)
{
		return val;
}

	FDateTime  UFreeExcelFunctionLibrary::ToDateTime_CellValue(const FCellValue& val)
{
		return val;
}

	void  UFreeExcelFunctionLibrary::Clear_CellValue( FCellValue& val)
{
		val.clear();
}

	EXLValueType  UFreeExcelFunctionLibrary::Type_CellValue(const FCellValue& val)
{
		return val.type();
}

	void UFreeExcelFunctionLibrary::SetCellValue(const int32& Target, const int32& Ref, const int32& Value)
	{
		check(0)
	}
	void UFreeExcelFunctionLibrary::Generic_SetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref, FProperty* ValProperty, void* Value)
	{
		if (!Ref || !Value || !Self)
		{
			return;
		}
		
		if (SelfProperty->GetCPPType() == "FCellValue")
		{
			auto cell = (FCellValue*)Self;
			if (CastField<FFloatProperty>(ValProperty))
			{
				*cell = *(float*)Value;
			}
			else if (CastField<FStrProperty>(ValProperty))
			{
				*cell = std::string(TCHAR_TO_UTF8(**(FString*)Value));
			}
			else if (ValProperty->GetCPPType() == "FCellValue")
			{
				*cell = *(FCellValue*)Value;
			}
			else
			if (CastField<FBoolProperty>(ValProperty))
			{
				*cell = *(bool*)Value;
			}
			else if (CastField<FIntProperty>(ValProperty))
			{
				*cell = *(int32*)Value;
			}
			else if (ValProperty->GetCPPType() == "FDateTime")
			{
				*cell = *(FDateTime*)Value;
			}

		}
		else
		{
			FCellReference ref;
			if (SelfProperty->GetCPPType() != "UCell")
			{
				if (RefProperty->GetCPPType() == "FCellReference")
				{
					ref = *(FCellReference*)Ref;
				}
				else if (CastField<FStrProperty>(RefProperty))
				{
					ref = { (TCHAR_TO_UTF8(**(FString*)Ref)) };
				}
				else if (RefProperty->GetCPPType() == "FIntPoint")
				{
					ref = { ((FIntPoint*)Ref)->X, ((FIntPoint*)Ref)->Y };
				}
				
				
			}
			 auto&& cell = (SelfProperty->GetCPPType() == "UExcelDocument*") ? (*(UExcelDocument**)Self)->GetCurrentSheet()->_Inner.cell(ref.Row, ref.Col)
				: ((SelfProperty->GetCPPType() == "USheet*") ? (*(USheet**)Self)->_Inner.cell(ref.Row, ref.Col) : (**(UCell**)Self)._Inner) ;
			if (CastField<FFloatProperty>(ValProperty))
			{
				cell.value() = *(float*)Value;
			}
			else if (CastField<FStrProperty>(ValProperty))
			{
				cell.value() = std::string(TCHAR_TO_UTF8(**(FString*)Value));
			}
			else if (ValProperty->GetCPPType() == "FCellValue")
			{
				auto val = *(FCellValue*)Value;
				cell.value() = OpenXLSX::XLCellValue{ val._Value, (OpenXLSX::XLValueType)val._Type };
			}
			else if (CastField<FBoolProperty>(ValProperty))
			{
				cell.value() = *(bool*)Value;
			}
			else if (CastField<FIntProperty>(ValProperty))
			{
				cell.value() = *(int32*)Value;
			}
			else if (ValProperty->GetCPPType() == "FDateTime")
			{
				auto val = (FDateTime*)Value;
				std::tm tm;
				tm.tm_year = val->GetYear() - 1900;
				tm.tm_mon = val->GetMonth() - 1;
				tm.tm_mday = val->GetDay();
				tm.tm_hour = val->GetHour();
				tm.tm_min = val->GetMinute();
				tm.tm_sec = val->GetSecond();

				cell.value() = OpenXLSX::XLDateTime(tm);
			}
		}
	}
