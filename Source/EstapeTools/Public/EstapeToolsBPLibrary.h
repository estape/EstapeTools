// © Rodrigo Estape 2025, this plugin is available ONLY under FAB Marketplace license https://www.fab.com/eula.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EstapeToolsBPLibrary.generated.h"

UENUM(BlueprintType)
enum class EDialogButtons : uint8
{
    MB_OK = 0 UMETA(DisplayName = "OK"),
    MB_OKCANCEL = 1 UMETA(DisplayName = "OK, Cancel"),
    MB_ABORTRETRYIGNORE = 2 UMETA(DisplayName = "Abort, Retry, and Ignore"),
    MB_YESNOCANCEL = 3 UMETA(DisplayName = "Yes, No, Cancel"),
    MB_YESNO = 4 UMETA(DisplayName = "Yes, No"),
    MB_RETRYCANCEL = 5 UMETA(DisplayName = "Retry, Cancel"),
    MB_CANCELTRYCONTINUE = 6 UMETA(DisplayName = "Cancel, Try Again, Continue"),
};

UENUM(BlueprintType)
enum class EDialogIcon : uint8
{
    MB_NONE = 0 UMETA(DisplayName = "No icon"),
    MB_ICONERROR = 16 UMETA(DisplayName = "Stop-sign icon"),
    MB_ICONWARNING = 48 UMETA(DisplayName = "Exclamation-point icon"),
    MB_ICONINFORMATION = 64 UMETA(DisplayName = "Information-point icon")
};

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
class UEstapeToolsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

    // This node inserts a new line by moving the remaining string value to the line below.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|String", meta = (CompactNodeTitle = "GewNewLine", Keywords = "Get New Line \\n"))
    static FString GetNewLine();

    // Convert a decimal value into an integer represented as a hexadecimal string.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "DecToHex", Keywords = "Decimal Hexadecimal Dec Hex"))
    static FString DecimalToHexadecimal(int32 Decimal);

    // Convert a hexadecimal string value into a decimal integer.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "HexToDec", Keywords = "Hexadecimal Decimal Hex Dec"))
    static int32 HexadecimalToDecimal(const FString& HexString);
    
	//Convert Color array (8-Bit) to Bytes array.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "ColorsToBytes", Keywords = "Colors Bytes Array Texture"))
	static TArray<uint8> ColorsToBytes(const TArray<FColor>& Colors);

	//Convert Bytes array to Color array (8-Bit).
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "BytesToColors", Keywords = "Colors Bytes Array Texture"))
	static TArray<FColor> BytesToColors(const TArray<uint8>& Bytes);

    //Convert String data to bytes array.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "StringToBytes", KeyWords = "parse, convertion, string, bytes"))
    static TArray<uint8> ConvertStringToBytes(FString input);

    //Convert bytes array to string data.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "BytesToString", KeyWords = "parse, convertion, string, bytes"))
    static FString ConvertBytesToString(TArray<uint8> input);

	//Convert an array of Linear Colors to an array of Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Array", meta = (CompactNodeTitle = "ToArrayLinearColor", Keywords = "Linear Colors convert parse"))
    static TArray<FLinearColor> ArrayColorToArrayLinearColor(const TArray<FColor>& Colors);

	//Convert an array of Colors to an array of Linear Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Array", meta = (CompactNodeTitle = "ToArrayColor", Keywords = "Linear Colors convert parse"))
    static TArray<FColor> ArrayLinearColorToArrayColor(const TArray<FLinearColor>& LinearColors);

    //Create a new process, in another words this node load a external program.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Create Process External Program Load"))
    static FProcessHandle CreateProcess(const FString ProgramFolder, const FString Parameters, bool Detached, bool Hidden, bool ReallyHidden, int32 Priority);

    //Create a new process syncronized, in another words this node load a external program and wait util it's finished.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Create Process External Program Load"))
    static FProcessHandle CreateProcessSync(const FString ProgramFolder, const FString Parameters, bool TerminateParentProcess);

    //Close em terminate all tree associate.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Terminate Process External Program Close"))
    static bool TerminateProcess(FProcessHandle InputData);

    //Check if process ID is still running..
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Terminate Process External Program Close"))
    static bool CheckProcessRunning(FProcessHandle InputData);
};
