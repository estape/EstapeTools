// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EstapeToolsBPLibrary.generated.h"


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
};
