// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCellValueProxy.h"


void UXLCellValueProxy::SetBool(bool val)
{
	_Inner = val;
}


void UXLCellValueProxy::SetInteger(int64 val)
{
	_Inner = val;
}


void UXLCellValueProxy::SetString(FString val)
{
	_Inner = std::string(TCHAR_TO_UTF8(*val));
}


void UXLCellValueProxy::SetFloat(float val)
{
	_Inner = (double)val;
}


void UXLCellValueProxy::SetDateTime(FDateTime val)
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


bool UXLCellValueProxy::Bool()
{
	return _Inner.get<bool>();
}


int64 UXLCellValueProxy::Integer()
{
	return _Inner.get<int64>();
}


FString UXLCellValueProxy::String()
{
	return FString( _Inner.get<std::string>().c_str());
}


float UXLCellValueProxy::Float()
{
	return (float)_Inner.get<double>();
}


FDateTime UXLCellValueProxy::DateTime()
{
	auto tm = _Inner.get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
}


UXLCellValueProxy* UXLCellValueProxy::Clear()
{
	_Inner.clear();
	return this;
}


UXLCellValueProxy* UXLCellValueProxy::SetError()
{
	_Inner.setError();
	return this;
}


EXLValueType UXLCellValueProxy::Type()
{
	return (EXLValueType) _Inner.type();
}


FString UXLCellValueProxy::TypeAsString()
{
	return FString(_Inner.typeAsString().c_str());
}


UXLCellValue* UXLCellValueProxy::ToCellValue()
{ 
	auto ret = NewObject<UXLCellValue>();
	ret->_Inner = std::move((OpenXLSX::XLCellValue)_Inner);

	return ret;
}
 
void UXLCellValueProxy::Set(UXLCellValue* val)
{
	_Inner = val->_Inner;
}



void UXLCellValueProxy::SetProxy(UXLCellValueProxy* val)
{
	_Inner = val->_Inner;
}