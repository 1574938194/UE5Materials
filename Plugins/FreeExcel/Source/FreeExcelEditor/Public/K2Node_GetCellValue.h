// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_CallFunctionOnMember.h"
#include "K2Node_GetCellValue.generated.h"

class FBlueprintActionDatabaseRegistrar;
class UEdGraphPin;
class UEdGraph;
struct FEdGraphPinType;

/**
 *
 */
UCLASS()
class FREEEXCELEDITOR_API UK2Node_GetCellValue : public  UK2Node
{
	GENERATED_UCLASS_BODY()

	//~ Begin UEdGraphNode Interface.
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;
	virtual FText GetTooltipText() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual void PostReconstructNode() override;
	//~ End UEdGraphNode Interface.

	//~ Begin UK2Node Interface
	virtual bool IsNodeSafeToIgnore() const override { return true; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	virtual void EarlyValidation(class FCompilerResultsLog& MessageLog) const override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	//~ End UK2Node Interface
  
  
	/** Helper function to set default value of PropertyNamePin */
	void SetDefaultValueOfPropertyNamePin();

	/**	Helper function to get sortable property name of inner property of Target Array */
	TArray<FString> GetPropertyNames();

private: 
	void PropagatePinType(UEdGraphPin* Pin);

	void SetPinToolTip(UEdGraphPin& MutatablePin, const FText& PinDescription) const;

	/** Tooltip text for this node. */
	FText NodeTooltip; 

	FText InputCheck;
};