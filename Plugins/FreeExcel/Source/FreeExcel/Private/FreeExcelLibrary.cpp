﻿// Fill out your copyright notice in the Description page of Project Settings.

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
  
 void UFreeExcelLibrary::Generic_ToTemplateArray(FObjectProperty* SelfProperty, void* Self,  FArrayProperty* RetProperty, void* Ret)
 {
	 if (!Ret || !Self)
	 {
		 return;
	 }
	 
	 auto sheet = (SelfProperty->PropertyClass== UExcelDocument::StaticClass()) ? (*(UExcelDocument**)Self)->GetCurrentSheet() : *(USheet**)Self;
	 std::vector<FProperty*> PropertyIndex;
	 UScriptStruct* RowStruct = CastField<FStructProperty>(RetProperty->Inner)->Struct;

	 FScriptArrayHelper ArrayHelper(RetProperty, Ret);
	 
	 auto fields = sheet->GetRowData(1);
	 auto field = fields.begin();

	 if (RowStruct->IsA<UUserDefinedStruct>())
	 { 
		 TMap<FName, FProperty*> props;
		 for (auto p = RowStruct->ChildProperties; p; p = p->Next)
		 {
			 props.Add(MakeTuple(FName(*p->GetDisplayNameText().ToString()), CastField<FProperty>(p)));
		 }
		 for (; field != fields.end(); ++field)
		 {  
			 if (auto prop = props.Find(FName(* (FString)(*field))))
			 {
				 PropertyIndex.push_back(*prop);
			 }
			 else
			 {
				 PropertyIndex.push_back(nullptr);
			 }
		 }
	 }
	 else
	 { 
		 for (; field != fields.end(); ++field)
		 {
			 auto name = (FString)*field;
			 if (auto prop = RowStruct->FindPropertyByName(*name))
			 {
				 PropertyIndex.push_back(prop);
			 }
			 else
			 {
				 PropertyIndex.push_back(nullptr);
			 }
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
			 if (!*p || (*it).type() ==EXLValueType::Empty)  continue;


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

				 TSharedPtr<FJsonObject> ParsedPropertyValue ;
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
			 else if (auto EnumProp = CastField<FEnumProperty>(BaseProp))
			 {
				 void* Data = EnumProp->ContainerPtrToValuePtr<void>(InStructData);
				 if ((*it).type() == EXLValueType::String)
				 {
					 EnumProp->GetUnderlyingProperty()->SetIntPropertyValue(Data, 
						 (int64)EnumProp->GetEnum()->GetValueByName(*(FString)*it));
				 }
				 else
				 {  
					 EnumProp->GetUnderlyingProperty()->SetIntPropertyValue(Data, (int64)int32(*it));
				 }
			 }
			 else if (auto ArrayProp = CastField<FArrayProperty>(BaseProp))
			 { 
				 TSharedPtr<FJsonValue> ParsedPropertyValues; 
				 FString str = FString(*it);
				 if (str.IsEmpty()) continue;
				 if(str[0] != TCHAR('['))
				 {
					  if (str[0] == TCHAR('('))
					  {
						  str[0] = TCHAR('[');
						  str[str.Len() - 1] = TCHAR(']');
					  }
					  else
					  {
						  str = TEXT("[") + str + TEXT("]");
					  }
				 }

				 auto reader = FJsonStringReader::Create(str);
				 FJsonSerializer::Deserialize(reader.Get(), ParsedPropertyValues);
				  

				 const TArray< TSharedPtr<FJsonValue> >* ArrPtr;
				 if (!ParsedPropertyValues.IsValid() || !ParsedPropertyValues->TryGetArray(ArrPtr)) continue;

				 void* Data = ArrayProp->ContainerPtrToValuePtr<void>(InStructData);
				 FScriptArrayHelper _ArrayHelper(ArrayProp, Data);
				 _ArrayHelper.EmptyValues();
				 for (const TSharedPtr<FJsonValue>& PropertyValueEntry : *ArrPtr)
				 {
					 const int32 NewEntryIndex = _ArrayHelper.AddValue();
					 uint8* ArrayEntryData = _ArrayHelper.GetRawPtr(NewEntryIndex);
					 ReadContainerEntry(PropertyValueEntry.ToSharedRef(), NewEntryIndex, ArrayProp->Inner, ArrayEntryData);
				 }
			 }
			 else if (FSetProperty* SetProp = CastField<FSetProperty>(BaseProp))
			 { 
				 TSharedPtr<FJsonValue> ParsedPropertyValues;
				 FString str = FString(*it);
				 if (str.IsEmpty()) continue;
				 if (str[0] != TCHAR('['))
				 {
					 if (str[0] == TCHAR('('))
					 {
						 str[0] = TCHAR('[');
						 str[str.Len() - 1] = TCHAR(']');
					 }
					 else
					 {
						 str = TEXT("[") + str + TEXT("]");
					 }
				 }

				 auto reader = FJsonStringReader::Create(str);
				 FJsonSerializer::Deserialize(reader.Get(), ParsedPropertyValues);

				 const TArray< TSharedPtr<FJsonValue> >* ArrPtr;
				 if (!ParsedPropertyValues.IsValid() || ! ParsedPropertyValues->TryGetArray(ArrPtr)) continue;

				 void* Data = SetProp->ContainerPtrToValuePtr<void>(InStructData);
				 FScriptSetHelper SetHelper(SetProp, Data);
				 SetHelper.EmptyElements();
				 for (const TSharedPtr<FJsonValue>& PropertyValueEntry : *ArrPtr)
				 {
					 const int32 NewEntryIndex = SetHelper.AddDefaultValue_Invalid_NeedsRehash();
					 uint8* SetEntryData = SetHelper.GetElementPtr(NewEntryIndex);
					 ReadContainerEntry(PropertyValueEntry.ToSharedRef(), NewEntryIndex, SetHelper.GetElementProperty(), SetEntryData);
				 }
				 SetHelper.Rehash();
			 }
			 else if (FMapProperty* MapProp = CastField<FMapProperty>(BaseProp))
			 { 
				 TSharedPtr<FJsonObject> ParsedPropertyValues;
				 FString str = FString(*it);
				 if (str.IsEmpty()) continue;
				 if (str[0] != TCHAR('{'))
				 {
					 if (str[0] == TCHAR('('))
					 {
						 str[0] = TCHAR('{');
						 str[str.Len() - 1] = TCHAR('}');
					 }
					 else
					 {
						 str = TEXT("{") + str + TEXT("}");
					 }
				 }

				 auto reader = FJsonStringReader::Create(str);
				 FJsonSerializer::Deserialize(reader.Get(), ParsedPropertyValues);

				 if (!ParsedPropertyValues.IsValid() ) continue;

				 void* Data = MapProp->ContainerPtrToValuePtr<void>(InStructData);
				 FScriptMapHelper MapHelper(MapProp, Data);
				 MapHelper.EmptyValues();
				 for (const auto& PropertyValuePair : ParsedPropertyValues->Values)
				 {
					 const int32 NewEntryIndex = MapHelper.AddDefaultValue_Invalid_NeedsRehash();
					 uint8* MapKeyData = MapHelper.GetKeyPtr(NewEntryIndex);
					 uint8* MapValueData = MapHelper.GetValuePtr(NewEntryIndex);

					 // JSON object keys are always strings
					 const FString KeyError = DataTableUtils::AssignStringToPropertyDirect(PropertyValuePair.Key, MapHelper.GetKeyProperty(), MapKeyData);
					 if (KeyError.Len() > 0)
					 {
						 MapHelper.RemoveAt(NewEntryIndex); continue;
					 }

					 if (!ReadContainerEntry(PropertyValuePair.Value.ToSharedRef(), NewEntryIndex, MapHelper.GetValueProperty(), MapValueData))
					 {
						 MapHelper.RemoveAt(NewEntryIndex); continue;
					 }
				 }
				 MapHelper.Rehash();
			 }
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

 
 void UFreeExcelLibrary::SetCellValue_DocBool( UExcelDocument* Target, const FCellReference& Ref, const bool& Value)
 {
	 Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() = Value;
 }
 void UFreeExcelLibrary::SetCellValue_DocInt(UExcelDocument* Target, const FCellReference& Ref, const int32& Value)
 {
	 Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() = Value;
 }
 void UFreeExcelLibrary::SetCellValue_DocFloat(UExcelDocument* Target, const FCellReference& Ref, const float& Value)
 {
	 Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() = Value;
 }
 void UFreeExcelLibrary::SetCellValue_DocString(UExcelDocument* Target, const FCellReference& Ref, const FString& Value)
 {
	 Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() = std::string(TCHAR_TO_UTF8(*Value));
 }
 void UFreeExcelLibrary::SetCellValue_DocDateTime(UExcelDocument* Target, const FCellReference& Ref, const FDateTime& Value)
 {
	 std::tm t;
	 t.tm_year = Value.GetYear() - 1900;
	 t.tm_mon = Value.GetMonth() - 1;
	 t.tm_mday = Value.GetDay();
	 t.tm_hour = Value.GetHour();
	 t.tm_min = Value.GetMinute();
	 t.tm_sec = Value.GetSecond();
	 Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() = OpenXLSX::XLDateTime(t);
 } 
 void UFreeExcelLibrary::SetCellValue_DocCellValue(UExcelDocument* Target, const FCellReference& Ref, const FCellValue& Value)
 {
	 Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() = 
		 OpenXLSX::XLCellValue{ Value._Value,(OpenXLSX::XLValueType)Value._Type};
 } 
 void UFreeExcelLibrary::SetCellValue_SheetBool(  USheet* Target, const FCellReference& Ref, const bool& Value)
 {
	 Target->_Inner.cell(Ref.Row, Ref.Col).value() = Value;
 }
 void UFreeExcelLibrary::SetCellValue_SheetInt(USheet* Target, const FCellReference& Ref, const int32& Value)
 {
	 Target->_Inner.cell(Ref.Row, Ref.Col).value() = Value;
 } 
 void UFreeExcelLibrary::SetCellValue_SheetFloat(USheet* Target, const FCellReference& Ref, const float& Value)
 {
	 Target->_Inner.cell(Ref.Row, Ref.Col).value() = Value;
 } 
 void UFreeExcelLibrary::SetCellValue_SheetString(USheet* Target, const FCellReference& Ref, const FString& Value)
 {
	 Target->_Inner.cell(Ref.Row, Ref.Col).value() = std::string(TCHAR_TO_UTF8(*Value));
 } 
 void UFreeExcelLibrary::SetCellValue_SheetDateTime(USheet* Target, const FCellReference& Ref, const FDateTime& Value)
 {
	 std::tm t;
	 t.tm_year = Value.GetYear() - 1900;
	 t.tm_mon = Value.GetMonth() - 1;
	 t.tm_mday = Value.GetDay();
	 t.tm_hour = Value.GetHour();
	 t.tm_min = Value.GetMinute();
	 t.tm_sec = Value.GetSecond();
	 Target->_Inner.cell(Ref.Row, Ref.Col).value() = OpenXLSX::XLDateTime(t);
 } 
 void UFreeExcelLibrary::SetCellValue_SheetCellValue(USheet* Target, const FCellReference& Ref, const FCellValue& Value)
 {
	 Target->_Inner.cell(Ref.Row, Ref.Col).value() =
		 OpenXLSX::XLCellValue{ Value._Value,(OpenXLSX::XLValueType)Value._Type };
 }
 
 void UFreeExcelLibrary::SetCellValue_CellBool( UCell* Target,  const bool& Value)
 {
	 Target->_Inner.value() = Value;
 }
 void UFreeExcelLibrary::SetCellValue_CellInt(UCell* Target, const int32& Value)
 {
	 Target->_Inner.value() = Value;
 }
 void UFreeExcelLibrary::SetCellValue_CellFloat(UCell* Target, const float& Value)
 {
	 Target->_Inner.value() = Value;
 } 
 void UFreeExcelLibrary::SetCellValue_CellString(UCell* Target, const FString& Value)
 {
	 Target->_Inner.value() = std::string(TCHAR_TO_UTF8(*Value));
 }  
 void UFreeExcelLibrary::SetCellValue_CellDateTime(UCell* Target,  const FDateTime& Value)
 {
	 std::tm t;
	 t.tm_year = Value.GetYear() - 1900;
	 t.tm_mon = Value.GetMonth() - 1;
	 t.tm_mday = Value.GetDay();
	 t.tm_hour = Value.GetHour();
	 t.tm_min = Value.GetMinute();
	 t.tm_sec = Value.GetSecond();
	 Target->_Inner.value() = OpenXLSX::XLDateTime(t);
 }
 void UFreeExcelLibrary::SetCellValue_CellCellValue(UCell* Target, const FCellValue& Value)
 {
	 Target->_Inner.value() =
		 OpenXLSX::XLCellValue{ Value._Value,(OpenXLSX::XLValueType)Value._Type };
 }
 
 void UFreeExcelLibrary::SetCellValue_CellValueBool(const FCellValue& Target,  const bool& Value)
 {
	 const_cast<FCellValue&>(Target) = Value;
 } 
 void UFreeExcelLibrary::SetCellValue_CellValueInt(const FCellValue& Target, const int32& Value)
 {
	 const_cast<FCellValue&>(Target) = Value;
 }
 void UFreeExcelLibrary::SetCellValue_CellValueFloat(const FCellValue& Target, const float& Value)
 {
	 const_cast<FCellValue&>(Target) = Value;
 }
 void UFreeExcelLibrary::SetCellValue_CellValueString(const FCellValue& Target, const FString& Value)
 {
	 const_cast<FCellValue&>(Target) = Value;
 }
 void UFreeExcelLibrary::SetCellValue_CellValueDateTime(const FCellValue& Target, const FDateTime& Value)
 { 
	 const_cast<FCellValue&>(Target) = Value;
 }
 void UFreeExcelLibrary::SetCellValue_CellValueCellValue(const FCellValue&  Target, const FCellValue& Value)
 {
	 const_cast<FCellValue&>(Target) = Value;
 }
  
 void UFreeExcelLibrary::GetCellValue_DocBool(UExcelDocument* Target, const FCellReference& Ref,  bool& Value)
 {
	 Value = Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() ;
 }
 void UFreeExcelLibrary::GetCellValue_DocInt(UExcelDocument* Target, const FCellReference& Ref,  int32& Value)
 {
	 Value =  Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() ;
 }
 void UFreeExcelLibrary::GetCellValue_DocFloat(UExcelDocument* Target, const FCellReference& Ref,  float& Value)
 {
	 Value =  Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value() ;
 }
 void UFreeExcelLibrary::GetCellValue_DocString(UExcelDocument* Target, const FCellReference& Ref,  FString& Value)
 {
	 Value = Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value().template operator std::string().c_str();
 }
 void UFreeExcelLibrary::GetCellValue_DocDateTime(UExcelDocument* Target, const FCellReference& Ref,  FDateTime& Value)
 {
	 std::tm t = (Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value().get<OpenXLSX::XLDateTime>()).tm();
	 Value = FDateTime(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec, 0);
 }
 void UFreeExcelLibrary::GetCellValue_DocCellValue(UExcelDocument* Target, const FCellReference& Ref,  FCellValue& Value)
 {
	 auto val = OpenXLSX::XLCellValue(Target->GetCurrentSheet()->_Inner.cell(Ref.Row, Ref.Col).value());
	Value =  { val.m_value,(EXLValueType)val.m_type };
 }
 
 void UFreeExcelLibrary::GetCellValue_SheetBool(USheet* Target, const FCellReference& Ref,  bool& Value)
 {
	 Value = Target->_Inner.cell(Ref.Row, Ref.Col).value() ;
 }
 void UFreeExcelLibrary::GetCellValue_SheetInt(USheet* Target, const FCellReference& Ref,  int32& Value)
 {
	 Value = Target->_Inner.cell(Ref.Row, Ref.Col).value();
 }
 void UFreeExcelLibrary::GetCellValue_SheetFloat(USheet* Target, const FCellReference& Ref,  float& Value)
 {
	 Value = Target->_Inner.cell(Ref.Row, Ref.Col).value() ;
 }
 void UFreeExcelLibrary::GetCellValue_SheetString(USheet* Target, const FCellReference& Ref,  FString& Value)
 {
	 Value = Target->_Inner.cell(Ref.Row, Ref.Col).value().template operator std::string().c_str();
 }
 void UFreeExcelLibrary::GetCellValue_SheetDateTime(USheet* Target, const FCellReference& Ref,  FDateTime& Value)
 {
	 std::tm t = (Target->_Inner.cell(Ref.Row, Ref.Col).value().get<OpenXLSX::XLDateTime>()).tm();
	 Value = FDateTime(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec, 0);
 }
 void UFreeExcelLibrary::GetCellValue_SheetCellValue(USheet* Target, const FCellReference& Ref,  FCellValue& Value)
 {
	 auto val = OpenXLSX::XLCellValue(Target->_Inner.cell(Ref.Row, Ref.Col).value());
		 Value = { val.m_value,(EXLValueType)val.m_type };
 }

 void UFreeExcelLibrary::GetCellValue_CellBool(UCell* Target,  bool& Value)
 {
	 Value = Target->_Inner.value() ;
 }
 void UFreeExcelLibrary::GetCellValue_CellInt(UCell* Target,  int32& Value)
 {
	 Value= Target->_Inner.value() ;
 }
 void UFreeExcelLibrary::GetCellValue_CellFloat(UCell* Target,  float& Value)
 {
	 Value= Target->_Inner.value() ;
 }
 void UFreeExcelLibrary::GetCellValue_CellString(UCell* Target,  FString& Value)
 {
	 Value = Target->_Inner.value().template operator std::string().c_str();
 }
 void UFreeExcelLibrary::GetCellValue_CellDateTime(UCell* Target,  FDateTime& Value)
 {  
	 std::tm t = (Target->_Inner.value().get<OpenXLSX::XLDateTime>()).tm();
	 Value = FDateTime(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec, 0);
 }
 void UFreeExcelLibrary::GetCellValue_CellCellValue(UCell* Target,  FCellValue& Value)
 {
	 auto val = OpenXLSX::XLCellValue(Target->_Inner.value());
	 Value = { val.m_value,(EXLValueType)val.m_type };
 }
 void UFreeExcelLibrary::GetCellValue_CellValueBool(const FCellValue& Target, bool& Value)
 {
	 Value = Target;
 }
 void UFreeExcelLibrary::GetCellValue_CellValueInt(const FCellValue& Target, int32& Value)
 {
	 Value = Target;
 }
 void UFreeExcelLibrary::GetCellValue_CellValueFloat(const FCellValue& Target, float& Value)
 {
	 Value = Target;
 }
 void UFreeExcelLibrary::GetCellValue_CellValueString(const FCellValue& Target, FString& Value)
 {
	 Value = (FString)Target;
 }
 void UFreeExcelLibrary::GetCellValue_CellValueDateTime(const FCellValue& Target, FDateTime& Value)
 { 
	 Value = Target;
 }
 void UFreeExcelLibrary::GetCellValue_CellValueCellValue(const FCellValue& Target, FCellValue& Value)
 { 
	 Value = Target;
 }
 
#undef LOCAL_UFUNCTION_DEFINE