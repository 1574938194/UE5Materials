// Fill out your copyright notice in the Description page of Project Settings.


#include "Sheet.h"

  
 
FString USheet::Name() const
{
	return FString(_Inner.name().c_str());
}
 
void USheet::SetName(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	if (_Name1 != _Inner.name())
	{
		_Inner.updateSheetName(_Inner.name(), _Name1);
		_Inner.setName(_Name1);
	}
}
    
UCell* USheet::Cell(FCellReference ref)const
{ 
	auto ret =  NewObject<UCell>();
	ret->_Inner = std::move(_Inner.cell(ref.Row,ref.Col));

	return ret;
}
  
FCellReference USheet::LastCell()const
{
	auto last = _Inner.lastCell();

	return { (decltype(FCellReference::Row))last.row(),(decltype(FCellReference::Col))last.column()} ;
}
 
void USheet::SheetSize(int32& RowSize,int32& ColSize) const
{
	RowSize = _Inner.rowCount();
	ColSize=	_Inner.columnCount();
}
  
int32 USheet::GetRowCellCount(int32 rowNo)const
{
	return _Inner.row(rowNo).cellCount();
}
 
