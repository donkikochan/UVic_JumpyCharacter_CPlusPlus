// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject17 : ModuleRules
{
	public MyProject17(ReadOnlyTargetRules Target) : base(Target)
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
			"MyProject17",
			"MyProject17/Variant_Platforming",
			"MyProject17/Variant_Platforming/Animation",
			"MyProject17/Variant_Combat",
			"MyProject17/Variant_Combat/AI",
			"MyProject17/Variant_Combat/Animation",
			"MyProject17/Variant_Combat/Gameplay",
			"MyProject17/Variant_Combat/Interfaces",
			"MyProject17/Variant_Combat/UI",
			"MyProject17/Variant_SideScrolling",
			"MyProject17/Variant_SideScrolling/AI",
			"MyProject17/Variant_SideScrolling/Gameplay",
			"MyProject17/Variant_SideScrolling/Interfaces",
			"MyProject17/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
