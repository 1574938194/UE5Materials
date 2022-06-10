// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FreeExcel : ModuleRules
{
	public FreeExcel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		//PCHUsage = PCHUsageMode.NoSharedPCHs;
		//PrivatePCHHeaderFile = "$pch.h";
		//CppStandard = CppStandardVersion.Cpp17;
		bEnableExceptions = true;

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				"D:\\proj\\ueTest\\Plugins\\FreeExcel\\Source\\ThirdParty",
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", 
				"Projects",
				 "CoreUObject", 
				"Engine",
				"Json"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
			
			PublicAdditionalLibraries.Add(
			"D:\\proj\\ueTest\\Plugins\\FreeExcel\\Source\\ThirdParty\\OpenXLSX\\lib\\OpenXLSX.lib");
	}
}
