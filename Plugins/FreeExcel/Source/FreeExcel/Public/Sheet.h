// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h" 
#include "Cell.h"
#include "CellReference.h"
#include "CellRange.h" 
#include "XLXmlFile.hpp"
#include "Sheet.generated.h"

 
class UExcelDocument;
class UFreeExcelLibrary;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API USheet : public UObject
{
	GENERATED_BODY()
public:
     
    // Get the title of sheet
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    FString Name() const;

    // Set the title for the sheet
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    void SetName(FString sheetName);
   
    // Get a pointer to the Cell object for the given cell reference.
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    UCell* Cell( FCellReference ref) const;
   
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        int32 GetRowCellCount(int32 row)const;

    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
     TArray<FCellValue> GetRowData(int32 row)const;

    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    TArray<float> GetRowFloatData(int32 row , bool skip0= true)const;
   
  
    void reset(const XLXmlData* xmlData)
    {
        data_ = const_cast<XLXmlData*>(xmlData);
        // ===== Read the dimensions of the Sheet and set data members accordingly.
        std::string dimensions = data_->xmlDocument().document_element().child("dimension").attribute("ref").value();
        if (dimensions.find(':') == std::string::npos)
            data_->xmlDocument().document_element().child("dimension").set_value("A1");
        else
            data_->xmlDocument().document_element().child("dimension").set_value(dimensions.substr(dimensions.find(':') + 1).c_str());

        // If Column properties are grouped, divide them into properties for individual Columns.
        if (data_->xmlDocument().first_child().child("cols").type() != pugi::node_null) {
            auto currentNode = data_->xmlDocument().first_child().child("cols").first_child();
            while (currentNode != nullptr) {
                int min = std::stoi(currentNode.attribute("min").value());
                int max = std::stoi(currentNode.attribute("max").value());
                if (min != max) {
                    currentNode.attribute("min").set_value(max);
                    for (int i = min; i < max; i++) { // NOLINT
                        auto newnode = data_->xmlDocument().first_child().child("cols").insert_child_before("col", currentNode);
                        auto attr = currentNode.first_attribute();
                        while (attr != nullptr) { // NOLINT
                            newnode.append_attribute(attr.name()) = attr.value();
                            attr = attr.next_attribute();
                        }
                        newnode.attribute("min") = i;
                        newnode.attribute("max") = i;
                    }
                }
                currentNode = currentNode.next_sibling();
            }
        }
    }

    bool isSelected() const
    {
        return data_->xmlDocument().first_child().child("sheetViews").first_child().attribute("tabSelected").as_bool();
    }
 
    void setSelected(bool selected)
    { 
        unsigned int value = (selected ? 1 : 0);
        data_->xmlDocument().first_child().child("sheetViews").first_child().attribute("tabSelected").set_value(value);

    }
    // Get an CellReference to the last (bottom right) cell in the worksheet.
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
        FCellReference  LastCell() const noexcept;
 
    // update cell reference sheet name
    void updateSheetName(const std::string& oldName, const std::string& newName)
    {
        // ===== Set up temporary variables
        std::string oldNameTemp = oldName;
        std::string newNameTemp = newName;
        

        // ===== If the sheet name contains spaces, it should be enclosed in single quotes (')
        if (oldName.find(' ') != std::string::npos) oldNameTemp = "\'" + oldName + "\'";
        if (newName.find(' ') != std::string::npos) newNameTemp = "\'" + newName + "\'";

        // ===== Ensure only sheet names are replaced (references to sheets always ends with a '!')
        oldNameTemp += '!';
        newNameTemp += '!';

        // ===== Iterate through all defined names
        for (auto& row : data_->xmlDocument().document_element().child("sheetData")) {
            for (auto& cell : row.children()) {
                if (!cell.child("f"))
                {
                    continue;
                }
                std::string formula = cell.child("f").text().get();

                // ===== Skip if formula contains a '[' and ']' (means that the defined refers to external workbook)
                if (formula.find('[') == std::string::npos && formula.find(']') == std::string::npos) {
                    // ===== For all instances of the old sheet name in the formula, replace with the new name.
                    while (formula.find(oldNameTemp) != std::string::npos) { // NOLINT
                        formula.replace(formula.find(oldNameTemp), oldNameTemp.length(), newNameTemp);
                    }
                    cell.child("f").set_value(formula.c_str());
                }
            }
        }
    }
protected:
    UExcelDocument* doc_;
    XLXmlData* data_;
    std::string id_;

    friend class UExcelDocument; 
    friend class UFreeExcelLibrary;
    friend class ADemo1;
    friend class UCell;
};
