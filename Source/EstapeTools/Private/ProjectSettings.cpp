// © Rodrigo Estape 2025, this plugin is available ONLY under FAB Marketplace license https://www.fab.com/eula.

#include "ProjectSettings.h"
#include "Misc/Guid.h"
#include "GeneralProjectSettings.h"
#include "Misc/EngineVersion.h"

FString UProjectSettings::GetProjectDescription()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.Description;
}

FGuid UProjectSettings::GetProjectID()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.ProjectID;
}

FString UProjectSettings::GetProjectName()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.ProjectName;
}

FString UProjectSettings::GetProjectVersion()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.ProjectVersion;
}

FString UProjectSettings::GetCompanyName()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.CompanyName;
}

FString UProjectSettings::GetCompanyDistinguishedName()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.CompanyDistinguishedName;
}

FString UProjectSettings::GetHomePage()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.Homepage;
}

FString UProjectSettings::GetSupportContact()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.SupportContact;
}

FString UProjectSettings::GetCopyrightNotice()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.CopyrightNotice;
}

FString UProjectSettings::GetLicensingTerms()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.LicensingTerms;
}

FString UProjectSettings::GetPrivacyPolicy()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.PrivacyPolicy;
}

FText UProjectSettings::GetProjectDisplayedTitle()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.ProjectDisplayedTitle;
}

FText UProjectSettings::GetProjectDebugTitleInfo()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.ProjectDebugTitleInfo;
}

bool UProjectSettings::GetWindowPreserveAspectRatio()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bUseBorderlessWindow;
}

bool UProjectSettings::GetBorderlessWindow()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bUseBorderlessWindow;
}

bool UProjectSettings::GetStartVR()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bStartInVR;
}

bool UProjectSettings::GetAllowWindowResize()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bAllowWindowResize;
}

bool UProjectSettings::GetAllowClose()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bAllowClose;
}

bool UProjectSettings::GetAllowMaximize()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bAllowMaximize;
}

bool UProjectSettings::GetAllowMinimize()
{
    const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
    return ProjectSettings.bAllowMinimize;
}

void UProjectSettings::SetProjectDescription(const FString& Description)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->Description = Description;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetProjectID(const FGuid& ProjectID, bool& IsValid)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    FGuid Guid;
    if (ProjectID.IsValid())
    {
        ProjectSettings->ProjectID = Guid;
        ProjectSettings->SaveConfig();
		IsValid = true;
    }
    else
    {
		IsValid = false;
        UE_LOG(LogTemp, Warning, TEXT("SetProjectID: Invalid GUID format."));
    }
}

void UProjectSettings::SetProjectName(const FString& ProjectName)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->ProjectName = ProjectName;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetProjectVersion(const FString& ProjectVersion)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->ProjectVersion = ProjectVersion;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetCompanyName(const FString& CompanyName)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->CompanyName = CompanyName;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetCompanyDistinguishedName(const FString& CompanyDistinguishedName)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->CompanyDistinguishedName = CompanyDistinguishedName;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetHomePage(const FString& HomePage)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->Homepage = HomePage;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetSupportContact(const FString& SupportContact)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->SupportContact = SupportContact;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetCopyrightNotice(const FString& CopyrightNotice)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->CopyrightNotice = CopyrightNotice;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetLicensingTerms(const FString& LicensingTerms)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->LicensingTerms = LicensingTerms;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetPrivacyPolicy(const FString& PrivacyPolicy)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->PrivacyPolicy = PrivacyPolicy;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetProjectDisplayedTitle(const FText& ProjectDisplayedTitle)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->ProjectDisplayedTitle = ProjectDisplayedTitle;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetProjectDebugTitleInfo(const FText& ProjectDebugTitleInfo)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->ProjectDebugTitleInfo = ProjectDebugTitleInfo;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetWindowPreserveAspectRatio(bool WindowPreserveAspectRatio)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bShouldWindowPreserveAspectRatio = WindowPreserveAspectRatio;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetBorderlessWindow(bool BorderlessWindow)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bUseBorderlessWindow = BorderlessWindow;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetStartVR(bool StartVR)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bStartInVR = StartVR;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetAllowWindowResize(bool AllowWindowResize)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bAllowWindowResize = AllowWindowResize;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetAllowClose(bool AllowClose)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bAllowClose = AllowClose;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetAllowMaximize(bool AllowMaximize)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bAllowMaximize = AllowMaximize;
    ProjectSettings->SaveConfig();
}

void UProjectSettings::SetAllowMinimize(bool AllowMinimize)
{
    UGeneralProjectSettings* ProjectSettings = GetMutableDefault<UGeneralProjectSettings>();
    ProjectSettings->bAllowMinimize = AllowMinimize;
    ProjectSettings->SaveConfig();
}

FString UProjectSettings::GetEngineVersion()
{
	return FEngineVersion::Current().ToString();
}