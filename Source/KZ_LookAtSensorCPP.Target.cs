// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class KZ_LookAtSensorCPPTarget : TargetRules
{
	public KZ_LookAtSensorCPPTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("KZ_LookAtSensorCPP");
	}
}
