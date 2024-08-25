// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WindowsClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDialogButtonClicked : uint8;
enum class EDialogButtons : uint8;
enum class EDialogIcon : uint8;
#ifdef ESTAPETOOLS_WindowsClass_generated_h
#error "WindowsClass.generated.h already included, missing '#pragma once' in WindowsClass.h"
#endif
#define ESTAPETOOLS_WindowsClass_generated_h

#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMessageBox_Windows); \
	DECLARE_FUNCTION(execGetWindowsInfo); \
	DECLARE_FUNCTION(execIsBatteryCharging); \
	DECLARE_FUNCTION(execGetBatteryLevel);


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsClass(); \
	friend struct Z_Construct_UClass_UWindowsClass_Statics; \
public: \
	DECLARE_CLASS(UWindowsClass, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UWindowsClass)


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWindowsClass(UWindowsClass&&); \
	UWindowsClass(const UWindowsClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsClass) \
	NO_API virtual ~UWindowsClass();


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_9_PROLOG
#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_INCLASS_NO_PURE_DECLS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UWindowsClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
