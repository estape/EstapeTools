// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/WindowsClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UWindowsClass();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UWindowsClass_NoRegister();
	ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked();
	ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtons();
	ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogIcon();
	UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogButtonClicked;
	static UEnum* EDialogButtonClicked_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked, (UObject*)Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogButtonClicked"));
		}
		return Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton;
	}
	template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtonClicked>()
	{
		return EDialogButtonClicked_StaticEnum();
	}
	struct Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enumerators[] = {
		{ "EDialogButtonClicked::IDNONE", (int64)EDialogButtonClicked::IDNONE },
		{ "EDialogButtonClicked::IDOK", (int64)EDialogButtonClicked::IDOK },
		{ "EDialogButtonClicked::IDCANCEL", (int64)EDialogButtonClicked::IDCANCEL },
		{ "EDialogButtonClicked::IDABORT", (int64)EDialogButtonClicked::IDABORT },
		{ "EDialogButtonClicked::IDRETRY", (int64)EDialogButtonClicked::IDRETRY },
		{ "EDialogButtonClicked::IDIGNORE", (int64)EDialogButtonClicked::IDIGNORE },
		{ "EDialogButtonClicked::IDYES", (int64)EDialogButtonClicked::IDYES },
		{ "EDialogButtonClicked::IDNO", (int64)EDialogButtonClicked::IDNO },
		{ "EDialogButtonClicked::IDTRYAGAIN", (int64)EDialogButtonClicked::IDTRYAGAIN },
		{ "EDialogButtonClicked::IDCONTINUE", (int64)EDialogButtonClicked::IDCONTINUE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IDABORT.Comment", "/**\n * \n */" },
		{ "IDABORT.DisplayName", "Abort" },
		{ "IDABORT.Name", "EDialogButtonClicked::IDABORT" },
		{ "IDCANCEL.Comment", "/**\n * \n */" },
		{ "IDCANCEL.DisplayName", "Cancel" },
		{ "IDCANCEL.Name", "EDialogButtonClicked::IDCANCEL" },
		{ "IDCONTINUE.Comment", "/**\n * \n */" },
		{ "IDCONTINUE.DisplayName", "Continue" },
		{ "IDCONTINUE.Name", "EDialogButtonClicked::IDCONTINUE" },
		{ "IDIGNORE.Comment", "/**\n * \n */" },
		{ "IDIGNORE.DisplayName", "Ignore" },
		{ "IDIGNORE.Name", "EDialogButtonClicked::IDIGNORE" },
		{ "IDNO.Comment", "/**\n * \n */" },
		{ "IDNO.DisplayName", "No" },
		{ "IDNO.Name", "EDialogButtonClicked::IDNO" },
		{ "IDNONE.Comment", "/**\n * \n */" },
		{ "IDNONE.DisplayName", "None" },
		{ "IDNONE.Name", "EDialogButtonClicked::IDNONE" },
		{ "IDOK.Comment", "/**\n * \n */" },
		{ "IDOK.DisplayName", "OK" },
		{ "IDOK.Name", "EDialogButtonClicked::IDOK" },
		{ "IDRETRY.Comment", "/**\n * \n */" },
		{ "IDRETRY.DisplayName", "Retry" },
		{ "IDRETRY.Name", "EDialogButtonClicked::IDRETRY" },
		{ "IDTRYAGAIN.Comment", "/**\n * \n */" },
		{ "IDTRYAGAIN.DisplayName", "TryAgain" },
		{ "IDTRYAGAIN.Name", "EDialogButtonClicked::IDTRYAGAIN" },
		{ "IDYES.Comment", "/**\n * \n */" },
		{ "IDYES.DisplayName", "Yes" },
		{ "IDYES.Name", "EDialogButtonClicked::IDYES" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
		nullptr,
		"EDialogButtonClicked",
		"EDialogButtonClicked",
		Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked()
	{
		if (!Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton, Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton;
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
	DEFINE_FUNCTION(UWindowsClass::execIsBatteryCharging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWindowsClass::IsBatteryCharging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindowsClass::execGetBatteryLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UWindowsClass::GetBatteryLevel();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics
	{
		struct WindowsClass_eventGetBatteryLevel_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventGetBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
		{ "Comment", "// Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later.\n" },
		{ "Keywords", "Get Battery Windows" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
		{ "ToolTip", "Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "GetBatteryLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::WindowsClass_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics
	{
		struct WindowsClass_eventGetWindowsInfo_Parms
		{
			int32 BuildNumber;
			FString VersionName;
			int32 VersionServicePack;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VersionName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VersionServicePack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_BuildNumber = { "BuildNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, BuildNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, VersionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionServicePack = { "VersionServicePack", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, VersionServicePack), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsClass_eventGetWindowsInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WindowsClass_eventGetWindowsInfo_Parms), &Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_BuildNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionServicePack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms|Windows" },
		{ "Comment", "// This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000. \n" },
		{ "Keywords", "Windows info Build SP Service Pack Name Number" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
		{ "ToolTip", "This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "GetWindowsInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::WindowsClass_eventGetWindowsInfo_Parms), Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_GetWindowsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics
	{
		struct WindowsClass_eventIsBatteryCharging_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsClass_eventIsBatteryCharging_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WindowsClass_eventIsBatteryCharging_Parms), &Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
		{ "Comment", "// Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later.\n" },
		{ "Keywords", "Battery Windows Charging Level" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
		{ "ToolTip", "Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "IsBatteryCharging", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::WindowsClass_eventIsBatteryCharging_Parms), Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_IsBatteryCharging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buttons_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Buttons;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Icon_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage = { "DialogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, DialogMessage), METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, Buttons), Z_Construct_UEnum_EstapeTools_EDialogButtons, METADATA_PARAMS(nullptr, 0) }; // 1160980411
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, Icon), Z_Construct_UEnum_EstapeTools_EDialogIcon, METADATA_PARAMS(nullptr, 0) }; // 3854441321
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, ReturnValue), Z_Construct_UEnum_EstapeTools_EDialogButtonClicked, METADATA_PARAMS(nullptr, 0) }; // 3550911254
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "MessageBox_Windows", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::WindowsClass_eventMessageBox_Windows_Parms), Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_MessageBox_Windows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsClass);
	UClass* Z_Construct_UClass_UWindowsClass_NoRegister()
	{
		return UWindowsClass::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsClass_GetBatteryLevel, "GetBatteryLevel" }, // 1830142230
		{ &Z_Construct_UFunction_UWindowsClass_GetWindowsInfo, "GetWindowsInfo" }, // 1964737523
		{ &Z_Construct_UFunction_UWindowsClass_IsBatteryCharging, "IsBatteryCharging" }, // 4071436011
		{ &Z_Construct_UFunction_UWindowsClass_MessageBox_Windows, "MessageBox_Windows" }, // 4232956777
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WindowsClass.h" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsClass>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UWindowsClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsClass_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::EnumInfo[] = {
		{ EDialogButtonClicked_StaticEnum, TEXT("EDialogButtonClicked"), &Z_Registration_Info_UEnum_EDialogButtonClicked, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3550911254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsClass, UWindowsClass::StaticClass, TEXT("UWindowsClass"), &Z_Registration_Info_UClass_UWindowsClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsClass), 308884320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_310262970(TEXT("/Script/EstapeTools"),
		Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
