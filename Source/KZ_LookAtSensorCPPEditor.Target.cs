// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class KZ_LookAtSensorCPPEditorTarget : TargetRules
{
	public KZ_LookAtSensorCPPEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("KZ_LookAtSensorCPP");
	}
}
