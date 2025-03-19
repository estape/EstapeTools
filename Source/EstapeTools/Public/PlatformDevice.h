// Rodrigo Estape de Oliveira - Estape Tools v1.0.7

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformDevice.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FProcessHandle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	FString ProgramFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	FString Parameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	FString AppName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	int32 ProcessID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	int64 MemoryUsage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	FString StdOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	FString StdErr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EstapeTools|Utilities|Process")
	FString OptionalWorkingDirectory;
};


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

	// Create a new process, in another words this node loads an external program.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Create Process External Program Load"))
	static FProcessHandle CreateProcess(const FString ProgramFolder, const FString Parameters, bool Detached, bool Hidden, bool ReallyHidden, int32 Priority);

	// Create a new process synchronized, in another words this node loads an external program and wait util it's finished.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Create Process External Program Load"))
	static FProcessHandle CreateProcessSync(const FString ProgramFolder, const FString Parameters, bool TerminateParentProcess);

	// Close and terminate all tree associate.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Terminate Process External Program Close"))
	static bool TerminateProcess(FProcessHandle InputData);

	// Check if process ID is still running.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Terminate Process External Program Close"))
	static bool CheckProcessRunning(FProcessHandle InputData);
};
