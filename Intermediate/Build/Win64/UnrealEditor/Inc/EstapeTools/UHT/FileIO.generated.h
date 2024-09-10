// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileIO.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ESTAPETOOLS_FileIO_generated_h
#error "FileIO.generated.h already included, missing '#pragma once' in FileIO.h"
#endif
#define ESTAPETOOLS_FileIO_generated_h

#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadCLUTData); \
	DECLARE_FUNCTION(execWriteCLUTData); \
	DECLARE_FUNCTION(execReadBytesFile); \
	DECLARE_FUNCTION(execWriteBytesFile); \
	DECLARE_FUNCTION(execLoadTextArray); \
	DECLARE_FUNCTION(execSaveTextArray); \
	DECLARE_FUNCTION(execSaveTextFile); \
	DECLARE_FUNCTION(execLoadTextFile);


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend struct Z_Construct_UClass_UFileIO_Statics; \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UFileIO)


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileIO(UFileIO&&); \
	UFileIO(const UFileIO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO) \
	NO_API virtual ~UFileIO();


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_9_PROLOG
#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_INCLASS_NO_PURE_DECLS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UFileIO>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
