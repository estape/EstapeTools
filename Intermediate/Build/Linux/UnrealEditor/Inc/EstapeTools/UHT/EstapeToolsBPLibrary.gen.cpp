// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/EstapeToolsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstapeToolsBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UEstapeToolsBPLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UEstapeToolsBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References

// Begin Class UEstapeToolsBPLibrary Function DecToHex
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics
{
	struct EstapeToolsBPLibrary_eventDecToHex_Parms
	{
		int32 Decimal;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a decimal value into an integer represented as a hexadecimal string.\n" },
#endif
		{ "Keywords", "Decimal Hexadecimal" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a decimal value into an integer represented as a hexadecimal string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Decimal;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_Decimal = { "Decimal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecToHex_Parms, Decimal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecToHex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_Decimal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "DecToHex", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::EstapeToolsBPLibrary_eventDecToHex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::EstapeToolsBPLibrary_eventDecToHex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execDecToHex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Decimal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::DecToHex(Z_Param_Decimal);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function DecToHex

// Begin Class UEstapeToolsBPLibrary Function GetBatteryLevel
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics
{
	struct EstapeToolsBPLibrary_eventGetBatteryLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later.\n" },
#endif
		{ "Keywords", "Battery Windows" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "GetBatteryLevel", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::EstapeToolsBPLibrary_eventGetBatteryLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::EstapeToolsBPLibrary_eventGetBatteryLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execGetBatteryLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UEstapeToolsBPLibrary::GetBatteryLevel();
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function GetBatteryLevel

// Begin Class UEstapeToolsBPLibrary Function GetNewLine
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics
{
	struct EstapeToolsBPLibrary_eventGetNewLine_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node inserts a new line by moving the remaining string value to the line below.\n" },
#endif
		{ "Keywords", "Get New Line" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node inserts a new line by moving the remaining string value to the line below." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetNewLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "GetNewLine", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::EstapeToolsBPLibrary_eventGetNewLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::EstapeToolsBPLibrary_eventGetNewLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execGetNewLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::GetNewLine();
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function GetNewLine

// Begin Class UEstapeToolsBPLibrary Function GetWindowsInfo
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics
{
	struct EstapeToolsBPLibrary_eventGetWindowsInfo_Parms
	{
		int32 BuildNumber;
		FString VersionName;
		int32 VersionServicePack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000. \n" },
#endif
		{ "Keywords", "Windows info" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VersionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionServicePack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_BuildNumber = { "BuildNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetWindowsInfo_Parms, BuildNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetWindowsInfo_Parms, VersionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_VersionServicePack = { "VersionServicePack", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetWindowsInfo_Parms, VersionServicePack), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeToolsBPLibrary_eventGetWindowsInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeToolsBPLibrary_eventGetWindowsInfo_Parms), &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_BuildNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_VersionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_VersionServicePack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "GetWindowsInfo", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::EstapeToolsBPLibrary_eventGetWindowsInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::EstapeToolsBPLibrary_eventGetWindowsInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execGetWindowsInfo)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildNumber);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_VersionName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_VersionServicePack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeToolsBPLibrary::GetWindowsInfo(Z_Param_Out_BuildNumber,Z_Param_Out_VersionName,Z_Param_Out_VersionServicePack);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function GetWindowsInfo

// Begin Class UEstapeToolsBPLibrary Function GetWindowsVersion
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics
{
	struct EstapeToolsBPLibrary_eventGetWindowsVersion_Parms
	{
		float Version;
		FString VersionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (DEPRECATED: Please use the new 'GetWindowsBuild' function) This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 10 or higher down to Windows XP.\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function will be removed in plugin version 1.0.4. Please use the new 'GetWindowsBuild' insted." },
		{ "Keywords", "Windows version" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(DEPRECATED: Please use the new 'GetWindowsBuild' function) This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 10 or higher down to Windows XP." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VersionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetWindowsVersion_Parms, Version), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetWindowsVersion_Parms, VersionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeToolsBPLibrary_eventGetWindowsVersion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeToolsBPLibrary_eventGetWindowsVersion_Parms), &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_VersionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "GetWindowsVersion", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::EstapeToolsBPLibrary_eventGetWindowsVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::EstapeToolsBPLibrary_eventGetWindowsVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execGetWindowsVersion)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Version);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_VersionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeToolsBPLibrary::GetWindowsVersion(Z_Param_Out_Version,Z_Param_Out_VersionName);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function GetWindowsVersion

// Begin Class UEstapeToolsBPLibrary Function HexToDec
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics
{
	struct EstapeToolsBPLibrary_eventHexToDec_Parms
	{
		FString HexString;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a hexadecimal string value into a decimal integer.\n" },
#endif
		{ "Keywords", "Hexadecimal Decimal" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a hexadecimal string value into a decimal integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexToDec_Parms, HexString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexString_MetaData), NewProp_HexString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexToDec_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_HexString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "HexToDec", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::EstapeToolsBPLibrary_eventHexToDec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::EstapeToolsBPLibrary_eventHexToDec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execHexToDec)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEstapeToolsBPLibrary::HexToDec(Z_Param_HexString);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function HexToDec

// Begin Class UEstapeToolsBPLibrary Function IsBatteryCharging
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics
{
	struct EstapeToolsBPLibrary_eventIsBatteryCharging_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later.\n" },
#endif
		{ "Keywords", "Battery Windows" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeToolsBPLibrary_eventIsBatteryCharging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeToolsBPLibrary_eventIsBatteryCharging_Parms), &Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "IsBatteryCharging", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::EstapeToolsBPLibrary_eventIsBatteryCharging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::EstapeToolsBPLibrary_eventIsBatteryCharging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execIsBatteryCharging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeToolsBPLibrary::IsBatteryCharging();
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function IsBatteryCharging

// Begin Class UEstapeToolsBPLibrary Function ReadCLUTData
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics
{
	struct EstapeToolsBPLibrary_eventReadCLUTData_Parms
	{
		TArray<uint8> RawData;
		int32 LenData;
		TArray<FLinearColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Read data generated by the 'Write CLUT Data' node or similar back to a linear color format\n" },
#endif
		{ "Keywords", "CLUT color" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read data generated by the 'Write CLUT Data' node or similar back to a linear color format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LenData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventReadCLUTData_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_LenData = { "LenData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventReadCLUTData_Parms, LenData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventReadCLUTData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_LenData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ReadCLUTData", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::EstapeToolsBPLibrary_eventReadCLUTData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::EstapeToolsBPLibrary_eventReadCLUTData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execReadCLUTData)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
	P_GET_PROPERTY(FIntProperty,Z_Param_LenData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FLinearColor>*)Z_Param__Result=UEstapeToolsBPLibrary::ReadCLUTData(Z_Param_Out_RawData,Z_Param_LenData);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ReadCLUTData

// Begin Class UEstapeToolsBPLibrary Function WriteCLUTData
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics
{
	struct EstapeToolsBPLibrary_eventWriteCLUTData_Parms
	{
		TArray<FLinearColor> Colors;
		int32 LenData;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert).\n" },
#endif
		{ "Keywords", "CLUT color" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LenData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventWriteCLUTData_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_LenData = { "LenData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventWriteCLUTData_Parms, LenData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventWriteCLUTData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_LenData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "WriteCLUTData", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::EstapeToolsBPLibrary_eventWriteCLUTData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::EstapeToolsBPLibrary_eventWriteCLUTData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execWriteCLUTData)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LenData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEstapeToolsBPLibrary::WriteCLUTData(Z_Param_Out_Colors,Z_Param_Out_LenData);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function WriteCLUTData

// Begin Class UEstapeToolsBPLibrary
void UEstapeToolsBPLibrary::StaticRegisterNativesUEstapeToolsBPLibrary()
{
	UClass* Class = UEstapeToolsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecToHex", &UEstapeToolsBPLibrary::execDecToHex },
		{ "GetBatteryLevel", &UEstapeToolsBPLibrary::execGetBatteryLevel },
		{ "GetNewLine", &UEstapeToolsBPLibrary::execGetNewLine },
		{ "GetWindowsInfo", &UEstapeToolsBPLibrary::execGetWindowsInfo },
		{ "GetWindowsVersion", &UEstapeToolsBPLibrary::execGetWindowsVersion },
		{ "HexToDec", &UEstapeToolsBPLibrary::execHexToDec },
		{ "IsBatteryCharging", &UEstapeToolsBPLibrary::execIsBatteryCharging },
		{ "ReadCLUTData", &UEstapeToolsBPLibrary::execReadCLUTData },
		{ "WriteCLUTData", &UEstapeToolsBPLibrary::execWriteCLUTData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEstapeToolsBPLibrary);
UClass* Z_Construct_UClass_UEstapeToolsBPLibrary_NoRegister()
{
	return UEstapeToolsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UEstapeToolsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstapeToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex, "DecToHex" }, // 812159379
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetBatteryLevel, "GetBatteryLevel" }, // 1688708415
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine, "GetNewLine" }, // 2362747976
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsInfo, "GetWindowsInfo" }, // 4286170945
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetWindowsVersion, "GetWindowsVersion" }, // 557665878
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec, "HexToDec" }, // 4245788583
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_IsBatteryCharging, "IsBatteryCharging" }, // 1365262413
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData, "ReadCLUTData" }, // 3094371412
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData, "WriteCLUTData" }, // 1677153748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEstapeToolsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEstapeToolsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UEstapeToolsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEstapeToolsBPLibrary.OuterSingleton, Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEstapeToolsBPLibrary.OuterSingleton;
}
template<> ESTAPETOOLS_API UClass* StaticClass<UEstapeToolsBPLibrary>()
{
	return UEstapeToolsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEstapeToolsBPLibrary);
UEstapeToolsBPLibrary::~UEstapeToolsBPLibrary() {}
// End Class UEstapeToolsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEstapeToolsBPLibrary, UEstapeToolsBPLibrary::StaticClass, TEXT("UEstapeToolsBPLibrary"), &Z_Registration_Info_UClass_UEstapeToolsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEstapeToolsBPLibrary), 1594383334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_4265410091(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
