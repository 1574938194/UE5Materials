// Fill out your copyright notice in the Description page of Project Settings.


#include "CellValue.h"
 
FString FCellValue::ToString() const
{
	switch (type())
	{
	case EXLValueType::Empty:
		return FString("");
	case EXLValueType::Boolean:
		return FString(bool(*this)?"true":"false");
	case EXLValueType::Integer:
		return FString::FromInt(int32(*this));
	case EXLValueType::Float:
		return FString::SanitizeFloat(float(*this));
	case EXLValueType::Error:
		return FString("");
	case EXLValueType::String:
		return this->operator FString();
	default:
		break;
	}
	return FString("");
}