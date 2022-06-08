// Fill out your copyright notice in the Description page of Project Settings.

#include "ExcelDocument.h" 
#include "OpenXLSX/include/OpenXLSX.hpp"
#include "Sheet.h"
#include "Kismet/KismetSystemLibrary.h"

using namespace std;
using namespace OpenXLSX;

 
UExcelDocument::UExcelDocument(const FObjectInitializer& ObjectInitializer )
	:Super(ObjectInitializer)
{
	_Inner = MakeUnique<XLDocument>();
 
}
 
void UExcelDocument::Open(FString path)
{
	std::string _Path(TCHAR_TO_UTF8(*path));
	_Inner->open(_Path); 
	if (_Inner->workbook().worksheetCount() > 0)
	{
		auto obj = NewObject<USheet>();
		obj->_Inner = _Inner->workbook().worksheet(_Inner->workbook().worksheetNames()[0]); 
		_curSheet = obj;
	}
}
 
void UExcelDocument::Create(FString path)
{
	std::string _Path(TCHAR_TO_UTF8(*path)); 
	_Inner->create(_Path); 
}
 
void UExcelDocument::Close()
{
	_Inner->close();
}
 
void UExcelDocument::Save()
{
	_Inner->save();
}
 
void UExcelDocument::SaveAs(FString path)
{
	std::string _Path(TCHAR_TO_UTF8(*path));
	_Inner->saveAs(_Path);
}
 
FString UExcelDocument::FileName() const
{ 
	return FString(_Inner->name().c_str());
}
 
FString UExcelDocument::FullPath()const
{
	return FString(_Inner->path().c_str());
}
  
bool UExcelDocument::IsValid()const
{
	return (bool)_Inner;
}
 

USheet* UExcelDocument::GetSheetAt(int32 index)const
{
	try
	{
		auto ret = NewObject<USheet>();
		ret->_Inner = std::move(_Inner->workbook().sheet(index).get<XLWorksheet>());
		return ret;
	}
	catch (...)
	{
		return nullptr;
	}
}

USheet* UExcelDocument::GetOrCreateSheetWithName(FString name)
{
	try
	{
		std::string _Name(TCHAR_TO_UTF8(*name));
		auto ret = NewObject<USheet>();
		if (_Inner->workbook().worksheetExists(_Name))
		{
			ret->_Inner = std::move(_Inner->workbook().worksheet(_Name)); 
		}
		else
		{
			_Inner->workbook().addWorksheet(_Name);
			ret->_Inner = std::move(_Inner->workbook().worksheet(_Name));
		} 
		_curSheet = ret;
		return ret; 
	}
	catch (...)
	{
		return nullptr;
	}
}
 
void UExcelDocument::DeleteSheet(FString name)
{
	std::string _Name(TCHAR_TO_UTF8(*name));
	_Inner->workbook().deleteSheet(_Name);
}

  
void UExcelDocument::CloneSheet(FString existingName, FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*existingName));
	std::string _Name2(TCHAR_TO_UTF8(*newName));
	_Inner->workbook().cloneSheet(_Name1, _Name2);
}

void UExcelDocument::SetSheetIndex(FString sheetName, int32 index)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	_Inner->workbook().setSheetIndex(_Name1, index);
}


int32 UExcelDocument::GetSheetIndex(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	return _Inner->workbook().indexOfSheet(_Name1);
}
 
int32 UExcelDocument::GetSheetCount()const
{
	return _Inner->workbook().sheetCount();
}
 
TArray<FString> UExcelDocument::GetSheetNames()const
{
	auto ls = _Inner->workbook().sheetNames();
	TArray<FString> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(), [&ret](auto& it) {
		ret.Add(FString(it.c_str()));
		});
	return ret;
}
 

bool UExcelDocument::HasSheet(FString name)const
{
	std::string _Name1(TCHAR_TO_UTF8(*name));
	return _Inner->workbook().sheetExists(_Name1);
}
 
//void UExcelDocument::SetFullCalculationOnLoad()
//{
//	_Inner->workbook().setFullCalculationOnLoad();
//}


USheet* UExcelDocument::GetCurrentSheet()
{
	return _curSheet;
}
 