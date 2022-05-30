// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCellValue.h"
#include "XLCellValueProxy.h"

void UXLCellValue::SetBool(bool val)
{
	_Inner = val;
}


void UXLCellValue::SetInteger(int64 val)
{
	_Inner = val;
}


void UXLCellValue::SetString(FString val)
{
	_Inner = std::string(TCHAR_TO_UTF8(*val));
}


void UXLCellValue::SetFloat(float val)
{
	_Inner = (double)val;
}


void UXLCellValue::SetDateTime(FDateTime val)
{
	std::tm tm;
	tm.tm_year = val.GetYear()-1900;
	tm.tm_mon = val.GetMonth()-1;
	tm.tm_mday = val.GetDay();
	tm.tm_hour = val.GetHour();
	tm.tm_min = val.GetMinute();
	tm.tm_sec = val.GetSecond(); 

	_Inner = OpenXLSX::XLDateTime(tm);
}


bool UXLCellValue::Bool()
{
	return _Inner.get<bool>();
}


int64 UXLCellValue::Integer()
{
	return _Inner.get<int64>();
}


FString UXLCellValue::String()
{
	return FString(_Inner.get<std::string>().c_str());
}


float UXLCellValue::Float()
{
	return (float)_Inner.get<double>();
}


FDateTime UXLCellValue::DateTime()
{
	auto tm =_Inner.get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0); 
}


UXLCellValue* UXLCellValue::Clear()
{
	_Inner.clear();
	return this;
}


UXLCellValue* UXLCellValue::SetError()
{
	_Inner.setError();
	return this;
}


EXLValueType UXLCellValue::Type()
{
	return (EXLValueType)_Inner.type();
}


FString UXLCellValue::TypeAsString()
{
	return FString(_Inner.typeAsString().c_str());
}

void UXLCellValue::Set(UXLCellValue* val)
{
	_Inner = val->_Inner;
}


void UXLCellValue::SetProxy(UXLCellValueProxy* val)
{
	_Inner = val->_Inner;
}