// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/PlatformDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformDevice() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UPlatformDevice();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UPlatformDevice_NoRegister();
UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References

// Begin Class UPlatformDevice Function IsAndroidPlatform
struct Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics
{
	struct PlatformDevice_eventIsAndroidPlatform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current platform is Android Device, return true if it is.\n" },
#endif
		{ "KeyWords", "Get Platform Name Android" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current platform is Android Device, return true if it is." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformDevice_eventIsAndroidPlatform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformDevice_eventIsAndroidPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsAndroidPlatform", nullptr, nullptr, Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PlatformDevice_eventIsAndroidPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PlatformDevice_eventIsAndroidPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformDevice::execIsAndroidPlatform)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlatformDevice::IsAndroidPlatform(Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// End Class UPlatformDevice Function IsAndroidPlatform

// Begin Class UPlatformDevice Function IsIOS_Platform
struct Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics
{
	struct PlatformDevice_eventIsIOS_Platform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current platform is iOS Device, return true if it is.\n" },
#endif
		{ "KeyWords", "Get Platform Name iOS" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current platform is iOS Device, return true if it is." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformDevice_eventIsIOS_Platform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformDevice_eventIsIOS_Platform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsIOS_Platform", nullptr, nullptr, Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PlatformDevice_eventIsIOS_Platform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PlatformDevice_eventIsIOS_Platform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformDevice::execIsIOS_Platform)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlatformDevice::IsIOS_Platform(Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// End Class UPlatformDevice Function IsIOS_Platform

// Begin Class UPlatformDevice Function IsLinuxPlatform
struct Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics
{
	struct PlatformDevice_eventIsLinuxPlatform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current platform is a Linux, return true if it is.\n" },
#endif
		{ "KeyWords", "Get Platform Name Linux" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current platform is a Linux, return true if it is." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformDevice_eventIsLinuxPlatform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformDevice_eventIsLinuxPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsLinuxPlatform", nullptr, nullptr, Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PlatformDevice_eventIsLinuxPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PlatformDevice_eventIsLinuxPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformDevice::execIsLinuxPlatform)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlatformDevice::IsLinuxPlatform(Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// End Class UPlatformDevice Function IsLinuxPlatform

// Begin Class UPlatformDevice Function IsMacPlatform
struct Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics
{
	struct PlatformDevice_eventIsMacPlatform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current platform is a Mac, return true if it is.\n" },
#endif
		{ "KeyWords", "Get Platform Name Mac" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current platform is a Mac, return true if it is." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformDevice_eventIsMacPlatform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformDevice_eventIsMacPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsMacPlatform", nullptr, nullptr, Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PlatformDevice_eventIsMacPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PlatformDevice_eventIsMacPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformDevice_IsMacPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformDevice::execIsMacPlatform)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlatformDevice::IsMacPlatform(Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// End Class UPlatformDevice Function IsMacPlatform

// Begin Class UPlatformDevice Function IsNintendoSwitch
struct Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics
{
	struct PlatformDevice_eventIsNintendoSwitch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current platform is console Nintendo Switch, return true if it is.\n" },
#endif
		{ "KeyWords", "Get Platform Name Nintendo Switch" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current platform is console Nintendo Switch, return true if it is." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformDevice_eventIsNintendoSwitch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformDevice_eventIsNintendoSwitch_Parms), &Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsNintendoSwitch", nullptr, nullptr, Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PlatformDevice_eventIsNintendoSwitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PlatformDevice_eventIsNintendoSwitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformDevice::execIsNintendoSwitch)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlatformDevice::IsNintendoSwitch(Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// End Class UPlatformDevice Function IsNintendoSwitch

// Begin Class UPlatformDevice Function IsWindowsPlatform
struct Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics
{
	struct PlatformDevice_eventIsWindowsPlatform_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current platform is a Windows, return true if it is.\n" },
#endif
		{ "KeyWords", "Get Platform Name Windows" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current platform is a Windows, return true if it is." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlatformDevice_eventIsWindowsPlatform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformDevice_eventIsWindowsPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsWindowsPlatform", nullptr, nullptr, Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PlatformDevice_eventIsWindowsPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PlatformDevice_eventIsWindowsPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlatformDevice::execIsWindowsPlatform)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlatformDevice::IsWindowsPlatform(Z_Param_Out_ReturnValue);
	P_NATIVE_END;
}
// End Class UPlatformDevice Function IsWindowsPlatform

// Begin Class UPlatformDevice
void UPlatformDevice::StaticRegisterNativesUPlatformDevice()
{
	UClass* Class = UPlatformDevice::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAndroidPlatform", &UPlatformDevice::execIsAndroidPlatform },
		{ "IsIOS_Platform", &UPlatformDevice::execIsIOS_Platform },
		{ "IsLinuxPlatform", &UPlatformDevice::execIsLinuxPlatform },
		{ "IsMacPlatform", &UPlatformDevice::execIsMacPlatform },
		{ "IsNintendoSwitch", &UPlatformDevice::execIsNintendoSwitch },
		{ "IsWindowsPlatform", &UPlatformDevice::execIsWindowsPlatform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformDevice);
UClass* Z_Construct_UClass_UPlatformDevice_NoRegister()
{
	return UPlatformDevice::StaticClass();
}
struct Z_Construct_UClass_UPlatformDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformDevice.h" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform, "IsAndroidPlatform" }, // 2345800649
		{ &Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform, "IsIOS_Platform" }, // 681539958
		{ &Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform, "IsLinuxPlatform" }, // 2062303271
		{ &Z_Construct_UFunction_UPlatformDevice_IsMacPlatform, "IsMacPlatform" }, // 66942505
		{ &Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch, "IsNintendoSwitch" }, // 935926950
		{ &Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform, "IsWindowsPlatform" }, // 3712026492
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformDevice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlatformDevice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformDevice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformDevice_Statics::ClassParams = {
	&UPlatformDevice::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformDevice_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformDevice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlatformDevice()
{
	if (!Z_Registration_Info_UClass_UPlatformDevice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformDevice.OuterSingleton, Z_Construct_UClass_UPlatformDevice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlatformDevice.OuterSingleton;
}
template<> ESTAPETOOLS_API UClass* StaticClass<UPlatformDevice>()
{
	return UPlatformDevice::StaticClass();
}
UPlatformDevice::UPlatformDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformDevice);
UPlatformDevice::~UPlatformDevice() {}
// End Class UPlatformDevice

// Begin Registration
struct Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformDevice, UPlatformDevice::StaticClass, TEXT("UPlatformDevice"), &Z_Registration_Info_UClass_UPlatformDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformDevice), 3160627122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_2629899447(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
