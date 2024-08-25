// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.


#include "FileIO.h"
#include "Misc/FileHelper.h"
#include "EstapeToolsBPLibrary.h"

bool UFileIO::LoadTextFile(FString FileName, FString& StringContent)
{
    return FFileHelper::LoadFileToString(StringContent, *FileName);
}

bool UFileIO::LoadTextArray(FString FileName, TArray<FString>& StringContent)
{
    return FFileHelper::LoadFileToStringArray(StringContent, *FileName);
}

bool UFileIO::SaveTextFile(FString StringContent, FString FileName)
{
    return FFileHelper::SaveStringToFile(StringContent, *FileName);
}

bool UFileIO::SaveTextArray(TArray<FString> StringContent, FString FileName)
{
    return FFileHelper::SaveStringArrayToFile(StringContent, *FileName);
}

bool UFileIO::WriteBytesFile(TArray<uint8> Data, FString FileName)
{
    return FFileHelper::SaveArrayToFile(Data, *FileName);
}

bool UFileIO::ReadBytesFile(FString FileName, TArray<uint8>& Data)
{
    return FFileHelper::LoadFileToArray(Data, *FileName);
}

TArray<uint8> UFileIO::ConvertToBytes(FString input)
{
    int32 bufferSize = input.Len();
    TArray<uint8> Output;
    Output.SetNum(bufferSize);

    int32 stringConverted = StringToBytes(input, Output.GetData(), bufferSize);

    return Output;
}

FString UFileIO::ConvertToString(TArray<uint8> input)
{
    FString bytesConverted;
    int32 bytesSize;

    bytesSize = input.Num();

    bytesConverted = BytesToString(input.GetData(), bytesSize);

    return bytesConverted;
}