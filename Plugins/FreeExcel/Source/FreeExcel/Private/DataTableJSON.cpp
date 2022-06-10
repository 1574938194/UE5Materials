// Copyright Epic Games, Inc. All Rights Reserved.
 
#include "DataTableJSON.h"
#include "UObject/UnrealType.h"
#include "UObject/EnumProperty.h"
#include "DataTableUtils.h"
#include "Engine/DataTable.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Engine/UserDefinedStruct.h" 

namespace
{
	const TCHAR* JSONTypeToString(const EJson InType)
	{
		switch(InType)
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
 

	//template <typename CharType>
	//void WriteJSONObjectStartWithOptionalIdentifier(typename TDataTableExporterJSON<CharType>::FDataTableJsonWriter& InJsonWriter, const FString* InIdentifier)
	//{
	//	if (InIdentifier)
	//	{
	//		InJsonWriter.WriteObjectStart(*InIdentifier);
	//	}
	//	else
	//	{
	//		InJsonWriter.WriteObjectStart();
	//	}
	//}

	//template <typename CharType, typename ValueType>
	//void WriteJSONValueWithOptionalIdentifier(typename TDataTableExporterJSON<CharType>::FDataTableJsonWriter& InJsonWriter, const FString* InIdentifier, const ValueType InValue)
	//{
	//	if (InIdentifier)
	//	{
	//		InJsonWriter.WriteValue(*InIdentifier, InValue);
	//	}
	//	else
	//	{
	//		InJsonWriter.WriteValue(InValue);
	//	}
	//}
	// 

}

FString DataTableJSONUtils::GetKeyFieldName(const UDataTable& InDataTable)
{
	FString ExplicitString = InDataTable.ImportKeyField;
	if (ExplicitString.IsEmpty())
	{
		return TEXT("Name");
	}
	else
	{
		return ExplicitString;
	}
}


// 
//
//FDataTableExporterJSON::FDataTableExporterJSON(const EDataTableExportFlags InDTExportFlags, FString& OutExportText)
//	: TDataTableExporterJSON<TCHAR>(InDTExportFlags, TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&OutExportText))
//{
//	bJsonWriterNeedsClose = true;
//}
//
//template<typename CharType>
//TDataTableExporterJSON<CharType>::TDataTableExporterJSON(const EDataTableExportFlags InDTExportFlags, TSharedRef<FDataTableJsonWriter> InJsonWriter)
//	: DTExportFlags(InDTExportFlags)
//	, JsonWriter(InJsonWriter)
//	, bJsonWriterNeedsClose(false)
//{
//}
//
//template<typename CharType>
//TDataTableExporterJSON<CharType>::~TDataTableExporterJSON()
//{
//	if (bJsonWriterNeedsClose)
//	{
//		JsonWriter->Close();
//	}
//}
//
//template<typename CharType>
//bool TDataTableExporterJSON<CharType>::WriteTable(const UDataTable& InDataTable)
//{
//	if (!InDataTable.RowStruct)
//	{
//		return false;
//	}
//
//	FString KeyField = DataTableJSONUtils::GetKeyFieldName(InDataTable);
//	JsonWriter->WriteArrayStart();
//
//	// Iterate over rows
//	for (auto RowIt = InDataTable.GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
//	{
//		JsonWriter->WriteObjectStart();
//		{
//			// RowName
//			const FName RowName = RowIt.Key();
//			JsonWriter->WriteValue(KeyField, RowName.ToString());
//
//			// Now the values
//			uint8* RowData = RowIt.Value();
//			WriteRow(InDataTable.RowStruct, RowData, &KeyField);
//		}
//		JsonWriter->WriteObjectEnd();
//	}
//
//	JsonWriter->WriteArrayEnd();
//
//	return true;
//}
//
//template<typename CharType>
//bool TDataTableExporterJSON<CharType>::WriteTableAsObject(const UDataTable& InDataTable)
//{
//	if (!InDataTable.RowStruct)
//	{
//		return false;
//	}
//
//	JsonWriter->WriteObjectStart(InDataTable.GetName());
//
//	// Iterate over rows
//	for (auto RowIt = InDataTable.GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
//	{
//		// RowName
//		const FName RowName = RowIt.Key();
//		JsonWriter->WriteObjectStart(RowName.ToString());
//		{
//			// Now the values
//			uint8* RowData = RowIt.Value();
//			WriteRow(InDataTable.RowStruct, RowData);
//		}
//		JsonWriter->WriteObjectEnd();
//	}
//	JsonWriter->WriteObjectEnd();
//
//	return true;
//}
//
//template<typename CharType>
//bool TDataTableExporterJSON<CharType>::WriteRow(const UScriptStruct* InRowStruct, const void* InRowData, const FString* FieldToSkip)
//{
//	if (!InRowStruct)
//	{
//		return false;
//	}
//
//	return WriteStruct(InRowStruct, InRowData, FieldToSkip);
//}
//
//template<typename CharType>
//bool TDataTableExporterJSON<CharType>::WriteStruct(const UScriptStruct* InStruct, const void* InStructData, const FString* FieldToSkip)
//{
//	for (TFieldIterator<const FProperty> It(InStruct); It; ++It)
//	{
//		const FProperty* BaseProp = *It;
//		check(BaseProp);
//
//		const FString Identifier = DataTableUtils::GetPropertyExportName(BaseProp, DTExportFlags);
//		if (FieldToSkip && *FieldToSkip == Identifier)
//		{
//			// Skip this field
//			continue;
//		}
// 
//		if (BaseProp->ArrayDim == 1)
//		{
//			const void* Data = BaseProp->ContainerPtrToValuePtr<void>(InStructData, 0);
//			WriteStructEntry(InStructData, BaseProp, Data);
//		}
//		else
//		{
//			JsonWriter->WriteArrayStart(Identifier);
//
//			for (int32 ArrayEntryIndex = 0; ArrayEntryIndex < BaseProp->ArrayDim; ++ArrayEntryIndex)
//			{
//				const void* Data = BaseProp->ContainerPtrToValuePtr<void>(InStructData, ArrayEntryIndex);
//				WriteContainerEntry(BaseProp, Data);
//			}
//
//			JsonWriter->WriteArrayEnd();
//		}
//	}
//
//	return true;
//}
//
//template<typename CharType>
//bool TDataTableExporterJSON<CharType>::WriteStructEntry(const void* InRowData, const FProperty* InProperty, const void* InPropertyData)
//{
//	const FString Identifier = DataTableUtils::GetPropertyExportName(InProperty, DTExportFlags);
//
//	if (const FEnumProperty* EnumProp = CastField<const FEnumProperty>(InProperty))
//	{
//		const FString PropertyValue = DataTableUtils::GetPropertyValueAsString(EnumProp, (uint8*)InRowData, DTExportFlags);
//		JsonWriter->WriteValue(Identifier, PropertyValue);
//	}
//	else if (const FNumericProperty *NumProp = CastField<const FNumericProperty>(InProperty))
//	{
//		if (NumProp->IsEnum())
//		{
//			const FString PropertyValue = DataTableUtils::GetPropertyValueAsString(InProperty, (uint8*)InRowData, DTExportFlags);
//			JsonWriter->WriteValue(Identifier, PropertyValue);
//		}
//		else if (NumProp->IsInteger())
//		{
//			const int64 PropertyValue = NumProp->GetSignedIntPropertyValue(InPropertyData);
//			JsonWriter->WriteValue(Identifier, PropertyValue);
//		}
//		else
//		{
//			const double PropertyValue = NumProp->GetFloatingPointPropertyValue(InPropertyData);
//			JsonWriter->WriteValue(Identifier, PropertyValue);
//		}
//	}
//	else if (const FBoolProperty* BoolProp = CastField<const FBoolProperty>(InProperty))
//	{
//		const bool PropertyValue = BoolProp->GetPropertyValue(InPropertyData);
//		JsonWriter->WriteValue(Identifier, PropertyValue);
//	}
//	else if (const FArrayProperty* ArrayProp = CastField<const FArrayProperty>(InProperty))
//	{
//		JsonWriter->WriteArrayStart(Identifier);
//
//		FScriptArrayHelper ArrayHelper(ArrayProp, InPropertyData);
//		for (int32 ArrayEntryIndex = 0; ArrayEntryIndex < ArrayHelper.Num(); ++ArrayEntryIndex)
//		{
//			const uint8* ArrayEntryData = ArrayHelper.GetRawPtr(ArrayEntryIndex);
//			WriteContainerEntry(ArrayProp->Inner, ArrayEntryData);
//		}
//
//		JsonWriter->WriteArrayEnd();
//	}
//	else if (const FSetProperty* SetProp = CastField<const FSetProperty>(InProperty))
//	{
//		JsonWriter->WriteArrayStart(Identifier);
//
//		FScriptSetHelper SetHelper(SetProp, InPropertyData);
//		for (int32 SetSparseIndex = 0; SetSparseIndex < SetHelper.GetMaxIndex(); ++SetSparseIndex)
//		{
//			if (SetHelper.IsValidIndex(SetSparseIndex))
//			{
//				const uint8* SetEntryData = SetHelper.GetElementPtr(SetSparseIndex);
//				WriteContainerEntry(SetHelper.GetElementProperty(), SetEntryData);
//			}
//		}
//
//		JsonWriter->WriteArrayEnd();
//	}
//	else if (const FMapProperty* MapProp = CastField<const FMapProperty>(InProperty))
//	{
//		JsonWriter->WriteObjectStart(Identifier);
//
//		FScriptMapHelper MapHelper(MapProp, InPropertyData);
//		for (int32 MapSparseIndex = 0; MapSparseIndex < MapHelper.GetMaxIndex(); ++MapSparseIndex)
//		{
//			if (MapHelper.IsValidIndex(MapSparseIndex))
//			{
//				const uint8* MapKeyData = MapHelper.GetKeyPtr(MapSparseIndex);
//				const uint8* MapValueData = MapHelper.GetValuePtr(MapSparseIndex);
//
//				// JSON object keys must always be strings
//				const FString KeyValue = DataTableUtils::GetPropertyValueAsStringDirect(MapHelper.GetKeyProperty(), (uint8*)MapKeyData, DTExportFlags);
//				WriteContainerEntry(MapHelper.GetValueProperty(), MapValueData, &KeyValue);
//			}
//		}
//
//		JsonWriter->WriteObjectEnd();
//	}
//	else if (const FStructProperty* StructProp = CastField<const FStructProperty>(InProperty))
//	{
//		if (!!(DTExportFlags & EDataTableExportFlags::UseJsonObjectsForStructs))
//		{
//			JsonWriter->WriteObjectStart(Identifier);
//			WriteStruct(StructProp->Struct, InPropertyData);
//			JsonWriter->WriteObjectEnd();
//		}
//		else
//		{
//			const FString PropertyValue = DataTableUtils::GetPropertyValueAsString(InProperty, (uint8*)InRowData, DTExportFlags);
//			JsonWriter->WriteValue(Identifier, PropertyValue);
//		}
//	}
//	else
//	{
//		const FString PropertyValue = DataTableUtils::GetPropertyValueAsString(InProperty, (uint8*)InRowData, DTExportFlags);
//		JsonWriter->WriteValue(Identifier, PropertyValue);
//	}
//
//	return true;
//}
//
//template<typename CharType>
//bool TDataTableExporterJSON<CharType>::WriteContainerEntry(const FProperty* InProperty, const void* InPropertyData, const FString* InIdentifier)
//{
//	if (const FEnumProperty* EnumProp = CastField<const FEnumProperty>(InProperty))
//	{
//		const FString PropertyValue = DataTableUtils::GetPropertyValueAsStringDirect(InProperty, (uint8*)InPropertyData, DTExportFlags);
//		WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//	}
//	else if (const FNumericProperty *NumProp = CastField<const FNumericProperty>(InProperty))
//	{
//		if (NumProp->IsEnum())
//		{
//			const FString PropertyValue = DataTableUtils::GetPropertyValueAsStringDirect(InProperty, (uint8*)InPropertyData, DTExportFlags);
//			WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//		}
//		else if (NumProp->IsInteger())
//		{
//			const int64 PropertyValue = NumProp->GetSignedIntPropertyValue(InPropertyData);
//			WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//		}
//		else
//		{
//			const double PropertyValue = NumProp->GetFloatingPointPropertyValue(InPropertyData);
//			WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//		}
//	}
//	else if (const FBoolProperty* BoolProp = CastField<const FBoolProperty>(InProperty))
//	{
//		const bool PropertyValue = BoolProp->GetPropertyValue(InPropertyData);
//		WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//	}
//	else if (const FStructProperty* StructProp = CastField<const FStructProperty>(InProperty))
//	{
//		if (!!(DTExportFlags & EDataTableExportFlags::UseJsonObjectsForStructs))
//		{
//			WriteJSONObjectStartWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier);
//			WriteStruct(StructProp->Struct, InPropertyData);
//			JsonWriter->WriteObjectEnd();
//		}
//		else
//		{
//			const FString PropertyValue = DataTableUtils::GetPropertyValueAsStringDirect(InProperty, (uint8*)InPropertyData, DTExportFlags);
//			WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//		}
//	}
//	else if (const FArrayProperty* ArrayProp = CastField<const FArrayProperty>(InProperty))
//	{
//		// Cannot nest arrays
//		return false;
//	}
//	else if (const FSetProperty* SetProp = CastField<const FSetProperty>(InProperty))
//	{
//		// Cannot nest sets
//		return false;
//	}
//	else if (const FMapProperty* MapProp = CastField<const FMapProperty>(InProperty))
//	{
//		// Cannot nest maps
//		return false;
//	}
//	else
//	{
//		const FString PropertyValue = DataTableUtils::GetPropertyValueAsStringDirect(InProperty, (uint8*)InPropertyData, DTExportFlags);
//		WriteJSONValueWithOptionalIdentifier<CharType>(*JsonWriter, InIdentifier, PropertyValue);
//	}
//
//	return true;
//}
//
//template class TDataTableExporterJSON<TCHAR>;
//template class TDataTableExporterJSON<ANSICHAR>;

 
