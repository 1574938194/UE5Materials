// Fill out your copyright notice in the Description page of Project Settings.

#include "XLDocument.h" 
#include "OpenXLSX/include/OpenXLSX.hpp"
#include "XLWorksheet.h"
 
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
  
bool UXLDocument::ExcelIsValid()
{
	return (bool)_Inner;
}
 

UXLWorksheet* UXLDocument::GetSheetAt(int32 index)
{
	try
	{
		auto ret = NewObject<UXLWorksheet>();
		ret->_Inner = std::move(_Inner.workbook().sheet(index).get<XLWorksheet>());
		return ret;
	}
	catch (...)
	{
		return nullptr;
	}
}

UXLWorksheet* UXLDocument::GetOrCreateSheetWithName(FString name)
{
	try
	{
		std::string _Name(TCHAR_TO_UTF8(*name));
		auto ret = NewObject<UXLWorksheet>();
		if (_Inner.workbook().worksheetExists(_Name))
		{
			ret->_Inner = std::move(_Inner.workbook().worksheet(_Name));
			return ret;
		}
		_Inner.workbook().addWorksheet(_Name);
		ret->_Inner = std::move(_Inner.workbook().worksheet(_Name));
		return ret; 
	}
	catch (...)
	{
		return nullptr;
	}
}
 
void UXLDocument::DeleteSheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	_Inner.workbook().deleteSheet(_Name);
}

  
void UXLDocument::CloneSheet(FString existingName, FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*existingName));
	std::string _Name2(TCHAR_TO_UTF8(*newName));
	_Inner.workbook().cloneSheet(_Name1, _Name2);
}

void UXLDocument::SetSheetIndex(FString sheetName, int32 index)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	_Inner.workbook().setSheetIndex(_Name1, index);
}


int32 UXLDocument::IndexOfSheet(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	return _Inner.workbook().indexOfSheet(_Name1);
}
 
int32 UXLDocument::SheetCount()
{
	return _Inner.workbook().sheetCount();
}
 
TArray<FString> UXLDocument::SheetNames()
{
	auto ls = _Inner.workbook().sheetNames();
	TArray<FString> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(), [&ret](auto& it) {
		ret.Add(FString(it.c_str()));
		});
	return ret;
}
 

bool UXLDocument::SheetExists(FString name)
{
	std::string _Name1(TCHAR_TO_UTF8(*name));
	return _Inner.workbook().sheetExists(_Name1);
}
 

void UXLDocument::DeleteNamedRanges()
{
	_Inner.workbook().deleteNamedRanges();
}

void UXLDocument::SetFullCalculationOnLoad()
{
	_Inner.workbook().setFullCalculationOnLoad();
}
 
UXLWorksheet* UXLDocument::GetCurrentSheet()
{
	return _curSheet;
}
 
UXLWorksheet* UXLDocument::GetPreviousSheet()
{
	return _prevSheet;
}
 
void UXLDocument::SetCurrentSheet(UXLWorksheet* _New)
{
	_prevSheet = _curSheet;
	_curSheet = _New;
}