// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.


#include "EstapeToolsBPLibrary.h"
#include "EstapeTools.h"
#include "Misc/FileHelper.h"
#include "Engine/Texture2D.h"

UEstapeToolsBPLibrary::UEstapeToolsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UEstapeToolsBPLibrary::GetNewLine()
{
    return TEXT("\n");
}


TArray<uint8> UEstapeToolsBPLibrary::WriteCLUTData(const TArray<FLinearColor>& Colors, int32& LenData)
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

TArray<FLinearColor> UEstapeToolsBPLibrary::ReadCLUTData(const TArray<uint8>& RawData, int32 LenData)
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

FString UEstapeToolsBPLibrary::DecToHex(int32 Decimal)
{
    FString HexString = FString::Printf(TEXT("%X"), Decimal);
    return HexString;
}

int32 UEstapeToolsBPLibrary::HexToDec(const FString& HexString)
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

bool UEstapeToolsBPLibrary::Texture2DParseColors(UTexture2D* Texture, TArray<FColor>& OutColors, int32& Width, int32& Height)
{
    if (!Texture || !Texture->GetPlatformData())
    {
        return false;
    }

    FTexture2DMipMap& MipMap = Texture->GetPlatformData()->Mips[0];
    void* Data = MipMap.BulkData.Lock(LOCK_READ_ONLY);

    int32 localWidth = MipMap.SizeX;
    int32 localHeight = MipMap.SizeY;
    OutColors.SetNum(localWidth * localHeight);

    FColor* FormattedImageData = static_cast<FColor*>(Data);

    for (int32 Y = 0; Y < localHeight; Y++)
    {
        for (int32 X = 0; X < localWidth; X++)
        {
            int32 Index = Y * localWidth + X;
            OutColors[Index] = FormattedImageData[Index];
        }
    }

    MipMap.BulkData.Unlock();
    Width = localWidth;
    Height = localHeight;

    return true;
}

UTexture2D* UEstapeToolsBPLibrary::ColorsParseTexture2D(const TArray<FColor>& Colors, int32 Width, int32 Height)
{
    if (Colors.Num() == 0)
    {
        return nullptr;
    }

    if (Width <= 0 || Height <= 0)
    {
        return nullptr;
    }

    UTexture2D* Texture = UTexture2D::CreateTransient(Width, Height);
    if (!Texture)
    {
        return nullptr;
    }

    FTexturePlatformData* PlatformData = Texture->GetPlatformData();
    if (!PlatformData)
    {
        return nullptr;
    }

    FTexture2DMipMap& MipMap = PlatformData->Mips[0];
    void* Data = MipMap.BulkData.Lock(LOCK_READ_WRITE);

    FColor* TextureData = static_cast<FColor*>(Data);
    FMemory::Memcpy(TextureData, Colors.GetData(), Colors.Num() * sizeof(FColor));

    MipMap.BulkData.Unlock();
    Texture->UpdateResource();

    return Texture;
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