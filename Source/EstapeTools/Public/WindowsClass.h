// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WindowsClass.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EDialogButtonClicked : uint8
{
    IDNONE = 0 UMETA(DisplayName = "None"),
    IDOK = 1 UMETA(DisplayName = "OK"),
    IDCANCEL = 2 UMETA(DisplayName = "Cancel"),
    IDABORT = 3 UMETA(DisplayName = "Abort"),
    IDRETRY = 4 UMETA(DisplayName = "Retry"),
    IDIGNORE = 5 UMETA(DisplayName = "Ignore"),
    IDYES = 6 UMETA(DisplayName = "Yes"),
    IDNO = 7 UMETA(DisplayName = "No"),
    IDTRYAGAIN = 10 UMETA(DisplayName = "TryAgain"),
    IDCONTINUE = 11 UMETA(DisplayName = "Continue")
};


UCLASS()
class ESTAPETOOLS_API UWindowsClass : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
    // Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Windows|Battery", meta = (Keywords = "Get Battery Windows"))
    static float GetBatteryLevel();

    // Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Windows|Battery", meta = (Keywords = "Battery Windows Charging Level"))
    static bool IsBatteryCharging();

    // This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000. 
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Platforms|Windows", meta = (Keywords = "Windows info Build SP Service Pack Name Number"))
    static bool GetWindowsInfo(int& BuildNumber, FString& VersionName, int& VersionServicePack);

    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Windows")
    static EDialogButtonClicked MessageBox_Windows(const FString& DialogTitle, const FString& DialogMessage, EDialogButtons Buttons, EDialogIcon Icon);

private:
    static int MSGInner(const void* ParentWindowHandle, const FString& DialogTitle, const FString& DialogMessage, const unsigned int DialogType);
};
