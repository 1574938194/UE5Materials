// Fill out your copyright notice in the Description page of Project Settings.

#pragma optimize("",off)

#include "FreeExcelLibrary.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "Sheet.h"
#include "CellValue.h"
#include "ExcelDocument.h"
#include "UObject/Field.h"
#include "Kismet/KismetArrayLibrary.h"
#include "UObject/UnrealType.h"
#include "UObject/EnumProperty.h"
#include "DataTableUtils.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Policies/PrettyJsonPrintPolicy.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"
#include "Engine/UserDefinedStruct.h"

const TCHAR* JSONTypeToString(const EJson InType)
{
	switch (InType)
	{
	case EJson::None:
		return TEXT("None");
	case EJson::Null:
		return TEXT("Null");
	case EJson::String:
		return TEXT("String");
	case EJson::Number:
		return TEXT("Number");
	case EJson::Boolean:
		return TEXT("Boolean");
	case EJson::Array:
		return TEXT("Array");
	case EJson::Object:
		return TEXT("Object");
	default:
		return TEXT("Unknown");
	}
}
  
 
void UFreeExcelLibrary::Offset(FCellReference Ref, int32 row, int32 col)
{
	Ref.Col += row;
	Ref.Row += col; 
}
 
bool  UFreeExcelLibrary::Equal_CellReference(FCellReference A, FCellReference B)
{
	return A.Row == B.Col && A.Col == B.Col;
}


bool  UFreeExcelLibrary::NotEqual_CellReference(FCellReference A, FCellReference B)
{
	return A.Row != B.Col && A.Col != B.Col;
}

bool  UFreeExcelLibrary::Equal_CellRange(FCellRange A, FCellRange B)
{
	return A.Min == B.Min && A.Max == B.Max;
}


bool  UFreeExcelLibrary::NotEqual_CellRange(FCellRange A, FCellRange B)
{
	return A.Min != B.Min && A.Max != B.Max;
}
  
void UFreeExcelLibrary::BreakCellReference(FCellReference Ref, int& Row, int& Col)
{
	Row = Ref.Row;
	Col = Ref.Col;
}
 
 
FCellReference UFreeExcelLibrary::MakeCellReferenceWithString(FString ref)
{ 
	return FCellReference(ref);
}

 
FCellReference UFreeExcelLibrary::MakeCellReference(int32 row, int32 col) {
	FCellReference ret;
	if (FCellReference::address_is_valid(row, col))
	{
		ret.Row = row; ret.Col = col;
	}
	return ret;
}
 
 FString UFreeExcelLibrary::ToString_CellReference(FCellReference ref)
{
	 return ref.to_string();
}
  
FCellRange UFreeExcelLibrary::MakeCellRangeWithString(FString ref)
 {
	 FCellRange ret;
	 auto pos = 0;
	 for (int i = 0; i < ref.Len(); ++i)
	 {
		 if (ref[i] == TEXT(':'))
		 {
			 pos = i;
			 break;
		 }
	 }
	 ret.Min = MakeCellReferenceWithString(ref.Mid(0, pos));
	 ret.Max = MakeCellReferenceWithString(ref.Mid(pos+1));

	 return ret;
 }
	  
FCellRange UFreeExcelLibrary::MakeCellRange(int32 MinRow, int32 MinCol, int32 MaxRow, int32 MaxCol)
 {
	 FCellRange ret;
	 ret.Min.Row = std::min(MinRow,MaxRow);
	 ret.Min.Col = std::min(MinCol, MaxCol);
	 ret.Max.Row = std::max(MinRow, MaxRow);
	 ret.Max.Col = std::max(MinCol, MaxCol);

	 return ret;
 }
 
FCellRange UFreeExcelLibrary::MakeCellRange_Internal(USheet* sheet, const FCellRange& range)
{
	FCellRange ret = FCellRange(range);
	if (sheet)
	{
		ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(sheet->_Inner.xmlDocument().first_child().child("sheetData"));
		
		ret.sharedStrings = sheet->_Inner.parentDoc().execQuery(OpenXLSX::XLQuery(OpenXLSX::XLQueryType::QuerySharedStrings)).result<OpenXLSX::XLSharedStrings>();
	} 

	return ret;
}

 
 
 FCellValue UFreeExcelLibrary::MakeCellValue_Bool(bool val)
{
	 return FCellValue(val);
}
 
 FCellValue  UFreeExcelLibrary::MakeCellValue_Int(int32 val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelLibrary::MakeCellValue_Float(float val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelLibrary::MakeCellValue_String(FString val)
{
	 return FCellValue(val);
}

 FCellValue  UFreeExcelLibrary::MakeCellValue_DateTime(FDateTime val)
{
	 return FCellValue(val);
}

	bool  UFreeExcelLibrary::ToBool_CellValue(const FCellValue& val)
{
		return val;
}

	int32  UFreeExcelLibrary::ToInt_CellValue(const FCellValue& val)
{
		return val;
}

	float  UFreeExcelLibrary::ToFloat_CellValue(const FCellValue& val)
{
		return val;
}

	FString  UFreeExcelLibrary::ToString_CellValue(const FCellValue& val)
{
		return val;
}

FDateTime  UFreeExcelLibrary::ToDateTime_CellValue(const FCellValue& val)
{
	return val;
}

void  UFreeExcelLibrary::Clear_CellValue( FCellValue& val)
{
	val.clear();
}

EXLValueType  UFreeExcelLibrary::Type_CellValue(const FCellValue& val)
{
	return val.type();
}

void UFreeExcelLibrary::SetCellValue(const int32& Target, const int32& Ref, const int32& Value)
{
	check(0)
}
void UFreeExcelLibrary::Generic_SetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref, FProperty* ValProperty, void* Value)
{
	if (!Ref || !Value || !Self)
	{
		return;
	}

	if (SelfProperty->GetCPPType() == "FCellValue")
	{
		auto cell = (FCellValue*)Self;
		if (CastField<FFloatProperty>(ValProperty))
		{
			*cell = *(float*)Value;
		}
		else if (CastField<FStrProperty>(ValProperty))
		{
			*cell = std::string(TCHAR_TO_UTF8(**(FString*)Value));
		}
		else if (ValProperty->GetCPPType() == "FCellValue")
		{
			*cell = *(FCellValue*)Value;
		}
		else
			if (CastField<FBoolProperty>(ValProperty))
			{
				*cell = *(bool*)Value;
			}
			else if (CastField<FIntProperty>(ValProperty))
			{
				*cell = *(int32*)Value;
			}
			else if (ValProperty->GetCPPType() == "FDateTime")
			{
				*cell = *(FDateTime*)Value;
			}

	}
	else
	{
		FCellReference ref;
		if (SelfProperty->GetCPPType() != "UCell")
		{
			if (RefProperty->GetCPPType() == "FCellReference")
			{
				ref = *(FCellReference*)Ref;
			}
			else if (CastField<FStrProperty>(RefProperty))
			{
				ref = { (TCHAR_TO_UTF8(**(FString*)Ref)) };
			}
			else if (RefProperty->GetCPPType() == "FIntPoint")
			{
				ref = { ((FIntPoint*)Ref)->X, ((FIntPoint*)Ref)->Y };
			}


		}
		auto&& cell = (SelfProperty->GetCPPType() == "UExcelDocument*") ? (*(UExcelDocument**)Self)->GetCurrentSheet()->_Inner.cell(ref.Row, ref.Col)
			: ((SelfProperty->GetCPPType() == "USheet*") ? (*(USheet**)Self)->_Inner.cell(ref.Row, ref.Col) : (**(UCell**)Self)._Inner);
		if (CastField<FFloatProperty>(ValProperty))
		{
			cell.value() = *(float*)Value;
		}
		else if (CastField<FStrProperty>(ValProperty))
		{
			cell.value() = std::string(TCHAR_TO_UTF8(**(FString*)Value));
		}
		else if (ValProperty->GetCPPType() == "FCellValue")
		{
			auto val = *(FCellValue*)Value;
			cell.value() = OpenXLSX::XLCellValue{ val._Value, (OpenXLSX::XLValueType)val._Type };
		}
		else if (CastField<FBoolProperty>(ValProperty))
		{
			cell.value() = *(bool*)Value;
		}
		else if (CastField<FIntProperty>(ValProperty))
		{
			cell.value() = *(int32*)Value;
		}
		else if (ValProperty->GetCPPType() == "FDateTime")
		{
			auto val = (FDateTime*)Value;
			std::tm tm;
			tm.tm_year = val->GetYear() - 1900;
			tm.tm_mon = val->GetMonth() - 1;
			tm.tm_mday = val->GetDay();
			tm.tm_hour = val->GetHour();
			tm.tm_min = val->GetMinute();
			tm.tm_sec = val->GetSecond();

			cell.value() = OpenXLSX::XLDateTime(tm);
		}
	}
}

void UFreeExcelLibrary::GetCellValue(const int32& Target, const int32& Ref , int32& ReturnValue)
{
	check(0)
}
void UFreeExcelLibrary::Generic_GetCellValue(FProperty* SelfProperty, void* Self, FProperty* RefProperty, void* Ref , FProperty* RetProperty, void* Ret)
{
	if (!Ref || !RetProperty || !Self)
	{
		return;
	}

	if (SelfProperty->GetCPPType() == "FCellValue")
	{
		auto cell = (FCellValue*)Self;
		if (CastField<FFloatProperty>(RetProperty))
		{ 
			if (cell->type() ==EXLValueType::Integer)
			{
				(*(float*)Ret) = (float)cell->template operator int32();
			}
			else
			{
				(*(float*)Ret) = *cell;
			}
		}
		else if (CastField<FStrProperty>(RetProperty))
		{
			(*(FString*)Ret) = cell->template operator FString();
		}
		else if (RetProperty->GetCPPType() == "FCellValue")
		{
			(*(FCellValue*)Ret) = *cell;
		}
		else if (CastField<FBoolProperty>(RetProperty))
		{
			(*(bool*)Ret) = *cell;
		}
		else if (CastField<FIntProperty>(RetProperty))
		{
			(*(int32*)Ret) = *cell;
		}
			else if (RetProperty->GetCPPType() == "FDateTime")
		{
			(*(FDateTime*)Ret) = *cell;
		}

	}
	else
	{
		FCellReference ref;
		if (SelfProperty->GetCPPType() != "UCell")
		{
			if (RefProperty->GetCPPType() == "FCellReference")
			{
				ref = *(FCellReference*)Ref;
			}
			else if (CastField<FStrProperty>(RefProperty))
			{
				ref = { (TCHAR_TO_UTF8(**(FString*)Ref)) };
			}
			else if (RefProperty->GetCPPType() == "FIntPoint")
			{
				ref = { ((FIntPoint*)Ref)->X, ((FIntPoint*)Ref)->Y };
			}


		}
	 
		auto&& cell = (SelfProperty->GetCPPType() == "UExcelDocument*") ? (*(UExcelDocument**)Self)->GetCurrentSheet()->_Inner.cell(ref.Row, ref.Col)
			: ((SelfProperty->GetCPPType() == "USheet*") ? (*(USheet**)Self)->_Inner.cell(ref.Row, ref.Col) : (**(UCell**)Self)._Inner);
		if (auto _Prop = CastField<FFloatProperty>(RetProperty))
		{
			auto&& val = cell.value();
			if (val.type() == OpenXLSX::XLValueType::Integer)
			{
				(*(float*)Ret) = (float)val.template operator int32();
			}
			else
			{
				(*(float*)Ret) = val;
			}
		}
		else if (CastField<FStrProperty>(RetProperty))
		{ 
			(*(FString*)Ret) = FString(cell.value().get<std::string>().c_str());
		}
		else if (RetProperty->GetCPPType() == "FCellValue")
		{
			OpenXLSX::XLCellValue val = cell.value();
			(*(FCellValue*)Ret) = { val.m_value, (EXLValueType)val.m_type };
		}
		else if (CastField<FBoolProperty>(RetProperty))
		{
			(*(bool*)Ret) = cell.value();
		}
		else if (CastField<FIntProperty>(RetProperty))
		{
			(*(int32*)Ret) = cell.value();
		}
		else if (RetProperty->GetCPPType() == "FDateTime")
		{ 
			std::tm  tm = cell.value().get< OpenXLSX::XLDateTime>().tm(); 
			(*(FDateTime*)Ret) = FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
		}
	}
}
 
 void UFreeExcelLibrary::CellIterator_Forward(const FCellIterator& Target)
{
	++const_cast<FCellIterator&>(Target);
}
 
 void UFreeExcelLibrary::Range_Begin(const FCellRange& Target, FCellIterator& ReturnValue)
{
	ReturnValue = Target.begin();
}
 
 void UFreeExcelLibrary::Range_End(const FCellRange& Target, FCellIterator& ReturnValue)
{
	ReturnValue = Target.end();
}
 
 void UFreeExcelLibrary::CellIterator_CellReference(const FCellIterator& Target, FCellReference& ReturnValue)
{
	ReturnValue = Target.Current;
}
 
 void UFreeExcelLibrary::CellIterator_Cell(const FCellIterator& Target, UCell*& ReturnValue)
{
	ReturnValue = &*Target;
}
 
 void UFreeExcelLibrary::CellIterator_NotEqual(const FCellIterator& Target, const FCellIterator& Right ,bool& ReturnValue)
{
	ReturnValue = (Target != Right);
}

  void ToTemplateArray(const int32& Target, const int32& Template, TArray<int32>& ReturnValue)
 {
	 check(0)
 }

 bool ReadStruct(const TSharedRef<FJsonObject>& InParsedObject, UScriptStruct* InStruct, void* InStructData);

 bool ReadStructEntry(const TSharedRef<FJsonValue>& InParsedPropertyValue, void* InStructData, FProperty* InProperty, void* InPropertyData);

 bool ReadContainerEntry(const TSharedRef<FJsonValue>& InParsedPropertyValue, const int32 InArrayEntryIndex, FProperty* InProperty, void* InPropertyData);
  
 void UFreeExcelLibrary::Generic_ToTemplateArray(FProperty* SelfProperty, void* Self,  FArrayProperty* RetProperty, void* Ret)
 {
	 if (!Ret || !Self)
	 {
		 return;
	 }
	 auto sheet = (SelfProperty->GetCPPType() == "UExcelDocument*") ? (*(UExcelDocument**)Self)->GetCurrentSheet() : *(USheet**)Self;
	 std::vector<FProperty*> PropertyIndex;
	 UScriptStruct* RowStruct = CastField<FStructProperty>(RetProperty->Inner)->Struct;
	 auto b1 = RowStruct->IsA<UUserDefinedStruct>(); 
	 UUserDefinedStruct* BPRowStruct = Cast<UUserDefinedStruct>(RowStruct);
	 
	 FScriptArrayHelper ArrayHelper(RetProperty, Ret);
	 
	 auto fields = sheet->GetRowData(1);
	 auto field = fields.begin();
	 for (; field != fields.end(); ++field)
	 {
		 auto name = (FString)*field;
		 if (auto prop = BPRowStruct->FindPropertyByName(*name))
		 {
			 PropertyIndex.push_back(prop);
		 }
		 else
		 {
			 PropertyIndex.push_back(nullptr);
		 }
	 }
	 if (!fields.Num()) return ;
	 auto row = 0, col = 0;
	 sheet->SheetSize(row, col);
	 /*Array.Reserve(row - 1);*/

	 for (int32 RowIdx = 2; RowIdx <= row; ++RowIdx)
	 {
		 auto rowData = sheet->GetRowData(RowIdx);
		 auto it = rowData.begin();
		 auto index = ArrayHelper.AddValue();
		 void* InStructData = ArrayHelper.GetRawPtr(index);
		 auto p = PropertyIndex.begin();
		 for (int i = 0; i < PropertyIndex.size(); ++i, ++p, ++it)
		 {
			 if (!*p)  continue;


			 FProperty* BaseProp = *p;
			 check(BaseProp);

			 if (auto NumericProperty = CastField<FNumericProperty>(BaseProp))
			 {
				 void* Data = BaseProp->ContainerPtrToValuePtr<void>(InStructData);
				 if (NumericProperty->IsFloatingPoint())
				 {
					 NumericProperty->SetFloatingPointPropertyValue(Data, float(*it));
				 }
				 else
				 {
					 NumericProperty->SetIntPropertyValue(Data, (int64)int32(*it));
				 }
			 }
			 else if (auto StrProperty = CastField<FStrProperty>(BaseProp))
			 {
				 void* Data = StrProperty->ContainerPtrToValuePtr<void>(InStructData);
				 StrProperty->ImportText(*(*it).ToString(), Data, EPropertyPortFlags::PPF_None, nullptr, nullptr);
			 }
			 else if (auto StructProperty = CastField<FStructProperty>(BaseProp))
			 {

				 TSharedPtr<FJsonObject> ParsedPropertyValue = MakeShareable(new FJsonObject);
				 auto reader = FJsonStringReader::Create((FString)*it);
				 FJsonSerializer::Deserialize(reader.Get(), ParsedPropertyValue);

				 if (!ParsedPropertyValue.IsValid()) continue;

				 void* Data = StructProperty->ContainerPtrToValuePtr<void>(InStructData);
				 ReadStruct(ParsedPropertyValue.ToSharedRef(), StructProperty->Struct, Data);
				 continue;
			 }
			 else if (auto BoolProperty = CastField<FBoolProperty>(BaseProp))
			 {
				 void* Data = BoolProperty->ContainerPtrToValuePtr<void>(InStructData);
				 BoolProperty->SetPropertyValue(Data, bool(*it));
			 }
			 //FEnumProperty
			 //FArrayProperty
			 //FSetProperty
			 //FMapProperty
		 }
		 /*Array.Emplace(InStructData);*/
		 
	 }
	  

 }

 bool ReadStruct(const TSharedRef<FJsonObject>& InParsedObject, UScriptStruct* InStruct, void* InStructData)
 {
	 for (TFieldIterator<FProperty> It(InStruct); It; ++It)
	 {
		 FProperty* BaseProp = *It;
		 check(BaseProp);

		 TSharedPtr<FJsonValue> ParsedPropertyValue;


		 ParsedPropertyValue = InParsedObject->TryGetField(BaseProp->GetName());
		 if (!ParsedPropertyValue.IsValid()) continue;

		 if (BaseProp->ArrayDim == 1)
		 {
			 void* Data = BaseProp->ContainerPtrToValuePtr<void>(InStructData, 0);
			 ReadStructEntry(ParsedPropertyValue.ToSharedRef(), InStructData, BaseProp, Data);
		 }
		 else
		 {
			 const TCHAR* const ParsedPropertyType = JSONTypeToString(ParsedPropertyValue->Type);

			 const TArray< TSharedPtr<FJsonValue> >* PropertyValuesPtr;
			 if (!ParsedPropertyValue->TryGetArray(PropertyValuesPtr)) return false;

			 for (int32 ArrayEntryIndex = 0; ArrayEntryIndex < BaseProp->ArrayDim; ++ArrayEntryIndex)
			 {
				 if (PropertyValuesPtr->IsValidIndex(ArrayEntryIndex))
				 {
					 void* Data = BaseProp->ContainerPtrToValuePtr<void>(&InStructData, ArrayEntryIndex);
					 const TSharedPtr<FJsonValue>& PropertyValueEntry = (*PropertyValuesPtr)[ArrayEntryIndex];
					 ReadContainerEntry(PropertyValueEntry.ToSharedRef(), ArrayEntryIndex, BaseProp, Data);
				 }
			 }
		 }
	 }

	 return true;
 }

 bool ReadStructEntry(const TSharedRef<FJsonValue>& InParsedPropertyValue, void* InStructData, FProperty* InProperty, void* InPropertyData)
 {
	 const TCHAR* const ParsedPropertyType = JSONTypeToString(InParsedPropertyValue->Type);

	 if (FEnumProperty* EnumProp = CastField<FEnumProperty>(InProperty))
	 {
		 FString EnumValue;
		 if (InParsedPropertyValue->TryGetString(EnumValue))
		 {
			 FString Error = DataTableUtils::AssignStringToProperty(EnumValue, InProperty, (uint8*)InStructData);
			 if (!Error.IsEmpty()) return false;

		 }
		 else
		 {
			 int64 PropertyValue = 0;
			 if (!InParsedPropertyValue->TryGetNumber(PropertyValue)) return false;

			 EnumProp->GetUnderlyingProperty()->SetIntPropertyValue(InPropertyData, PropertyValue);
		 }
	 }
	 else if (FNumericProperty* NumProp = CastField<FNumericProperty>(InProperty))
	 {
		 FString EnumValue;
		 if (NumProp->IsEnum() && InParsedPropertyValue->TryGetString(EnumValue))
		 {
			 FString Error = DataTableUtils::AssignStringToProperty(EnumValue, InProperty, (uint8*)InStructData);
			 if (!Error.IsEmpty()) return false;

		 }
		 else if (NumProp->IsInteger())
		 {
			 int64 PropertyValue = 0;
			 if (!InParsedPropertyValue->TryGetNumber(PropertyValue)) return false;


			 NumProp->SetIntPropertyValue(InPropertyData, PropertyValue);
		 }
		 else
		 {
			 double PropertyValue = 0.0;
			 if (!InParsedPropertyValue->TryGetNumber(PropertyValue)) return false;


			 NumProp->SetFloatingPointPropertyValue(InPropertyData, PropertyValue);
		 }
	 }
	 else if (FBoolProperty* BoolProp = CastField<FBoolProperty>(InProperty))
	 {
		 bool PropertyValue = false;
		 if (!InParsedPropertyValue->TryGetBool(PropertyValue)) return false;

		 BoolProp->SetPropertyValue(InPropertyData, PropertyValue);
	 }
	 else if (FArrayProperty* ArrayProp = CastField<FArrayProperty>(InProperty))
	 {
		 const TArray< TSharedPtr<FJsonValue> >* PropertyValuesPtr;
		 if (!InParsedPropertyValue->TryGetArray(PropertyValuesPtr)) return false;


		 FScriptArrayHelper ArrayHelper(ArrayProp, InPropertyData);
		 ArrayHelper.EmptyValues();
		 for (const TSharedPtr<FJsonValue>& PropertyValueEntry : *PropertyValuesPtr)
		 {
			 const int32 NewEntryIndex = ArrayHelper.AddValue();
			 uint8* ArrayEntryData = ArrayHelper.GetRawPtr(NewEntryIndex);
			 ReadContainerEntry(PropertyValueEntry.ToSharedRef(), NewEntryIndex, ArrayProp->Inner, ArrayEntryData);
		 }
	 }
	 else if (FSetProperty* SetProp = CastField<FSetProperty>(InProperty))
	 {
		 const TArray< TSharedPtr<FJsonValue> >* PropertyValuesPtr;
		 if (!InParsedPropertyValue->TryGetArray(PropertyValuesPtr)) return false;


		 FScriptSetHelper SetHelper(SetProp, InPropertyData);
		 SetHelper.EmptyElements();
		 for (const TSharedPtr<FJsonValue>& PropertyValueEntry : *PropertyValuesPtr)
		 {
			 const int32 NewEntryIndex = SetHelper.AddDefaultValue_Invalid_NeedsRehash();
			 uint8* SetEntryData = SetHelper.GetElementPtr(NewEntryIndex);
			 ReadContainerEntry(PropertyValueEntry.ToSharedRef(), NewEntryIndex, SetHelper.GetElementProperty(), SetEntryData);
		 }
		 SetHelper.Rehash();
	 }
	 else if (FMapProperty* MapProp = CastField<FMapProperty>(InProperty))
	 {
		 const TSharedPtr<FJsonObject>* PropertyValue;
		 if (!InParsedPropertyValue->TryGetObject(PropertyValue)) return false;

		 FScriptMapHelper MapHelper(MapProp, InPropertyData);
		 MapHelper.EmptyValues();
		 for (const auto& PropertyValuePair : (*PropertyValue)->Values)
		 {
			 const int32 NewEntryIndex = MapHelper.AddDefaultValue_Invalid_NeedsRehash();
			 uint8* MapKeyData = MapHelper.GetKeyPtr(NewEntryIndex);
			 uint8* MapValueData = MapHelper.GetValuePtr(NewEntryIndex);

			 // JSON object keys are always strings
			 const FString KeyError = DataTableUtils::AssignStringToPropertyDirect(PropertyValuePair.Key, MapHelper.GetKeyProperty(), MapKeyData);
			 if (KeyError.Len() > 0)
			 {
				 MapHelper.RemoveAt(NewEntryIndex);
				 return false;
			 }

			 if (!ReadContainerEntry(PropertyValuePair.Value.ToSharedRef(), NewEntryIndex, MapHelper.GetValueProperty(), MapValueData))
			 {
				 MapHelper.RemoveAt(NewEntryIndex);
				 return false;
			 }
		 }
		 MapHelper.Rehash();
	 }
	 else if (FStructProperty* StructProp = CastField<FStructProperty>(InProperty))
	 {
		 const TSharedPtr<FJsonObject>* PropertyValue = nullptr;
		 if (InParsedPropertyValue->TryGetObject(PropertyValue))
		 {
			 return ReadStruct(PropertyValue->ToSharedRef(), StructProp->Struct, InPropertyData);
		 }
		 else
		 {
			 // If the JSON does not contain a JSON object for this struct, we try to use the backwards-compatible string deserialization, same as the "else" block below
			 FString PropertyValueString;
			 if (!InParsedPropertyValue->TryGetString(PropertyValueString)) return false;

			 const FString Error = DataTableUtils::AssignStringToProperty(PropertyValueString, InProperty, (uint8*)InStructData);
			 if (Error.Len() > 0) return false;

			 return true;
		 }
	 }
	 else
	 {
		 FString PropertyValue;
		 if (!InParsedPropertyValue->TryGetString(PropertyValue)) return false;

		 const FString Error = DataTableUtils::AssignStringToProperty(PropertyValue, InProperty, (uint8*)InStructData);
		 if (Error.Len() > 0) return false;

	 }

	 return true;
 }

 bool ReadContainerEntry(const TSharedRef<FJsonValue>& InParsedPropertyValue, const int32 InArrayEntryIndex, FProperty* InProperty, void* InPropertyData)
 {
	 const TCHAR* const ParsedPropertyType = JSONTypeToString(InParsedPropertyValue->Type);

	 if (FEnumProperty* EnumProp = CastField<FEnumProperty>(InProperty))
	 {
		 FString EnumValue;
		 if (InParsedPropertyValue->TryGetString(EnumValue))
		 {
			 FString Error = DataTableUtils::AssignStringToPropertyDirect(EnumValue, InProperty, (uint8*)InPropertyData);
			 if (!Error.IsEmpty()) return false;
		 }
		 else
		 {
			 int64 PropertyValue = 0;
			 if (!InParsedPropertyValue->TryGetNumber(PropertyValue)) return false;

			 EnumProp->GetUnderlyingProperty()->SetIntPropertyValue(InPropertyData, PropertyValue);
		 }
	 }
	 else if (FNumericProperty* NumProp = CastField<FNumericProperty>(InProperty))
	 {
		 FString EnumValue;
		 if (NumProp->IsEnum() && InParsedPropertyValue->TryGetString(EnumValue))
		 {
			 FString Error = DataTableUtils::AssignStringToPropertyDirect(EnumValue, InProperty, (uint8*)InPropertyData);
			 if (!Error.IsEmpty()) false;
		 }
		 else if (NumProp->IsInteger())
		 {
			 int64 PropertyValue = 0;
			 if (!InParsedPropertyValue->TryGetNumber(PropertyValue)) return false;

			 NumProp->SetIntPropertyValue(InPropertyData, PropertyValue);
		 }
		 else
		 {
			 double PropertyValue = 0.0;
			 if (!InParsedPropertyValue->TryGetNumber(PropertyValue)) return false;

			 NumProp->SetFloatingPointPropertyValue(InPropertyData, PropertyValue);
		 }
	 }
	 else if (FBoolProperty* BoolProp = CastField<FBoolProperty>(InProperty))
	 {
		 bool PropertyValue = false;
		 if (!InParsedPropertyValue->TryGetBool(PropertyValue)) return false;

		 BoolProp->SetPropertyValue(InPropertyData, PropertyValue);
	 }
	 else if (FArrayProperty* ArrayProp = CastField<FArrayProperty>(InProperty))
	 {
		 // Cannot nest arrays
		 return false;
	 }
	 else if (FSetProperty* SetProp = CastField<FSetProperty>(InProperty))
	 {
		 // Cannot nest sets
		 return false;
	 }
	 else if (FMapProperty* MapProp = CastField<FMapProperty>(InProperty))
	 {
		 // Cannot nest maps
		 return false;
	 }
	 else if (FStructProperty* StructProp = CastField<FStructProperty>(InProperty))
	 {
		 const TSharedPtr<FJsonObject>* PropertyValue = nullptr;
		 if (InParsedPropertyValue->TryGetObject(PropertyValue))
		 {
			 return ReadStruct(PropertyValue->ToSharedRef(), StructProp->Struct, InPropertyData);
		 }
		 else
		 {
			 // If the JSON does not contain a JSON object for this struct, we try to use the backwards-compatible string deserialization, same as the "else" block below
			 FString PropertyValueString;
			 if (!InParsedPropertyValue->TryGetString(PropertyValueString)) return false;

			 const FString Error = DataTableUtils::AssignStringToPropertyDirect(PropertyValueString, InProperty, (uint8*)InPropertyData);
			 if (Error.Len() > 0) return false;

			 return true;
		 }
	 }
	 else
	 {
		 FString PropertyValue;
		 if (!InParsedPropertyValue->TryGetString(PropertyValue)) return false;


		 const FString Error = DataTableUtils::AssignStringToPropertyDirect(PropertyValue, InProperty, (uint8*)InPropertyData);
		 if (Error.Len() > 0) return false;

	 }

	 return true;
 }

