// Rodrigo Estape de Oliveira - Estape Tools v1.0.7

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
    
	// Convert Color array (8-Bit) to Bytes array.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "ColorsToBytes", Keywords = "Colors Bytes Array Texture"))
	static TArray<uint8> ColorsToBytes(const TArray<FColor>& Colors);

	// Convert Bytes array to Color array (8-Bit).
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "BytesToColors", Keywords = "Colors Bytes Array Texture"))
	static TArray<FColor> BytesToColors(const TArray<uint8>& Bytes);

    // Convert String data to bytes array.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "StringToBytes", KeyWords = "parse, convertion, string, bytes"))
    static TArray<uint8> ConvertStringToBytes(FString input);

    // Convert bytes array to string data.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (CompactNodeTitle = "BytesToString", KeyWords = "parse, convertion, string, bytes"))
    static FString ConvertBytesToString(TArray<uint8> input);

	// Convert an array of Linear Colors to an array of Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Array", meta = (CompactNodeTitle = "ToArrayLinearColor", Keywords = "Linear Colors convert parse"))
    static TArray<FLinearColor> ArrayColorToArrayLinearColor(const TArray<FColor>& Colors);

	// Convert an array of Colors to an array of Linear Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Array", meta = (CompactNodeTitle = "ToArrayColor", Keywords = "Linear Colors convert parse"))
    static TArray<FColor> ArrayLinearColorToArrayColor(const TArray<FLinearColor>& LinearColors);
};
