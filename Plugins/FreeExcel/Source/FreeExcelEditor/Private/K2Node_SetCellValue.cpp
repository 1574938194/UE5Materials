// Fill out your copyright notice in the Description page of Project Settings.

#pragma optimize("",off)

#include "K2Node_SetCellValue.h"
#include "EdGraphSchema_K2.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "EditorCategoryUtils.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "FreeExcelFunctionLibrary.h"
#include "K2Node_VariableGet.h"
#include "ExcelDocument.h"

#define LOCTEXT_NAMESPACE "K2Node_SetCellValue"

namespace ArraySortHelper
{
	const FName TargetArrayPinName = "TargetArray";
	const FName PropertyNamePinName = "PropertyName";
	const FName AscendingPinName = "bAscending";
}

UK2Node_SetCellValue::UK2Node_SetCellValue(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeTooltip = LOCTEXT("SetCellValue_NodeTooltip", "set worksheet cell value");
}
 

void UK2Node_SetCellValue::AllocateDefaultPins()
{
	  

	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	// Add execution pins
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	
	if ( GetBlueprint()->ParentClass->IsChildOf<UExcelDocument>())
	{
		auto SelfPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, UEdGraphSchema_K2::PSC_Self, UEdGraphSchema_K2::PN_Self);
		SelfPin->bHidden = true;
	}
	else
	{ 
		UEdGraphPin* TargetPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, UExcelDocument::StaticClass(), UEdGraphSchema_K2::PN_Self);
	 
	}
	 
	UEdGraphPin* RefPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard,  "Ref");
	UEdGraphPin* ValPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard,  "Value");
  
	Super::AllocateDefaultPins();
}

 

 

void UK2Node_SetCellValue::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	// actions get registered under specific object-keys; the idea is that 
	// actions might have to be updated (or deleted) if their object-key is  
	// mutated (or removed)... here we use the node's class (so if the node 
	// type disappears, then the action should go with it)
	UClass* ActionKey = GetClass();
	// to keep from needlessly instantiating a UBlueprintNodeSpawner, first   
	// check to make sure that the registrar is looking for actions of this type
	// (could be regenerating actions for a specific asset, and therefore the 
	// registrar would only accept actions corresponding to that asset)
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);

		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

FText UK2Node_SetCellValue::GetMenuCategory() const
{
	return LOCTEXT("SetCellValue_GetMenuCategory", "FreeExcel");
}


void UK2Node_SetCellValue::PinDefaultValueChanged(UEdGraphPin* ChangedPin)
{
	if (ChangedPin && ChangedPin->PinName == "Value")
	{
		PropagateValuePinType();
	}
}
 

FText UK2Node_SetCellValue::GetTooltipText() const
{
	return NodeTooltip;
}


FText UK2Node_SetCellValue::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("SetCellValue_NodeTitle", "Set Cell Value");
}

void UK2Node_SetCellValue::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

 
	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();

	UK2Node_CallFunction* CallFuncNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	//CallFuncNode->SetFromFunction(Function);
	const FName DstFunctionName = GET_FUNCTION_NAME_CHECKED(UExcelDocument, SetCellValue);
	CallFuncNode->FunctionReference.SetExternalMember(DstFunctionName, UExcelDocument::StaticClass());
	CallFuncNode->AllocateDefaultPins();
	UEdGraphPin* CallFuncSelfPin = Schema->FindSelfPin(*CallFuncNode, EGPD_Input);
 
	// Now move the rest of the connections (including exec connections...)
	for (int32 SrcPinIdx = 0; SrcPinIdx < Pins.Num(); SrcPinIdx++)
	{
		UEdGraphPin* SrcPin = Pins[SrcPinIdx];
		if (SrcPin != NULL ) // check its not the self pin
		{
			UEdGraphPin* DestPin = CallFuncNode->FindPin(SrcPin->PinName);
			if (DestPin != NULL)
			{
				DestPin->PinType = SrcPin->PinType;
				DestPin->PinType.PinSubCategoryObject = SrcPin->PinType.PinSubCategoryObject;
				CompilerContext.MovePinLinksToIntermediate(*SrcPin, *DestPin); // Source node is assumed to be owner...
			}
		}
	}

	// Finally, break any remaining links on the 'call func on member' node
	BreakAllNodeLinks();

  
}

FSlateIcon UK2Node_SetCellValue::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = GetNodeTitleColor();
	static FSlateIcon Icon("EditorStyle", "Kismet.AllClasses.FunctionIcon");
	return Icon;
}

void UK2Node_SetCellValue::PostReconstructNode()
{
	Super::PostReconstructNode();

	PropagateValuePinType();
}

void UK2Node_SetCellValue::EarlyValidation(class FCompilerResultsLog& MessageLog) const
{
	Super::EarlyValidation(MessageLog);

	//	const UEdGraphPin* TargetArrayPin = GetTargetArrayPin();
	//	const UEdGraphPin* RowNamePin = GetRowNamePin();
	//	if (!TargetArrayPin || !RowNamePin)
	//	{
	//		MessageLog.Error(*LOCTEXT("MissingPins", "Missing pins in @@").ToString(), this);
	//		return;
	//	}
	//
	//	if (TargetArrayPin->LinkedTo.Num() == 0)
	//	{
	//		const UTargetArray* TargetArray = Cast<UTargetArray>(TargetArrayPin->DefaultObject);
	//		if (!TargetArray)
	//		{
	//			MessageLog.Error(*LOCTEXT("NoTargetArray", "No TargetArray in @@").ToString(), this);
	//			return;
	//		}
	//
	//		if (!RowNamePin->LinkedTo.Num())
	//		{
	//			const FName CurrentName = FName(*RowNamePin->GetDefaultAsString());
	//			if (!TargetArray->GetRowNames().Contains(CurrentName))
	//			{
	//				const FString Msg = FText::Format(
	//					LOCTEXT("WrongRowNameFmt", "'{0}' row name is not stored in '{1}'. @@"),
	//					FText::FromString(CurrentName.ToString()),
	//					FText::FromString(GetFullNameSafe(TargetArray))
	//				).ToString();
	//				MessageLog.Error(*Msg, this);
	//				return;
	//			}
	//		}
	//	}
}

 
void UK2Node_SetCellValue::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
 
	if (Pin == FindPin(TEXT("Value")) || Pin == FindPin(TEXT("Ref")))
	{
		PropagateValuePinType();
	}
} 

void UK2Node_SetCellValue::PropagateValuePinType()
{
	std::vector<UEdGraphPin*> ls
	{
		FindPin(TEXT("Ref")),FindPin(TEXT("Value")),
	};
	for(auto Pin : ls)
	{
		if (!Pin) continue;

		if (Pin->LinkedTo.Num() > 0 && Pin->LinkedTo[0]->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
		{
			UEdGraphPin* ValueLinkedPin = Pin->LinkedTo[0];
			Pin->PinType = ValueLinkedPin->PinType;
			//ValuePin->PinType.bIsReference = true;
		}
		else
		{
			Pin->ResetDefaultValue();
			Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		}
	}
}
#undef LOCTEXT_NAMESPACE