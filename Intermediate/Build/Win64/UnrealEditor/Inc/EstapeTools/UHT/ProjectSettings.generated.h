// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef ESTAPETOOLS_ProjectSettings_generated_h
#error "ProjectSettings.generated.h already included, missing '#pragma once' in ProjectSettings.h"
#endif
#define ESTAPETOOLS_ProjectSettings_generated_h

#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEngineVersion); \
	DECLARE_FUNCTION(execSetAllowMinimize); \
	DECLARE_FUNCTION(execSetAllowMaximize); \
	DECLARE_FUNCTION(execSetAllowClose); \
	DECLARE_FUNCTION(execSetAllowWindowResize); \
	DECLARE_FUNCTION(execSetStartVR); \
	DECLARE_FUNCTION(execSetBorderlessWindow); \
	DECLARE_FUNCTION(execSetWindowPreserveAspectRatio); \
	DECLARE_FUNCTION(execSetProjectDebugTitleInfo); \
	DECLARE_FUNCTION(execSetProjectDisplayedTitle); \
	DECLARE_FUNCTION(execSetPrivacyPolicy); \
	DECLARE_FUNCTION(execSetLicensingTerms); \
	DECLARE_FUNCTION(execSetCopyrightNotice); \
	DECLARE_FUNCTION(execSetSupportContact); \
	DECLARE_FUNCTION(execSetHomePage); \
	DECLARE_FUNCTION(execSetCompanyDistinguishedName); \
	DECLARE_FUNCTION(execSetCompanyName); \
	DECLARE_FUNCTION(execSetProjectVersion); \
	DECLARE_FUNCTION(execSetProjectName); \
	DECLARE_FUNCTION(execSetProjectID); \
	DECLARE_FUNCTION(execSetProjectDescription); \
	DECLARE_FUNCTION(execGetAllowMinimize); \
	DECLARE_FUNCTION(execGetAllowMaximize); \
	DECLARE_FUNCTION(execGetAllowClose); \
	DECLARE_FUNCTION(execGetAllowWindowResize); \
	DECLARE_FUNCTION(execGetStartVR); \
	DECLARE_FUNCTION(execGetBorderlessWindow); \
	DECLARE_FUNCTION(execGetWindowPreserveAspectRatio); \
	DECLARE_FUNCTION(execGetProjectDebugTitleInfo); \
	DECLARE_FUNCTION(execGetProjectDisplayedTitle); \
	DECLARE_FUNCTION(execGetPrivacyPolicy); \
	DECLARE_FUNCTION(execGetLicensingTerms); \
	DECLARE_FUNCTION(execGetCopyrightNotice); \
	DECLARE_FUNCTION(execGetSupportContact); \
	DECLARE_FUNCTION(execGetHomePage); \
	DECLARE_FUNCTION(execGetCompanyDistinguishedName); \
	DECLARE_FUNCTION(execGetCompanyName); \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execGetProjectID); \
	DECLARE_FUNCTION(execGetProjectDescription);


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectSettings(); \
	friend struct Z_Construct_UClass_UProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UProjectSettings, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UProjectSettings)


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectSettings(UProjectSettings&&); \
	UProjectSettings(const UProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectSettings) \
	NO_API virtual ~UProjectSettings();


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_11_PROLOG
#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_ProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
