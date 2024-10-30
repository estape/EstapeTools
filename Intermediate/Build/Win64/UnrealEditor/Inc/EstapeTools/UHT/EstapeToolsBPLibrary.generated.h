// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EstapeToolsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;
#ifdef ESTAPETOOLS_EstapeToolsBPLibrary_generated_h
#error "EstapeToolsBPLibrary.generated.h already included, missing '#pragma once' in EstapeToolsBPLibrary.h"
#endif
#define ESTAPETOOLS_EstapeToolsBPLibrary_generated_h

#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_RPC_WRAPPERS \
	DECLARE_FUNCTION(execArrayLinearColorToArrayColor); \
	DECLARE_FUNCTION(execArrayColorToArrayLinearColor); \
	DECLARE_FUNCTION(execConvertBytesToString); \
	DECLARE_FUNCTION(execConvertStringToBytes); \
	DECLARE_FUNCTION(execBytesToColors); \
	DECLARE_FUNCTION(execColorsToBytes); \
	DECLARE_FUNCTION(execHexadecimalToDecimal); \
	DECLARE_FUNCTION(execDecimalToHexadecimal); \
	DECLARE_FUNCTION(execGetNewLine);


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUEstapeToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UEstapeToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UEstapeToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UEstapeToolsBPLibrary)


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_STANDARD_CONSTRUCTORS \
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


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_44_PROLOG
#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_RPC_WRAPPERS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_INCLASS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESTAPETOOLS_API UClass* StaticClass<class UEstapeToolsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h


#define FOREACH_ENUM_EDIALOGBUTTONS(op) \
	op(EDialogButtons::MB_OK) \
	op(EDialogButtons::MB_OKCANCEL) \
	op(EDialogButtons::MB_ABORTRETRYIGNORE) \
	op(EDialogButtons::MB_YESNOCANCEL) \
	op(EDialogButtons::MB_YESNO) \
	op(EDialogButtons::MB_RETRYCANCEL) \
	op(EDialogButtons::MB_CANCELTRYCONTINUE) 

enum class EDialogButtons : uint8;
template<> struct TIsUEnumClass<EDialogButtons> { enum { Value = true }; };
template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtons>();

#define FOREACH_ENUM_EDIALOGICON(op) \
	op(EDialogIcon::MB_NONE) \
	op(EDialogIcon::MB_ICONERROR) \
	op(EDialogIcon::MB_ICONWARNING) \
	op(EDialogIcon::MB_ICONINFORMATION) 

enum class EDialogIcon : uint8;
template<> struct TIsUEnumClass<EDialogIcon> { enum { Value = true }; };
template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogIcon>();

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
