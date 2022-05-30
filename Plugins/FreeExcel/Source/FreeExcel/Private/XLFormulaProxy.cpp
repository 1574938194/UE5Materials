// Fill out your copyright notice in the Description page of Project Settings.


#include "XLFormulaProxy.h"
#include "XLFormula.h"


void UXLFormulaProxy::Set(FString x)
{
	std::string _Name1(TCHAR_TO_UTF8(*x));
	_Inner.set(_Name1);
}
 
FString UXLFormulaProxy::Get()
{
	return FString(_Inner.get().c_str());
}
 
FString UXLFormulaProxy::String()
{
	return FString(((std::string)_Inner).c_str());
}
 
UXLFormulaProxy* UXLFormulaProxy::Clear()
{
	_Inner.clear();
	return this;
}
 
UXLFormula* UXLFormulaProxy::Formula()
{ 
	auto ret = NewObject<UXLFormula>();
	ret->_Inner = (OpenXLSX::XLFormula)_Inner;

	return ret;
}
