// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.

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
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|String", meta = (Keywords = "Get New Line"))
    static FString GetNewLine();

	// Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert). WARNING: Compress a higher image quality may result in a loss of color information (banding).
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Color", meta = (Keywords = "CLUT color"))
    static TArray<uint8> WriteCLUTData(const TArray<FLinearColor>& Colors, int32& LenData);

    // Read data generated by the 'Write CLUT Data' node or similar back to a linear color format
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Color", meta = (Keywords = "CLUT color"))
    static TArray<FLinearColor> ReadCLUTData(const TArray<uint8>& RawData, int32 LenData);

    // Convert a decimal value into an integer represented as a hexadecimal string.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (Keywords = "Decimal Hexadecimal"))
    static FString DecToHex(int32 Decimal);

    // Convert a hexadecimal string value into a decimal integer.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (Keywords = "Hexadecimal Decimal"))
    static int32 HexToDec(const FString& HexString);
    
	//Convert Color array (8-Bit) to Bytes array.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (Keywords = "Colors Bytes Array Texture"))
	static TArray<uint8> ColorsToBytes(const TArray<FColor>& Colors);

	//Convert Bytes array to Color array (8-Bit).
	UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities", meta = (Keywords = "Colors Bytes Array Texture"))
	static TArray<FColor> BytesToColors(const TArray<uint8>& Bytes);

	// Convert a texture to an array of colors.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Texture", meta = (Keywords = "Texture Colors convert parse"))
    static bool Texture2DParseColors(UTexture2D* Texture, TArray<FColor>& OutColors, int32& Width, int32& Height);

	// Convert an array of colors in format of UE5 Texture to a texture.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Texture", meta = (Keywords = "Texture Colors convert parse"))
    static UTexture2D* ColorsParseTexture2D(const TArray<FColor>& Colors, int32 Width, int32 Height);

	//Convert an array of Linear Colors to an array of Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Texture", meta = (CompactNodeTitle = "ToArrayLinearColor", Keywords = "Linear Colors convert parse"))
    static TArray<FLinearColor> ArrayColorToArrayLinearColor(const TArray<FColor>& Colors);

	//Convert an array of Colors to an array of Linear Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Texture", meta = (CompactNodeTitle = "ToArrayColor", Keywords = "Linear Colors convert parse"))
    static TArray<FColor> ArrayLinearColorToArrayColor(const TArray<FLinearColor>& LinearColors);
};