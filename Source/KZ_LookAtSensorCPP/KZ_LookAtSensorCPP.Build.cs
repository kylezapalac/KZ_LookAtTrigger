// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KZ_LookAtSensorCPP : ModuleRules
{
	public KZ_LookAtSensorCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
