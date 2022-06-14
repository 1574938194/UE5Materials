// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h" 
#include "CellReference.h"  
#include "CellValue.h"
#include "XLXmlFile.hpp"
#include "Cell.generated.h"

class USheet;

UENUM(BlueprintType)
enum class ECellType :uint8 {
	Empty UMETA(DisplayName = "Empty"),
	Boolean UMETA(DisplayName = "Boolean"),
	Integer UMETA(DisplayName = "Integer"),
	Float UMETA(DisplayName = "Float"),
	Error,
	String UMETA(DisplayName = "String"),
	Formula UMETA(DisplayName = "Formula")
};

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UCell : public UObject
{
	GENERATED_BODY()
	
public:
  
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    FCellReference GetReference()const;
	 
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    bool HasFormula() const ;
	  
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void SetFormula(FString formula);

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
		FCellValue Value()const
	{
		return to_value(sheet, cellNode);
	}

	static FCellValue to_value(const USheet* sheet, const XMLNode& cellNode);


    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Cell Value (Cell)"), Category = "FreeExcel")
    void SetCellValue(const FCellValue& val)
	{
		switch (val.type())
		{
		case EValueType::Empty:
			Clear();
			break;
		case EValueType::Boolean:
			SetBool((bool)val.ival);
			break;
		case EValueType::Integer:
			SetInt(val.ival);
			break;
		case EValueType::Float:
			SetFloat(val.fval);
			break;
		case EValueType::Error:
			break;
		case EValueType::String:
			SetString(val.RawText);
			break;
		default:
			break;
		}
	}

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    bool HasValue() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear (Cell)"), Category = "FreeExcel")
    void Clear();
	 
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Bool (Cell)"), Category = "FreeExcel")
		void SetBool(bool val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Int (Cell)"), Category = "FreeExcel")
		void SetInt(int32 val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set String (Cell)"), Category = "FreeExcel")
		void SetString(FString val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set DateTime (Cell)"), Category = "FreeExcel")
    void SetDateTime(FDateTime val)
    {
        SetFloat(FCellValue::datetime_to_serial(val));
    }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Float (Cell)"), Category = "FreeExcel")
		void SetFloat(float val);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Bool (Cell)"), Category = "FreeExcel")
		bool ToBool()const;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Int (Cell)"), Category = "FreeExcel")
		int32 ToInt()const;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Float (Cell)"), Category = "FreeExcel")
		float ToFloat()const;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Cell)"), Category = "FreeExcel")
		FString ToString()const;
	 
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To DateTime (Cell)"), Category = "FreeExcel")
		FDateTime ToDateTime()const
	{
		return FCellValue::serial_to_datetime(ToFloat());
	}
  
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Type (Cell)"), Category = "FreeExcel")
		ECellType Type()const;
  
    operator bool() const
    {
        return (bool)cellNode;
    }
 
	void offset(int32 rowOffset, int32 colOffset);
   
    //void setError()
    //{
    //    // ===== Check that the m_cellNode is valid.
    //    assert(m_cellNode);              // NOLINT
    //    assert(!m_cellNode->empty());    // NOLINT

    //    // ===== If the cell node doesn't have a type attribute, create it.
    //    if (!m_cellNode->attribute("t")) m_cellNode->append_attribute("t");

    //    // ===== Set the type to "e", i.e. error
    //    m_cellNode->attribute("t").set_value("e");

    //    // ===== Remove the value node, if it exists
    //    m_cellNode->remove_child("v");

    //    // ===== Disable space preservation (only relevant for strings).
    //    m_cellNode->remove_attribute(" xml:space");

    //    // ===== Remove the value node.
    //    m_cellNode->remove_child("v");
    //}
  
   
protected:
    USheet* sheet;
    XMLNode cellNode;

    friend class USheet;
    friend struct FCellIterator;  
	friend class UCell;
	friend class UFreeExcelLibrary;
};
