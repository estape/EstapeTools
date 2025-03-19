// Rodrigo Estape 2024, this plugin is available ONLY under Unreal Marketplace license.


#include "EstapeToolsBPLibrary.h"
#include "EstapeTools.h"
#include "Misc/FileHelper.h"

UEstapeToolsBPLibrary::UEstapeToolsBPLibrary(const FObjectInitializer& ObjectInitializer)
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

int32 UEstapeToolsBPLibrary::HexadecimalToDecimal(const FString& HexString)
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