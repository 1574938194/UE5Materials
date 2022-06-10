//-----------------------------------------------------------------------------
// Copyright (c) 2022, Weijian Tian
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "Policies/PrettyJsonPrintPolicy.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"
#include <vector>
#include "Sheet.h"


class UDataTable;
enum class EDataTableExportFlags : uint8;

template <class CharType> struct TPrettyJsonPrintPolicy;

// forward declare JSON writer
template <class CharType>
struct TPrettyJsonPrintPolicy;
template <class CharType, class PrintPolicy>
class TJsonWriter;

namespace DataTableJSONUtils
{
	/** Returns what string is used as the key/name field for a data table */
	FString GetKeyFieldName(const UDataTable& InDataTable);
}

//  
//template<typename CharType = TCHAR>
//class TDataTableExporterJSON
//{
//public:
//	typedef TJsonWriter<CharType, TPrettyJsonPrintPolicy<CharType>> FDataTableJsonWriter;
//
//	TDataTableExporterJSON(const EDataTableExportFlags InDTExportFlags, TSharedRef<FDataTableJsonWriter> InJsonWriter);
//
//	~TDataTableExporterJSON();
//
//	/** Writes the data table out as an array of objects */
//	bool WriteTable(const UDataTable& InDataTable);
//
//	/** Writes the data table out as a named object with each row being a sub value on that object */
//	bool WriteTableAsObject(const UDataTable& InDataTable);
//
//	/** Writes out a single row */
//	bool WriteRow(const UScriptStruct* InRowStruct, const void* InRowData, const FString* FieldToSkip = nullptr);
//
//	/** Writes the contents of a single row */
//	bool WriteStruct(const UScriptStruct* InStruct, const void* InStructData, const FString* FieldToSkip = nullptr);
//
//protected:
//	bool WriteStructEntry(const void* InRowData, const FProperty* InProperty, const void* InPropertyData);
//
//	bool WriteContainerEntry(const FProperty* InProperty, const void* InPropertyData, const FString* InIdentifier = nullptr);
//
//	EDataTableExportFlags DTExportFlags;
//	TSharedRef<FDataTableJsonWriter> JsonWriter;
//	bool bJsonWriterNeedsClose;
//};
//
///**
// * TCHAR-specific instantiation of TDataTableExporterJSON that has a convenience constructor to write output to an FString instead of an external TJsonWriter
// */
//class FDataTableExporterJSON : public TDataTableExporterJSON<TCHAR>
//{
//public:
//	using TDataTableExporterJSON<TCHAR>::TDataTableExporterJSON;
//// 
//	FDataTableExporterJSON(const EDataTableExportFlags InDTExportFlags, FString& OutExportText);
//};
//
// 

class FExcelImporter
{
public: 



};
