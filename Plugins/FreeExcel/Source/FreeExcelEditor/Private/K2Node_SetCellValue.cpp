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
#include "K2Node_Self.h"
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
	NodeTooltip = LOCTEXT("SetCellValue_NodeTooltip", "Set Cell Value");
}

void UK2Node_SetCellValue::SetPinToolTip(UEdGraphPin& MutatablePin, const FText& PinDescription) const
{
	MutatablePin.PinToolTip = UEdGraphSchema_K2::TypeToText(MutatablePin.PinType).ToString();

	UEdGraphSchema_K2 const* const K2Schema = Cast<const UEdGraphSchema_K2>(GetSchema());
	if (K2Schema != nullptr)
	{
		MutatablePin.PinToolTip += TEXT(" ");
		MutatablePin.PinToolTip += K2Schema->GetPinDisplayName(&MutatablePin).ToString();
	}

	MutatablePin.PinToolTip += FString(TEXT("\n")) + PinDescription.ToString();
}

void UK2Node_SetCellValue::AllocateDefaultPins()
{
	  

	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	// Add execution pins
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	
	 
	auto SelfPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, UEdGraphSchema_K2::PN_Self);
	SetPinToolTip(*SelfPin, LOCTEXT("SetCellValue_SelfPinDesc", "[ExcelDocument,Sheet,Cell,CellValue] In"));

	auto RefPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard,  "Ref");
	SetPinToolTip(*RefPin, LOCTEXT("SetCellValue_RefPinDesc", "[IntPoint,String,CellReference] In"));

	auto ValPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard,  "Value");
	SetPinToolTip(*ValPin, LOCTEXT("SetCellValue_ValuePinDesc", "[Integer,Boolean,Float,String,DateTime,CellValue] In"));

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
	if (ChangedPin == FindPin(TEXT("Self"))) PropagateSelfPinType(ChangedPin);
	else if (ChangedPin == FindPin(TEXT("Ref"))) PropagateRefPinType(ChangedPin);
	else if (ChangedPin == FindPin(TEXT("Value"))) PropagateValuePinType(ChangedPin);
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
	const FName DstFunctionName = GET_FUNCTION_NAME_CHECKED(UFreeExcelFunctionLibrary, SetCellValue);
	CallFuncNode->FunctionReference.SetExternalMember(DstFunctionName, UFreeExcelFunctionLibrary::StaticClass());
	CallFuncNode->AllocateDefaultPins();
	UEdGraphPin* CallFuncSelfPin = Schema->FindSelfPin(*CallFuncNode, EGPD_Input);
 
	auto _Self = FindPin(UEdGraphSchema_K2::PN_Self);
	if (_Self->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard)
	{
		UK2Node_Self* self = CompilerContext.SpawnIntermediateNode<UK2Node_Self>(this, SourceGraph);
		self->AllocateDefaultPins();
		auto selfPin = self->Pins[0];

		UEdGraphPin* DestPin = CallFuncNode->FindPin(TEXT("Target"));
		if (DestPin != NULL)
		{
			DestPin->PinType = selfPin->PinType;
			DestPin->PinType.PinSubCategoryObject = selfPin->PinType.PinSubCategoryObject;
			CompilerContext.MovePinLinksToIntermediate(*selfPin, *DestPin);
		}
	}
	else
	{
		UEdGraphPin* DestPin = CallFuncNode->FindPin(TEXT("Target"));
		if (DestPin != NULL)
		{
			DestPin->PinType = _Self->PinType;
			DestPin->PinType.PinSubCategoryObject = _Self->PinType.PinSubCategoryObject;
			CompilerContext.MovePinLinksToIntermediate(*_Self, *DestPin);
		}
	}

	// Now move the rest of the connections (including exec connections...)
	for (int32 SrcPinIdx = 0; SrcPinIdx < Pins.Num(); SrcPinIdx++)
	{
		UEdGraphPin* SrcPin = Pins[SrcPinIdx];
		if (SrcPin != NULL && SrcPin->PinName!= UEdGraphSchema_K2::PN_Self) // check its not the self pin
		{
			if(SrcPin->PinName == "Ref" &&SrcPin->bHidden == true)
			{ 
				UEdGraphPin* DestPin = CallFuncNode->FindPin(SrcPin->PinName);
				if (DestPin != NULL)
				{
					auto proxy = FindPin(TEXT("Value"));
					DestPin->PinType = proxy->PinType;
					DestPin->PinType.PinSubCategoryObject = proxy->PinType.PinSubCategoryObject;
					CompilerContext.MovePinLinksToIntermediate(*proxy, *DestPin); // Source node is assumed to be owner...
				}
			}
			else
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
	PropagateSelfPinType(FindPin(TEXT("Self")));
	PropagateRefPinType(FindPin(TEXT("Ref")));
	PropagateValuePinType(FindPin(TEXT("Value")));
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
 
	 
	if (Pin == FindPin(TEXT("Self")))
	{
		//PropagateSelfPinType(Pin);
		ReconstructNode();
	}
	else if (Pin == FindPin(TEXT("Ref"))) PropagateRefPinType(Pin);
	else if (Pin == FindPin(TEXT("Value"))) PropagateValuePinType(Pin);
} 

void UK2Node_SetCellValue::PropagateSelfPinType(UEdGraphPin* Pin)
{ 
	if (Pin)
	{ 
		if (Pin->LinkedTo.Num() == 0)
		{
			Pin->ResetDefaultValue();
			Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
			auto _Ref = FindPin(TEXT("Ref"));
			_Ref->bHidden = false;
			_Ref->ResetDefaultValue();
			_Ref->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
 
			return;
		}

		auto pt = Pin->LinkedTo[0]->PinType;
		if (!pt.IsContainer())
		{
			if (pt.PinCategory == UEdGraphSchema_K2::PC_Object)
			{
				auto name = pt.PinSubCategoryObject->GetName();
				if (name == "ExcelDocument" || name == "Sheet")
				{
					auto _Ref = FindPin(TEXT("Ref"));
					_Ref->bHidden = false;
					Pin->PinType = Pin->LinkedTo[0]->PinType;
 
					return;
				}
				else if (name == "Cell")
				{
					auto _Ref = FindPin(TEXT("Ref"));
					_Ref->bHidden = true;
					_Ref->BreakAllPinLinks();
					Pin->PinType = Pin->LinkedTo[0]->PinType;
 
					return;
				}
			}
			else if (pt.PinCategory == UEdGraphSchema_K2::PC_Struct)
			{
				auto name = pt.PinSubCategoryObject->GetName();
				if (name == "CellValue")
				{
					auto _Ref = FindPin(TEXT("Ref"));
					_Ref->bHidden = true;
					_Ref->BreakAllPinLinks();
					Pin->PinType = Pin->LinkedTo[0]->PinType;
 
					return;
				}
			}
		}
		 
		Pin->BreakAllPinLinks();
		Pin->ResetDefaultValue();
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
	}
}
void UK2Node_SetCellValue::PropagateRefPinType(UEdGraphPin* Pin)
{
	if (Pin)
	{
		if (Pin->LinkedTo.Num() == 0)
		{
			Pin->ResetDefaultValue();
			Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
			return;
		}

		auto pt = Pin->LinkedTo[0]->PinType;
		if (!pt.IsContainer())
		{
			if (pt.PinCategory == UEdGraphSchema_K2::PC_String)
			{
				Pin->PinType = Pin->LinkedTo[0]->PinType;
				return;
			}
			else if (pt.PinCategory == UEdGraphSchema_K2::PC_Struct)
			{
				auto name = pt.PinSubCategoryObject->GetName();
				if (name == "IntPoint" || name=="CellReference")
				{ 
					Pin->PinType = Pin->LinkedTo[0]->PinType;
					return;
				}
			}
		}

		Pin->BreakAllPinLinks();
		Pin->ResetDefaultValue();
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
	}
}
void UK2Node_SetCellValue::PropagateValuePinType(UEdGraphPin* Pin)
{
	  
	if (Pin) 
	{
		if (Pin->LinkedTo.Num() == 0)
		{
			Pin->ResetDefaultValue();
			Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
			return;
		}

		auto pt = Pin->LinkedTo[0]->PinType;
		if (!pt.IsContainer())
		{
			if (pt.PinCategory == UEdGraphSchema_K2::PC_String ||
				pt.PinCategory == UEdGraphSchema_K2::PC_Int ||
				pt.PinCategory == UEdGraphSchema_K2::PC_Boolean ||
				pt.PinCategory == UEdGraphSchema_K2::PC_Float

				/*!= UEdGraphSchema_K2::PC_Wildcard*/)
			{
				Pin->PinType = Pin->LinkedTo[0]->PinType;
				//ValuePin->PinType.bIsReference = true;
				return;
			}
			else if (pt.PinCategory == UEdGraphSchema_K2::PC_Struct)
			{
				auto t = pt.PinSubCategoryObject->GetName();
				if (t == "DateTime" ||
					t == "CellValue")
				{
					Pin->PinType = Pin->LinkedTo[0]->PinType;
					return;
				}
			}
		}
		Pin->BreakAllPinLinks();
		Pin->ResetDefaultValue();
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
	}


}
#undef LOCTEXT_NAMESPACE