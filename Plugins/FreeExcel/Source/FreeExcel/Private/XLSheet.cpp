// Fill out your copyright notice in the Description page of Project Settings.


#include "XLSheet.h"
 
EXLSheetState UXLSheet::Visibility()
{
	return (EXLSheetState)_Inner.visibility();
}

 
void UXLSheet::SetVisibility(EXLSheetState state)
{
	_Inner.setVisibility((OpenXLSX::XLSheetState)state);
}

 
FColor UXLSheet::Color()
{
	auto c = _Inner.color();
	return FColor(c.red(), c.green(), c.blue(), c.alpha());
}
 
void UXLSheet::SetColor(FColor color)
{
	_Inner.setColor(OpenXLSX::XLColor(color.R, color.G, color.B, color.A));
}

 
int32 UXLSheet::Index()
{
	return _Inner.index();
}

 
void UXLSheet::SetIndex(int32 index)
{
	_Inner.setIndex(index);
}

 
FString UXLSheet::Name()
{
	return FString(_Inner.name().c_str());
}

 
void UXLSheet::SetName(FString name)
{
	_Inner.setName(TCHAR_TO_UTF8(*name));
}
 
void UXLSheet::SetSelected(bool selected)
{
	_Inner.setSelected(selected);
}

 
bool UXLSheet::IsWorksheet()
{
	return _Inner.isType<OpenXLSX::XLWorksheet>();
}
 
bool UXLSheet::IsChartsheet()
{
	return _Inner.isType<OpenXLSX::XLChartsheet>();
}

 
void UXLSheet::Clone(FString newName)
{
	_Inner.clone(TCHAR_TO_UTF8(*newName));
}

 
UXLWorksheet* UXLSheet::ToWorksheet()
{ 
	auto ret = NewObject<UXLWorksheet>();
	ret->_Inner = std::move(_Inner.get<OpenXLSX::XLWorksheet>());

	return ret;
}

 
UXLChartsheet* UXLSheet::ToChartsheet()
{
	auto ret = NewObject<UXLChartsheet>();
	ret->_Inner = std::move(_Inner.get<OpenXLSX::XLChartsheet>());

	return ret;
}