// Fill out your copyright notice in the Description page of Project Settings.


#include "Cell.h"
#include "CellValue.h"
 
FCellReference UCell::GetReference()const
{ 
	auto ref =   _Inner.cellReference();
	return { (decltype(FCellReference::Row))ref.row(),
		(decltype(FCellReference::Col))ref.column() };
}
 
 
bool UCell::HasFormula() const
{
	return _Inner.hasFormula();
}
  
FString UCell::ToString() const
{
	auto& cell =  _Inner.value();
	if (_Inner.hasFormula())
	{
		return FString(((std::string)_Inner.formula()).c_str());
	}
	switch (cell.type())
	{
	case	OpenXLSX::XLValueType::Empty: return FString(TEXT(""));
	case	OpenXLSX::XLValueType::Boolean:return FString(cell.get<bool>() ? TEXT("true") : TEXT("false"));
	case	OpenXLSX::XLValueType::Integer:return FString::FromInt(cell.get<int64>());
	case	OpenXLSX::XLValueType::Float:return FString::SanitizeFloat(cell.get<double>());
	case	OpenXLSX::XLValueType::Error:FString(TEXT("#"));
	case	OpenXLSX::XLValueType::String:FString(cell.get<std::string>().c_str());

	default:
		break;
	}
	return FString(TEXT(""));
}
 
UCellValue* UCell::Value()const
{
	auto ret = NewObject<UCellValue>();
	ret->_Inner = (OpenXLSX::XLCellValue)(_Inner.value());
	return ret;
}
 
void UCell::SetCellValue(UCellValue* val)
{
	_Inner.value() = val->_Inner;
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