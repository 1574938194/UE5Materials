// Fill out your copyright notice in the Description page of Project Settings.

#include "Cell.h"
#include "CellValue.h" 

FCellReference UCell::GetReference()const
{ 
	auto ref = _Inner.cellReference();
	return { (decltype(FCellReference::Row))ref.row(),
		(decltype(FCellReference::Col))ref.column() };
}
 
 
bool UCell::HasFormula() const
{
	return _Inner.hasFormula();
}
  
FString UCell::ToString() const
{
	auto& cell = _Inner.value();
	if (_Inner.hasFormula())
	{
		return FString(((std::string)_Inner.formula()).c_str());
	}
	auto t = cell.type();
	switch (cell.type())
	{
	case	OpenXLSX::XLValueType::Empty: return FString(TEXT(""));
	case	OpenXLSX::XLValueType::Boolean:return FString(cell.get<bool>() ? TEXT("true") : TEXT("false"));
	case	OpenXLSX::XLValueType::Integer:return FString::FromInt(cell.get<int32>());
	case	OpenXLSX::XLValueType::Float:return FString::SanitizeFloat(cell.get<float>());
	case	OpenXLSX::XLValueType::Error:return FString(TEXT("#"));
	case	OpenXLSX::XLValueType::String:return FString(cell.get<std::string>().c_str());

	default:
		break;
	}
	return FString(TEXT(""));
}
 
FCellValue UCell::Value()const
{  
	auto val = (OpenXLSX::XLCellValue)_Inner.value();
	return { val.m_value,(EXLValueType)val.m_type };
}
 
void UCell::SetCellValue(const FCellValue& val)
{
	_Inner.value() = OpenXLSX::XLCellValue{ val._Value, (OpenXLSX::XLValueType)val._Type };
}
  
void UCell::SetFormula(FString formula)
{
	_Inner.formula() = std::string(TCHAR_TO_UTF8(*formula));
}
 
bool UCell::HasValue() const
{ 
	return _Inner.value().type() == OpenXLSX::XLValueType::Empty;
}

void UCell::Clear()
{
	if (_Inner.hasFormula())
	{
		_Inner.formula().clear();
	}
	else
	{
		_Inner.value().clear();
	}
}


void UCell::SetBool(bool val)
{
	_Inner.value() = val;
}

void UCell::SetInt(int32 val)
{
	_Inner.value() = val;
}

void UCell::SetString(FString val)
{
	_Inner.value() = std::string(TCHAR_TO_UTF8(*val));
}

void UCell::SetDateTime(FDateTime val)
{
	std::tm t;
	t.tm_year = val.GetYear() - 1900;
	t.tm_mon = val.GetMonth() - 1;
	t.tm_mday = val.GetDay();
	t.tm_hour = val.GetHour();
	t.tm_min = val.GetMinute();
	t.tm_sec = val.GetSecond();
	_Inner.value() = OpenXLSX::XLDateTime(t);
}

void UCell::SetFloat(float val)
{
	_Inner.value() = val;
}

bool UCell::ToBool() const
{
	return _Inner.value().get<bool>();
}

int32 UCell::ToInt()const
{
	return _Inner.value().get<int32>();
}
 
float UCell::ToFloat()const
{
	return _Inner.value().get<float>();
}

FDateTime UCell::ToDateTime()const
{
	auto tm = _Inner.value().get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
}
 
EXLCellType UCell::Type()const
{
	if (_Inner.hasFormula())
	{
		return EXLCellType::Formula;
	}
	return (EXLCellType)_Inner.value().type();
}
