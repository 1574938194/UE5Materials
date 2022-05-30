// Fill out your copyright notice in the Description page of Project Settings.


#include "XLFormula.h"
 
void UXLFormula::Set(FString x)
{
	_Inner.set(std::string(TCHAR_TO_UTF8(*x)));
}
 
FString UXLFormula::Get()
{
	return FString(_Inner.get().c_str());
}
 
FString UXLFormula::String()
{
	return FString(((std::string)_Inner).c_str());
}
 
UXLFormula* UXLFormula::Clear()
{ 
	_Inner.clear();
	return this;
}

 
bool UXLFormula::Equal(UXLFormula* other)
{
	return _Inner == other->_Inner;
}
 
bool UXLFormula::NotEqual(UXLFormula* other)
{
	return _Inner != other->_Inner;
}