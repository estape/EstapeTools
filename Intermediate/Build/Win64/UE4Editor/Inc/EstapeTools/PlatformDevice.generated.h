// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESTAPETOOLS_PlatformDevice_generated_h
#error "PlatformDevice.generated.h already included, missing '#pragma once' in PlatformDevice.h"
#endif
#define ESTAPETOOLS_PlatformDevice_generated_h

#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_SPARSE_DATA
#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsNintendoSwitch); \
	DECLARE_FUNCTION(execIsIOS_Platform); \
	DECLARE_FUNCTION(execIsAndroidPlatform); \
	DECLARE_FUNCTION(execIsLinuxPlatform); \
	DECLARE_FUNCTION(execIsMacPlatform); \
	DECLARE_FUNCTION(execIsWindowsPlatform);


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsNintendoSwitch); \
	DECLARE_FUNCTION(execIsIOS_Platform); \
	DECLARE_FUNCTION(execIsAndroidPlatform); \
	DECLARE_FUNCTION(execIsLinuxPlatform); \
	DECLARE_FUNCTION(execIsMacPlatform); \
	DECLARE_FUNCTION(execIsWindowsPlatform);


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformDevice(); \
	friend struct Z_Construct_UClass_UPlatformDevice_Statics; \
public: \
	DECLARE_CLASS(UPlatformDevice, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UPlatformDevice)


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformDevice(); \
	friend struct Z_Construct_UClass_UPlatformDevice_Statics; \
public: \
	DECLARE_CLASS(UPlatformDevice, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UPlatformDevice)


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformDevice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformDevice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformDevice(UPlatformDevice&&); \
	NO_API UPlatformDevice(const UPlatformDevice&); \
public:


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformDevice(UPlatformDevice&&); \
	NO_API UPlatformDevice(const UPlatformDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformDevice)


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_PRIVATE_PROPERTY_OFFSET
#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_12_PROLOG
#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_PRIVATE_PROPERTY_OFFSET \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_SPARSE_DATA \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_RPC_WRAPPERS \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_INCLASS \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_PRIVATE_PROPERTY_OFFSET \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_SPARSE_DATA \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_INCLASS_NO_PURE_DECLS \
	EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UPlatformDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_PlatformDevice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
