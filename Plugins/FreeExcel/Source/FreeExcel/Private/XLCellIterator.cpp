// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCellIterator.h"
  
 
void UXLCellIterator::Forward()
{
	++_Inner;
}
 
UXLCell* UXLCellIterator::Get()
{ 
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(*_Inner);

	return ret;
}
 
bool UXLCellIterator::Equal(UXLCellIterator* right)
{
	return _Inner == right->_Inner;
}
 
bool UXLCellIterator::NotEqual(UXLCellIterator* right)
{
	return _Inner != right->_Inner;
}
 
int64 UXLCellIterator::Different(UXLCellIterator* last)
{
	return _Inner.distance(last->_Inner);
}