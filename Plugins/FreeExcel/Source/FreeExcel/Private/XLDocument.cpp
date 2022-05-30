// Fill out your copyright notice in the Description page of Project Settings.

#include "XLDocument.h"
#include "OpenXLSX/include/OpenXLSX.hpp"
 
 
using namespace std;
using namespace OpenXLSX;

 
 
 
UXLDocument* UXLDocument::OpenExcel(FString path)
{
	std::string _Path(TCHAR_TO_UTF8(*path));
	auto ret = NewObject<UXLDocument>();
	ret->_Inner.open(_Path);

	return ret;
}
 
UXLDocument* UXLDocument::CreateExcel(FString path)
{
	std::string _Path(TCHAR_TO_UTF8(*path));
	auto ret = NewObject<UXLDocument>();
	ret->_Inner.create(_Path);
	return ret;
}
 
void UXLDocument::CloseExcel()
{
	_Inner.close();
}
 
void UXLDocument::SaveExcel()
{
	_Inner.save();
}
 
void UXLDocument::SaveExcelAs(FString path)
{
	std::string _Path(TCHAR_TO_UTF8(*path));
	_Inner.saveAs(_Path);
}
 
FString UXLDocument::ExcelFileName()
{ 
	return FString(_Inner.name().c_str());
}
 
FString UXLDocument::ExcelFullPath()
{
	return FString(_Inner.path().c_str());
}
  
bool UXLDocument::IsValid()
{
	return (bool)_Inner;
}
  
UXLWorkbook* UXLDocument::Workbook()
{ 
	auto ret = NewObject<UXLWorkbook>();
	ret->_Inner = std::move(_Inner.workbook());

	return ret;
}
 /*
FString UXLDocument::Property(EXLProperty prop)
{
	return FString((_Inner.property((XLProperty)prop)).c_str());
}
 
void UXLDocument::SetProperty(EXLProperty prop, FString value)
{
	_Inner.setProperty((XLProperty)prop, std::string(TCHAR_TO_UTF8(*value)));
}
 
void UXLDocument::DeleteProperty(EXLProperty prop)
{
	_Inner.deleteProperty((XLProperty)prop);
}
 */