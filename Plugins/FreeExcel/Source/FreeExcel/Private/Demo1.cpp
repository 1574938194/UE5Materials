// Fill out your copyright notice in the Description page of Project Settings.


#include "Demo1.h"
#include "Kismet/KismetSystemLibrary.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "XLWorksheet.h"
#include <string>
#include <iostream>
#include "XLDocument.h"
#include <random>
#include <algorithm>
#include <numeric>
#include <mutex>

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
    // create doc
    auto doc = UXLDocument::CreateExcel(TEXT("D:\\proj\\ueTest\\Demo01.xlsx"));
    auto wks = doc->GetOrCreateSheetWithName(TEXT("Sheet1"));

    auto cell = wks->CellAt(1, 1);
    cell->SetInteger(321);
    UKismetSystemLibrary::PrintString(this, FString::FromInt(cell->GetInteger()));

    // basic usage
    wks->SetFloat(TEXT("A1"),3.1415926);
    wks->SetIntegerAt(1,2,42);
    wks->SetStringAt(1,3,TEXT("Hello OpenXLSX"));
    wks->SetBool(TEXT("D1"),true);

    auto A1 = wks->GetFloat("A1");
    auto B1 = wks->GetInteger("B1");
    auto C1 = wks->GetString("C1");
    auto D1 = wks->GetBool("D1");
 
    UKismetSystemLibrary::PrintString(this,
        FString::SanitizeFloat(A1) + "," +
        FString::FromInt(B1) + "," +
        C1 + "," +
        FString(D1 ? TEXT("true") : TEXT("flase"))
    );

    
    wks->Cell("A2")->SetCellValue(wks->CellWithRef(UXLCellReference::MakeCellReference("C1")));
    auto A2 = wks->Cell("A2");
    UKismetSystemLibrary::PrintString(this, "," + A2->GetString());

    // dateTime usage
    auto dt = FDateTime::Now();

    wks->Cell(TEXT("B2"))->SetDateTime(dt);

    auto B2 = wks->Cell("B2");
    auto result = B2->GetDateTime();
    UKismetSystemLibrary::PrintString(this,   result.ToString(TEXT("%Y-%m-%d-%H-%M-%S")));

    // formula usage
    wks->SetFormula("C2", "SQRT(B1)"); 

    // sheet handling
    doc->GetOrCreateSheetWithName("Sheet2")->SetActive();
    UKismetSystemLibrary::PrintString(this, "active :" + doc->GetOrCreateSheetWithName("Sheet2")->IsActive()?"true":"false" );
    doc->CloneSheet("Sheet1", "Sheet3");
     
    doc->DeleteSheet("Sheet2");
    doc->GetOrCreateSheetWithName("Sheet1")->SetIndex(2);
    doc->GetOrCreateSheetWithName("Sheet3")->SetIndex(1);
    
    //Unicode
    wks->SetString("D2", TEXT("こんにちは世界"));

    //TODO Iterators
    // Ranges and Iterators 
   /* std::random_device                 rand_dev;
    std::mt19937                       generator(rand_dev());
    std::uniform_int_distribution<int> distr(0, 99);*/

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
    doc->SaveExcel();
    doc->CloseExcel();
}
    