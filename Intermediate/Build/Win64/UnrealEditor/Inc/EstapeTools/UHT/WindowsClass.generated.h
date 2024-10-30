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

#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_SPARSE_DATA
#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMessageBox_Windows); \
	DECLARE_FUNCTION(execGetWindowsInfo); \
	DECLARE_FUNCTION(execIsBatteryCharging); \
	DECLARE_FUNCTION(execGetBatteryLevel);


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMessageBox_Windows); \
	DECLARE_FUNCTION(execGetWindowsInfo); \
	DECLARE_FUNCTION(execIsBatteryCharging); \
	DECLARE_FUNCTION(execGetBatteryLevel);


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_ACCESSORS
#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsClass(); \
	friend struct Z_Construct_UClass_UWindowsClass_Statics; \
public: \
	DECLARE_CLASS(UWindowsClass, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UWindowsClass)


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsClass(); \
	friend struct Z_Construct_UClass_UWindowsClass_Statics; \
public: \
	DECLARE_CLASS(UWindowsClass, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UWindowsClass)


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsClass(UWindowsClass&&); \
	NO_API UWindowsClass(const UWindowsClass&); \
public: \
	NO_API virtual ~UWindowsClass();


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsClass(UWindowsClass&&); \
	NO_API UWindowsClass(const UWindowsClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsClass) \
	NO_API virtual ~UWindowsClass();


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_29_PROLOG
#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_SPARSE_DATA \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_RPC_WRAPPERS \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_ACCESSORS \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_INCLASS \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_SPARSE_DATA \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_ACCESSORS \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_INCLASS_NO_PURE_DECLS \
	FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UWindowsClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewEstapeTools_Plugins_EstapeTools_Source_EstapeTools_Public_WindowsClass_h


#define FOREACH_ENUM_EDIALOGBUTTONCLICKED(op) \
	op(EDialogButtonClicked::IDNONE) \
	op(EDialogButtonClicked::IDOK) \
	op(EDialogButtonClicked::IDCANCEL) \
	op(EDialogButtonClicked::IDABORT) \
	op(EDialogButtonClicked::IDRETRY) \
	op(EDialogButtonClicked::IDIGNORE) \
	op(EDialogButtonClicked::IDYES) \
	op(EDialogButtonClicked::IDNO) \
	op(EDialogButtonClicked::IDTRYAGAIN) \
	op(EDialogButtonClicked::IDCONTINUE) 

enum class EDialogButtonClicked : uint8;
template<> struct TIsUEnumClass<EDialogButtonClicked> { enum { Value = true }; };
template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtonClicked>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
