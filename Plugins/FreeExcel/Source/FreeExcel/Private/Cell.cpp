// Fill out your copyright notice in the Description page of Project Settings.

#include "Cell.h"
#include "CellValue.h" 
#include "Sheet.h"
#include "ExcelDocument.h"
#include <regex>

std::regex is_float_pattern(R"(^(?:[+-]?\d+\.\d*(?:[eE][+-]?\d+)?)|(?:[+-]?\d*\.\d+(?:[eE][+-]?\d+)?)$)");
 
FCellReference UCell::GetReference()const
{  
	return { cellNode.attribute("r").value() };
}
 
 
bool UCell::HasFormula() const
{
	if (!*this) return false;
	return cellNode.child("f") != nullptr;
}
  
FString UCell::ToString() const
{
	auto f = cellNode.child("f");
	if (f)
	{ 
		// ===== If the formula type is 'shared' or 'array', throw an exception.
		if (f.attribute("t") )
		{	
			auto type = std::string(f.attribute("t").value());
			if (type == "shared" || type == "array")
			{
				return "";
			} 
		}  

		return FString(f.text().get());
	}
	if (!cellNode.attribute("t") || !cellNode.child("v"))
	{
		return FCellValue();
	}
	auto t = cellNode.attribute("t").value();

	if (strcmp(t, "n") == 0 || strcmp(t, "str") == 0 || strcmp(t, "b") == 0)
	{
		return cellNode.child("v").text().get(); 
	}
	else if (strcmp(t, "s") == 0)
	{
		return sheet->doc_->getString(static_cast<uint32_t>(cellNode.child("v").text().as_ullong()));
	} 
	else if (strcmp(t, "inlineStr") == 0)
	{
		return  cellNode.child("is").child("t").text().get() ;
	}
	return FCellValue();
}
 
 FCellValue UCell::to_value(const USheet* sheet, const XMLNode& cellNode)
{
	// if has formula
	if (cellNode.child("f")) return FCellValue(cellNode.child("f").text().get());

	if (!cellNode.attribute("t") || !cellNode.child("v"))
	{
		return FCellValue();
	}

	auto t = cellNode.attribute("t").value();
	if (strcmp(t, "n") == 0)
	{
		std::string numberString = cellNode.child("v").text().get();

		std::smatch result;
		bool ret = std::regex_match(numberString, result, is_float_pattern);
		if (ret)
		{
			return FCellValue(std::stof(numberString));
		}
		return FCellValue(std::stoi(numberString));
	}
	else if (strcmp(t, "s") == 0)
	{
		return FCellValue(sheet->doc_->getString(static_cast<uint32_t>(cellNode.child("v").text().as_ullong())));
	}
	else if (strcmp(t, "str") == 0)
	{
		return FCellValue{ cellNode.child("v").text().get() };
	}
	else if (strcmp(t, "inlineStr") == 0)
	{
		return FCellValue{ cellNode.child("is").child("t").text().get() };
	}
	else if (strcmp(t, "b") == 0)
	{
		return FCellValue(cellNode.child("v").text().as_bool());
	}

	return FCellValue();
}

  
  
void UCell::SetFormula(FString formula)
{
	auto str = std::string(TCHAR_TO_UTF8(*formula));

	// ===== If the cell node doesn't have a value child node, create it.
	if (!cellNode.child("f")) cellNode.append_child("f");
	if (!cellNode.child("v")) cellNode.append_child("v");

	// ===== Remove the type and shared index attributes, if they exists.
	cellNode.child("f").remove_attribute("t");
	cellNode.child("f").remove_attribute("si");

	// ===== Set the text of the value node.
	cellNode.child("f").text().set(str.c_str());
	cellNode.child("v").text().set(0);
}
 
bool UCell::HasValue() const
{ 
	if (cellNode.child("v"))
	{
		return true;
	}
	else if (cellNode.child("f"))
	{
		return true;
	}
	auto inlinstr = cellNode.child("is");
	if(inlinstr && inlinstr.child("t"))
	{
		return true;
	}
	return false;
}

void UCell::Clear()
{
	assert(m_cellNode);
	assert(!cellNode.empty());

	
	if (cellNode.child("f"))
	{	
		// ===== Remove the formula node.
		cellNode.remove_child("f"); 
	}
	else
	{
		// ===== Remove the type attribute
		cellNode.remove_attribute("t");

		// ===== Disable space preservation (only relevant for strings).
		cellNode.remove_attribute(" xml:space");

		// ===== Remove the value node.
		cellNode.remove_child("v");
	}
	  
}
 
void UCell::SetBool(bool val)
{
	// ===== Check that the m_cellNode is valid.
	assert(m_cellNode);              // NOLINT
	assert(!cellNode.empty());    // NOLINT

	// ===== If the cell node doesn't have a type child node, create it.
	if (!cellNode.attribute("t")) cellNode.append_attribute("t");

	// ===== If the cell node doesn't have a value child node, create it.
	if (!cellNode.child("v")) cellNode.append_child("v");

	// ===== Set the type attribute.
	cellNode.attribute("t").set_value("b");

	// ===== Set the text of the value node.
	cellNode.child("v").text().set(val ? 1 : 0);

	// ===== Disable space preservation (only relevant for strings).
	cellNode.child("v").remove_attribute(cellNode.child("v").attribute("xml:space"));
}

void UCell::SetInt(int32 val)
{
	// ===== Check that the m_cellNode is valid.
	assert(m_cellNode);              // NOLINT
	assert(!cellNode.empty());    // NOLINT

	// ===== If the cell node doesn't have a value child node, create it.
	if (!cellNode.child("v")) cellNode.append_child("v");

	// ===== The type ("t") attribute is not required for number values.
	cellNode.remove_attribute("t");

	// ===== Set the text of the value node.
	cellNode.child("v").text().set(val);

	// ===== Disable space preservation (only relevant for strings).
	cellNode.child("v").remove_attribute(cellNode.child("v").attribute("xml:space"));
}

void UCell::SetString(FString val)
{ 
	
	// ===== Check that the m_cellNode is valid.
	assert(m_cellNode);              // NOLINT
	assert(!cellNode.empty());    // NOLINT

	// ===== If the cell node doesn't have a type child node, create it.
	if (!cellNode.attribute("t")) cellNode.append_attribute("t");

	// ===== If the cell node doesn't have a value child node, create it.
	if (!cellNode.child("v")) cellNode.append_child("v");

	// ===== Set the type attribute.
	cellNode.attribute("t").set_value("s");

	auto str = std::string(TCHAR_TO_UTF8(*val));
	// ===== Get or create the index in the XLSharedStrings object.
	auto idx = sheet->doc_->getStringIndex(str);
	auto index = (idx>=0 ? idx : sheet->doc_->appendString(str));

	// ===== Set the text of the value node.
	cellNode.child("v").text().set(index);

	////  IMPLEMENTATION FOR EMBEDDED STRINGS:
	// cellNode.attribute("t").set_value("str");
	// cellNode.child("v").text().set(stringValue);
	// 
	// auto s = std::string_view(stringValue);
	// if (s.front() == ' ' || s.back() == ' ') {
	//     if (!cellNode.attribute("xml:space")) cellNode.append_attribute("xml:space");
	//     cellNode.attribute("xml:space").set_value("preserve");
	// }
}



void UCell::SetFloat(float val)
{
	// ===== Check that the m_cellNode is valid.
	assert(m_cellNode);              // NOLINT
	assert(!cellNode.empty());    // NOLINT

	// ===== If the cell node doesn't have a value child node, create it.
	if (!cellNode.child("v")) cellNode.append_child("v");

	// ===== The type ("t") attribute is not required for number values.
	cellNode.remove_attribute("t");

	// ===== Set the text of the value node.
	cellNode.child("v").text().set(val);

	// ===== Disable space preservation (only relevant for strings).
	cellNode.child("v").remove_attribute(cellNode.child("v").attribute("xml:space"));
}

bool UCell::ToBool() const
{
	return cellNode.child("v").text().as_bool();
}

int32 UCell::ToInt()const
{
	return cellNode.child("v").text().as_int();
}
 
float UCell::ToFloat()const
{
	return cellNode.child("v").text().as_float();
}
 

ECellType UCell::Type()const
{
	// ===== Check that the m_cellNode is valid.
	assert(m_cellNode);              // NOLINT
	assert(!cellNode.empty());    // NOLINT

	// if has formula
	if (cellNode.child("f")) return ECellType::Formula;
	 

	// ===== If neither a Type attribute or a getValue node is present, the cell is empty.
	if (!cellNode.attribute("t") && !cellNode.child("v")) return ECellType::Empty;

	// ===== If a Type attribute is not present, but a value node is, the cell contains a number.
	if ((!cellNode.attribute("t") || (strcmp(cellNode.attribute("t").value(), "n") == 0 && cellNode.child("v") != nullptr))) {
		std::string numberString = cellNode.child("v").text().get();
		if (numberString.find('.') != std::string::npos || numberString.find("E-") != std::string::npos ||
			numberString.find("e-") != std::string::npos)
			return ECellType::Float;
		return ECellType::Integer;
	}

	// ===== If the cell is of type "s", the cell contains a shared string.
	if (cellNode.attribute("t") != nullptr && strcmp(cellNode.attribute("t").value(), "s") == 0)
		return ECellType::String;    // NOLINT

	// ===== If the cell is of type "inlineStr", the cell contains an inline string.
	if (cellNode.attribute("t") != nullptr && strcmp(cellNode.attribute("t").value(), "inlineStr") == 0)
		return ECellType::String;

	// ===== If the cell is of type "str", the cell contains an ordinary string.
	if (cellNode.attribute("t") != nullptr && strcmp(cellNode.attribute("t").value(), "str") == 0)
		return ECellType::String;

	// ===== If the cell is of type "b", the cell contains a boolean.
	if (cellNode.attribute("t") != nullptr && strcmp(cellNode.attribute("t").value(), "b") == 0)
		return ECellType::Boolean;

	// ===== Otherwise, the cell contains an error.
	return ECellType::Error;    // the m_typeAttribute has the ValueAsString "e"
	 
}
void UCell::offset(int32 rowOffset, int32 colOffset)
{
	if (!*this) return;
	auto ref = GetReference();
	FCellReference offsetRef(ref.Row + rowOffset, ref.Col + colOffset);
	auto rownode = UExcelDocument::getRowNode(cellNode.parent().parent(), offsetRef.Row);
	auto cellnode = UExcelDocument::getCellNode(rownode, offsetRef.Col);
	this->cellNode = cellnode;
}