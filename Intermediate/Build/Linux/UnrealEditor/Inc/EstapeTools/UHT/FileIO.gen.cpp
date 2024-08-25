// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/FileIO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileIO() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UFileIO();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UFileIO_NoRegister();
UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References

// Begin Class UFileIO Function LoadTextArray
struct Z_Construct_UFunction_UFileIO_LoadTextArray_Statics
{
	struct FileIO_eventLoadTextArray_Parms
	{
		FString FileName;
		TArray<FString> StringContent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node is responsible for loading a text file. You can use it to load text or store string data, with each line representing a new array index.\n" },
#endif
		{ "Keywords", "Load Text File Array" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node is responsible for loading a text file. You can use it to load text or store string data, with each line representing a new array index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringContent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventLoadTextArray_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent_Inner = { "StringContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventLoadTextArray_Parms, StringContent), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileIO_eventLoadTextArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileIO_eventLoadTextArray_Parms), &Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_StringContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "LoadTextArray", nullptr, nullptr, Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FileIO_eventLoadTextArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FileIO_eventLoadTextArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileIO_LoadTextArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_LoadTextArray_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFileIO Function LoadTextArray

// Begin Class UFileIO Function LoadTextFile
struct Z_Construct_UFunction_UFileIO_LoadTextFile_Statics
{
	struct FileIO_eventLoadTextFile_Parms
	{
		FString FileName;
		FString StringContent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node is responsible for loading a text file, allowing you to load text or store it.\n" },
#endif
		{ "Keywords", "Load Text File" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node is responsible for loading a text file, allowing you to load text or store it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventLoadTextFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventLoadTextFile_Parms, StringContent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileIO_eventLoadTextFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileIO_eventLoadTextFile_Parms), &Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_StringContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "LoadTextFile", nullptr, nullptr, Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FileIO_eventLoadTextFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FileIO_eventLoadTextFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileIO_LoadTextFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_LoadTextFile_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFileIO Function LoadTextFile

// Begin Class UFileIO Function ReadBytesFile
struct Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics
{
	struct FileIO_eventReadBytesFile_Parms
	{
		FString FileName;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node is responsible for reading any file as a sequence of bytes. It can be used to load game data, even if the files were not created by you, as long as you understand how to work with them. It serves as a 'Load Game' resource, allowing players to load their progress and continue from where they left off.\n" },
#endif
		{ "Keywords", "Read file" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node is responsible for reading any file as a sequence of bytes. It can be used to load game data, even if the files were not created by you, as long as you understand how to work with them. It serves as a 'Load Game' resource, allowing players to load their progress and continue from where they left off." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventReadBytesFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventReadBytesFile_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileIO_eventReadBytesFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileIO_eventReadBytesFile_Parms), &Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "ReadBytesFile", nullptr, nullptr, Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FileIO_eventReadBytesFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FileIO_eventReadBytesFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileIO_ReadBytesFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_ReadBytesFile_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFileIO Function ReadBytesFile

// Begin Class UFileIO Function SaveTextArray
struct Z_Construct_UFunction_UFileIO_SaveTextArray_Statics
{
	struct FileIO_eventSaveTextArray_Parms
	{
		TArray<FString> StringContent;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node is responsible for creating a text file. With an array input, each index will correspond to a line in the text. It is an excellent choice for saving text or storing string data..\n" },
#endif
		{ "Keywords", "Save Text File Array" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node is responsible for creating a text file. With an array input, each index will correspond to a line in the text. It is an excellent choice for saving text or storing string data.." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringContent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent_Inner = { "StringContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventSaveTextArray_Parms, StringContent), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventSaveTextArray_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileIO_eventSaveTextArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileIO_eventSaveTextArray_Parms), &Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_StringContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "SaveTextArray", nullptr, nullptr, Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FileIO_eventSaveTextArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FileIO_eventSaveTextArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileIO_SaveTextArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_SaveTextArray_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFileIO Function SaveTextArray

// Begin Class UFileIO Function SaveTextFile
struct Z_Construct_UFunction_UFileIO_SaveTextFile_Statics
{
	struct FileIO_eventSaveTextFile_Parms
	{
		FString StringContent;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node is responsible for creating a text file, making it an excellent choice for saving text or storing string data.\n" },
#endif
		{ "Keywords", "Save Text File" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node is responsible for creating a text file, making it an excellent choice for saving text or storing string data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringContent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_StringContent = { "StringContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventSaveTextFile_Parms, StringContent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventSaveTextFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileIO_eventSaveTextFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileIO_eventSaveTextFile_Parms), &Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_StringContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "SaveTextFile", nullptr, nullptr, Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FileIO_eventSaveTextFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FileIO_eventSaveTextFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileIO_SaveTextFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_SaveTextFile_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFileIO Function SaveTextFile

// Begin Class UFileIO Function WriteBytesFile
struct Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics
{
	struct FileIO_eventWriteBytesFile_Parms
	{
		TArray<uint8> Data;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|FileI/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node is responsible for writing any file as a sequence of bytes. It can be used as a resource for saving game data, allowing players to save their progress and continue later.\n" },
#endif
		{ "Keywords", "Write file" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node is responsible for writing any file as a sequence of bytes. It can be used as a resource for saving game data, allowing players to save their progress and continue later." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventWriteBytesFile_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileIO_eventWriteBytesFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileIO_eventWriteBytesFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileIO_eventWriteBytesFile_Parms), &Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileIO, nullptr, "WriteBytesFile", nullptr, nullptr, Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FileIO_eventWriteBytesFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FileIO_eventWriteBytesFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileIO_WriteBytesFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileIO_WriteBytesFile_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UFileIO Function WriteBytesFile

// Begin Class UFileIO
void UFileIO::StaticRegisterNativesUFileIO()
{
	UClass* Class = UFileIO::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadTextArray", &UFileIO::execLoadTextArray },
		{ "LoadTextFile", &UFileIO::execLoadTextFile },
		{ "ReadBytesFile", &UFileIO::execReadBytesFile },
		{ "SaveTextArray", &UFileIO::execSaveTextArray },
		{ "SaveTextFile", &UFileIO::execSaveTextFile },
		{ "WriteBytesFile", &UFileIO::execWriteBytesFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileIO);
UClass* Z_Construct_UClass_UFileIO_NoRegister()
{
	return UFileIO::StaticClass();
}
struct Z_Construct_UClass_UFileIO_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FileIO.h" },
		{ "ModuleRelativePath", "Public/FileIO.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileIO_LoadTextArray, "LoadTextArray" }, // 371024825
		{ &Z_Construct_UFunction_UFileIO_LoadTextFile, "LoadTextFile" }, // 2462121004
		{ &Z_Construct_UFunction_UFileIO_ReadBytesFile, "ReadBytesFile" }, // 3461536444
		{ &Z_Construct_UFunction_UFileIO_SaveTextArray, "SaveTextArray" }, // 2890610372
		{ &Z_Construct_UFunction_UFileIO_SaveTextFile, "SaveTextFile" }, // 2405996364
		{ &Z_Construct_UFunction_UFileIO_WriteBytesFile, "WriteBytesFile" }, // 42103072
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileIO>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFileIO_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileIO_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileIO_Statics::Class_MetaDataParams)
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
// End Class UFileIO

// Begin Registration
struct Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileIO, UFileIO::StaticClass, TEXT("UFileIO"), &Z_Registration_Info_UClass_UFileIO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileIO), 3376831427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_2871543471(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
