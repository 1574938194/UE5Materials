// Fill out your copyright notice in the Description page of Project Settings.


#include "XLWorksheet.h"

 
EXLSheetState UXLWorksheet::Visible()
{
	return (EXLSheetState)_Inner.visibility();
}
 
void UXLWorksheet::SetVisible(EXLSheetState state)
{
	_Inner.setVisibility((OpenXLSX::XLSheetState)state);
}
 
FColor UXLWorksheet::Color()
{
	auto c=  _Inner.color();
	return FColor(c.red(),c.green(),c.blue(),c.alpha());
}
 
void UXLWorksheet::SetColor(FColor color)
{
	_Inner.setColor(OpenXLSX::XLColor(color.R, color.G, color.B, color.A));
}
 
int32 UXLWorksheet::Index()
{
	return _Inner.index();
}
 
void UXLWorksheet::SetIndex(int32 index)
{
	_Inner.setIndex(index);
}

 
FString UXLWorksheet::Name()
{
	return FString(_Inner.name().c_str());
}

 
void UXLWorksheet::SetName(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	_Inner.setName(_Name1);
}
 
bool UXLWorksheet::IsSelected()
{
	return _Inner.isSelected();
}
 
void UXLWorksheet::SetSelected(bool selected)
{
	_Inner.setSelected(selected);
}

bool UXLWorksheet::IsActive()
{
	return _Inner.isActive();
}

 
void UXLWorksheet::SetActive()
{
	_Inner.setActive();
}

 
void UXLWorksheet::Clone(FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*newName));
	_Inner.clone(_Name1);
}
 
 
UXLCell* UXLWorksheet::Cell(FString ref)
{
	std::string _Name1(TCHAR_TO_UTF8(*ref));
	auto ret =  NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.cell(_Name1));

	return ret;
}
 
UXLCell* UXLWorksheet::CellWithRef(UXLCellReference* ref)
{ 
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.cell(ref->_Inner));

	return ret;
}
 
UXLCell* UXLWorksheet::CellAt(int32 rowNumber, int32 columnNumber)
{
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.cell(rowNumber, columnNumber));

	return ret;
}

 
UXLCellRange* UXLWorksheet::RangeInUse()
{
	auto ret = NewObject<UXLCellRange>();
	ret->_Inner = _Inner.range();

	return ret;
}

 
UXLCellRange* UXLWorksheet::Range(UXLCellReference* topLeft, UXLCellReference* bottomRight)
{
	auto ret = NewObject<UXLCellRange>();
	ret->_Inner = _Inner.range(topLeft->_Inner, bottomRight->_Inner);

	return ret;
}

 
UXLCellReference* UXLWorksheet::LastCell()
{
	auto ret = NewObject<UXLCellReference>();
	ret->_Inner = std::move(_Inner.lastCell());

	return ret;
}
 
int32 UXLWorksheet::ColCount()
{
	return _Inner.columnCount();
}
 
int32 UXLWorksheet::RowCount()
{
	return _Inner.rowCount();
}

 
void UXLWorksheet::SheetRename(FString oldName, FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*oldName));
	std::string _Name2(TCHAR_TO_UTF8(*newName));
	_Inner.updateSheetName(_Name1, _Name2);
}



void UXLWorksheet::SetBoolAt(int32 row, int32 col, bool val)
{
	_Inner.cell(row, col).value() = val;
}


void UXLWorksheet::SetBool(FString ref, bool val)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	_Inner.cell(_Str).value() = val;
}


void UXLWorksheet::SetIntegerAt(int32 row, int32 col, int64 val)
{
	_Inner.cell(row, col).value() = val;
}

void UXLWorksheet::SetInteger(FString ref, int64 val) 
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	_Inner.cell(_Str).value() = val;
}

void UXLWorksheet::SetStringAt(int32 row, int32 col, FString val)
{
	std::string _Str(TCHAR_TO_UTF8(*val));
	_Inner.cell(row, col).value() = _Str;
}

void UXLWorksheet::SetString(FString ref, FString val)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	std::string _Str2(TCHAR_TO_UTF8(*val));
	_Inner.cell(_Str).value() = _Str2;
}
 
void UXLWorksheet::SetFloatAt(int32 row, int32 col, float val)
{
	_Inner.cell(row, col).value() = val;
}

void UXLWorksheet::SetFloat(FString ref, float val)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	_Inner.cell(_Str).value() = val;
}

void UXLWorksheet::SetDateTimeAt(int32 row, int32 col, FDateTime val)
{
	std::tm tm;
	tm.tm_year = val.GetYear() - 1900;
	tm.tm_mon = val.GetMonth() - 1;
	tm.tm_mday = val.GetDay();
	tm.tm_hour = val.GetHour();
	tm.tm_min = val.GetMinute();
	tm.tm_sec = val.GetSecond();

	_Inner.cell(row, col).value() = OpenXLSX::XLDateTime(tm);
}

void UXLWorksheet::SetDateTime(FString ref, FDateTime val)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	std::tm tm;
	tm.tm_year = val.GetYear() - 1900;
	tm.tm_mon = val.GetMonth() - 1;
	tm.tm_mday = val.GetDay();
	tm.tm_hour = val.GetHour();
	tm.tm_min = val.GetMinute();
	tm.tm_sec = val.GetSecond();

	_Inner.cell(_Str).value() = OpenXLSX::XLDateTime(tm);
}


bool UXLWorksheet::GetBoolAt(int32 row, int32 col)
{
	return _Inner.cell(row, col).value().get<bool>();
}
 
bool UXLWorksheet::GetBool(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	return _Inner.cell(_Str).value().get<bool>();
}

int64 UXLWorksheet::GetIntegerAt(int32 row, int32 col)
{
	return _Inner.cell(row, col).value().get<int64>();
}
 
int64 UXLWorksheet::GetInteger(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	return _Inner.cell(_Str).value().get<int64>();
}

FString UXLWorksheet::GetStringAt(int32 row, int32 col)
{
	auto cell = _Inner.cell(row, col);
	if (cell.hasFormula())
	{
		return FString(cell.formula().get().c_str());
	}
	return FString(cell.value().get<std::string>().c_str());
}
 
FString UXLWorksheet::GetString(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	auto cell = _Inner.cell(_Str);
	if (cell.hasFormula())
	{
		return FString(cell.formula().get().c_str());
	}
	return FString(cell.value().get<std::string>().c_str());
}

float UXLWorksheet::GetFloatAt(int32 row, int32 col)
{
	return _Inner.cell(row, col).value().get<double>();
}
 
float UXLWorksheet::GetFloat(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	return _Inner.cell(_Str).value().get<double>();
}

FDateTime UXLWorksheet::GetDateTimeAt(int32 row, int32 col)
{
	auto tm = _Inner.cell(row, col).value().get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
}

FDateTime UXLWorksheet::GetDateTime(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	auto tm = _Inner.cell(_Str).value().get<OpenXLSX::XLDateTime>().tm();
	return FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
}


void UXLWorksheet::ClearCellAt(int32 row, int32 col)
{
	auto cell = _Inner.cell(row, col);
	if (cell.hasFormula())
	{
		cell.formula().clear();
	}
	else
	{
		cell.value().clear();
	}
}


void UXLWorksheet::ClearCell(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	auto cell = _Inner.cell(_Str);
	if (cell.hasFormula())
	{
		cell.formula().clear();
	}
	else
	{
		cell.value().clear();
	}
}

EXLValueType UXLWorksheet::CellTypeAt(int32 row, int32 col)
{
	auto cell = _Inner.cell(row,  col);
	if (cell.hasFormula()) return EXLValueType::Formula;
	return (EXLValueType)cell.value().type();
}

EXLValueType UXLWorksheet::CellType(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	auto cell = _Inner.cell(_Str);
	if (cell.hasFormula()) return EXLValueType::Formula;
	return (EXLValueType)cell.value().type();
}

void UXLWorksheet::SetFormulaAt(int32 row, int32 col, FString val)
{
	std::string _Str(TCHAR_TO_UTF8(*val));
	_Inner.cell(row, col).formula() = _Str;
}
 
void UXLWorksheet::SetFormula(FString ref, FString val)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	std::string _Str2(TCHAR_TO_UTF8(*val));
	_Inner.cell(_Str).formula() = _Str2;
}

bool UXLWorksheet::IsFormulaCellAt(int32 row, int32 col)
{
	return _Inner.cell(row, col).hasFormula();
}
bool UXLWorksheet::IsFormulaCell(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	return _Inner.cell(_Str).hasFormula();
}
FString UXLWorksheet::GetSourceAt(int32 row, int32 col)
{
	auto cell = _Inner.cell(row,col);
	if (cell.hasFormula())
	{
		return FString( ((std::string)cell.formula()).c_str());
	}
	switch (cell.value().type())
	{
	case	OpenXLSX::XLValueType::Empty: return FString(TEXT(""));
	case	OpenXLSX::XLValueType::Boolean:return FString( cell.value().get<bool>()?TEXT("true"): TEXT("false"));
	case	OpenXLSX::XLValueType::Integer:return FString::FromInt(cell.value().get<int64>());
	case	OpenXLSX::XLValueType::Float:return FString::SanitizeFloat(cell.value().get<double>());
	case	OpenXLSX::XLValueType::Error:FString(TEXT("#"));
	case	OpenXLSX::XLValueType::String:FString(cell.value().get<std::string>().c_str());
	
	default:
		break;
	}
	return FString(TEXT(""));
}
FString UXLWorksheet::GetSource(FString ref)
{
	std::string _Str(TCHAR_TO_UTF8(*ref));
	auto cell = _Inner.cell(_Str);
	if (cell.hasFormula())
	{
		return FString(((std::string)cell.formula()).c_str());
	}
	switch (cell.value().type())
	{
	case	OpenXLSX::XLValueType::Empty: return FString(TEXT(""));
	case	OpenXLSX::XLValueType::Boolean:return FString(cell.value().get<bool>() ? TEXT("true") : TEXT("false"));
	case	OpenXLSX::XLValueType::Integer:return FString::FromInt(cell.value().get<int64>());
	case	OpenXLSX::XLValueType::Float:return FString::SanitizeFloat(cell.value().get<double>());
	case	OpenXLSX::XLValueType::Error:FString(TEXT("#"));
	case	OpenXLSX::XLValueType::String:FString(cell.value().get<std::string>().c_str());

	default:
		break;
	}
	return FString(TEXT(""));
}

 
bool UXLWorksheet::IsRowHidden(int32 rowNo)
{
	return _Inner.row(rowNo).isHidden();
}

void UXLWorksheet::SetRowHidden(int32 rowNo,bool state)
{
	_Inner.row(rowNo).setHidden(state);
}

int32 UXLWorksheet::GetRowCellCount(int32 rowNo)
{
	return _Inner.row(rowNo).cellCount();
}
 