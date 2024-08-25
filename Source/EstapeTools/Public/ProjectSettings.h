// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectSettings.generated.h"

/**
 * 
 */
UCLASS()
class ESTAPETOOLS_API UProjectSettings : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetProjectDescription();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FGuid GetProjectID();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetProjectName();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetProjectVersion();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetCompanyName();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetCompanyDistinguishedName();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetHomePage();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetSupportContact();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetCopyrightNotice();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetLicensingTerms();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetPrivacyPolicy();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FText GetProjectDisplayedTitle();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FText GetProjectDebugTitleInfo();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetWindowPreserveAspectRatio();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetBorderlessWindow();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetStartVR();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetAllowWindowResize();
	
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetAllowClose();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetAllowMaximize();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static bool GetAllowMinimize();

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectDescription(const FString& Description);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectID(const FGuid& ProjectID, bool& IsValid);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectName(const FString& ProjectName);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectVersion(const FString& ProjectVersion);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetCompanyName(const FString& CompanyName);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetCompanyDistinguishedName(const FString& CompanyDistinguishedName);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetHomePage(const FString& HomePage);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetSupportContact(const FString& SupportContact);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetCopyrightNotice(const FString& CopyrightNotice);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetLicensingTerms(const FString& LicensingTerms);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetPrivacyPolicy(const FString& PrivacyPolicy);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectDisplayedTitle(const FText& ProjectDisplayedTitle);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectDebugTitleInfo(const FText& ProjectDebugTitleInfo);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetWindowPreserveAspectRatio(bool WindowPreserveAspectRatio);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetBorderlessWindow(bool BorderlessWindow);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetStartVR(bool StartVR);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowWindowResize(bool AllowWindowResize);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowClose(bool AllowClose);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowMaximize(bool AllowMaximize);

	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowMinimize(bool AllowMinimize);
};