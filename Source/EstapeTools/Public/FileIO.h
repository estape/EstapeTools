// � Rodrigo Estape 2025, this plugin is available ONLY under FAB Marketplace license https://www.fab.com/eula.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileIO.generated.h"

/**
 * 
 */
UCLASS()
class ESTAPETOOLS_API UFileIO : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
    // This node is responsible for loading a text file, allowing you to load text or store it.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|FileI/O|String", meta = (Keywords = "Load Text File"))
    static bool LoadTextFile(FString FileName, FString& StringContent);

    // This node is responsible for creating a text file, making it an excellent choice for saving text or storing string data.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|FileI/O|String", meta = (Keywords = "Save Text File"))
    static bool SaveTextFile(FString StringContent, FString FileName);

    // This node is responsible for creating a text file. With an array input, each index will correspond to a line in the text. It is an excellent choice for saving text or storing string data..
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|FileI/O|String", meta = (Keywords = "Save Text File Array"))
    static bool SaveTextArray(TArray<FString> StringContent, FString FileName);

    // This node is responsible for loading a text file. You can use it to load text or store string data, with each line representing a new array index.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|FileI/O|String", meta = (Keywords = "Load Text File Array"))
    static bool LoadTextArray(FString FileName, TArray<FString>& StringContent);

    // This node is responsible for writing any file as a sequence of bytes. It can be used as a resource for saving game data, allowing players to save their progress and continue later.
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|FileI/O|Bytes", meta = (Keywords = "Write file"))
    static bool WriteBytesFile(TArray<uint8> Data, FString FileName);

    // This node is responsible for reading any file as a sequence of bytes. It can be used to load game data, even if the files were not created by you, as long as you understand how to work with them. It serves as a 'Load Game' resource, allowing players to load their progress and continue from where they left off.
    UFUNCTION(BlueprintPure, Category = "EstapeTools|FileI/O|Bytes", meta = (Keywords = "Read file"))
    static bool ReadBytesFile(FString FileName, TArray<uint8>& Data);

    //// Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert). WARNING: Compress a higher image quality may result in a loss of color information (banding).
    //UFUNCTION(BlueprintCallable, Category = "EstapeTools|FileI/O|CLUT", meta = (Keywords = "CLUT color"))
    //static TArray<uint8> WriteCLUTData(const TArray<FLinearColor>& Colors, int32& LenData);

    // Read data generated by the 'Write CLUT Data' node or similar back to a linear color format
    UFUNCTION(BlueprintCallable, Category = "EstapeTools|FileI/O|CLUT", meta = (Keywords = "CLUT color"))
    static TArray<FLinearColor> ReadCLUTData(const TArray<uint8>& RawData, int32 LenData);
};
