// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ESTAPETOOLS_FileIO_generated_h
#error "FileIO.generated.h already included, missing '#pragma once' in FileIO.h"
#endif
#define ESTAPETOOLS_FileIO_generated_h

#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_SPARSE_DATA
#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadCLUTData); \
	DECLARE_FUNCTION(execReadBytesFile); \
	DECLARE_FUNCTION(execWriteBytesFile); \
	DECLARE_FUNCTION(execLoadTextArray); \
	DECLARE_FUNCTION(execSaveTextArray); \
	DECLARE_FUNCTION(execSaveTextFile); \
	DECLARE_FUNCTION(execLoadTextFile);


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadCLUTData); \
	DECLARE_FUNCTION(execReadBytesFile); \
	DECLARE_FUNCTION(execWriteBytesFile); \
	DECLARE_FUNCTION(execLoadTextArray); \
	DECLARE_FUNCTION(execSaveTextArray); \
	DECLARE_FUNCTION(execSaveTextFile); \
	DECLARE_FUNCTION(execLoadTextFile);


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend struct Z_Construct_UClass_UFileIO_Statics; \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UFileIO)


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFileIO(); \
	friend struct Z_Construct_UClass_UFileIO_Statics; \
public: \
	DECLARE_CLASS(UFileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UFileIO)


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileIO(UFileIO&&); \
	NO_API UFileIO(const UFileIO&); \
public:


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileIO(UFileIO&&); \
	NO_API UFileIO(const UFileIO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileIO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileIO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileIO)


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_PRIVATE_PROPERTY_OFFSET
#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_12_PROLOG
#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_PRIVATE_PROPERTY_OFFSET \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_SPARSE_DATA \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_RPC_WRAPPERS \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_INCLASS \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_PRIVATE_PROPERTY_OFFSET \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_SPARSE_DATA \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_INCLASS_NO_PURE_DECLS \
	CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UFileIO>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CNABSync_Plugins_EstapeTools_Source_EstapeTools_Public_FileIO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
