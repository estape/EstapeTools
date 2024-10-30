// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/EstapeToolsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstapeToolsBPLibrary() {}
// Cross Module References
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UEstapeToolsBPLibrary_NoRegister();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UEstapeToolsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EstapeTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execArrayLinearColorToArrayColor)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_LinearColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=UEstapeToolsBPLibrary::ArrayLinearColorToArrayColor(Z_Param_Out_LinearColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execArrayColorToArrayLinearColor)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UEstapeToolsBPLibrary::ArrayColorToArrayLinearColor(Z_Param_Out_Colors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execConvertBytesToString)
	{
		P_GET_TARRAY(uint8,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::ConvertBytesToString(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execConvertStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UEstapeToolsBPLibrary::ConvertStringToBytes(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execBytesToColors)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=UEstapeToolsBPLibrary::BytesToColors(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execColorsToBytes)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UEstapeToolsBPLibrary::ColorsToBytes(Z_Param_Out_Colors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execHexadecimalToDecimal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEstapeToolsBPLibrary::HexadecimalToDecimal(Z_Param_HexString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execDecimalToHexadecimal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Decimal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::DecimalToHexadecimal(Z_Param_Decimal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEstapeToolsBPLibrary::execGetNewLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::GetNewLine();
		P_NATIVE_END;
	}
	void UEstapeToolsBPLibrary::StaticRegisterNativesUEstapeToolsBPLibrary()
	{
		UClass* Class = UEstapeToolsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArrayColorToArrayLinearColor", &UEstapeToolsBPLibrary::execArrayColorToArrayLinearColor },
			{ "ArrayLinearColorToArrayColor", &UEstapeToolsBPLibrary::execArrayLinearColorToArrayColor },
			{ "BytesToColors", &UEstapeToolsBPLibrary::execBytesToColors },
			{ "ColorsToBytes", &UEstapeToolsBPLibrary::execColorsToBytes },
			{ "ConvertBytesToString", &UEstapeToolsBPLibrary::execConvertBytesToString },
			{ "ConvertStringToBytes", &UEstapeToolsBPLibrary::execConvertStringToBytes },
			{ "DecimalToHexadecimal", &UEstapeToolsBPLibrary::execDecimalToHexadecimal },
			{ "GetNewLine", &UEstapeToolsBPLibrary::execGetNewLine },
			{ "HexadecimalToDecimal", &UEstapeToolsBPLibrary::execHexadecimalToDecimal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics
	{
		struct EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms
		{
			TArray<FColor> Colors;
			TArray<FLinearColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Array" },
		{ "Comment", "//Convert an array of Linear Colors to an array of Colors.\n" },
		{ "CompactNodeTitle", "ToArrayLinearColor" },
		{ "Keywords", "Linear Colors convert parse" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert an array of Linear Colors to an array of Colors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ArrayColorToArrayLinearColor", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics
	{
		struct EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms
		{
			TArray<FLinearColor> LinearColors;
			TArray<FColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinearColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_Inner = { "LinearColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors = { "LinearColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms, LinearColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Array" },
		{ "Comment", "//Convert an array of Colors to an array of Linear Colors.\n" },
		{ "CompactNodeTitle", "ToArrayColor" },
		{ "Keywords", "Linear Colors convert parse" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert an array of Colors to an array of Linear Colors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ArrayLinearColorToArrayColor", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics
	{
		struct EstapeToolsBPLibrary_eventBytesToColors_Parms
		{
			TArray<uint8> Bytes;
			TArray<FColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToColors_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
		{ "Comment", "//Convert Bytes array to Color array (8-Bit).\n" },
		{ "CompactNodeTitle", "BytesToColors" },
		{ "Keywords", "Colors Bytes Array Texture" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert Bytes array to Color array (8-Bit)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "BytesToColors", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventBytesToColors_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics
	{
		struct EstapeToolsBPLibrary_eventColorsToBytes_Parms
		{
			TArray<FColor> Colors;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsToBytes_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
		{ "Comment", "//Convert Color array (8-Bit) to Bytes array.\n" },
		{ "CompactNodeTitle", "ColorsToBytes" },
		{ "Keywords", "Colors Bytes Array Texture" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert Color array (8-Bit) to Bytes array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ColorsToBytes", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventColorsToBytes_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics
	{
		struct EstapeToolsBPLibrary_eventConvertBytesToString_Parms
		{
			TArray<uint8> input;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertBytesToString_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
		{ "Comment", "//Convert bytes array to string data.\n" },
		{ "CompactNodeTitle", "BytesToString" },
		{ "KeyWords", "parse, convertion, string, bytes" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert bytes array to string data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ConvertBytesToString", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventConvertBytesToString_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics
	{
		struct EstapeToolsBPLibrary_eventConvertStringToBytes_Parms
		{
			FString input;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertStringToBytes_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
		{ "Comment", "//Convert String data to bytes array.\n" },
		{ "CompactNodeTitle", "StringToBytes" },
		{ "KeyWords", "parse, convertion, string, bytes" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert String data to bytes array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ConvertStringToBytes", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventConvertStringToBytes_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics
	{
		struct EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms
		{
			int32 Decimal;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Decimal;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_Decimal = { "Decimal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms, Decimal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_Decimal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
		{ "Comment", "// Convert a decimal value into an integer represented as a hexadecimal string.\n" },
		{ "CompactNodeTitle", "DecToHex" },
		{ "Keywords", "Decimal Hexadecimal Dec Hex" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert a decimal value into an integer represented as a hexadecimal string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "DecimalToHexadecimal", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics
	{
		struct EstapeToolsBPLibrary_eventGetNewLine_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetNewLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|String" },
		{ "Comment", "// This node inserts a new line by moving the remaining string value to the line below.\n" },
		{ "CompactNodeTitle", "GewNewLine" },
		{ "Keywords", "Get New Line" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "This node inserts a new line by moving the remaining string value to the line below." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "GetNewLine", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventGetNewLine_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics
	{
		struct EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms
		{
			FString HexString;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexString;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms, HexString), METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
		{ "Comment", "// Convert a hexadecimal string value into a decimal integer.\n" },
		{ "CompactNodeTitle", "HexToDec" },
		{ "Keywords", "Hexadecimal Decimal Hex Dec" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "ToolTip", "Convert a hexadecimal string value into a decimal integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "HexadecimalToDecimal", nullptr, nullptr, sizeof(EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms), Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEstapeToolsBPLibrary_NoRegister()
	{
		return UEstapeToolsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEstapeToolsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor, "ArrayColorToArrayLinearColor" }, // 4165193302
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor, "ArrayLinearColorToArrayColor" }, // 58521192
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors, "BytesToColors" }, // 2254749556
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes, "ColorsToBytes" }, // 2221121140
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString, "ConvertBytesToString" }, // 694384623
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes, "ConvertStringToBytes" }, // 4174029631
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal, "DecimalToHexadecimal" }, // 2256596412
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine, "GetNewLine" }, // 3596693109
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal, "HexadecimalToDecimal" }, // 1374444098
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstapeToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEstapeToolsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::ClassParams = {
		&UEstapeToolsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstapeToolsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstapeToolsBPLibrary, 3840795797);
	template<> ESTAPETOOLS_API UClass* StaticClass<UEstapeToolsBPLibrary>()
	{
		return UEstapeToolsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstapeToolsBPLibrary(Z_Construct_UClass_UEstapeToolsBPLibrary, &UEstapeToolsBPLibrary::StaticClass, TEXT("/Script/EstapeTools"), TEXT("UEstapeToolsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstapeToolsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
