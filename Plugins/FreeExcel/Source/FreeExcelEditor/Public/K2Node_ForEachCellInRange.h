// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Textures/SlateIcon.h"
#include "K2Node.h"
#include "EdGraph/EdGraphNodeUtils.h"
#include "K2Node_ForEachCellInRange.generated.h"

class FBlueprintActionDatabaseRegistrar;
class UEdGraph;

UCLASS()
class FREEEXCELEDITOR_API UK2Node_ForEachCellInRange : public UK2Node
{
	GENERATED_UCLASS_BODY()

public:
	 static const FName InsideLoopPinName;
	 static const FName EnumOuputPinName;
	 static const FName SkipHiddenPinName;

	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;

	virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;
	virtual void PostReconstructNode() override;
	//~ End UEdGraphNode Interface

	//~ Begin UK2Node Interface
	virtual bool IsNodePure() const override { return false; }
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual void ValidateNodeDuringCompilation(class FCompilerResultsLog& MessageLog) const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetMenuCategory() const override;
	virtual void PostPlacedNewNode() override;

	virtual bool IsNodeSafeToIgnore() const override { return true; }

	virtual void EarlyValidation(class FCompilerResultsLog& MessageLog) const override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	/*virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;*/
	//~ End UK2Node Interface

private:
	void SetPinToolTip(UEdGraphPin& MutatablePin, const FText& PinDescription) const;

	/** Constructing FText strings can be costly, so we cache the node's title */
	FText NodeTooltip;
};


