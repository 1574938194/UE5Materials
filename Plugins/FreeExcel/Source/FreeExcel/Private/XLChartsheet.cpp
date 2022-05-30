// Fill out your copyright notice in the Description page of Project Settings.


#include "XLChartsheet.h"



EXLSheetState UXLChartsheet::Visible()
{
	return (EXLSheetState)_Inner.visibility();
}


void UXLChartsheet::SetVisible(EXLSheetState state)
{
	_Inner.setVisibility((OpenXLSX::XLSheetState)state);
}


FColor UXLChartsheet::Color()
{
	auto c = _Inner.color();
	return FColor(c.red(),c.green(),c.blue(),c.alpha());
}


void UXLChartsheet::SetColor(FColor color)
{
	_Inner.setColor(OpenXLSX::XLColor(color.R,color.G,color.B,color.A));
}


int32 UXLChartsheet::Index()
{
	return _Inner.index();
}


void UXLChartsheet::SetIndex(int32 index)
{
	_Inner.setIndex(index);
}


FString UXLChartsheet::Name()
{
	return FString((_Inner.name()).c_str());
}


void UXLChartsheet::SetName(FString sheetName)
{
	_Inner.setName(std::string(TCHAR_TO_UTF8(*sheetName)));
}


bool UXLChartsheet::IsSelected()
{
	return _Inner.isSelected();
}


void UXLChartsheet::SetSelected(bool selected)
{
	 _Inner.setSelected(selected);
}


void UXLChartsheet::Clone(FString newName)
{
	_Inner.clone(std::string(TCHAR_TO_UTF8(*newName)));
}