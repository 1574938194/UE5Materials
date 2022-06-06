// Fill out your copyright notice in the Description page of Project Settings.


#include "CellValue.h"
 
void UCellValue::SetBool(bool val)
{
	_Inner = val;
}
 
void UCellValue::SetInt(int32 val)
{
	_Inner = val;
}
 
void UCellValue::SetString(FString val)
{
	_Inner = std::string(TCHAR_TO_UTF8(*val));
}
 
void UCellValue::SetDateTime(FDateTime val)
{
	std::tm t;
	t.tm_year = val.GetYear() - 1900;
	t.tm_mon = val.GetMonth() - 1;
	t.tm_mday = val.GetDay();
	t.tm_hour = val.GetHour();
	t.tm_min = val.GetMinute();
	t.tm_sec = val.GetSecond();
	_Inner = OpenXLSX::XLDateTime(t);
}
 
void UCellValue::SetFloat(float val)
{
	_Inner = val;
}

bool UCellValue::ToBool() const
{
	return _Inner.get<bool>();
}
 
int32 UCellValue::ToInt()const
{
	return _Inner.get<int32>();
}
  
FString UCellValue::ToString()const
{ 
	return FString(_Inner.get<std::string>().c_str());
}
  
float UCellValue::ToFloat()const
{
	return _Inner.get<double>();
}
 
FDateTime UCellValue::ToDateTime()const
{
	auto tm = _Inner.get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
}
  
void UCellValue::Clear()
{ 
	_Inner.clear();
}
 

EXLValueType UCellValue::Type()const
{ 
	return (EXLValueType)_Inner.type();
}
