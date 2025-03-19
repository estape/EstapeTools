// Rodrigo Estape de Oliveira - Estape Tools v1.0.7

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WindowsClass.generated.h"

UCLASS()
class ESTAPETOOLS_API UWindowsClass : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
    // Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Windows|Battery", meta = (Keywords = "Get Battery Windows", DeprecatedFunction, DeprecationMessage = "This node will be removed in plugin version 1.0.8. Please use the same node in the new plugin available on fab.com Windows Utilities."))
    static float GetBatteryLevel();

    // Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Windows|Battery", meta = (Keywords = "Battery Windows Charging Level", DeprecatedFunction, DeprecationMessage = "This node will be removed in plugin version 1.0.8. Please use the same node in the new plugin available on fab.com Windows Utilities."))
    static bool IsBatteryCharging();

    // This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms|Windows", meta = (Keywords = "Windows info Build SP Service Pack Name Number", DeprecatedFunction, DeprecationMessage = "This node will be removed in plugin version 1.0.8. Please use the same node in the new plugin available on fab.com Windows Utilities."))
    static bool GetWindowsInfo(int& BuildNumber, FString& VersionName, int& VersionServicePack);

    // This node is for showing a message box in Windows.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Windows", meta = (Keywords = "Windows info Build SP Service Pack Name Number", DeprecatedFunction, DeprecationMessage = "This node will be removed in plugin version 1.0.8. Please use the same node in the new plugin available on fab.com Windows Utilities."))
    static bool MessageBox_Windows(const FString& DialogTitle, const FString& DialogMessage, EDialogButtons Buttons, EDialogIcon Icon, EDialogButtonClicked& DialogReturnValue);

    private:
    static int MSGInner(const void* ParentWindowHandle, const FString& DialogTitle, const FString& DialogMessage, const unsigned int DialogType);
};
