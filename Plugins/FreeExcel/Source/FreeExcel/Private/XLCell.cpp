// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCell.h"

 
FString UXLCell::GetCellReference()
{ 
	return FString(_Inner.cellReference().address().c_str());
 
}
 
UXLCell* UXLCell::CellOffset(int32 rowOffset, int32 colOffset)
{
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.offset(rowOffset,colOffset));

	return ret;
}
 
bool UXLCell::IsFormula()
{
	return _Inner.hasFormula();
}
 

void UXLCell::SetBool(bool val)
{
	_Inner.value() = val;
}


void UXLCell::SetInteger(int64 val)
{
	_Inner.value() = val;
}


void UXLCell::SetString(FString val)
{
	_Inner.value() = std::string(TCHAR_TO_UTF8(*val));
}


void UXLCell::SetFloat(float val)
{
	_Inner.value() = (double)val;
}


void UXLCell::SetDateTime(FDateTime val)
{
	std::tm tm;
	tm.tm_year = val.GetYear() - 1900;
	tm.tm_mon = val.GetMonth() - 1;
	tm.tm_mday = val.GetDay();
	tm.tm_hour = val.GetHour();
	tm.tm_min = val.GetMinute();
	tm.tm_sec = val.GetSecond();

	_Inner.value() = OpenXLSX::XLDateTime(tm);
}


bool UXLCell::GetBool()
{
	return _Inner.value().get<bool>();
}


int64 UXLCell::GetInteger()
{
	return _Inner.value().get<int64>();
}


FString UXLCell::GetString()
{
	if (_Inner.hasFormula())
	{
		return FString(_Inner.formula().get().c_str());
	}
	return FString(_Inner.value().get<std::string>().c_str());
}


float UXLCell::GetFloat()
{
	return (float)_Inner.value().get<double>();
}


FDateTime UXLCell::GetDateTime()
{
	auto tm = _Inner.value().get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
}


void UXLCell::ClearCell()
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

 

EXLValueType UXLCell::Type()
{
	return (EXLValueType)_Inner.value().type();
}

 
void UXLCell::SetCellValue(UXLCell* val)
{
	_Inner = val->_Inner;
}
  
void UXLCell::SetFormula(FString v)
{
	_Inner.formula() = std::string(TCHAR_TO_UTF8(*v));
}
 
FString UXLCell::GetFormula()
{
	return GetString();
}