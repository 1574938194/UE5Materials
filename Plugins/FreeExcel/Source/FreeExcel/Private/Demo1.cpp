// Fill out your copyright notice in the Description page of Project Settings.


#include "Demo1.h"
#include "Kismet/KismetSystemLibrary.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "Sheet.h"
#include <string>
#include <iostream>
#include "ExcelDocument.h"
#include <random>
#include <algorithm>
#include <numeric>
#include "FreeExcelFunctionLibrary.h"
#include "CellValue.h"

using namespace std;
using namespace OpenXLSX;

// Sets default values
ADemo1::ADemo1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADemo1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADemo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
 
void ADemo1::RunDemo()
{
    // Create excel document and get first sheet 
    auto doc = NewObject<UExcelDocument>();
    doc->Create(TEXT("D:\\proj\\ueTest\\Demo01.xlsx"));
    auto wks = doc->GetOrCreateSheetWithName(TEXT("Sheet1"));
     
    // Basic Usage
    wks->Cell({1,1})->Value()->SetFloat(3.1415926);
    wks->Cell(UFreeExcelFunctionLibrary::MakeCellReferenceWithString("B1"))->Value()->SetInt(42);
    wks->Cell(UFreeExcelFunctionLibrary::MakeCellReference(1,3))->Value()->SetString(TEXT("Hello FreeExcel"));
    wks->Cell("D1")->Value()->SetBool(true);

    auto A1 = wks->Cell("A1")->Value()->ToFloat();
    auto B1 = wks->Cell("B1")->Value()->ToInt();
    auto C1 = wks->Cell("C1")->Value()->ToString();
    auto D1 = wks->Cell("D1")->Value()->ToBool();
 
    UKismetSystemLibrary::PrintString(this,
        FString::SanitizeFloat(A1) + "," +
        FString::FromInt(B1) + "," +
        C1 + "," +
        FString(D1 ? TEXT("true") : TEXT("flase"))
    );

    
    wks->Cell("A2")->SetCellValue(wks->Cell("C1")->Value());
    UKismetSystemLibrary::PrintString(this, "," + wks->Cell("A2")->ToString());

    // DateTime Value
    wks->Cell(TEXT("B2"))->Value()->SetDateTime(FDateTime::Now());
    UKismetSystemLibrary::PrintString(this, wks->Cell("B2")->Value()->ToDateTime().ToString(TEXT("%Y-%m-%d-%H-%M-%S")));

    // Formula Usage
    wks->Cell("C2")->SetFormula( "SQRT(B1)");

    // Sheet handling 
    doc->CloneSheet("Sheet1", "Sheet3");
     
    doc->DeleteSheet("Sheet2");
    doc->SetSheetIndex("Sheet1", 2);
    doc->SetSheetIndex("Sheet3",1);
    
    //Unicode
    wks->Cell(TEXT("D2"))->Value()->SetString( TEXT("こんにちは世界"));

 
    // Ranges and Iterators 
    std::random_device                 rand_dev;
    std::mt19937                       generator(rand_dev());
    std::uniform_int_distribution<int> distr(0, 99);

    //auto rng = wks->Range(UXLCellReference::MakeCellReference("A3"), UXLCellReference::MakeCellReference2(100, 8));

    //// pre cell handling
    //for (auto begin = rng->Begin(); begin!= rng->End(); begin->Forward())
    //{
    //    auto it = begin->Get();
    //    it->Value()->SetInteger(  distr(generator));
    //}
    // OR row handling (using containers
   /* std::vector<XLCellValue> writeValues;
    for (auto& row : wks.rows(MAX_ROWS)) {
        writeValues.clear();
        for (int i = 0; i < 8; ++i) writeValues.emplace_back(distr(generator));

        row.values() = writeValues;
    }*/
    // using iterators
   /* for (auto& row : wks.rows(MAX_ROWS)) {
        for (auto cell : row.cells(8)) cell.value() = distr(generator);

    }*/
      
    
    // save and close doc
    doc->Save();
    doc->Close();
}
    