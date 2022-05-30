// Fill out your copyright notice in the Description page of Project Settings.


#include "XLWorkbook.h"
#include <algorithm>
 
UXLSheet* UXLWorkbook::SheetAt(int32 index)
{ 
	auto ret = NewObject<UXLSheet>();
	ret->_Inner = std::move(_Inner.sheet(index));

	return ret;
}
 
UXLSheet* UXLWorkbook::Sheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	auto ret = NewObject<UXLSheet>();
	ret->_Inner = std::move(_Inner.sheet(_Name));

	return ret;
}
 
UXLWorksheet* UXLWorkbook::Worksheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	auto ret = NewObject<UXLWorksheet>();
	ret->_Inner = std::move(_Inner.worksheet(_Name));

	return ret;
}
 
UXLChartsheet* UXLWorkbook::Chartsheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	auto ret = NewObject<UXLChartsheet>();
	ret->_Inner = std::move(_Inner.chartsheet(_Name));

	return ret;
}

 
void UXLWorkbook::DeleteSheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	_Inner.deleteSheet(_Name);
}
 
void UXLWorkbook::AddWorksheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	_Inner.addWorksheet(_Name);
}
 
void UXLWorkbook::CloneSheet(FString existingName, FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*existingName));
	std::string _Name2(TCHAR_TO_UTF8(*newName));
	_Inner.cloneSheet(_Name1, _Name2);
}
 
void UXLWorkbook::SetSheetIndex(FString sheetName, int32 index)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	_Inner.setSheetIndex(_Name1, index);
}

 
int32 UXLWorkbook::IndexOfSheet(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	return _Inner.indexOfSheet(_Name1);
}
 
EXLSheetType UXLWorkbook::TypeOfSheet(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	return (EXLSheetType)_Inner.typeOfSheet(_Name1);
}
 
EXLSheetType UXLWorkbook::TypeOfSheetAt(int32 index)
{ 
	return (EXLSheetType)_Inner.typeOfSheet(index);
}
 
int32 UXLWorkbook::SheetCount()
{
	return _Inner.sheetCount();
}
 
int32 UXLWorkbook::WorksheetCount()
{
	return _Inner.worksheetCount();
}
 
int32 UXLWorkbook::ChartsheetCount()
{
	return _Inner.chartsheetCount();
}
 
TArray<FString> UXLWorkbook::SheetNames()
{
	auto ls = _Inner.sheetNames();
	TArray<FString> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(), [&ret](auto& it){
		ret.Add(FString(it.c_str()));
		});
	return ret;
}
 
TArray<FString> UXLWorkbook::WorksheetNames()
{
	auto ls = _Inner.worksheetNames();
	TArray<FString> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(), [&ret](auto& it) {
		ret.Add(FString(it.c_str()));
		});
	return ret;
}
 
TArray<FString> UXLWorkbook::ChartsheetNames()
{
	auto ls = _Inner.chartsheetNames();
	TArray<FString> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(), [&ret](auto& it) {
		ret.Add(FString(it.c_str()));
		});
	return ret;
}
 
bool UXLWorkbook::SheetExists(FString name)
{
	std::string _Name1(TCHAR_TO_UTF8(*name));
	return _Inner.sheetExists(_Name1);
}
 
bool UXLWorkbook::WorksheetExists(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	return _Inner.worksheetExists(_Name1);
}
 
bool UXLWorkbook::ChartsheetExists(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	return _Inner.chartsheetExists(_Name1);
}
 
 
 
void UXLWorkbook::DeleteNamedRanges()
{
	 _Inner.deleteNamedRanges();
}
 
void UXLWorkbook::SetFullCalculationOnLoad()
{
	_Inner.setFullCalculationOnLoad();
}