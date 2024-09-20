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

UENUM(BlueprintType)
enum class ETextureFormat : uint8
{
    PF_Unknown = 0 UMETA(DisplayName = "Unknown"),
    PF_A32B32G32R32F = 1 UMETA(DisplayName = "A32B32G32R32F"),
    PF_B8G8R8A8 = 2 UMETA(DisplayName = "B8G8R8A8"),
    PF_G8 = 3 UMETA(DisplayName = "G8"),
    PF_G16 = 4 UMETA(DisplayName = "G16"),
    PF_DXT1 = 5 UMETA(DisplayName = "DXT1"),
    PF_DXT3 = 6 UMETA(DisplayName = "DXT3"),
    PF_DXT5 = 7 UMETA(DisplayName = "DXT5"),
    PF_UYVY = 8 UMETA(DisplayName = "UYVY"),
    PF_FloatRGB = 9 UMETA(DisplayName = "FloatRGB"),
    PF_FloatRGBA = 10 UMETA(DisplayName = "FloatRGBA"),
    PF_DepthStencil = 11 UMETA(DisplayName = "DepthStencil"),
    PF_ShadowDepth = 12 UMETA(DisplayName = "ShadowDepth"),
    PF_R32_FLOAT = 13 UMETA(DisplayName = "R32_FLOAT"),
    PF_G16R16 = 14 UMETA(DisplayName = "G16R16"),
    PF_G16R16F = 15 UMETA(DisplayName = "G16R16F"),
    PF_G16R16F_FILTER = 16 UMETA(DisplayName = "G16R16F_FILTER"),
    PF_G32R32F = 17 UMETA(DisplayName = "G32R32F"),
    PF_A2B10G10R10 = 18 UMETA(DisplayName = "A2B10G10R10"),
    PF_A16B16G16R16 = 19 UMETA(DisplayName = "A16B16G16R16"),
    PF_D24 = 20 UMETA(DisplayName = "D24"),
    PF_R16F = 21 UMETA(DisplayName = "R16F"),
    PF_R16F_FILTER = 22 UMETA(DisplayName = "R16F_FILTER"),
    PF_BC5 = 23 UMETA(DisplayName = "BC5"),
    PF_V8U8 = 24 UMETA(DisplayName = "V8U8"),
    PF_A1 = 25 UMETA(DisplayName = "A1"),
    PF_FloatR11G11B10 = 26 UMETA(DisplayName = "FloatR11G11B10"),
    PF_A8 = 27 UMETA(DisplayName = "A8"),
    PF_R32_UINT = 28 UMETA(DisplayName = "R32_UINT"),
    PF_R32_SINT = 29 UMETA(DisplayName = "R32_SINT"),
    PF_PVRTC2 = 30 UMETA(DisplayName = "PVRTC2"),
    PF_PVRTC4 = 31 UMETA(DisplayName = "PVRTC4"),
    PF_R16_UINT = 32 UMETA(DisplayName = "R16_UINT"),
    PF_R16_SINT = 33 UMETA(DisplayName = "R16_SINT"),
    PF_R16G16B16A16_UINT = 34 UMETA(DisplayName = "R16G16B16A16_UINT"),
    PF_R16G16B16A16_SINT = 35 UMETA(DisplayName = "R16G16B16A16_SINT"),
    PF_R5G6B5_UNORM = 36 UMETA(DisplayName = "R5G6B5_UNORM"),
    PF_R8G8B8A8 = 37 UMETA(DisplayName = "R8G8B8A8"),
    PF_A8R8G8B8 = 38 UMETA(DisplayName = "A8R8G8B8"),
    PF_BC4 = 39 UMETA(DisplayName = "BC4"),
    PF_R8G8 = 40 UMETA(DisplayName = "R8G8"),
    PF_ATC_RGB = 41 UMETA(DisplayName = "ATC_RGB"),
    PF_ATC_RGBA_E = 42 UMETA(DisplayName = "ATC_RGBA_E"),
    PF_ATC_RGBA_I = 43 UMETA(DisplayName = "ATC_RGBA_I"),
    PF_X24_G8 = 44 UMETA(DisplayName = "X24_G8"),
    PF_ETC1 = 45 UMETA(DisplayName = "ETC1"),
    PF_ETC2_RGB = 46 UMETA(DisplayName = "ETC2_RGB"),
    PF_ETC2_RGBA = 47 UMETA(DisplayName = "ETC2_RGBA"),
    PF_R32G32B32A32_UINT = 48 UMETA(DisplayName = "R32G32B32A32_UINT"),
    PF_R16G16_UINT = 49 UMETA(DisplayName = "R16G16_UINT"),
    PF_ASTC_4x4 = 50 UMETA(DisplayName = "ASTC_4x4"),
    PF_ASTC_6x6 = 51 UMETA(DisplayName = "ASTC_6x6"),
    PF_ASTC_8x8 = 52 UMETA(DisplayName = "ASTC_8x8"),
    PF_ASTC_10x10 = 53 UMETA(DisplayName = "ASTC_10x10"),
    PF_ASTC_12x12 = 54 UMETA(DisplayName = "ASTC_12x12"),
    PF_BC6H = 55 UMETA(DisplayName = "BC6H"),
    PF_BC7 = 56 UMETA(DisplayName = "BC7"),
    PF_R8_UINT = 57 UMETA(DisplayName = "R8_UINT"),
    PF_L8 = 58 UMETA(DisplayName = "L8"),
    PF_XGXR8 = 59 UMETA(DisplayName = "XGXR8"),
    PF_R8G8B8A8_UINT = 60 UMETA(DisplayName = "R8G8B8A8_UINT"),
    PF_R8G8B8A8_SNORM = 61 UMETA(DisplayName = "R8G8B8A8_SNORM"),
    PF_R16G16B16A16_UNORM = 62 UMETA(DisplayName = "R16G16B16A16_UNORM"),
    PF_R16G16B16A16_SNORM = 63 UMETA(DisplayName = "R16G16B16A16_SNORM"),
    PF_PLATFORM_HDR_0 = 64 UMETA(DisplayName = "PLATFORM_HDR_0"),
    PF_PLATFORM_HDR_1 = 65 UMETA(DisplayName = "PLATFORM_HDR_1"),
    PF_PLATFORM_HDR_2 = 66 UMETA(DisplayName = "PLATFORM_HDR_2"),
    PF_NV12 = 67 UMETA(DisplayName = "NV12"),
    PF_R32G32_UINT = 68 UMETA(DisplayName = "R32G32_UINT"),
    PF_ETC2_R11_EAC = 69 UMETA(DisplayName = "ETC2_R11_EAC"),
    PF_ETC2_RG11_EAC = 70 UMETA(DisplayName = "ETC2_RG11_EAC"),
    PF_R8 = 71 UMETA(DisplayName = "R8"),
    PF_B5G5R5A1_UNORM = 72 UMETA(DisplayName = "B5G5R5A1_UNORM"),
    PF_ASTC_4x4_HDR = 73 UMETA(DisplayName = "ASTC_4x4_HDR"),
    PF_ASTC_6x6_HDR = 74 UMETA(DisplayName = "ASTC_6x6_HDR"),
    PF_ASTC_8x8_HDR = 75 UMETA(DisplayName = "ASTC_8x8_HDR"),
    PF_ASTC_10x10_HDR = 76 UMETA(DisplayName = "ASTC_10x10_HDR"),
    PF_ASTC_12x12_HDR = 77 UMETA(DisplayName = "ASTC_12x12_HDR"),
    PF_G16R16_SNORM = 78 UMETA(DisplayName = "G16R16_SNORM"),
    PF_R8G8_UINT = 79 UMETA(DisplayName = "R8G8_UINT"),
    PF_R32G32B32_UINT = 80 UMETA(DisplayName = "R32G32B32_UINT"),
    PF_R32G32B32_SINT = 81 UMETA(DisplayName = "R32G32B32_SINT"),
    PF_R32G32B32F = 82 UMETA(DisplayName = "R32G32B32F"),
    PF_R8_SINT = 83 UMETA(DisplayName = "R8_SINT"),
    PF_R64_UINT = 84 UMETA(DisplayName = "R64_UINT"),
    PF_R9G9B9EXP5 = 85 UMETA(DisplayName = "R9G9B9EXP5"),
    PF_P010 = 86 UMETA(DisplayName = "P010"),
    PF_ASTC_4x4_NORM_RG = 87 UMETA(DisplayName = "ASTC_4x4_NORM_RG"),
    PF_ASTC_6x6_NORM_RG = 88 UMETA(DisplayName = "ASTC_6x6_NORM_RG"),
    PF_ASTC_8x8_NORM_RG = 89 UMETA(DisplayName = "ASTC_8x8_NORM_RG"),
    PF_ASTC_10x10_NORM_RG = 90 UMETA(DisplayName = "ASTC_10x10_NORM_RG"),
    PF_ASTC_12x12_NORM_RG = 91 UMETA(DisplayName = "ASTC_12x12_NORM_RG"),
    PF_MAX = 92 UMETA(DisplayName = "MAX"),
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

    //Convert Bytes to Texture2D.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities", meta = (Keywords = "Convert Bytes Texture2D "))
    static bool BytesToTexture2D(const TArray<uint8> &BytesArray, UTexture2D *&TextureLoaded, int32 Width, int32 Height, ETextureFormat TextureFormat);

    //Convert Texture2D to Bytes.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|Utilities", meta = (Keywords = "Convert Bytes Texture2D "))
    static bool Texture2DToBytes(UTexture2D *Texture, TArray<uint8> &TextureData, int32 &Width, int32 &Height, ETextureFormat &TextureFormat);

	//Convert an array of Linear Colors to an array of Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Array", meta = (CompactNodeTitle = "ToArrayLinearColor", Keywords = "Linear Colors convert parse"))
    static TArray<FLinearColor> ArrayColorToArrayLinearColor(const TArray<FColor>& Colors);

	//Convert an array of Colors to an array of Linear Colors.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|Utilities|Array", meta = (CompactNodeTitle = "ToArrayColor", Keywords = "Linear Colors convert parse"))
    static TArray<FColor> ArrayLinearColorToArrayColor(const TArray<FLinearColor>& LinearColors);
};
