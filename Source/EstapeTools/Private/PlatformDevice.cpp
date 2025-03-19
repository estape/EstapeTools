// Rodrigo Estape de Oliveira - Estape Tools v1.0.7


#include "PlatformDevice.h"

void UPlatformDevice::IsWindowsPlatform(bool &ReturnValue)
{
#if PLATFORM_WINDOWS
	ReturnValue =  true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsMacPlatform(bool &ReturnValue)
{
#if PLATFORM_MAC
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsLinuxPlatform(bool& ReturnValue)
{
#if PLATFORM_LINUX
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsAndroidPlatform(bool& ReturnValue)
{
#if PLATFORM_ANDROID
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsIOS_Platform(bool &ReturnValue)
{
#if PLATFORM_IOS
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsNintendoSwitch(bool &ReturnValue)
{
#if PLATFORM_SWITCH
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

FProcessHandle UPlatformDevice::CreateProcessSync(const FString ProgramFolder, const FString Parameters, bool TerminateParentProcess)
{
    const TCHAR* TCHAR_ProgramFolder = *ProgramFolder;
    const TCHAR* TCHAR_Parameters = *Parameters;
    int32 ReturnCode = 0;
    FString StrOut = "";
    FString StrErr = "";
    uint64 MemoryUsageProcess = 0;
    uint32 OutProcessID = 0;
    bool SyncProcess = false;
    FProcessHandle structProcessHandle;

    SyncProcess = FPlatformProcess::ExecProcess(TCHAR_ProgramFolder, TCHAR_Parameters, &ReturnCode, &StrOut, &StrErr, nullptr, TerminateParentProcess);
    OutProcessID = FPlatformProcess::GetCurrentProcessId();
    bool bSuccess = FPlatformProcess::GetApplicationMemoryUsage(OutProcessID, reinterpret_cast<SIZE_T*>(&MemoryUsageProcess));

    if (SyncProcess)
    {
        structProcessHandle.ProgramFolder = ProgramFolder;
        structProcessHandle.Parameters = Parameters;
        structProcessHandle.AppName = FPlatformProcess::GetApplicationName(OutProcessID);
        structProcessHandle.ProcessID = OutProcessID;
        structProcessHandle.MemoryUsage = MemoryUsageProcess;
        structProcessHandle.StdOut = StrOut;
        structProcessHandle.StdErr = StrErr;

        UE_LOG(LogTemp, Warning, TEXT("CreateProcessSync - Process started. PID: %d"), OutProcessID);
    }
    else
    {
        structProcessHandle.ProgramFolder = "";
        structProcessHandle.Parameters = "";
        structProcessHandle.AppName = "";
        structProcessHandle.ProcessID = 0;
        structProcessHandle.MemoryUsage = 0;
        structProcessHandle.StdOut = "";
        structProcessHandle.StdErr = "";

        UE_LOG(LogTemp, Error, TEXT("CreateProcessSync - Can't start process"));
    }

    return structProcessHandle;
}

FProcessHandle UPlatformDevice::CreateProcess(const FString ProgramFolder, const FString Parameters, bool Detached, bool Hidden, bool ReallyHidden, int32 Priority)
{
    const TCHAR* TCHAR_ProgramFolder = *ProgramFolder;
    const TCHAR* TCHAR_Parameters = *Parameters;
    uint64 MemoryUsageProcess = 0;
    uint32 OutProcessID = 0;

    FProcessHandle structProcessHandle;

    UE_LOG(LogTemp, Warning, TEXT("CreateProcess - Program folder is: %s"), TCHAR_ProgramFolder);
    UE_LOG(LogTemp, Warning, TEXT("CreateProcess - Parameters are: %s"), TCHAR_Parameters);

    FProcHandle ProcessHandle = FPlatformProcess::CreateProc(
        TCHAR_ProgramFolder,
        TCHAR_Parameters,
        Detached,
        Hidden,
        ReallyHidden,
        &OutProcessID,
        Priority,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    );

    bool bSuccess = FPlatformProcess::GetApplicationMemoryUsage(OutProcessID, reinterpret_cast<SIZE_T*>(&MemoryUsageProcess));

    // Verificar se o processo foi criado com sucesso
    if (ProcessHandle.IsValid())
    {
        structProcessHandle.ProgramFolder = ProgramFolder;
        structProcessHandle.Parameters = Parameters;
        structProcessHandle.AppName = FPlatformProcess::GetApplicationName(OutProcessID);
        structProcessHandle.ProcessID = OutProcessID;
        structProcessHandle.MemoryUsage = MemoryUsageProcess;
        structProcessHandle.StdOut = "";
        structProcessHandle.StdErr = "";

        UE_LOG(LogTemp, Warning, TEXT("CreateProcess - Process started. PID: %d"), OutProcessID);
    }
    else
    {
        structProcessHandle.ProgramFolder = "";
        structProcessHandle.Parameters = "";
        structProcessHandle.AppName = "";
        structProcessHandle.ProcessID = 0;
        structProcessHandle.MemoryUsage = 0;
        structProcessHandle.StdOut = "";
        structProcessHandle.StdErr = "";

        UE_LOG(LogTemp, Error, TEXT("CreateProcess - Can't start process, check if parameters are valid."));
    }

    return structProcessHandle;
}

bool UPlatformDevice::TerminateProcess(FProcessHandle InputData)
{

    if (InputData.ProcessID != 0)
    {
        FProcHandle ProcessHandle = FPlatformProcess::OpenProcess(InputData.ProcessID);
        if (ProcessHandle.IsValid())
        {
            FPlatformProcess::TerminateProc(ProcessHandle, true);
            FPlatformProcess::CloseProc(ProcessHandle);
            return true;
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("TerminateProcess - Terminate process fail!. PID: %d"), InputData.ProcessID);
            return false;
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("TerminateProcess - PID: %d it's invalid"), InputData.ProcessID);
        return false;
    }
}

bool UPlatformDevice::CheckProcessRunning(FProcessHandle InputData)
{
    bool appIsRunning = false;

    if (InputData.ProcessID != 0)
    {
        appIsRunning = FPlatformProcess::IsApplicationRunning(InputData.ProcessID);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("CheckProcessRunning - PID: %d it's invalid"), InputData.ProcessID);
    }

    return appIsRunning;
}