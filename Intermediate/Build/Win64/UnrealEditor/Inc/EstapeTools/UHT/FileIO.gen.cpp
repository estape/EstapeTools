// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/FileIO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileIO() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UFileIO();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UFileIO_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References
	DEFINE_FUNCTION(UFileIO::execReadCLUTData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
		P_GET_PROPERTY(FIntProperty,Z_Param_LenData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UFileIO::ReadCLUTData(Z_Param_Out_RawData,Z_Param_LenData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execWriteCLUTData)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LenData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileIO::WriteCLUTData(Z_Param_Out_Colors,Z_Param_Out_LenData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execReadBytesFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::ReadBytesFile(Z_Param_FileName,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execWriteBytesFile)
	{
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::WriteBytesFile(Z_Param_Data,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execLoadTextArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::LoadTextArray(Z_Param_FileName,Z_Param_Out_StringContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execSaveTextArray)
	{
		P_GET_TARRAY(FString,Z_Param_StringContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::SaveTextArray(Z_Param_StringContent,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execSaveTextFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::SaveTextFile(Z_Param_StringContent,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileIO::execLoadTextFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StringContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileIO::LoadTextFile(Z_Param_FileName,Z_Param_Out_StringContent);
		P_NATIVE_END;
	}
	void UFileIO::StaticRegisterNativesUFileIO()
	{
		UClass* Class = UFileIO::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTextArray", &UFileIO::execLoadTextArray },
			{ "LoadTextFile", &UFileIO::execLoadTextFile },
			{ "ReadBytesFile", &UFileIO::execReadBytesFile },
			{ "ReadCLUTData", &UFileIO::execReadCLUTData },
			{ "SaveTextArray", &UFileIO::execSaveTextArray },
			{ "SaveTextFile", &UFileIO::execSaveTextFile },
			{ "WriteBytesFile", &UFileIO::execWriteBytesFile },
			{ "WriteCLUTData", &UFileIO::execWriteCLUTData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileIO_LoadTextArray_Statics
	{
		struct FileIO_eventLoadTextArray_Parms
		{
			FString FileName;
			TArray<FString> StringContent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringContent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventLoadTextArray_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent_Inner = { "StringContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventLoadTextArray_Parms, StringContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventLoadTextArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileIO_eventLoadTextArray_Parms), &Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|String" },
		{ "Comment", "// This node is responsible for loading a text file. You can use it to load text or store string data, with each line representing a new array index.\n" },
		{ "Keywords", "Load Text File Array" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "This node is responsible for loading a text file. You can use it to load text or store string data, with each line representing a new array index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "LoadTextArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FileIO_eventLoadTextArray_Parms), Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_LoadTextArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_LoadTextFile_Statics
	{
		struct FileIO_eventLoadTextFile_Parms
		{
			FString FileName;
			FString StringContent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventLoadTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventLoadTextFile_Parms, StringContent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventLoadTextFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileIO_eventLoadTextFile_Parms), &Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_StringContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|String" },
		{ "Comment", "// This node is responsible for loading a text file, allowing you to load text or store it.\n" },
		{ "Keywords", "Load Text File" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "This node is responsible for loading a text file, allowing you to load text or store it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "LoadTextFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FileIO_eventLoadTextFile_Parms), Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_LoadTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics
	{
		struct FileIO_eventReadBytesFile_Parms
		{
			FString FileName;
			TArray<uint8> Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventReadBytesFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventReadBytesFile_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventReadBytesFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileIO_eventReadBytesFile_Parms), &Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|Bytes" },
		{ "Comment", "// This node is responsible for reading any file as a sequence of bytes. It can be used to load game data, even if the files were not created by you, as long as you understand how to work with them. It serves as a 'Load Game' resource, allowing players to load their progress and continue from where they left off.\n" },
		{ "Keywords", "Read file" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "This node is responsible for reading any file as a sequence of bytes. It can be used to load game data, even if the files were not created by you, as long as you understand how to work with them. It serves as a 'Load Game' resource, allowing players to load their progress and continue from where they left off." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "ReadBytesFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FileIO_eventReadBytesFile_Parms), Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_ReadBytesFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics
	{
		struct FileIO_eventReadCLUTData_Parms
		{
			TArray<uint8> RawData;
			int32 LenData;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LenData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventReadCLUTData_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_LenData = { "LenData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventReadCLUTData_Parms, LenData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventReadCLUTData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_RawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_LenData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|CLUT" },
		{ "Comment", "// Read data generated by the 'Write CLUT Data' node or similar back to a linear color format\n" },
		{ "Keywords", "CLUT color" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "Read data generated by the 'Write CLUT Data' node or similar back to a linear color format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "ReadCLUTData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::FileIO_eventReadCLUTData_Parms), Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_ReadCLUTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_ReadCLUTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_SaveTextArray_Statics
	{
		struct FileIO_eventSaveTextArray_Parms
		{
			TArray<FString> StringContent;
			FString FileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent_Inner = { "StringContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventSaveTextArray_Parms, StringContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventSaveTextArray_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventSaveTextArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileIO_eventSaveTextArray_Parms), &Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|String" },
		{ "Comment", "// This node is responsible for creating a text file. With an array input, each index will correspond to a line in the text. It is an excellent choice for saving text or storing string data..\n" },
		{ "Keywords", "Save Text File Array" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "This node is responsible for creating a text file. With an array input, each index will correspond to a line in the text. It is an excellent choice for saving text or storing string data.." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "SaveTextArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FileIO_eventSaveTextArray_Parms), Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_SaveTextArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_SaveTextFile_Statics
	{
		struct FileIO_eventSaveTextFile_Parms
		{
			FString StringContent;
			FString FileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventSaveTextFile_Parms, StringContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventSaveTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventSaveTextFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileIO_eventSaveTextFile_Parms), &Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_StringContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|String" },
		{ "Comment", "// This node is responsible for creating a text file, making it an excellent choice for saving text or storing string data.\n" },
		{ "Keywords", "Save Text File" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "This node is responsible for creating a text file, making it an excellent choice for saving text or storing string data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "SaveTextFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FileIO_eventSaveTextFile_Parms), Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_SaveTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics
	{
		struct FileIO_eventWriteBytesFile_Parms
		{
			TArray<uint8> Data;
			FString FileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventWriteBytesFile_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventWriteBytesFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileIO_eventWriteBytesFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileIO_eventWriteBytesFile_Parms), &Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|Bytes" },
		{ "Comment", "// This node is responsible for writing any file as a sequence of bytes. It can be used as a resource for saving game data, allowing players to save their progress and continue later.\n" },
		{ "Keywords", "Write file" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "This node is responsible for writing any file as a sequence of bytes. It can be used as a resource for saving game data, allowing players to save their progress and continue later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "WriteBytesFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FileIO_eventWriteBytesFile_Parms), Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_WriteBytesFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics
	{
		struct FileIO_eventWriteCLUTData_Parms
		{
			TArray<FLinearColor> Colors;
			int32 LenData;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LenData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventWriteCLUTData_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_LenData = { "LenData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventWriteCLUTData_Parms, LenData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileIO_eventWriteCLUTData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_LenData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O|CLUT" },
		{ "Comment", "// Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert). WARNING: Compress a higher image quality may result in a loss of color information (banding).\n" },
		{ "Keywords", "CLUT color" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
		{ "ToolTip", "Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert). WARNING: Compress a higher image quality may result in a loss of color information (banding)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "WriteCLUTData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::FileIO_eventWriteCLUTData_Parms), Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileIO_WriteCLUTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_WriteCLUTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileIO);
	UClass* Z_Construct_UClass_UFileIO_NoRegister()
	{
		return UFileIO::StaticClass();
	}
	struct Z_Construct_UClass_UFileIO_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileIO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileIO_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileIO_LoadTextArray, "LoadTextArray" }, // 184307513
		{ &Z_Construct_UFunction_UFileIO_LoadTextFile, "LoadTextFile" }, // 2024615516
		{ &Z_Construct_UFunction_UFileIO_ReadBytesFile, "ReadBytesFile" }, // 733352423
		{ &Z_Construct_UFunction_UFileIO_ReadCLUTData, "ReadCLUTData" }, // 2169819702
		{ &Z_Construct_UFunction_UFileIO_SaveTextArray, "SaveTextArray" }, // 3171694575
		{ &Z_Construct_UFunction_UFileIO_SaveTextFile, "SaveTextFile" }, // 576642017
		{ &Z_Construct_UFunction_UFileIO_WriteBytesFile, "WriteBytesFile" }, // 2826850176
		{ &Z_Construct_UFunction_UFileIO_WriteCLUTData, "WriteCLUTData" }, // 1570932450
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FileIO.h" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileIO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileIO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileIO_Statics::ClassParams = {
		&UFileIO::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileIO()
	{
		if (!Z_Registration_Info_UClass_UFileIO.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileIO.OuterSingleton, Z_Construct_UClass_UFileIO_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileIO.OuterSingleton;
	}
	template<> ESTAPETOOLS_API UClass* StaticClass<UFileIO>()
	{
		return UFileIO::StaticClass();
	}
	UFileIO::UFileIO(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileIO);
	UFileIO::~UFileIO() {}
	struct Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileIO, UFileIO::StaticClass, TEXT("UFileIO"), &Z_Registration_Info_UClass_UFileIO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileIO), 1411459045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_4248450630(TEXT("/Script/EstapeTools"),
		Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
