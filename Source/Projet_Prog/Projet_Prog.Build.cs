// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Projet_Prog : ModuleRules
{
	public Projet_Prog(ReadOnlyTargetRules Target) : base(Target)
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
			"Projet_Prog",
			"Projet_Prog/Variant_Horror",
			"Projet_Prog/Variant_Horror/UI",
			"Projet_Prog/Variant_Shooter",
			"Projet_Prog/Variant_Shooter/AI",
			"Projet_Prog/Variant_Shooter/UI",
			"Projet_Prog/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
