// Fill out your copyright notice in the Description page of Project Settings.


#include "FreeExcelLibrary.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "Sheet.h"
#include "CellValue.h"
#include "ExcelDocument.h"
#include "UObject/Field.h"
#include "Kismet/KismetArrayLibrary.h"
#pragma optimize("",off)

  
 
void UFreeExcelLibrary::Offset(FCellReference Ref, int32 row, int32 col)
{
	Ref.Col += row;
	Ref.Row += col; 
}
 
bool  UFreeExcelLibrary::Equal_CellReference(FCellReference A, FCellReference B)
{
	return A.Row == B.Col && A.Col == B.Col;
}


bool  UFreeExcelLibrary::NotEqual_CellReference(FCellReference A, FCellReference B)
{
	return A.Row != B.Col && A.Col != B.Col;
}

bool  UFreeExcelLibrary::Equal_CellRange(FCellRange A, FCellRange B)
{
	return A.Min == B.Min && A.Max == B.Max;
}


bool  UFreeExcelLibrary::NotEqual_CellRange(FCellRange A, FCellRange B)
{
	return A.Min != B.Min && A.Max != B.Max;
}
  
void UFreeExcelLibrary::BreakCellReference(FCellReference Ref, int& Row, int& Col)
{
	Row = Ref.Row;
	Col = Ref.Col;
}
 
 
FCellReference UFreeExcelLibrary::MakeCellReferenceWithString(FString ref)
{ 
	return FCellReference(ref);
}

 
FCellReference UFreeExcelLibrary::MakeCellReference(int32 row, int32 col) {
	FCellReference ret;
	if (FCellReference::address_is_valid(row, col))
	{
		ret.Row = row; ret.Col = col;
	}
	return ret;
}
 
 FString UFreeExcelLibrary::ToString_CellReference(FCellReference ref)
{
	 return ref.to_string();
}
  
FCellRange UFreeExcelLibrary::MakeCellRangeWithString(FString ref)
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
	 ret.Max = MakeCellReferenceWithString(ref.Mid(pos+1));

	 return ret;
 }
	  
FCellRange UFreeExcelLibrary::MakeCellRange(int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol)
 {
	 FCellRange ret;
	 ret.Min.Row = std::min(MinRow,MaxRow);
	 ret.Min.Col = std::min(MinCol, MaxCol);
	 ret.Max.Row = std::max(MinRow, MaxRow);
	 ret.Max.Col = std::max(MinCol, MaxCol);

	 return ret;
 }
 
FCellRange UFreeExcelLibrary::MakeCellRange_Internal(USheet* sheet, const FCellRange& range)
{
	FCellRange ret = FCellRange(range);
	if (sheet)
	{
		ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(sheet->_Inner.xmlDocument().first_child().child("sheetData"));
		
		ret.sharedStrings = sheet->_Inner.parentDoc().execQuery(OpenXLSX::XLQuery(OpenXLSX::XLQueryType::QuerySharedStrings)).result<OpenXLSX::XLSharedStrings>();
	} 

	return ret;
}

 
 
 FCellValue UFreeExcelLibrary::MakeCellValue_Bool(bool val)
{
	 return FCellValue(val);
}
 
 FCellValue  UFreeExcelLibrary::MakeCellValue_Int(int32 val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelLibrary::MakeCellValue_Float(float val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelLibrary::MakeCellValue_String(FString val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelLibrary::MakeCellValue_DateTime(FDateTime val)
{
	 return FCellValue(val);
}

	bool  UFreeExcelLibrary::ToBool_CellValue(const FCellValue& val)
{
		return val;
}

	int32  UFreeExcelLibrary::ToInt_CellValue(const FCellValue& val)
{
		return val;
}

	float  UFreeExcelLibrary::ToFloat_CellValue(const FCellValue& val)
{
		return val;
}

	FString  UFreeExcelLibrary::ToString_CellValue(const FCellValue& val)
{
		return val;
}

FDateTime  UFreeExcelLibrary::ToDateTime_CellValue(const FCellValue& val)
{
	return val;
}

void  UFreeExcelLibrary::Clear_CellValue( FCellValue& val)
{
	val.clear();
}

EXLValueType  UFreeExcelLibrary::Type_CellValue(const FCellValue& val)
{
	return val.type();
}

void UFreeExcelLibrary::SetCellValue(const int32& Target, const int32& Ref, const int32& Value)
{
	check(0)
}
void UFreeExcelLibrary::Generic_SetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref, FProperty* ValProperty, void* Value)
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
			: ((SelfProperty->GetCPPType() == "USheet*") ? (*(USheet**)Self)->_Inner.cell(ref.Row, ref.Col) : (**(UCell**)Self)._Inner);
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

void UFreeExcelLibrary::GetCellValue(const int32& Target, const int32& Ref , int32& ReturnValue)
{
	check(0)
}
void UFreeExcelLibrary::Generic_GetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref , FProperty* RetProperty, void* Ret)
{
	if (!Ref || !RetProperty || !Self)
	{
		return;
	}

	if (SelfProperty->GetCPPType() == "FCellValue")
	{
		auto cell = (FCellValue*)Self;
		if (CastField<FFloatProperty>(RetProperty))
		{ 
			if (cell->type() ==EXLValueType::Integer)
			{
				(*(float*)Ret) = (float)cell->template operator int32();
			}
			else
			{
				(*(float*)Ret) = *cell;
			}
		}
		else if (CastField<FStrProperty>(RetProperty))
		{
			(*(FString*)Ret) = cell->template operator FString();
		}
		else if (RetProperty->GetCPPType() == "FCellValue")
		{
			(*(FCellValue*)Ret) = *cell;
		}
		else if (CastField<FBoolProperty>(RetProperty))
		{
			(*(bool*)Ret) = *cell;
		}
		else if (CastField<FIntProperty>(RetProperty))
		{
			(*(int32*)Ret) = *cell;
		}
			else if (RetProperty->GetCPPType() == "FDateTime")
		{
			(*(FDateTime*)Ret) = *cell;
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
			: ((SelfProperty->GetCPPType() == "USheet*") ? (*(USheet**)Self)->_Inner.cell(ref.Row, ref.Col) : (**(UCell**)Self)._Inner);
		if (auto _Prop = CastField<FFloatProperty>(RetProperty))
		{
			auto&& val = cell.value();
			if (val.type() == OpenXLSX::XLValueType::Integer)
			{
				(*(float*)Ret) = (float)val.template operator int32();
			}
			else
			{
				(*(float*)Ret) = val;
			}
		}
		else if (CastField<FStrProperty>(RetProperty))
		{ 
			(*(FString*)Ret) = FString(cell.value().get<std::string>().c_str());
		}
		else if (RetProperty->GetCPPType() == "FCellValue")
		{
			OpenXLSX::XLCellValue val = cell.value();
			(*(FCellValue*)Ret) = { val.m_value, (EXLValueType)val.m_type };
		}
		else if (CastField<FBoolProperty>(RetProperty))
		{
			(*(bool*)Ret) = cell.value();
		}
		else if (CastField<FIntProperty>(RetProperty))
		{
			(*(int32*)Ret) = cell.value();
		}
		else if (RetProperty->GetCPPType() == "FDateTime")
		{ 
			std::tm  tm = cell.value().get< OpenXLSX::XLDateTime>().tm(); 
			(*(FDateTime*)Ret) = FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
		}
	}
}
 
 void UFreeExcelLibrary::CellIterator_Forward(const FCellIterator& Target)
{
	++const_cast<FCellIterator&>(Target);
}
 
 void UFreeExcelLibrary::Range_Begin(const FCellRange& Target, FCellIterator& ReturnValue)
{
	ReturnValue = Target.begin();
}
 
 void UFreeExcelLibrary::Range_End(const FCellRange& Target, FCellIterator& ReturnValue)
{
	ReturnValue = Target.end();
}
 
 void UFreeExcelLibrary::CellIterator_CellReference(const FCellIterator& Target, FCellReference& ReturnValue)
{
	ReturnValue = Target.Current;
}
 
 void UFreeExcelLibrary::CellIterator_Cell(const FCellIterator& Target, UCell*& ReturnValue)
{
	ReturnValue = &*Target;
}
 
 void UFreeExcelLibrary::CellIterator_NotEqual(const FCellIterator& Target, const FCellIterator& Right ,bool& ReturnValue)
{
	ReturnValue = (Target != Right);
}