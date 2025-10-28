// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IntroCppProject : ModuleRules
{
	public IntroCppProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"IntroCppProject",
			"IntroCppProject/Variant_Horror",
			"IntroCppProject/Variant_Horror/UI",
			"IntroCppProject/Variant_Shooter",
			"IntroCppProject/Variant_Shooter/AI",
			"IntroCppProject/Variant_Shooter/UI",
			"IntroCppProject/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
