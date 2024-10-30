// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/WindowsClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsClass() {}
// Cross Module References
	ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked();
	UPackage* Z_Construct_UPackage__Script_EstapeTools();
	ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogIcon();
	ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtons();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UWindowsClass_NoRegister();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UWindowsClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EDialogButtonClicked_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked, Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogButtonClicked"));
		}
		return Singleton;
	}
	template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtonClicked>()
	{
		return EDialogButtonClicked_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDialogButtonClicked(EDialogButtonClicked_StaticEnum, TEXT("/Script/EstapeTools"), TEXT("EDialogButtonClicked"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Hash() { return 2073728190U; }
	UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EstapeTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDialogButtonClicked"), 0, Get_Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IDABORT.DisplayName", "Abort" },
				{ "IDABORT.Name", "EDialogButtonClicked::IDABORT" },
				{ "IDCANCEL.DisplayName", "Cancel" },
				{ "IDCANCEL.Name", "EDialogButtonClicked::IDCANCEL" },
				{ "IDCONTINUE.DisplayName", "Continue" },
				{ "IDCONTINUE.Name", "EDialogButtonClicked::IDCONTINUE" },
				{ "IDIGNORE.DisplayName", "Ignore" },
				{ "IDIGNORE.Name", "EDialogButtonClicked::IDIGNORE" },
				{ "IDNO.DisplayName", "No" },
				{ "IDNO.Name", "EDialogButtonClicked::IDNO" },
				{ "IDNONE.DisplayName", "None" },
				{ "IDNONE.Name", "EDialogButtonClicked::IDNONE" },
				{ "IDOK.DisplayName", "OK" },
				{ "IDOK.Name", "EDialogButtonClicked::IDOK" },
				{ "IDRETRY.DisplayName", "Retry" },
				{ "IDRETRY.Name", "EDialogButtonClicked::IDRETRY" },
				{ "IDTRYAGAIN.DisplayName", "TryAgain" },
				{ "IDTRYAGAIN.Name", "EDialogButtonClicked::IDTRYAGAIN" },
				{ "IDYES.DisplayName", "Yes" },
				{ "IDYES.Name", "EDialogButtonClicked::IDYES" },
				{ "ModuleRelativePath", "Public/WindowsClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
				nullptr,
				"EDialogButtonClicked",
				"EDialogButtonClicked",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDialogIcon_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogIcon, Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogIcon"));
		}
		return Singleton;
	}
	template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogIcon>()
	{
		return EDialogIcon_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDialogIcon(EDialogIcon_StaticEnum, TEXT("/Script/EstapeTools"), TEXT("EDialogIcon"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EstapeTools_EDialogIcon_Hash() { return 493657079U; }
	UEnum* Z_Construct_UEnum_EstapeTools_EDialogIcon()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EstapeTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDialogIcon"), 0, Get_Z_Construct_UEnum_EstapeTools_EDialogIcon_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDialogIcon::MB_NONE", (int64)EDialogIcon::MB_NONE },
				{ "EDialogIcon::MB_ICONERROR", (int64)EDialogIcon::MB_ICONERROR },
				{ "EDialogIcon::MB_ICONWARNING", (int64)EDialogIcon::MB_ICONWARNING },
				{ "EDialogIcon::MB_ICONINFORMATION", (int64)EDialogIcon::MB_ICONINFORMATION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MB_ICONERROR.DisplayName", "Stop-sign icon" },
				{ "MB_ICONERROR.Name", "EDialogIcon::MB_ICONERROR" },
				{ "MB_ICONINFORMATION.DisplayName", "Information-point icon" },
				{ "MB_ICONINFORMATION.Name", "EDialogIcon::MB_ICONINFORMATION" },
				{ "MB_ICONWARNING.DisplayName", "Exclamation-point icon" },
				{ "MB_ICONWARNING.Name", "EDialogIcon::MB_ICONWARNING" },
				{ "MB_NONE.DisplayName", "No icon" },
				{ "MB_NONE.Name", "EDialogIcon::MB_NONE" },
				{ "ModuleRelativePath", "Public/WindowsClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
				nullptr,
				"EDialogIcon",
				"EDialogIcon",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDialogButtons_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogButtons, Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogButtons"));
		}
		return Singleton;
	}
	template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtons>()
	{
		return EDialogButtons_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDialogButtons(EDialogButtons_StaticEnum, TEXT("/Script/EstapeTools"), TEXT("EDialogButtons"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EstapeTools_EDialogButtons_Hash() { return 778583237U; }
	UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtons()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EstapeTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDialogButtons"), 0, Get_Z_Construct_UEnum_EstapeTools_EDialogButtons_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDialogButtons::MB_OK", (int64)EDialogButtons::MB_OK },
				{ "EDialogButtons::MB_OKCANCEL", (int64)EDialogButtons::MB_OKCANCEL },
				{ "EDialogButtons::MB_ABORTRETRYIGNORE", (int64)EDialogButtons::MB_ABORTRETRYIGNORE },
				{ "EDialogButtons::MB_YESNOCANCEL", (int64)EDialogButtons::MB_YESNOCANCEL },
				{ "EDialogButtons::MB_YESNO", (int64)EDialogButtons::MB_YESNO },
				{ "EDialogButtons::MB_RETRYCANCEL", (int64)EDialogButtons::MB_RETRYCANCEL },
				{ "EDialogButtons::MB_CANCELTRYCONTINUE", (int64)EDialogButtons::MB_CANCELTRYCONTINUE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "MB_ABORTRETRYIGNORE.Comment", "/**\n * \n */" },
				{ "MB_ABORTRETRYIGNORE.DisplayName", "Abort, Retry, and Ignore" },
				{ "MB_ABORTRETRYIGNORE.Name", "EDialogButtons::MB_ABORTRETRYIGNORE" },
				{ "MB_CANCELTRYCONTINUE.Comment", "/**\n * \n */" },
				{ "MB_CANCELTRYCONTINUE.DisplayName", "Cancel, Try Again, Continue" },
				{ "MB_CANCELTRYCONTINUE.Name", "EDialogButtons::MB_CANCELTRYCONTINUE" },
				{ "MB_OK.Comment", "/**\n * \n */" },
				{ "MB_OK.DisplayName", "OK" },
				{ "MB_OK.Name", "EDialogButtons::MB_OK" },
				{ "MB_OKCANCEL.Comment", "/**\n * \n */" },
				{ "MB_OKCANCEL.DisplayName", "OK, Cancel" },
				{ "MB_OKCANCEL.Name", "EDialogButtons::MB_OKCANCEL" },
				{ "MB_RETRYCANCEL.Comment", "/**\n * \n */" },
				{ "MB_RETRYCANCEL.DisplayName", "Retry, Cancel" },
				{ "MB_RETRYCANCEL.Name", "EDialogButtons::MB_RETRYCANCEL" },
				{ "MB_YESNO.Comment", "/**\n * \n */" },
				{ "MB_YESNO.DisplayName", "Yes, No" },
				{ "MB_YESNO.Name", "EDialogButtons::MB_YESNO" },
				{ "MB_YESNOCANCEL.Comment", "/**\n * \n */" },
				{ "MB_YESNOCANCEL.DisplayName", "Yes, No, Cancel" },
				{ "MB_YESNOCANCEL.Name", "EDialogButtons::MB_YESNOCANCEL" },
				{ "ModuleRelativePath", "Public/WindowsClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
				nullptr,
				"EDialogButtons",
				"EDialogButtons",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventGetBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
		{ "Comment", "// Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later.\n" },
		{ "Keywords", "Get Battery Windows" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
		{ "ToolTip", "Obtain the laptop battery percentage as a floating-point value. This feature is available only on Windows 10 or later." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "GetBatteryLevel", nullptr, nullptr, sizeof(WindowsClass_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsClass_GetBatteryLevel_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildNumber;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VersionServicePack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_BuildNumber = { "BuildNumber", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, BuildNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, VersionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionServicePack = { "VersionServicePack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventGetWindowsInfo_Parms, VersionServicePack), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsClass_eventGetWindowsInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsClass_eventGetWindowsInfo_Parms), &Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_BuildNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_VersionServicePack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Platforms|Windows" },
		{ "Comment", "// This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000. \n" },
		{ "Keywords", "Windows info Build SP Service Pack Name Number" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
		{ "ToolTip", "This node will obtain the edition of Windows that is running as the current operating system. It will be checked from Windows 11 or higher down to Windows 2000." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "GetWindowsInfo", nullptr, nullptr, sizeof(WindowsClass_eventGetWindowsInfo_Parms), Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_GetWindowsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsClass_GetWindowsInfo_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsClass_eventIsBatteryCharging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsClass_eventIsBatteryCharging_Parms), &Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows|Battery" },
		{ "Comment", "// Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later.\n" },
		{ "Keywords", "Battery Windows Charging Level" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
		{ "ToolTip", "Return a boolean value indicating whether the laptop battery is charging. This feature is available only on Windows 10 or later." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "IsBatteryCharging", nullptr, nullptr, sizeof(WindowsClass_eventIsBatteryCharging_Parms), Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_IsBatteryCharging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsClass_IsBatteryCharging_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buttons_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Buttons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Icon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage = { "DialogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, DialogMessage), METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, Buttons), Z_Construct_UEnum_EstapeTools_EDialogButtons, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, Icon), Z_Construct_UEnum_EstapeTools_EDialogIcon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsClass_eventMessageBox_Windows_Parms, ReturnValue), Z_Construct_UEnum_EstapeTools_EDialogButtonClicked, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_DialogMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Windows" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsClass, nullptr, "MessageBox_Windows", nullptr, nullptr, sizeof(WindowsClass_eventMessageBox_Windows_Parms), Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsClass_MessageBox_Windows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsClass_MessageBox_Windows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowsClass_NoRegister()
	{
		return UWindowsClass::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsClass_GetBatteryLevel, "GetBatteryLevel" }, // 11092365
		{ &Z_Construct_UFunction_UWindowsClass_GetWindowsInfo, "GetWindowsInfo" }, // 365088759
		{ &Z_Construct_UFunction_UWindowsClass_IsBatteryCharging, "IsBatteryCharging" }, // 3019971157
		{ &Z_Construct_UFunction_UWindowsClass_MessageBox_Windows, "MessageBox_Windows" }, // 568026309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WindowsClass.h" },
		{ "ModuleRelativePath", "Public/WindowsClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsClass_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsClass, 2834659538);
	template<> ESTAPETOOLS_API UClass* StaticClass<UWindowsClass>()
	{
		return UWindowsClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsClass(Z_Construct_UClass_UWindowsClass, &UWindowsClass::StaticClass, TEXT("/Script/EstapeTools"), TEXT("UWindowsClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
