// Rodrigo Estape de Oliveira - Estape Tools v1.0.7


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

TArray<uint8> UFileIO::WriteCLUTData(const TArray<FLinearColor>& Colors, int32& LenData)
{
    int32 MaxColorCount = Colors.Num();
    TArray<uint8> RawData;
    RawData.SetNum(MaxColorCount * 2);
    int32 ColorIndex = 0;

    for (int32 i = 0; i < MaxColorCount; i++)
    {
        uint8 R = (uint8)(FMath::Clamp(Colors[i].R * 255.0f, 0, 255) / 8);
        uint8 G = (uint8)(FMath::Clamp(Colors[i].G * 255.0f, 0, 255) / 8);
        uint8 B = (uint8)(FMath::Clamp(Colors[i].B * 255.0f, 0, 255) / 8);

        uint16 ColorData = (B << 10) | (G << 5) | R;
        RawData[ColorIndex++] = ColorData & 0xFF;
        RawData[ColorIndex++] = (ColorData >> 8) & 0xFF;
    }

    LenData = MaxColorCount;
    return RawData;
}

TArray<FLinearColor> UFileIO::ReadCLUTData(const TArray<uint8>& RawData, int32 LenData)
{
    int32 NumPixels = RawData.Num() / 2;
    TArray<FLinearColor> Colors;
    Colors.SetNum(LenData);

    if (LenData > 0)
    {
        for (int32 i = 0; i < LenData; i++)
        {
            uint16 ColorData = (RawData[i * 2 + 1] << 8) | RawData[i * 2];
            uint8 R = (ColorData & 0x1F) * 8;
            uint8 G = ((ColorData >> 5) & 0x1F) * 8;
            uint8 B = ((ColorData >> 10) & 0x1F) * 8;
            Colors[i] = FLinearColor(R / 255.0f, G / 255.0f, B / 255.0f, 1.0f);
        }
    }
    else
    {
        Colors.Empty();
    }

    NumPixels = 0;
    return Colors;
}