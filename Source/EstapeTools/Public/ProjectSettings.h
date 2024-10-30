// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.
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

	// Return Description string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Description Configuration"))
	static FString GetProjectDescription();

	// Return Project ID GUID value from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project ID GUID Description Configuration"))
	static FGuid GetProjectID();

	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Name Description Configuration"))
	static FString GetProjectName();

	// Return Project Version string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static FString GetProjectVersion();

	// Return Company Name string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Company Name Description Configuration"))
	static FString GetCompanyName();

	// Return Company Distinguished Name string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Company Distinguished Name Description Configuration"))
	static FString GetCompanyDistinguishedName();

	// Return Home Page string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Home Page Description Configuration"))
	static FString GetHomePage();

	// Return Support Contact string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Support Contact Description Configuration"))
	static FString GetSupportContact();

	// Return Copyright Notice string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Copyright Notice Description Configuration"))
	static FString GetCopyrightNotice();

	// Return Licensing Terms string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Licensing Terms Description Configuration"))
	static FString GetLicensingTerms();

	// Return Privacy Policy string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Privacy Policy Description Configuration"))
	static FString GetPrivacyPolicy();

	// Return Project Debug Displayed string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Displayed Title Description Configuration"))
	static FText GetProjectDisplayedTitle();

	// Return Project Debug Title Info string from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Debug Title Info Description Configuration"))
	static FText GetProjectDebugTitleInfo();

	// Return Window Preserve Aspect Radio bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Window Preserve Aspect Ratio Description Configuration"))
	static bool GetWindowPreserveAspectRatio();

	// Return Borderless Window bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Borderless Window Description Configuration"))
	static bool GetBorderlessWindow();

	// Return Start in VR bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project VR Description Configuration"))
	static bool GetStartVR();

	// Return Allow Window Resize bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Allow Window Resize Description Configuration"))
	static bool GetAllowWindowResize();

	// Return Allow Close bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Allow Close Description Configuration"))
	static bool GetAllowClose();

	// Return Allow Maximize bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Allow Maximize Description Configuration"))
	static bool GetAllowMaximize();

	// Return Allow Minimize bool from Project Description.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Allow Minimize Description Configuration"))
	static bool GetAllowMinimize();

	// Set Description string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Project Description Description Configuration"))
	static void SetProjectDescription(const FString& Description);

	// Set Project ID GUID value in Project Description and return GUID generated in string.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectID(const FGuid& ProjectID, bool& IsValid);

	// Set Project Name string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectName(const FString& ProjectName);

	// Set Project Version string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectVersion(const FString& ProjectVersion);

	// Set Company Name string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetCompanyName(const FString& CompanyName);

	// Set Company Distinguished Name string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetCompanyDistinguishedName(const FString& CompanyDistinguishedName);

	// Set Home Page string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetHomePage(const FString& HomePage);

	// Set Support Contact string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetSupportContact(const FString& SupportContact);

	// Set Copyright Notice string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetCopyrightNotice(const FString& CopyrightNotice);

	// Set Licensing Terms string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetLicensingTerms(const FString& LicensingTerms);

	// Set Privacy Policy string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetPrivacyPolicy(const FString& PrivacyPolicy);

	// Set Project Debug Displayed string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectDisplayedTitle(const FText& ProjectDisplayedTitle);

	// Set Project Debug Title Info string in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetProjectDebugTitleInfo(const FText& ProjectDebugTitleInfo);

	// Set Window Preserve Aspect Radio bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetWindowPreserveAspectRatio(bool WindowPreserveAspectRatio);

	// Set Borderless Window bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetBorderlessWindow(bool BorderlessWindow);

	// Set Start VR bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetStartVR(bool StartVR);

	// Set Allow Window Resize bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowWindowResize(bool AllowWindowResize);

	// Set Allow Close bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowClose(bool AllowClose);

	// Set Allow Maximize bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowMaximize(bool AllowMaximize);

	// Set Allow Minimize bool in Project Description.
	UFUNCTION(BlueprintCallable, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Project Version Description Configuration"))
	static void SetAllowMinimize(bool AllowMinimize);

	// Return Unreal Engine Version in string value.
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Project|Settings", meta = (Keywords = "Get Engine Version"))
	static FString GetEngineVersion();
};