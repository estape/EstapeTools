// © Rodrigo Estape 2025, this plugin is available ONLY under FAB Marketplace license https://www.fab.com/eula.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformDevice.generated.h"

/**
 * 
 */
UCLASS()
class ESTAPETOOLS_API UPlatformDevice : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	// Check if the current platform is a Windows, return true if it is.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms", meta = (KeyWords = "Get Platform Name Windows"))
	static void IsWindowsPlatform(bool &ReturnValue);

	// Check if the current platform is a Mac, return true if it is.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms", meta = (KeyWords = "Get Platform Name Mac"))
	static void IsMacPlatform(bool& ReturnValue);

	// Check if the current platform is a Linux, return true if it is.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms", meta = (KeyWords = "Get Platform Name Linux"))
	static void IsLinuxPlatform(bool& ReturnValue);

	// Check if the current platform is Android Device, return true if it is.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms", meta = (KeyWords = "Get Platform Name Android"))
	static void IsAndroidPlatform(bool& ReturnValue);

	// Check if the current platform is iOS Device, return true if it is.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms", meta = (KeyWords = "Get Platform Name iOS"))
	static void IsIOS_Platform(bool& ReturnValue);

	// Check if the current platform is console Nintendo Switch, return true if it is.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms", meta = (KeyWords = "Get Platform Name Nintendo Switch"))
	static void IsNintendoSwitch(bool& ReturnValue);
};
