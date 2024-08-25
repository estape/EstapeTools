// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/ProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UProjectSettings();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UProjectSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References

// Begin Class UProjectSettings Function GetAllowClose
struct Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics
{
	struct ProjectSettings_eventGetAllowClose_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetAllowClose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetAllowClose_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowClose", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::ProjectSettings_eventGetAllowClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::ProjectSettings_eventGetAllowClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetAllowClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetAllowClose();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetAllowClose

// Begin Class UProjectSettings Function GetAllowMaximize
struct Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics
{
	struct ProjectSettings_eventGetAllowMaximize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetAllowMaximize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetAllowMaximize_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowMaximize", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::ProjectSettings_eventGetAllowMaximize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::ProjectSettings_eventGetAllowMaximize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowMaximize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowMaximize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetAllowMaximize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetAllowMaximize();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetAllowMaximize

// Begin Class UProjectSettings Function GetAllowMinimize
struct Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics
{
	struct ProjectSettings_eventGetAllowMinimize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetAllowMinimize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetAllowMinimize_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowMinimize", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::ProjectSettings_eventGetAllowMinimize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::ProjectSettings_eventGetAllowMinimize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowMinimize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowMinimize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetAllowMinimize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetAllowMinimize();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetAllowMinimize

// Begin Class UProjectSettings Function GetAllowWindowResize
struct Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics
{
	struct ProjectSettings_eventGetAllowWindowResize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetAllowWindowResize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetAllowWindowResize_Parms), &Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetAllowWindowResize", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::ProjectSettings_eventGetAllowWindowResize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::ProjectSettings_eventGetAllowWindowResize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetAllowWindowResize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetAllowWindowResize();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetAllowWindowResize

// Begin Class UProjectSettings Function GetBorderlessWindow
struct Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics
{
	struct ProjectSettings_eventGetBorderlessWindow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetBorderlessWindow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetBorderlessWindow_Parms), &Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetBorderlessWindow", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::ProjectSettings_eventGetBorderlessWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::ProjectSettings_eventGetBorderlessWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetBorderlessWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetBorderlessWindow();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetBorderlessWindow

// Begin Class UProjectSettings Function GetCompanyDistinguishedName
struct Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics
{
	struct ProjectSettings_eventGetCompanyDistinguishedName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetCompanyDistinguishedName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetCompanyDistinguishedName", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::ProjectSettings_eventGetCompanyDistinguishedName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::ProjectSettings_eventGetCompanyDistinguishedName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetCompanyDistinguishedName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetCompanyDistinguishedName();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetCompanyDistinguishedName

// Begin Class UProjectSettings Function GetCompanyName
struct Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics
{
	struct ProjectSettings_eventGetCompanyName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetCompanyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetCompanyName", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::ProjectSettings_eventGetCompanyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::ProjectSettings_eventGetCompanyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetCompanyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetCompanyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetCompanyName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetCompanyName();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetCompanyName

// Begin Class UProjectSettings Function GetCopyrightNotice
struct Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics
{
	struct ProjectSettings_eventGetCopyrightNotice_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetCopyrightNotice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetCopyrightNotice", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::ProjectSettings_eventGetCopyrightNotice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::ProjectSettings_eventGetCopyrightNotice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetCopyrightNotice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetCopyrightNotice();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetCopyrightNotice

// Begin Class UProjectSettings Function GetHomePage
struct Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics
{
	struct ProjectSettings_eventGetHomePage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetHomePage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetHomePage", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::ProjectSettings_eventGetHomePage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::ProjectSettings_eventGetHomePage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetHomePage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetHomePage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetHomePage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetHomePage();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetHomePage

// Begin Class UProjectSettings Function GetLicensingTerms
struct Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics
{
	struct ProjectSettings_eventGetLicensingTerms_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetLicensingTerms_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetLicensingTerms", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::ProjectSettings_eventGetLicensingTerms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::ProjectSettings_eventGetLicensingTerms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetLicensingTerms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetLicensingTerms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetLicensingTerms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetLicensingTerms();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetLicensingTerms

// Begin Class UProjectSettings Function GetPrivacyPolicy
struct Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics
{
	struct ProjectSettings_eventGetPrivacyPolicy_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetPrivacyPolicy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetPrivacyPolicy", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::ProjectSettings_eventGetPrivacyPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::ProjectSettings_eventGetPrivacyPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetPrivacyPolicy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetPrivacyPolicy();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetPrivacyPolicy

// Begin Class UProjectSettings Function GetProjectDebugTitleInfo
struct Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics
{
	struct ProjectSettings_eventGetProjectDebugTitleInfo_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetProjectDebugTitleInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectDebugTitleInfo", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::ProjectSettings_eventGetProjectDebugTitleInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::ProjectSettings_eventGetProjectDebugTitleInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetProjectDebugTitleInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UProjectSettings::GetProjectDebugTitleInfo();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetProjectDebugTitleInfo

// Begin Class UProjectSettings Function GetProjectDescription
struct Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics
{
	struct ProjectSettings_eventGetProjectDescription_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetProjectDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectDescription", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::ProjectSettings_eventGetProjectDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::ProjectSettings_eventGetProjectDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetProjectDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetProjectDescription();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetProjectDescription

// Begin Class UProjectSettings Function GetProjectDisplayedTitle
struct Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics
{
	struct ProjectSettings_eventGetProjectDisplayedTitle_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetProjectDisplayedTitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectDisplayedTitle", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::ProjectSettings_eventGetProjectDisplayedTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::ProjectSettings_eventGetProjectDisplayedTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetProjectDisplayedTitle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UProjectSettings::GetProjectDisplayedTitle();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetProjectDisplayedTitle

// Begin Class UProjectSettings Function GetProjectID
struct Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics
{
	struct ProjectSettings_eventGetProjectID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetProjectID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectID", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::ProjectSettings_eventGetProjectID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::ProjectSettings_eventGetProjectID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetProjectID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UProjectSettings::GetProjectID();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetProjectID

// Begin Class UProjectSettings Function GetProjectName
struct Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics
{
	struct ProjectSettings_eventGetProjectName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectName", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::ProjectSettings_eventGetProjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::ProjectSettings_eventGetProjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetProjectName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetProjectName();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetProjectName

// Begin Class UProjectSettings Function GetProjectVersion
struct Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics
{
	struct ProjectSettings_eventGetProjectVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetProjectVersion", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::ProjectSettings_eventGetProjectVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::ProjectSettings_eventGetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetProjectVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetProjectVersion();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetProjectVersion

// Begin Class UProjectSettings Function GetStartVR
struct Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics
{
	struct ProjectSettings_eventGetStartVR_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetStartVR_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetStartVR_Parms), &Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetStartVR", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::ProjectSettings_eventGetStartVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::ProjectSettings_eventGetStartVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetStartVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetStartVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetStartVR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetStartVR();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetStartVR

// Begin Class UProjectSettings Function GetSupportContact
struct Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics
{
	struct ProjectSettings_eventGetSupportContact_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventGetSupportContact_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetSupportContact", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::ProjectSettings_eventGetSupportContact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::ProjectSettings_eventGetSupportContact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetSupportContact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetSupportContact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetSupportContact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UProjectSettings::GetSupportContact();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetSupportContact

// Begin Class UProjectSettings Function GetWindowPreserveAspectRatio
struct Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics
{
	struct ProjectSettings_eventGetWindowPreserveAspectRatio_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectSettings_eventGetWindowPreserveAspectRatio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventGetWindowPreserveAspectRatio_Parms), &Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "GetWindowPreserveAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::ProjectSettings_eventGetWindowPreserveAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::ProjectSettings_eventGetWindowPreserveAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execGetWindowPreserveAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UProjectSettings::GetWindowPreserveAspectRatio();
	P_NATIVE_END;
}
// End Class UProjectSettings Function GetWindowPreserveAspectRatio

// Begin Class UProjectSettings Function SetAllowClose
struct Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics
{
	struct ProjectSettings_eventSetAllowClose_Parms
	{
		bool AllowClose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AllowClose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowClose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose_SetBit(void* Obj)
{
	((ProjectSettings_eventSetAllowClose_Parms*)Obj)->AllowClose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose = { "AllowClose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetAllowClose_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::NewProp_AllowClose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowClose", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::ProjectSettings_eventSetAllowClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::ProjectSettings_eventSetAllowClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetAllowClose)
{
	P_GET_UBOOL(Z_Param_AllowClose);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetAllowClose(Z_Param_AllowClose);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetAllowClose

// Begin Class UProjectSettings Function SetAllowMaximize
struct Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics
{
	struct ProjectSettings_eventSetAllowMaximize_Parms
	{
		bool AllowMaximize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AllowMaximize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMaximize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize_SetBit(void* Obj)
{
	((ProjectSettings_eventSetAllowMaximize_Parms*)Obj)->AllowMaximize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize = { "AllowMaximize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetAllowMaximize_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::NewProp_AllowMaximize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowMaximize", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::ProjectSettings_eventSetAllowMaximize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::ProjectSettings_eventSetAllowMaximize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowMaximize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowMaximize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetAllowMaximize)
{
	P_GET_UBOOL(Z_Param_AllowMaximize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetAllowMaximize(Z_Param_AllowMaximize);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetAllowMaximize

// Begin Class UProjectSettings Function SetAllowMinimize
struct Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics
{
	struct ProjectSettings_eventSetAllowMinimize_Parms
	{
		bool AllowMinimize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AllowMinimize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMinimize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize_SetBit(void* Obj)
{
	((ProjectSettings_eventSetAllowMinimize_Parms*)Obj)->AllowMinimize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize = { "AllowMinimize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetAllowMinimize_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::NewProp_AllowMinimize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowMinimize", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::ProjectSettings_eventSetAllowMinimize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::ProjectSettings_eventSetAllowMinimize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowMinimize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowMinimize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetAllowMinimize)
{
	P_GET_UBOOL(Z_Param_AllowMinimize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetAllowMinimize(Z_Param_AllowMinimize);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetAllowMinimize

// Begin Class UProjectSettings Function SetAllowWindowResize
struct Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics
{
	struct ProjectSettings_eventSetAllowWindowResize_Parms
	{
		bool AllowWindowResize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AllowWindowResize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowWindowResize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize_SetBit(void* Obj)
{
	((ProjectSettings_eventSetAllowWindowResize_Parms*)Obj)->AllowWindowResize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize = { "AllowWindowResize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetAllowWindowResize_Parms), &Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::NewProp_AllowWindowResize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetAllowWindowResize", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::ProjectSettings_eventSetAllowWindowResize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::ProjectSettings_eventSetAllowWindowResize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetAllowWindowResize)
{
	P_GET_UBOOL(Z_Param_AllowWindowResize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetAllowWindowResize(Z_Param_AllowWindowResize);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetAllowWindowResize

// Begin Class UProjectSettings Function SetBorderlessWindow
struct Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics
{
	struct ProjectSettings_eventSetBorderlessWindow_Parms
	{
		bool BorderlessWindow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_BorderlessWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BorderlessWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow_SetBit(void* Obj)
{
	((ProjectSettings_eventSetBorderlessWindow_Parms*)Obj)->BorderlessWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow = { "BorderlessWindow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetBorderlessWindow_Parms), &Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::NewProp_BorderlessWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetBorderlessWindow", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::ProjectSettings_eventSetBorderlessWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::ProjectSettings_eventSetBorderlessWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetBorderlessWindow)
{
	P_GET_UBOOL(Z_Param_BorderlessWindow);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetBorderlessWindow(Z_Param_BorderlessWindow);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetBorderlessWindow

// Begin Class UProjectSettings Function SetCompanyDistinguishedName
struct Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics
{
	struct ProjectSettings_eventSetCompanyDistinguishedName_Parms
	{
		FString CompanyDistinguishedName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyDistinguishedName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyDistinguishedName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName = { "CompanyDistinguishedName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetCompanyDistinguishedName_Parms, CompanyDistinguishedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyDistinguishedName_MetaData), NewProp_CompanyDistinguishedName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::NewProp_CompanyDistinguishedName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetCompanyDistinguishedName", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::ProjectSettings_eventSetCompanyDistinguishedName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::ProjectSettings_eventSetCompanyDistinguishedName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetCompanyDistinguishedName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CompanyDistinguishedName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetCompanyDistinguishedName(Z_Param_CompanyDistinguishedName);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetCompanyDistinguishedName

// Begin Class UProjectSettings Function SetCompanyName
struct Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics
{
	struct ProjectSettings_eventSetCompanyName_Parms
	{
		FString CompanyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompanyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetCompanyName_Parms, CompanyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompanyName_MetaData), NewProp_CompanyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::NewProp_CompanyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetCompanyName", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::ProjectSettings_eventSetCompanyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::ProjectSettings_eventSetCompanyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetCompanyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetCompanyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetCompanyName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CompanyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetCompanyName(Z_Param_CompanyName);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetCompanyName

// Begin Class UProjectSettings Function SetCopyrightNotice
struct Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics
{
	struct ProjectSettings_eventSetCopyrightNotice_Parms
	{
		FString CopyrightNotice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyrightNotice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CopyrightNotice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice = { "CopyrightNotice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetCopyrightNotice_Parms, CopyrightNotice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyrightNotice_MetaData), NewProp_CopyrightNotice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::NewProp_CopyrightNotice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetCopyrightNotice", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::ProjectSettings_eventSetCopyrightNotice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::ProjectSettings_eventSetCopyrightNotice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetCopyrightNotice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CopyrightNotice);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetCopyrightNotice(Z_Param_CopyrightNotice);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetCopyrightNotice

// Begin Class UProjectSettings Function SetHomePage
struct Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics
{
	struct ProjectSettings_eventSetHomePage_Parms
	{
		FString HomePage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HomePage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HomePage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage = { "HomePage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetHomePage_Parms, HomePage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HomePage_MetaData), NewProp_HomePage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::NewProp_HomePage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetHomePage", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::ProjectSettings_eventSetHomePage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::ProjectSettings_eventSetHomePage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetHomePage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetHomePage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetHomePage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HomePage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetHomePage(Z_Param_HomePage);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetHomePage

// Begin Class UProjectSettings Function SetLicensingTerms
struct Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics
{
	struct ProjectSettings_eventSetLicensingTerms_Parms
	{
		FString LicensingTerms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicensingTerms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LicensingTerms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms = { "LicensingTerms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetLicensingTerms_Parms, LicensingTerms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicensingTerms_MetaData), NewProp_LicensingTerms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::NewProp_LicensingTerms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetLicensingTerms", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::ProjectSettings_eventSetLicensingTerms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::ProjectSettings_eventSetLicensingTerms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetLicensingTerms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetLicensingTerms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetLicensingTerms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LicensingTerms);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetLicensingTerms(Z_Param_LicensingTerms);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetLicensingTerms

// Begin Class UProjectSettings Function SetPrivacyPolicy
struct Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics
{
	struct ProjectSettings_eventSetPrivacyPolicy_Parms
	{
		FString PrivacyPolicy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivacyPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy = { "PrivacyPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetPrivacyPolicy_Parms, PrivacyPolicy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivacyPolicy_MetaData), NewProp_PrivacyPolicy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::NewProp_PrivacyPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetPrivacyPolicy", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::ProjectSettings_eventSetPrivacyPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::ProjectSettings_eventSetPrivacyPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetPrivacyPolicy)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PrivacyPolicy);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetPrivacyPolicy(Z_Param_PrivacyPolicy);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetPrivacyPolicy

// Begin Class UProjectSettings Function SetProjectDebugTitleInfo
struct Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics
{
	struct ProjectSettings_eventSetProjectDebugTitleInfo_Parms
	{
		FText ProjectDebugTitleInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDebugTitleInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ProjectDebugTitleInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo = { "ProjectDebugTitleInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetProjectDebugTitleInfo_Parms, ProjectDebugTitleInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectDebugTitleInfo_MetaData), NewProp_ProjectDebugTitleInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::NewProp_ProjectDebugTitleInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectDebugTitleInfo", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::ProjectSettings_eventSetProjectDebugTitleInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::ProjectSettings_eventSetProjectDebugTitleInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetProjectDebugTitleInfo)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ProjectDebugTitleInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetProjectDebugTitleInfo(Z_Param_Out_ProjectDebugTitleInfo);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetProjectDebugTitleInfo

// Begin Class UProjectSettings Function SetProjectDescription
struct Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics
{
	struct ProjectSettings_eventSetProjectDescription_Parms
	{
		FString Description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetProjectDescription_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectDescription", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::ProjectSettings_eventSetProjectDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::ProjectSettings_eventSetProjectDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetProjectDescription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetProjectDescription(Z_Param_Description);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetProjectDescription

// Begin Class UProjectSettings Function SetProjectDisplayedTitle
struct Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics
{
	struct ProjectSettings_eventSetProjectDisplayedTitle_Parms
	{
		FText ProjectDisplayedTitle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDisplayedTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ProjectDisplayedTitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle = { "ProjectDisplayedTitle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetProjectDisplayedTitle_Parms, ProjectDisplayedTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectDisplayedTitle_MetaData), NewProp_ProjectDisplayedTitle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::NewProp_ProjectDisplayedTitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectDisplayedTitle", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::ProjectSettings_eventSetProjectDisplayedTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::ProjectSettings_eventSetProjectDisplayedTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetProjectDisplayedTitle)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ProjectDisplayedTitle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetProjectDisplayedTitle(Z_Param_Out_ProjectDisplayedTitle);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetProjectDisplayedTitle

// Begin Class UProjectSettings Function SetProjectID
struct Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics
{
	struct ProjectSettings_eventSetProjectID_Parms
	{
		FGuid ProjectID;
		bool IsValid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectID;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID = { "ProjectID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetProjectID_Parms, ProjectID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectID_MetaData), NewProp_ProjectID_MetaData) };
void Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((ProjectSettings_eventSetProjectID_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetProjectID_Parms), &Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_ProjectID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::NewProp_IsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectID", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::ProjectSettings_eventSetProjectID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::ProjectSettings_eventSetProjectID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectID_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UProjectSettings Function SetProjectID

// Begin Class UProjectSettings Function SetProjectName
struct Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics
{
	struct ProjectSettings_eventSetProjectName_Parms
	{
		FString ProjectName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetProjectName_Parms, ProjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectName_MetaData), NewProp_ProjectName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::NewProp_ProjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectName", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::ProjectSettings_eventSetProjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::ProjectSettings_eventSetProjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetProjectName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ProjectName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetProjectName(Z_Param_ProjectName);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetProjectName

// Begin Class UProjectSettings Function SetProjectVersion
struct Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics
{
	struct ProjectSettings_eventSetProjectVersion_Parms
	{
		FString ProjectVersion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion = { "ProjectVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetProjectVersion_Parms, ProjectVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectVersion_MetaData), NewProp_ProjectVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::NewProp_ProjectVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetProjectVersion", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::ProjectSettings_eventSetProjectVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::ProjectSettings_eventSetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetProjectVersion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ProjectVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetProjectVersion(Z_Param_ProjectVersion);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetProjectVersion

// Begin Class UProjectSettings Function SetStartVR
struct Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics
{
	struct ProjectSettings_eventSetStartVR_Parms
	{
		bool StartVR;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartVR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartVR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR_SetBit(void* Obj)
{
	((ProjectSettings_eventSetStartVR_Parms*)Obj)->StartVR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR = { "StartVR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetStartVR_Parms), &Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::NewProp_StartVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetStartVR", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::ProjectSettings_eventSetStartVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::ProjectSettings_eventSetStartVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetStartVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetStartVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetStartVR)
{
	P_GET_UBOOL(Z_Param_StartVR);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetStartVR(Z_Param_StartVR);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetStartVR

// Begin Class UProjectSettings Function SetSupportContact
struct Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics
{
	struct ProjectSettings_eventSetSupportContact_Parms
	{
		FString SupportContact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportContact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SupportContact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact = { "SupportContact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectSettings_eventSetSupportContact_Parms, SupportContact), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportContact_MetaData), NewProp_SupportContact_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::NewProp_SupportContact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetSupportContact", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::ProjectSettings_eventSetSupportContact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::ProjectSettings_eventSetSupportContact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetSupportContact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetSupportContact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetSupportContact)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SupportContact);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetSupportContact(Z_Param_SupportContact);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetSupportContact

// Begin Class UProjectSettings Function SetWindowPreserveAspectRatio
struct Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics
{
	struct ProjectSettings_eventSetWindowPreserveAspectRatio_Parms
	{
		bool WindowPreserveAspectRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Project|Settings" },
		{ "Keywords", "Project Version Description Configuration" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_WindowPreserveAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WindowPreserveAspectRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio_SetBit(void* Obj)
{
	((ProjectSettings_eventSetWindowPreserveAspectRatio_Parms*)Obj)->WindowPreserveAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio = { "WindowPreserveAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectSettings_eventSetWindowPreserveAspectRatio_Parms), &Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::NewProp_WindowPreserveAspectRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectSettings, nullptr, "SetWindowPreserveAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::ProjectSettings_eventSetWindowPreserveAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::ProjectSettings_eventSetWindowPreserveAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectSettings::execSetWindowPreserveAspectRatio)
{
	P_GET_UBOOL(Z_Param_WindowPreserveAspectRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	UProjectSettings::SetWindowPreserveAspectRatio(Z_Param_WindowPreserveAspectRatio);
	P_NATIVE_END;
}
// End Class UProjectSettings Function SetWindowPreserveAspectRatio

// Begin Class UProjectSettings
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectSettings);
UClass* Z_Construct_UClass_UProjectSettings_NoRegister()
{
	return UProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProjectSettings.h" },
		{ "ModuleRelativePath", "Public/ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowClose, "GetAllowClose" }, // 3953507058
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowMaximize, "GetAllowMaximize" }, // 306335496
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowMinimize, "GetAllowMinimize" }, // 1632915810
		{ &Z_Construct_UFunction_UProjectSettings_GetAllowWindowResize, "GetAllowWindowResize" }, // 3956298399
		{ &Z_Construct_UFunction_UProjectSettings_GetBorderlessWindow, "GetBorderlessWindow" }, // 3314193414
		{ &Z_Construct_UFunction_UProjectSettings_GetCompanyDistinguishedName, "GetCompanyDistinguishedName" }, // 2230824617
		{ &Z_Construct_UFunction_UProjectSettings_GetCompanyName, "GetCompanyName" }, // 3681225091
		{ &Z_Construct_UFunction_UProjectSettings_GetCopyrightNotice, "GetCopyrightNotice" }, // 1278843544
		{ &Z_Construct_UFunction_UProjectSettings_GetHomePage, "GetHomePage" }, // 1312074228
		{ &Z_Construct_UFunction_UProjectSettings_GetLicensingTerms, "GetLicensingTerms" }, // 3502532845
		{ &Z_Construct_UFunction_UProjectSettings_GetPrivacyPolicy, "GetPrivacyPolicy" }, // 3602376273
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectDebugTitleInfo, "GetProjectDebugTitleInfo" }, // 3960896683
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectDescription, "GetProjectDescription" }, // 3695928524
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectDisplayedTitle, "GetProjectDisplayedTitle" }, // 822983635
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectID, "GetProjectID" }, // 1196365164
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectName, "GetProjectName" }, // 3253936878
		{ &Z_Construct_UFunction_UProjectSettings_GetProjectVersion, "GetProjectVersion" }, // 2784697659
		{ &Z_Construct_UFunction_UProjectSettings_GetStartVR, "GetStartVR" }, // 2838242651
		{ &Z_Construct_UFunction_UProjectSettings_GetSupportContact, "GetSupportContact" }, // 2236635174
		{ &Z_Construct_UFunction_UProjectSettings_GetWindowPreserveAspectRatio, "GetWindowPreserveAspectRatio" }, // 1017768825
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowClose, "SetAllowClose" }, // 1455375904
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowMaximize, "SetAllowMaximize" }, // 3676335311
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowMinimize, "SetAllowMinimize" }, // 3764507626
		{ &Z_Construct_UFunction_UProjectSettings_SetAllowWindowResize, "SetAllowWindowResize" }, // 2104019189
		{ &Z_Construct_UFunction_UProjectSettings_SetBorderlessWindow, "SetBorderlessWindow" }, // 2931735193
		{ &Z_Construct_UFunction_UProjectSettings_SetCompanyDistinguishedName, "SetCompanyDistinguishedName" }, // 1094521673
		{ &Z_Construct_UFunction_UProjectSettings_SetCompanyName, "SetCompanyName" }, // 2183566441
		{ &Z_Construct_UFunction_UProjectSettings_SetCopyrightNotice, "SetCopyrightNotice" }, // 294693694
		{ &Z_Construct_UFunction_UProjectSettings_SetHomePage, "SetHomePage" }, // 1851359730
		{ &Z_Construct_UFunction_UProjectSettings_SetLicensingTerms, "SetLicensingTerms" }, // 1702885465
		{ &Z_Construct_UFunction_UProjectSettings_SetPrivacyPolicy, "SetPrivacyPolicy" }, // 2861174615
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectDebugTitleInfo, "SetProjectDebugTitleInfo" }, // 2603720827
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectDescription, "SetProjectDescription" }, // 382775928
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectDisplayedTitle, "SetProjectDisplayedTitle" }, // 4095788022
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectID, "SetProjectID" }, // 1334998878
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectName, "SetProjectName" }, // 303143955
		{ &Z_Construct_UFunction_UProjectSettings_SetProjectVersion, "SetProjectVersion" }, // 2377578550
		{ &Z_Construct_UFunction_UProjectSettings_SetStartVR, "SetStartVR" }, // 1400738656
		{ &Z_Construct_UFunction_UProjectSettings_SetSupportContact, "SetSupportContact" }, // 1018905940
		{ &Z_Construct_UFunction_UProjectSettings_SetWindowPreserveAspectRatio, "SetWindowPreserveAspectRatio" }, // 73390805
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSettings_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectSettings_Statics::Class_MetaDataParams)
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
// End Class UProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectSettings, UProjectSettings::StaticClass, TEXT("UProjectSettings"), &Z_Registration_Info_UClass_UProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectSettings), 3775244232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_636236059(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
