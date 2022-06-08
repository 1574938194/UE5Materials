// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "Cell.h"
#include "CellReference.h"
#include "CellRange.h"
  
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
    
    // Get an CellReference to the last (bottom right) cell in the worksheet.
    UFUNCTION(BlueprintPure, Category = "FreeExcel") 
    FCellReference LastCell()const;
     
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
     bool HasCell(FCellReference ref)const;
     
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    void SheetSize(int32& RowSize,int32&ColSize)const;
    
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
    int32 GetRowCellCount(int32 row)const;

    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
     TArray<FCellValue> GetRowData(int32 row)const;

    /*template<
        class _Ty>
    _Ty* GetRowStruct(int32 row)const
    {
        auto ret = NewObject<_Ty>();
        auto _Class = _Ty::StaticClass();
        
        std::vector<std::string> names;
        std::vector<OpenXLSX::XLCellValue> row0_raw = _Inner.row(0).values();
        names.reserve(row0_raw.size());
        for (auto& it : row0_raw)
        {
            try
            { 
                names.emplace_back(it.get<std::string>());
            }
            catch (...)
            {
                return ret;
            }
        }
        std::vector<OpenXLSX::XLCellValue> row_data = _Inner.row(row).values();
        auto it = row_data.begin();
        for (auto& name: names)
        {
            if (it == row_data.end()) break;
            auto prop = _Class->FindPropertyByName(name.c_str());
            if (!prop ) continue;
            if (auto _Prop = CastField<FNumericProperty>(prop))
            {
                auto ptr = _Prop->ContainerPtrToValuePtr<FNumericProperty>(ret);
                if (it->type() == OpenXLSX::XLValueType::Integer)
                    _Prop->SetIntPropertyValue(ptr, (int64)it->get<int32>());
                else if(it->type() == OpenXLSX::XLValueType::Float )
                    _Prop->SetFloatingPointPropertyValue(ptr, it->get<float>());
            }
            else if(auto _Prop = CastField<FStrProperty>(prop))
            {
                auto ptr = _Prop->ContainerPtrToValuePtr<FStrProperty>(ret);
                if (it->type() == OpenXLSX::XLValueType::String)
                    _Prop->ImportText( *FString( it->get<std::string>().c_str()) ,ptr,EPropertyPortFlags::PPF_None,nullptr);
            }
            else if (auto _Prop = CastField<FStructProperty>(prop))
            {
                auto ptr = _Prop->ContainerPtrToValuePtr<FStructProperty>(ret);
                if (it->type() == OpenXLSX::XLValueType::String)
                {
                    _Prop->from
                }
            }
            else if (auto _Prop = CastField<FBoolProperty>(prop))
            {
                auto ptr = _Prop->ContainerPtrToValuePtr<FBoolProperty>(ret);
                if (it->type() == OpenXLSX::XLValueType::Boolean)
                    _Prop->SetPropertyValue(ptr, it->get<bool>());
            }
            ++it;
        }
    }*/
protected:
    OpenXLSX::XLWorksheet _Inner;

    friend class UExcelDocument; 
    friend class UFreeExcelLibrary;
    friend class ADemo1;
};
