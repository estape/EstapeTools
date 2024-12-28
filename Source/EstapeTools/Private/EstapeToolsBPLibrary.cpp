// © Rodrigo Estape 2025, this plugin is available ONLY under FAB Marketplace license https://www.fab.com/eula.


#include "EstapeToolsBPLibrary.h"
#include "EstapeTools.h"
#include "Misc/FileHelper.h"

UEstapeToolsBPLibrary::UEstapeToolsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UEstapeToolsBPLibrary::GetNewLine()
{
    return TEXT("\n");
}

FString UEstapeToolsBPLibrary::DecimalToHexadecimal(int32 Decimal)
{
    FString HexString = FString::Printf(TEXT("%X"), Decimal);
    return HexString;
}

int32 UEstapeToolsBPLibrary::HexadecimalToDecimal(const FString& HexString)
{
    int32 DecimalValue = 0;

    for (int32 i = HexString.Len() - 1; i >= 0; --i)
    {
        TCHAR C = HexString[i];

        if ((C >= '0' && C <= '9') || (C >= 'A' && C <= 'F'))
        {
            int32 DigitValue = C - '0';
            if (C >= 'A')
            {
                DigitValue = 10 + (C - 'A');
            }

            DecimalValue = (DecimalValue * 16) + DigitValue;
        }
        else
        {
            return 0;
        }
    }

    return DecimalValue;
}

TArray<uint8> UEstapeToolsBPLibrary::ColorsToBytes(const TArray<FColor>& Colors)
{
    TArray<uint8> Bytes;
    Bytes.Reserve(Colors.Num() * 4);

    for (const FColor& Color : Colors)
    {
        Bytes.Add(Color.R);
        Bytes.Add(Color.G);
        Bytes.Add(Color.B);
        Bytes.Add(Color.A);
    }

    return Bytes;
}

TArray<FColor> UEstapeToolsBPLibrary::BytesToColors(const TArray<uint8>& Bytes)
{
    if (Bytes.Num() % 4 != 0)
    {
        return TArray<FColor>();
    }

    TArray<FColor> Colors;
    Colors.Reserve(Bytes.Num() / 4);

    for (int32 i = 0; i < Bytes.Num(); i += 4)
    {
        FColor Color(Bytes[i], Bytes[i + 1], Bytes[i + 2], Bytes[i + 3]);
        Colors.Add(Color);
    }

    return Colors;
}

TArray<uint8> UEstapeToolsBPLibrary::ConvertStringToBytes(FString input)
{
    int32 bufferSize = input.Len();
    TArray<uint8> Output;
    Output.SetNum(bufferSize);

    int32 stringConverted = StringToBytes(input, Output.GetData(), bufferSize);

    return Output;
}

FString UEstapeToolsBPLibrary::ConvertBytesToString(TArray<uint8> input)
{
    FString bytesConverted;
    int32 bytesSize;

    bytesSize = input.Num();

    bytesConverted = BytesToString(input.GetData(), bytesSize);

    return bytesConverted;
}

TArray<FLinearColor> UEstapeToolsBPLibrary::ArrayColorToArrayLinearColor(const TArray<FColor>& Colors)
{
    TArray<FLinearColor> LinearColors;
    LinearColors.Reserve(Colors.Num());

    for (const FColor& Color : Colors)
    {
        LinearColors.Add(FLinearColor(Color));
    }

    return LinearColors;
}

TArray<FColor> UEstapeToolsBPLibrary::ArrayLinearColorToArrayColor(const TArray<FLinearColor>& LinearColors)
{
    TArray<FColor> Colors;
    Colors.Reserve(LinearColors.Num());

    for (const FLinearColor& LinearColor : LinearColors)
    {
        Colors.Add(LinearColor.ToFColor(true));
    }

    return Colors;
}

FProcessHandle UEstapeToolsBPLibrary::CreateProcessSync(const FString ProgramFolder, const FString Parameters, bool TerminateParentProcess)
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

FProcessHandle UEstapeToolsBPLibrary::CreateProcess(const FString ProgramFolder, const FString Parameters, bool Detached, bool Hidden, bool ReallyHidden, int32 Priority)
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

bool UEstapeToolsBPLibrary::TerminateProcess(FProcessHandle InputData)
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

bool UEstapeToolsBPLibrary::CheckProcessRunning(FProcessHandle InputData)
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