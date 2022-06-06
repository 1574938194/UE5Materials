// Copyright Epic Games, Inc. All Rights Reserved.

#include "FreeExcelEditor.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "FreeExcelBPPinFactory.h"
#include "Templates/SharedPointer.h"
#include "EdGraphUtilities.h"
 
  

#define LOCTEXT_NAMESPACE "FFreeExcelEditorModule"

void FFreeExcelEditorModule::StartupModule()
{
	TSharedPtr<FFreeExcelBPPinFactory> BlueprintGraphPanelPinFactory = MakeShareable(new FFreeExcelBPPinFactory());
	FEdGraphUtilities::RegisterVisualPinFactory(BlueprintGraphPanelPinFactory);
}

void FFreeExcelEditorModule::ShutdownModule()
{
	 
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFreeExcelEditorModule, FreeExcelEditor)
