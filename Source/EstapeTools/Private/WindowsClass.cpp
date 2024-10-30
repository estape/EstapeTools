// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.


#include "WindowsClass.h"
#if PLATFORM_WINDOWS
#include <windows.h>
#include <VersionHelpers.h>
#include "shlobj.h" 
#include <Runtime\Core\Public\Windows\COMPointer.h>
#endif

#if PLATFORM_WINDOWS
float UWindowsClass::GetBatteryLevel()
{
    SYSTEM_POWER_STATUS* lpSystemPowerStatus;
    lpSystemPowerStatus = new SYSTEM_POWER_STATUS;
    GetSystemPowerStatus(lpSystemPowerStatus);
    float BatteryLevel = static_cast<float>(lpSystemPowerStatus->BatteryLifePercent);
    delete lpSystemPowerStatus;
    return BatteryLevel;
}
#endif

#if PLATFORM_WINDOWS
bool UWindowsClass::IsBatteryCharging()
{
    SYSTEM_POWER_STATUS* lpSystemPowerStatus;
    lpSystemPowerStatus = new SYSTEM_POWER_STATUS;
    GetSystemPowerStatus(lpSystemPowerStatus);

    bool bIsCharging = (lpSystemPowerStatus->ACLineStatus == 1);

    delete lpSystemPowerStatus;

    return bIsCharging;
}
#endif

#if PLATFORM_WINDOWS
typedef struct _MY_OSVERSIONINFOEXW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
} MY_OSVERSIONINFOEXW, * PMY_OSVERSIONINFOEXW;
#endif
#if PLATFORM_WINDOWS
typedef LONG(WINAPI* RtlGetVersionPtr)(PMY_OSVERSIONINFOEXW);
#endif

#if PLATFORM_WINDOWS
bool UWindowsClass::GetWindowsInfo(int& BuildNumber, FString& VersionName, int& VersionServicePack)
{
    HMODULE hMod = GetModuleHandleW(L"ntdll.dll");
    if (hMod)
    {
        RtlGetVersionPtr RtlGetVersion = reinterpret_cast<RtlGetVersionPtr>(GetProcAddress(hMod, "RtlGetVersion"));
        if (RtlGetVersion)
        {
            MY_OSVERSIONINFOEXW rovi = { 0 };
            rovi.dwOSVersionInfoSize = sizeof(rovi);
            if (RtlGetVersion(&rovi) == 0)
            {
                DWORD dwBuild = rovi.dwBuildNumber;

                if (dwBuild >= 22000)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 11_OrHigher";
                    VersionServicePack = 0;
                    return true;
                }
                else if (dwBuild >= 10240 && dwBuild < 22000)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 10";
                    VersionServicePack = 0;
                    return true;
                }
                else if (dwBuild >= 9600 && dwBuild < 10240)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 8.1";
                    VersionServicePack = 0;
                    return true;
                }
                else if (dwBuild >= 9200 && dwBuild < 9600)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 8";
                    VersionServicePack = 0;
                    return true;
                }
                else if (dwBuild >= 7601 && dwBuild < 9200)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 7";
                    VersionServicePack = 1;
                    return true;
                }
                else if (dwBuild >= 7600 && dwBuild < 7601)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 7";
                    VersionServicePack = 0;
                    return true;
                }
                else if (dwBuild >= 6002 && dwBuild < 7600)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows Vista";
                    VersionServicePack = 2;
                    return true;
                }
                else if (dwBuild >= 6001 && dwBuild < 6002)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows Vista";
                    VersionServicePack = 1;
                    return true;
                }
                else if (dwBuild >= 6000 && dwBuild < 6001)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows Vista";
                    VersionServicePack = 0;
                    return true;
                }
                else if (dwBuild >= 2600 && dwBuild < 6000)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows XP";

                    if (IsWindowsXPSP3OrGreater())
                    {
                        VersionServicePack = 3;
                    }
                    else if (IsWindowsXPSP2OrGreater())
                    {
                        VersionServicePack = 2;
                    }
                    else if (IsWindowsXPSP1OrGreater())
                    {
                        VersionServicePack = 1;
                    }
                    else
                    {
                        VersionServicePack = 0;
                    }
                    return true;
                }
                else if (dwBuild < 2600)
                {
                    BuildNumber = dwBuild;
                    VersionName = "Windows 2000";
                    VersionServicePack = 0;
                    return true;
                }
                else
                {
                    BuildNumber = 0.0;
                    VersionName = "";
                    VersionServicePack = 0;
                    return false;
                }
            }
        }
    }
    BuildNumber = 0.0;
    VersionName = "";
    VersionServicePack = 0;
    return false;
}
#endif

EDialogButtonClicked UWindowsClass::MessageBox_Windows(const FString& DialogTitle, const FString& DialogMessage,
    EDialogButtons Buttons, EDialogIcon Icon)
{
#if PLATFORM_WINDOWS
    return static_cast<EDialogButtonClicked>(UWindowsClass::MSGInner(NULL, DialogTitle, DialogMessage, static_cast<uint8>(Buttons) | static_cast<uint8>(Icon)));
#else
    return EDialogButtonClicked::IDNONE;
#endif
}

int UWindowsClass::MSGInner(const void* ParentWindowHandle, const FString& DialogTitle, const FString& DialogMessage, const unsigned int DialogType)
{
#if PLATFORM_WINDOWS
    return MessageBox(
        (HWND)ParentWindowHandle,
        *DialogMessage,
        *DialogTitle,
        DialogType
    );
#else
    return -1;
#endif
}