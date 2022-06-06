// Copyright Epic Games, Inc. All Rights Reserved.

#include "FreeExcel.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"


#define LOCTEXT_NAMESPACE "FFreeExcelModule"

void FFreeExcelModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("FreeExcel")->GetBaseDir();

 
}

void FFreeExcelModule::ShutdownModule()
{
	 
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFreeExcelModule, FreeExcel)
