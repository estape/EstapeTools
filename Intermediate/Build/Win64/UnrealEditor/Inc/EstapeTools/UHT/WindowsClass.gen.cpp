// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/WindowsClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UWindowsClass();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UWindowsClass_NoRegister();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtons();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogIcon();
UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References

// Begin Class UWindowsClass Function GetBatteryLevel
struct Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics
{
	struct WindowsClass_eventGetBatteryLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later.\n" },
#endif
		{ "Keywords", "Get Battery Windows" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventGetBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "GetBatteryLevel", nullptr, nullptr, Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::WindowsClass_eventGetBatteryLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::WindowsClass_eventGetBatteryLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsClass_GetBatteryLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsClass::execGetBatteryLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UWindowsClass::GetBatteryLevel();
	P_NATIVE_END;
}
// End Class UWindowsClass Function GetBatteryLevel

// Begin Class UWindowsClass Function GetWindowsInfo
struct Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics
{
	struct WindowsClass_eventGetWindowsInfo_Parms
	{
		int32 BuildNumber;
		FString VersionName;
		int32 VersionServicePack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms|Windows" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000. \n" },
#endif
		{ "Keywords", "Windows info Build SP Service Pack Name Number" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_BuildNumber = { "BuildNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, BuildNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, VersionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionServicePack = { "VersionServicePack", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, VersionServicePack), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsClass_eventGetWindowsInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsClass_eventGetWindowsInfo_Parms), &Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_BuildNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionServicePack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "GetWindowsInfo", nullptr, nullptr, Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::WindowsClass_eventGetWindowsInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::WindowsClass_eventGetWindowsInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsClass_GetWindowsInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsClass::execGetWindowsInfo)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildNumber);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_VersionName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_VersionServicePack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsClass::GetWindowsInfo(Z_Param_Out_BuildNumber,Z_Param_Out_VersionName,Z_Param_Out_VersionServicePack);
	P_NATIVE_END;
}
// End Class UWindowsClass Function GetWindowsInfo

// Begin Class UWindowsClass Function IsBatteryCharging
struct Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics
{
	struct WindowsClass_eventIsBatteryCharging_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later.\n" },
#endif
		{ "Keywords", "Battery Windows Charging Level" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
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
void Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsClass_eventIsBatteryCharging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsClass_eventIsBatteryCharging_Parms), &Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "IsBatteryCharging", nullptr, nullptr, Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::WindowsClass_eventIsBatteryCharging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::WindowsClass_eventIsBatteryCharging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsClass_IsBatteryCharging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsClass::execIsBatteryCharging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsClass::IsBatteryCharging();
	P_NATIVE_END;
}
// End Class UWindowsClass Function IsBatteryCharging

// Begin Class UWindowsClass Function MessageBox_Windows
struct Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics
{
	struct WindowsClass_eventMessageBox_Windows_Parms
	{
		FString DialogTitle;
		FString DialogMessage;
		EDialogButtons Buttons;
		EDialogIcon Icon;
		EDialogButtonClicked ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogMessage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buttons_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Buttons;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Icon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage = { "DialogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, DialogMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogMessage_MetaData), NewProp_DialogMessage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, Buttons), Z_Construct_UEnum_EstapeTools_EDialogButtons, METADATA_PARAMS(0, nullptr) }; // 3680733245
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, Icon), Z_Construct_UEnum_EstapeTools_EDialogIcon, METADATA_PARAMS(0, nullptr) }; // 593296904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, ReturnValue), Z_Construct_UEnum_EstapeTools_EDialogButtonClicked, METADATA_PARAMS(0, nullptr) }; // 1096604047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "MessageBox_Windows", nullptr, nullptr, Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::WindowsClass_eventMessageBox_Windows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::WindowsClass_eventMessageBox_Windows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsClass_MessageBox_Windows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsClass::execMessageBox_Windows)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogMessage);
	P_GET_ENUM(EDialogButtons,Z_Param_Buttons);
	P_GET_ENUM(EDialogIcon,Z_Param_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogButtonClicked*)Z_Param__Result=UWindowsClass::MessageBox_Windows(Z_Param_DialogTitle,Z_Param_DialogMessage,EDialogButtons(Z_Param_Buttons),EDialogIcon(Z_Param_Icon));
	P_NATIVE_END;
}
// End Class UWindowsClass Function MessageBox_Windows

// Begin Class UWindowsClass
void UWindowsClass::StaticRegisterNativesUWindowsClass()
{
	UClass* Class = UWindowsClass::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBatteryLevel", &UWindowsClass::execGetBatteryLevel },
		{ "GetWindowsInfo", &UWindowsClass::execGetWindowsInfo },
		{ "IsBatteryCharging", &UWindowsClass::execIsBatteryCharging },
		{ "MessageBox_Windows", &UWindowsClass::execMessageBox_Windows },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsClass);
UClass* Z_Construct_UClass_UWindowsClass_NoRegister()
{
	return UWindowsClass::StaticClass();
}
struct Z_Construct_UClass_UWindowsClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WindowsClass.h" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsClass_GetBatteryLevel, "GetBatteryLevel" }, // 2705378514
		{ &Z_Construct_UFunction_UWindowsClass_GetWindowsInfo, "GetWindowsInfo" }, // 2958933501
		{ &Z_Construct_UFunction_UWindowsClass_IsBatteryCharging, "IsBatteryCharging" }, // 1200759789
		{ &Z_Construct_UFunction_UWindowsClass_MessageBox_Windows, "MessageBox_Windows" }, // 481230770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWindowsClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsClass_Statics::ClassParams = {
	&UWindowsClass::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowsClass()
{
	if (!Z_Registration_Info_UClass_UWindowsClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsClass.OuterSingleton, Z_Construct_UClass_UWindowsClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowsClass.OuterSingleton;
}
template<> ESTAPETOOLS_API UClass* StaticClass<UWindowsClass>()
{
	return UWindowsClass::StaticClass();
}
UWindowsClass::UWindowsClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsClass);
UWindowsClass::~UWindowsClass() {}
// End Class UWindowsClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsClass, UWindowsClass::StaticClass, TEXT("UWindowsClass"), &Z_Registration_Info_UClass_UWindowsClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsClass), 764903779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_70131012(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
