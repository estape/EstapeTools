// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.

#include "EstapeToolsBPLibrary.h"
#include "EstapeTools.h"
#include "Misc/FileHelper.h"
#include "Engine/Texture2D.h"

UEstapeToolsBPLibrary::UEstapeToolsBPLibrary(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FString UEstapeToolsBPLibrary::GetNewLine()
{
    return TEXT("\n");
}

FString UEstapeToolsBPLibrary::DecimalToHexadecimal(int32 Decimal)
{
    FString HexString = FString::Printf(TEXT("%X"), Decimal);
    return HexString;
}

int32 UEstapeToolsBPLibrary::HexadecimalToDecimal(const FString &HexString)
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

TArray<uint8> UEstapeToolsBPLibrary::ColorsToBytes(const TArray<FColor> &Colors)
{
    TArray<uint8> Bytes;
    Bytes.Reserve(Colors.Num() * 4);

    for (const FColor &Color : Colors)
    {
        Bytes.Add(Color.R);
        Bytes.Add(Color.G);
        Bytes.Add(Color.B);
        Bytes.Add(Color.A);
    }

    return Bytes;
}

TArray<FColor> UEstapeToolsBPLibrary::BytesToColors(const TArray<uint8> &Bytes)
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

TArray<uint8> UEstapeToolsBPLibrary::ConvertStringToBytes(FString input)
{
    int32 bufferSize = input.Len();
    TArray<uint8> Output;
    Output.SetNum(bufferSize);

    int32 stringConverted = StringToBytes(input, Output.GetData(), bufferSize);

    return Output;
}

FString UEstapeToolsBPLibrary::ConvertBytesToString(TArray<uint8> input)
{
    FString bytesConverted;
    int32 bytesSize;

    bytesSize = input.Num();

    bytesConverted = BytesToString(input.GetData(), bytesSize);

    return bytesConverted;
}

bool UEstapeToolsBPLibrary::BytesToTexture2D(const TArray<uint8> &BytesArray, UTexture2D *&TextureLoaded, int32 Width, int32 Height, ETextureFormat TextureFormat)
{
    // Verifica se o array de bytes está vazio ou se as dimensões da textura são inválidas
    if (BytesArray.Num() == 0 || Width <= 0 || Height <= 0)
    {
        TextureLoaded = nullptr;
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::BytesToTexture2D - BytesArray entry is empty or Width and Height are invalid. Width: %d, Height: %d, Line: 112"), Width, Height);
        return false;
    }

    // Converte ETextureFormat para EPixelFormat diretamente
    EPixelFormat PixelFormat = static_cast<EPixelFormat>(TextureFormat);

    // Valida o formato de pixel
    if (PixelFormat == PF_Unknown || PixelFormat >= PF_MAX)
    {
        TextureLoaded = nullptr;
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::BytesToTexture2D - Pixel format is invalid. PixelFormat: %d, Line: 123"), static_cast<int32>(PixelFormat));
        return false;
    }

    // Cria uma nova textura vazia
    UTexture2D* Texture = UTexture2D::CreateTransient(Width, Height, PixelFormat);
    if (!Texture)
    {
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::BytesToTexture2D - Unable to create a new empty Texture. Line: 144"));
        return false;
    }

    // Define as propriedades da textura
    Texture->MipGenSettings = TMGS_NoMipmaps;
    Texture->CompressionSettings = TC_Default;
    Texture->SRGB = true; // Habilita SRGB se a textura usa espaço de cor sRGB
    Texture->AddToRoot(); // Evita que a textura seja coletada pelo garbage collector

    // Obtém um ponteiro para os dados de pixel da textura
    void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

    // Copia dados do array de bytes para a textura
    FMemory::Memcpy(TextureData, BytesArray.GetData(), BytesArray.Num());

    // Libera os dados da textura
    Texture->GetPlatformData()->Mips[0].BulkData.Unlock();

    // Atualiza a textura
    Texture->UpdateResource();

    TextureLoaded = Texture;
    UE_LOG(LogTemp, Display, TEXT("EstapeToolsBPLibrary::BytesToTexture2D - Texture was created successfully! Width: %d, Height: %d, Line: %d"), Width, Height);
    return true;
}

bool UEstapeToolsBPLibrary::Texture2DToBytes(UTexture2D *Texture, TArray<uint8> &TextureData, int32 &Width, int32 &Height, ETextureFormat &TextureFormat)
{
    // Verifica se a textura é válida
    if (!Texture || !Texture->IsValidLowLevel())
    {
        TextureData.Empty();
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::Texture2DToBytes - Texture is invalid! Line: 176"));
        return false;
    }

    // Obtém as dimensões e formato da textura
    Width = Texture->GetSizeX();
    Height = Texture->GetSizeY();
    TextureFormat = static_cast<ETextureFormat>(Texture->GetPixelFormat());

    // Verifica o formato do pixel
    EPixelFormat PixelFormat = Texture->GetPixelFormat();
    if (PixelFormat == PF_Unknown || PixelFormat >= PF_MAX)
    {
        TextureData.Empty();
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::Texture2DToBytes - Pixel format is invalid. PixelFormat: %d, Line: 184"), static_cast<int32>(PixelFormat));
        return false;
    }

    // Acessa o primeiro mipmap da textura
    FTexture2DMipMap &Mip = Texture->GetPlatformData()->Mips[0];
    const int32 MipSize = Mip.BulkData.GetBulkDataSize();

    // Verifica se o tamanho do Mip é válido antes de alocar
    if (MipSize <= 0)
    {
        TextureData.Empty();
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::Texture2DToBytes - MipSize is invalid! Line: 191"));
        return false;
    }

    // Bloqueia os dados para leitura
    void* MipData = Mip.BulkData.Lock(LOCK_READ_ONLY);
    if (!MipData)
    {
        TextureData.Empty();
        UE_LOG(LogTemp, Error, TEXT("EstapeToolsBPLibrary::Texture2DToBytes - Failed to lock Mip data! Line: 196"));
        return false;
    }

    // Copia os dados para o array de bytes
    TextureData.SetNumUninitialized(MipSize);
    FMemory::Memcpy(TextureData.GetData(), MipData, MipSize);

    // Desbloqueia os dados da textura
    Mip.BulkData.Unlock();

    UE_LOG(LogTemp, Display, TEXT("EstapeToolsBPLibrary::Texture2DToBytes - Texture was converted successfully! Width: %d, Height: %d, MipSize: %d, Line: 202"), Width, Height, MipSize);
    return true;
}

TArray<FLinearColor> UEstapeToolsBPLibrary::ArrayColorToArrayLinearColor(const TArray<FColor> &Colors)
{
    TArray<FLinearColor> LinearColors;
    LinearColors.Reserve(Colors.Num());

    for (const FColor &Color : Colors)
    {
        LinearColors.Add(FLinearColor(Color));
    }

    return LinearColors;
}
TArray<FColor> UEstapeToolsBPLibrary::ArrayLinearColorToArrayColor(const TArray<FLinearColor> &LinearColors)
{
    TArray<FColor> Colors;
    Colors.Reserve(LinearColors.Num());

    for (const FLinearColor &LinearColor : LinearColors)
    {
        Colors.Add(LinearColor.ToFColor(true));
    }

    return Colors;
}