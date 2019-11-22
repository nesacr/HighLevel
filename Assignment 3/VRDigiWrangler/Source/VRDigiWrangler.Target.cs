// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class VRDigiWranglerTarget : TargetRules
{
	public VRDigiWranglerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "VRDigiWrangler" } );
	}
}
