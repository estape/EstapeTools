// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EstapeToolsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ESTAPETOOLS_EstapeToolsBPLibrary_generated_h
#error "EstapeToolsBPLibrary.generated.h already included, missing '#pragma once' in EstapeToolsBPLibrary.h"
#endif
#define ESTAPETOOLS_EstapeToolsBPLibrary_generated_h

#define FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHexToDec); \
	DECLARE_FUNCTION(execDecToHex); \
	DECLARE_FUNCTION(execReadCLUTData); \
	DECLARE_FUNCTION(execWriteCLUTData); \
	DECLARE_FUNCTION(execGetNewLine); \
	DECLARE_FUNCTION(execGetWindowsInfo); \
	DECLARE_FUNCTION(execGetWindowsVersion); \
	DECLARE_FUNCTION(execIsBatteryCharging); \
	DECLARE_FUNCTION(execGetBatteryLevel);


#define FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEstapeToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UEstapeToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UEstapeToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UEstapeToolsBPLibrary)


#define FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEstapeToolsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstapeToolsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEstapeToolsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstapeToolsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEstapeToolsBPLibrary(UEstapeToolsBPLibrary&&); \
	UEstapeToolsBPLibrary(const UEstapeToolsBPLibrary&); \
public: \
	NO_API virtual ~UEstapeToolsBPLibrary();


#define FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_9_PROLOG
#define FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_RPC_WRAPPERS \
	FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_INCLASS \
	FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UEstapeToolsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arquivos_Usuarios_Rodrigo_Documentos_GameDev_UnrealEngine_v5_4_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
