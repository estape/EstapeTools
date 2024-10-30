// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/PlatformDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformDevice() {}
// Cross Module References
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UPlatformDevice_NoRegister();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UPlatformDevice();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformDevice::execIsNintendoSwitch)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlatformDevice::IsNintendoSwitch(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformDevice::execIsIOS_Platform)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlatformDevice::IsIOS_Platform(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformDevice::execIsAndroidPlatform)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlatformDevice::IsAndroidPlatform(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformDevice::execIsLinuxPlatform)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlatformDevice::IsLinuxPlatform(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformDevice::execIsMacPlatform)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlatformDevice::IsMacPlatform(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformDevice::execIsWindowsPlatform)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlatformDevice::IsWindowsPlatform(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics
	{
		struct PlatformDevice_eventIsAndroidPlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformDevice_eventIsAndroidPlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformDevice_eventIsAndroidPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
		{ "Comment", "// Check if the current platform is Android Device, return true if it is.\n" },
		{ "KeyWords", "Get Platform Name Android" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
		{ "ToolTip", "Check if the current platform is Android Device, return true if it is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsAndroidPlatform", nullptr, nullptr, sizeof(PlatformDevice_eventIsAndroidPlatform_Parms), Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics
	{
		struct PlatformDevice_eventIsIOS_Platform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformDevice_eventIsIOS_Platform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformDevice_eventIsIOS_Platform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
		{ "Comment", "// Check if the current platform is iOS Device, return true if it is.\n" },
		{ "KeyWords", "Get Platform Name iOS" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
		{ "ToolTip", "Check if the current platform is iOS Device, return true if it is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsIOS_Platform", nullptr, nullptr, sizeof(PlatformDevice_eventIsIOS_Platform_Parms), Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics
	{
		struct PlatformDevice_eventIsLinuxPlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformDevice_eventIsLinuxPlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformDevice_eventIsLinuxPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
		{ "Comment", "// Check if the current platform is a Linux, return true if it is.\n" },
		{ "KeyWords", "Get Platform Name Linux" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
		{ "ToolTip", "Check if the current platform is a Linux, return true if it is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsLinuxPlatform", nullptr, nullptr, sizeof(PlatformDevice_eventIsLinuxPlatform_Parms), Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics
	{
		struct PlatformDevice_eventIsMacPlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformDevice_eventIsMacPlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformDevice_eventIsMacPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
		{ "Comment", "// Check if the current platform is a Mac, return true if it is.\n" },
		{ "KeyWords", "Get Platform Name Mac" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
		{ "ToolTip", "Check if the current platform is a Mac, return true if it is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsMacPlatform", nullptr, nullptr, sizeof(PlatformDevice_eventIsMacPlatform_Parms), Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformDevice_IsMacPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsMacPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics
	{
		struct PlatformDevice_eventIsNintendoSwitch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformDevice_eventIsNintendoSwitch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformDevice_eventIsNintendoSwitch_Parms), &Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
		{ "Comment", "// Check if the current platform is console Nintendo Switch, return true if it is.\n" },
		{ "KeyWords", "Get Platform Name Nintendo Switch" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
		{ "ToolTip", "Check if the current platform is console Nintendo Switch, return true if it is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsNintendoSwitch", nullptr, nullptr, sizeof(PlatformDevice_eventIsNintendoSwitch_Parms), Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics
	{
		struct PlatformDevice_eventIsWindowsPlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformDevice_eventIsWindowsPlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformDevice_eventIsWindowsPlatform_Parms), &Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms" },
		{ "Comment", "// Check if the current platform is a Windows, return true if it is.\n" },
		{ "KeyWords", "Get Platform Name Windows" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
		{ "ToolTip", "Check if the current platform is a Windows, return true if it is." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformDevice, nullptr, "IsWindowsPlatform", nullptr, nullptr, sizeof(PlatformDevice_eventIsWindowsPlatform_Parms), Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformDevice_NoRegister()
	{
		return UPlatformDevice::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformDevice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformDevice_IsAndroidPlatform, "IsAndroidPlatform" }, // 3845826423
		{ &Z_Construct_UFunction_UPlatformDevice_IsIOS_Platform, "IsIOS_Platform" }, // 399084339
		{ &Z_Construct_UFunction_UPlatformDevice_IsLinuxPlatform, "IsLinuxPlatform" }, // 2982274232
		{ &Z_Construct_UFunction_UPlatformDevice_IsMacPlatform, "IsMacPlatform" }, // 1984316109
		{ &Z_Construct_UFunction_UPlatformDevice_IsNintendoSwitch, "IsNintendoSwitch" }, // 2715446288
		{ &Z_Construct_UFunction_UPlatformDevice_IsWindowsPlatform, "IsWindowsPlatform" }, // 2844032301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformDevice_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlatformDevice.h" },
		{ "ModuleRelativePath", "Public/PlatformDevice.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformDevice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformDevice_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UPlatformDevice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformDevice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformDevice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformDevice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformDevice, 128297739);
	template<> ESTAPETOOLS_API UClass* StaticClass<UPlatformDevice>()
	{
		return UPlatformDevice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformDevice(Z_Construct_UClass_UPlatformDevice, &UPlatformDevice::StaticClass, TEXT("/Script/EstapeTools"), TEXT("UPlatformDevice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformDevice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
