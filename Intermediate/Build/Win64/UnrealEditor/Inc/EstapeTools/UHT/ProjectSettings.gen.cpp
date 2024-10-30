// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/ProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UProjectSettings();
	ESTAPETOOLS_API UClass* Z_Construct_UClass_UProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References
	DEFINE_FUNCTION(UProjectSettings::execGetEngineVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetEngineVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetAllowMinimize)
	{
		P_GET_UBOOL(Z_Param_AllowMinimize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetAllowMinimize(Z_Param_AllowMinimize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetAllowMaximize)
	{
		P_GET_UBOOL(Z_Param_AllowMaximize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetAllowMaximize(Z_Param_AllowMaximize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetAllowClose)
	{
		P_GET_UBOOL(Z_Param_AllowClose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetAllowClose(Z_Param_AllowClose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetAllowWindowResize)
	{
		P_GET_UBOOL(Z_Param_AllowWindowResize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetAllowWindowResize(Z_Param_AllowWindowResize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetStartVR)
	{
		P_GET_UBOOL(Z_Param_StartVR);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetStartVR(Z_Param_StartVR);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetBorderlessWindow)
	{
		P_GET_UBOOL(Z_Param_BorderlessWindow);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetBorderlessWindow(Z_Param_BorderlessWindow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetWindowPreserveAspectRatio)
	{
		P_GET_UBOOL(Z_Param_WindowPreserveAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetWindowPreserveAspectRatio(Z_Param_WindowPreserveAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetProjectDebugTitleInfo)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ProjectDebugTitleInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetProjectDebugTitleInfo(Z_Param_Out_ProjectDebugTitleInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetProjectDisplayedTitle)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ProjectDisplayedTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetProjectDisplayedTitle(Z_Param_Out_ProjectDisplayedTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetPrivacyPolicy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrivacyPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetPrivacyPolicy(Z_Param_PrivacyPolicy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetLicensingTerms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LicensingTerms);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetLicensingTerms(Z_Param_LicensingTerms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetCopyrightNotice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CopyrightNotice);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetCopyrightNotice(Z_Param_CopyrightNotice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetSupportContact)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SupportContact);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetSupportContact(Z_Param_SupportContact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetHomePage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HomePage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetHomePage(Z_Param_HomePage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetCompanyDistinguishedName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CompanyDistinguishedName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetCompanyDistinguishedName(Z_Param_CompanyDistinguishedName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetCompanyName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CompanyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetCompanyName(Z_Param_CompanyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetProjectVersion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetProjectVersion(Z_Param_ProjectVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetProjectName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetProjectName(Z_Param_ProjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetProjectID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ProjectID);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetProjectID(Z_Param_Out_ProjectID,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execSetProjectDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProjectSettings::SetProjectDescription(Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetAllowMinimize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetAllowMinimize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetAllowMaximize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetAllowMaximize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetAllowClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetAllowClose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetAllowWindowResize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetAllowWindowResize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetStartVR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetStartVR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetBorderlessWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetBorderlessWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetWindowPreserveAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UProjectSettings::GetWindowPreserveAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetProjectDebugTitleInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UProjectSettings::GetProjectDebugTitleInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetProjectDisplayedTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UProjectSettings::GetProjectDisplayedTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetPrivacyPolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetPrivacyPolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetLicensingTerms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetLicensingTerms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetCopyrightNotice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetCopyrightNotice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetSupportContact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetSupportContact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetHomePage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetHomePage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetCompanyDistinguishedName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetCompanyDistinguishedName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetCompanyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetCompanyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetProjectVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetProjectName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetProjectName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetProjectID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UProjectSettings::GetProjectID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectSettings::execGetProjectDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectSettings::GetProjectDescription();
		P_NATIVE_END;
	}
	void UProjectSettings::StaticRegisterNativesUProjectSettings()
	{
		UClass* Class = UProjectSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllowClose", &UProjectSettings::execGetAllowClose },
			{ "GetAllowMaximize", &UProjectSettings::execGetAllowMaximize },
			{ "GetAllowMinimize", &UProjectSettings::execGetAllowMinimize },
			{ "GetAllowWindowResize", &UProjectSettings::execGetAllowWindowResize },
			{ "GetBorderlessWindow", &UProjectSettings::execGetBorderlessWindow },
			{ "GetCompanyDistinguishedName", &UProjectSettings::execGetCompanyDistinguishedName },
			{ "GetCompanyName", &UProjectSettings::execGetCompanyName },
			{ "GetCopyrightNotice", &UProjectSettings::execGetCopyrightNotice },
			{ "GetEngineVersion", &UProjectSettings::execGetEngineVersion },
			{ "GetHomePage", &UProjectSettings::execGetHomePage },
			{ "GetLicensingTerms", &UProjectSettings::execGetLicensingTerms },
			{ "GetPrivacyPolicy", &UProjectSettings::execGetPrivacyPolicy },
			{ "GetProjectDebugTitleInfo", &UProjectSettings::execGetProjectDebugTitleInfo },
			{ "GetProjectDescription", &UProjectSettings::execGetProjectDescription },
			{ "GetProjectDisplayedTitle", &UProjectSettings::execGetProjectDisplayedTitle },
			{ "GetProjectID", &UProjectSettings::execGetProjectID },
			{ "GetProjectName", &UProjectSettings::execGetProjectName },
			{ "GetProjectVersion", &UProjectSettings::execGetProjectVersion },
			{ "GetStartVR", &UProjectSettings::execGetStartVR },
			{ "GetSupportContact", &UProjectSettings::execGetSupportContact },
			{ "GetWindowPreserveAspectRatio", &UProjectSettings::execGetWindowPreserveAspectRatio },
			{ "SetAllowClose", &UProjectSettings::execSetAllowClose },
			{ "SetAllowMaximize", &UProjectSettings::execSetAllowMaximize },
			{ "SetAllowMinimize", &UProjectSettings::execSetAllowMinimize },
			{ "SetAllowWindowResize", &UProjectSettings::execSetAllowWindowResize },
			{ "SetBorderlessWindow", &UProjectSettings::execSetBorderlessWindow },
			{ "SetCompanyDistinguishedName", &UProjectSettings::execSetCompanyDistinguishedName },
			{ "SetCompanyName", &UProjectSettings::execSetCompanyName },
			{ "SetCopyrightNotice", &UProjectSettings::execSetCopyrightNotice },
			{ "SetHomePage", &UProjectSettings::execSetHomePage },
			{ "SetLicensingTerms", &UProjectSettings::execSetLicensingTerms },
			{ "SetPrivacyPolicy", &UProjectSettings::execSetPrivacyPolicy },
			{ "SetProjectDebugTitleInfo", &UProjectSettings::execSetProjectDebugTitleInfo },
			{ "SetProjectDescription", &UProjectSettings::execSetProjectDescription },
			{ "SetProjectDisplayedTitle", &UProjectSettings::execSetProjectDisplayedTitle },
			{ "SetProjectID", &UProjectSettings::execSetProjectID },
			{ "SetProjectName", &UProjectSettings::execSetProjectName },
			{ "SetProjectVersion", &UProjectSettings::execSetProjectVersion },
			{ "SetStartVR", &UProjectSettings::execSetStartVR },
			{ "SetSupportContact", &UProjectSettings::execSetSupportContact },
			{ "SetWindowPreserveAspectRatio", &UProjectSettings::execSetWindowPreserveAspectRatio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics
	{
		struct ProjectSettings_eventGetAllowClose_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetAllowClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetAllowClose_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Allow Close bool from Project Description.\n" },
		{ "Keywords", "Project Allow Close Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Allow Close bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::ProjectSettings_eventGetAllowClose_Parms), Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics
	{
		struct ProjectSettings_eventGetAllowMaximize_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetAllowMaximize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetAllowMaximize_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Allow Maximize bool from Project Description.\n" },
		{ "Keywords", "Project Allow Maximize Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Allow Maximize bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowMaximize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::ProjectSettings_eventGetAllowMaximize_Parms), Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowMaximize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics
	{
		struct ProjectSettings_eventGetAllowMinimize_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetAllowMinimize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetAllowMinimize_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Allow Minimize bool from Project Description.\n" },
		{ "Keywords", "Project Allow Minimize Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Allow Minimize bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowMinimize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::ProjectSettings_eventGetAllowMinimize_Parms), Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowMinimize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics
	{
		struct ProjectSettings_eventGetAllowWindowResize_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetAllowWindowResize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetAllowWindowResize_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Allow Window Resize bool from Project Description.\n" },
		{ "Keywords", "Project Allow Window Resize Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Allow Window Resize bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowWindowResize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::ProjectSettings_eventGetAllowWindowResize_Parms), Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics
	{
		struct ProjectSettings_eventGetBorderlessWindow_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetBorderlessWindow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetBorderlessWindow_Parms), &Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Borderless Window bool from Project Description.\n" },
		{ "Keywords", "Project Borderless Window Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Borderless Window bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetBorderlessWindow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::ProjectSettings_eventGetBorderlessWindow_Parms), Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics
	{
		struct ProjectSettings_eventGetCompanyDistinguishedName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetCompanyDistinguishedName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Company Distinguished Name string from Project Description.\n" },
		{ "Keywords", "Project Company Distinguished Name Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Company Distinguished Name string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetCompanyDistinguishedName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::ProjectSettings_eventGetCompanyDistinguishedName_Parms), Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics
	{
		struct ProjectSettings_eventGetCompanyName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetCompanyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Company Name string from Project Description.\n" },
		{ "Keywords", "Project Company Name Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Company Name string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetCompanyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::ProjectSettings_eventGetCompanyName_Parms), Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetCompanyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics
	{
		struct ProjectSettings_eventGetCopyrightNotice_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetCopyrightNotice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Copyright Notice string from Project Description.\n" },
		{ "Keywords", "Project Copyright Notice Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Copyright Notice string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetCopyrightNotice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::ProjectSettings_eventGetCopyrightNotice_Parms), Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics
	{
		struct ProjectSettings_eventGetEngineVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetEngineVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Unreal Engine Version in string value.\n" },
		{ "Keywords", "Get Engine Version" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Unreal Engine Version in string value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetEngineVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::ProjectSettings_eventGetEngineVersion_Parms), Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetEngineVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetEngineVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics
	{
		struct ProjectSettings_eventGetHomePage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetHomePage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Home Page string from Project Description.\n" },
		{ "Keywords", "Project Home Page Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Home Page string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetHomePage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::ProjectSettings_eventGetHomePage_Parms), Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetHomePage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics
	{
		struct ProjectSettings_eventGetLicensingTerms_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetLicensingTerms_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Licensing Terms string from Project Description.\n" },
		{ "Keywords", "Project Licensing Terms Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Licensing Terms string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetLicensingTerms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::ProjectSettings_eventGetLicensingTerms_Parms), Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetLicensingTerms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics
	{
		struct ProjectSettings_eventGetPrivacyPolicy_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetPrivacyPolicy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Privacy Policy string from Project Description.\n" },
		{ "Keywords", "Project Privacy Policy Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Privacy Policy string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetPrivacyPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::ProjectSettings_eventGetPrivacyPolicy_Parms), Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics
	{
		struct ProjectSettings_eventGetProjectDebugTitleInfo_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetProjectDebugTitleInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Project Debug Title Info string from Project Description.\n" },
		{ "Keywords", "Project Debug Title Info Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Project Debug Title Info string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectDebugTitleInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::ProjectSettings_eventGetProjectDebugTitleInfo_Parms), Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics
	{
		struct ProjectSettings_eventGetProjectDescription_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetProjectDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Description string from Project Description.\n" },
		{ "Keywords", "Project Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Description string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::ProjectSettings_eventGetProjectDescription_Parms), Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics
	{
		struct ProjectSettings_eventGetProjectDisplayedTitle_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetProjectDisplayedTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Project Debug Displayed string from Project Description.\n" },
		{ "Keywords", "Project Displayed Title Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Project Debug Displayed string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectDisplayedTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::ProjectSettings_eventGetProjectDisplayedTitle_Parms), Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics
	{
		struct ProjectSettings_eventGetProjectID_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetProjectID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Project ID GUID value from Project Description.\n" },
		{ "Keywords", "Project ID GUID Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Project ID GUID value from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::ProjectSettings_eventGetProjectID_Parms), Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics
	{
		struct ProjectSettings_eventGetProjectName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Name Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::ProjectSettings_eventGetProjectName_Parms), Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics
	{
		struct ProjectSettings_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Project Version string from Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Project Version string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::ProjectSettings_eventGetProjectVersion_Parms), Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics
	{
		struct ProjectSettings_eventGetStartVR_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetStartVR_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetStartVR_Parms), &Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Start in VR bool from Project Description.\n" },
		{ "Keywords", "Project VR Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Start in VR bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetStartVR", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::ProjectSettings_eventGetStartVR_Parms), Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetStartVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics
	{
		struct ProjectSettings_eventGetSupportContact_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventGetSupportContact_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Support Contact string from Project Description.\n" },
		{ "Keywords", "Project Support Contact Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Support Contact string from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetSupportContact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::ProjectSettings_eventGetSupportContact_Parms), Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetSupportContact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics
	{
		struct ProjectSettings_eventGetWindowPreserveAspectRatio_Parms
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
	void Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProjectSettings_eventGetWindowPreserveAspectRatio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventGetWindowPreserveAspectRatio_Parms), &Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Return Window Preserve Aspect Radio bool from Project Description.\n" },
		{ "Keywords", "Project Window Preserve Aspect Ratio Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Return Window Preserve Aspect Radio bool from Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetWindowPreserveAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::ProjectSettings_eventGetWindowPreserveAspectRatio_Parms), Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics
	{
		struct ProjectSettings_eventSetAllowClose_Parms
		{
			bool AllowClose;
		};
		static void NewProp_AllowClose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowClose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetAllowClose_Parms*)Obj)->AllowClose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose = { "AllowClose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetAllowClose_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Allow Close bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Allow Close bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::ProjectSettings_eventSetAllowClose_Parms), Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics
	{
		struct ProjectSettings_eventSetAllowMaximize_Parms
		{
			bool AllowMaximize;
		};
		static void NewProp_AllowMaximize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMaximize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetAllowMaximize_Parms*)Obj)->AllowMaximize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize = { "AllowMaximize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetAllowMaximize_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Allow Maximize bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Allow Maximize bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowMaximize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::ProjectSettings_eventSetAllowMaximize_Parms), Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowMaximize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics
	{
		struct ProjectSettings_eventSetAllowMinimize_Parms
		{
			bool AllowMinimize;
		};
		static void NewProp_AllowMinimize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMinimize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetAllowMinimize_Parms*)Obj)->AllowMinimize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize = { "AllowMinimize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetAllowMinimize_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Allow Minimize bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Allow Minimize bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowMinimize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::ProjectSettings_eventSetAllowMinimize_Parms), Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowMinimize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics
	{
		struct ProjectSettings_eventSetAllowWindowResize_Parms
		{
			bool AllowWindowResize;
		};
		static void NewProp_AllowWindowResize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowWindowResize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetAllowWindowResize_Parms*)Obj)->AllowWindowResize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize = { "AllowWindowResize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetAllowWindowResize_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Allow Window Resize bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Allow Window Resize bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowWindowResize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::ProjectSettings_eventSetAllowWindowResize_Parms), Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics
	{
		struct ProjectSettings_eventSetBorderlessWindow_Parms
		{
			bool BorderlessWindow;
		};
		static void NewProp_BorderlessWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BorderlessWindow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetBorderlessWindow_Parms*)Obj)->BorderlessWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow = { "BorderlessWindow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetBorderlessWindow_Parms), &Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Borderless Window bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Borderless Window bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetBorderlessWindow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::ProjectSettings_eventSetBorderlessWindow_Parms), Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics
	{
		struct ProjectSettings_eventSetCompanyDistinguishedName_Parms
		{
			FString CompanyDistinguishedName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompanyDistinguishedName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyDistinguishedName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName = { "CompanyDistinguishedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetCompanyDistinguishedName_Parms, CompanyDistinguishedName), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Company Distinguished Name string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Company Distinguished Name string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetCompanyDistinguishedName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::ProjectSettings_eventSetCompanyDistinguishedName_Parms), Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics
	{
		struct ProjectSettings_eventSetCompanyName_Parms
		{
			FString CompanyName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetCompanyName_Parms, CompanyName), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Company Name string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Company Name string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetCompanyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::ProjectSettings_eventSetCompanyName_Parms), Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetCompanyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics
	{
		struct ProjectSettings_eventSetCopyrightNotice_Parms
		{
			FString CopyrightNotice;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyrightNotice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CopyrightNotice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice = { "CopyrightNotice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetCopyrightNotice_Parms, CopyrightNotice), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Copyright Notice string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Copyright Notice string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetCopyrightNotice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::ProjectSettings_eventSetCopyrightNotice_Parms), Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics
	{
		struct ProjectSettings_eventSetHomePage_Parms
		{
			FString HomePage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomePage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HomePage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage = { "HomePage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetHomePage_Parms, HomePage), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Home Page string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Home Page string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetHomePage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::ProjectSettings_eventSetHomePage_Parms), Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetHomePage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics
	{
		struct ProjectSettings_eventSetLicensingTerms_Parms
		{
			FString LicensingTerms;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LicensingTerms_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LicensingTerms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms = { "LicensingTerms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetLicensingTerms_Parms, LicensingTerms), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Licensing Terms string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Licensing Terms string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetLicensingTerms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::ProjectSettings_eventSetLicensingTerms_Parms), Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetLicensingTerms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics
	{
		struct ProjectSettings_eventSetPrivacyPolicy_Parms
		{
			FString PrivacyPolicy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrivacyPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy = { "PrivacyPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetPrivacyPolicy_Parms, PrivacyPolicy), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Privacy Policy string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Privacy Policy string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetPrivacyPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::ProjectSettings_eventSetPrivacyPolicy_Parms), Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics
	{
		struct ProjectSettings_eventSetProjectDebugTitleInfo_Parms
		{
			FText ProjectDebugTitleInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDebugTitleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ProjectDebugTitleInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo = { "ProjectDebugTitleInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetProjectDebugTitleInfo_Parms, ProjectDebugTitleInfo), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Project Debug Title Info string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Project Debug Title Info string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectDebugTitleInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::ProjectSettings_eventSetProjectDebugTitleInfo_Parms), Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics
	{
		struct ProjectSettings_eventSetProjectDescription_Parms
		{
			FString Description;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetProjectDescription_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Description string in Project Description.\n" },
		{ "Keywords", "Project Project Description Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Description string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::ProjectSettings_eventSetProjectDescription_Parms), Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics
	{
		struct ProjectSettings_eventSetProjectDisplayedTitle_Parms
		{
			FText ProjectDisplayedTitle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDisplayedTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ProjectDisplayedTitle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle = { "ProjectDisplayedTitle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetProjectDisplayedTitle_Parms, ProjectDisplayedTitle), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Project Debug Displayed string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Project Debug Displayed string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectDisplayedTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::ProjectSettings_eventSetProjectDisplayedTitle_Parms), Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics
	{
		struct ProjectSettings_eventSetProjectID_Parms
		{
			FGuid ProjectID;
			bool IsValid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectID;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID = { "ProjectID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetProjectID_Parms, ProjectID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID_MetaData)) };
	void Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetProjectID_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetProjectID_Parms), &Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Project ID GUID value in Project Description and return GUID generated in string.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Project ID GUID value in Project Description and return GUID generated in string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::ProjectSettings_eventSetProjectID_Parms), Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics
	{
		struct ProjectSettings_eventSetProjectName_Parms
		{
			FString ProjectName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetProjectName_Parms, ProjectName), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Project Name string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Project Name string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::ProjectSettings_eventSetProjectName_Parms), Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics
	{
		struct ProjectSettings_eventSetProjectVersion_Parms
		{
			FString ProjectVersion;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion = { "ProjectVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetProjectVersion_Parms, ProjectVersion), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Project Version string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Project Version string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::ProjectSettings_eventSetProjectVersion_Parms), Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics
	{
		struct ProjectSettings_eventSetStartVR_Parms
		{
			bool StartVR;
		};
		static void NewProp_StartVR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartVR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetStartVR_Parms*)Obj)->StartVR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR = { "StartVR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetStartVR_Parms), &Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Start VR bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Start VR bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetStartVR", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::ProjectSettings_eventSetStartVR_Parms), Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetStartVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics
	{
		struct ProjectSettings_eventSetSupportContact_Parms
		{
			FString SupportContact;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportContact_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SupportContact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact = { "SupportContact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProjectSettings_eventSetSupportContact_Parms, SupportContact), METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Support Contact string in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Support Contact string in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetSupportContact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::ProjectSettings_eventSetSupportContact_Parms), Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetSupportContact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics
	{
		struct ProjectSettings_eventSetWindowPreserveAspectRatio_Parms
		{
			bool WindowPreserveAspectRatio;
		};
		static void NewProp_WindowPreserveAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WindowPreserveAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio_SetBit(void* Obj)
	{
		((ProjectSettings_eventSetWindowPreserveAspectRatio_Parms*)Obj)->WindowPreserveAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio = { "WindowPreserveAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProjectSettings_eventSetWindowPreserveAspectRatio_Parms), &Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Comment", "// Set Window Preserve Aspect Radio bool in Project Description.\n" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
		{ "ToolTip", "Set Window Preserve Aspect Radio bool in Project Description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetWindowPreserveAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::ProjectSettings_eventSetWindowPreserveAspectRatio_Parms), Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectSettings);
	UClass* Z_Construct_UClass_UProjectSettings_NoRegister()
	{
		return UProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowClose, "GetAllowClose" }, // 802827508
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowMaximize, "GetAllowMaximize" }, // 1008788837
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowMinimize, "GetAllowMinimize" }, // 2700225795
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize, "GetAllowWindowResize" }, // 1354833521
		{ &Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow, "GetBorderlessWindow" }, // 2631052277
		{ &Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName, "GetCompanyDistinguishedName" }, // 790780322
		{ &Z_Construct_UFunction_UProjectSettings_GetCompanyName, "GetCompanyName" }, // 2864088011
		{ &Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice, "GetCopyrightNotice" }, // 1348420842
		{ &Z_Construct_UFunction_UProjectSettings_GetEngineVersion, "GetEngineVersion" }, // 3533884828
		{ &Z_Construct_UFunction_UProjectSettings_GetHomePage, "GetHomePage" }, // 1574413115
		{ &Z_Construct_UFunction_UProjectSettings_GetLicensingTerms, "GetLicensingTerms" }, // 3865851669
		{ &Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy, "GetPrivacyPolicy" }, // 1055709322
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo, "GetProjectDebugTitleInfo" }, // 4169722582
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectDescription, "GetProjectDescription" }, // 665817355
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle, "GetProjectDisplayedTitle" }, // 3640874766
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectID, "GetProjectID" }, // 788456971
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectName, "GetProjectName" }, // 4240686842
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectVersion, "GetProjectVersion" }, // 2356678893
		{ &Z_Construct_UFunction_UProjectSettings_GetStartVR, "GetStartVR" }, // 1336279874
		{ &Z_Construct_UFunction_UProjectSettings_GetSupportContact, "GetSupportContact" }, // 1994468821
		{ &Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio, "GetWindowPreserveAspectRatio" }, // 4042573002
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowClose, "SetAllowClose" }, // 1680830842
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowMaximize, "SetAllowMaximize" }, // 1347557261
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowMinimize, "SetAllowMinimize" }, // 563582177
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize, "SetAllowWindowResize" }, // 1890588779
		{ &Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow, "SetBorderlessWindow" }, // 747514798
		{ &Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName, "SetCompanyDistinguishedName" }, // 1880109641
		{ &Z_Construct_UFunction_UProjectSettings_SetCompanyName, "SetCompanyName" }, // 37010841
		{ &Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice, "SetCopyrightNotice" }, // 2807109999
		{ &Z_Construct_UFunction_UProjectSettings_SetHomePage, "SetHomePage" }, // 365259026
		{ &Z_Construct_UFunction_UProjectSettings_SetLicensingTerms, "SetLicensingTerms" }, // 2556572172
		{ &Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy, "SetPrivacyPolicy" }, // 1329584266
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo, "SetProjectDebugTitleInfo" }, // 545615665
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectDescription, "SetProjectDescription" }, // 1576806417
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle, "SetProjectDisplayedTitle" }, // 3575848711
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectID, "SetProjectID" }, // 2440603090
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectName, "SetProjectName" }, // 3846690557
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectVersion, "SetProjectVersion" }, // 1467296917
		{ &Z_Construct_UFunction_UProjectSettings_SetStartVR, "SetStartVR" }, // 153093212
		{ &Z_Construct_UFunction_UProjectSettings_SetSupportContact, "SetSupportContact" }, // 1929715787
		{ &Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio, "SetWindowPreserveAspectRatio" }, // 1791323746
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectSettings.h" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectSettings_Statics::ClassParams = {
		&UProjectSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectSettings.OuterSingleton, Z_Construct_UClass_UProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectSettings.OuterSingleton;
	}
	template<> ESTAPETOOLS_API UClass* StaticClass<UProjectSettings>()
	{
		return UProjectSettings::StaticClass();
	}
	UProjectSettings::UProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectSettings);
	UProjectSettings::~UProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectSettings, UProjectSettings::StaticClass, TEXT("UProjectSettings"), &Z_Registration_Info_UClass_UProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectSettings), 4262435180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_2382098374(TEXT("/Script/EstapeTools"),
		Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
