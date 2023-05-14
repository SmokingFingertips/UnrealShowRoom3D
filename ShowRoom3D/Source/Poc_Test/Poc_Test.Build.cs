// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Poc_Test : ModuleRules
{
	public Poc_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
