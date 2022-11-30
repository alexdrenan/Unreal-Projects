// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LineReflect : ModuleRules
{
	public LineReflect(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
