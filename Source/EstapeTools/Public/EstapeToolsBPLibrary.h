// © Rodrigo Estape 2025, this plugin is available ONLY under FAB Marketplace license https://www.fab.com/eula.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EstapeToolsBPLibrary.generated.h"

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
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|String", meta = (CompactNodeTitle = "GewNewLine", Keywords = "Get New Line"))
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
    static FProcessHandle CreateProcessSync(const FString ProgramFolder, const FString Parameters);

    //Close em terminate all tree associate.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Terminate Process External Program Close"))
    static bool TerminateProcess(FProcessHandle InputData);

    //Check if process ID is still running..
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities|Process", meta = (KeyWords = "Terminate Process External Program Close"))
    static bool CheckProcessRunning(FProcessHandle InputData);
};
