// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EstapeToolsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ETextureFormat : uint8;
struct FColor;
struct FLinearColor;
#ifdef ESTAPETOOLS_EstapeToolsBPLibrary_generated_h
#error "EstapeToolsBPLibrary.generated.h already included, missing '#pragma once' in EstapeToolsBPLibrary.h"
#endif
#define ESTAPETOOLS_EstapeToolsBPLibrary_generated_h

#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_RPC_WRAPPERS \
	DECLARE_FUNCTION(execArrayLinearColorToArrayColor); \
	DECLARE_FUNCTION(execArrayColorToArrayLinearColor); \
	DECLARE_FUNCTION(execTexture2DToBytes); \
	DECLARE_FUNCTION(execBytesToTexture2D); \
	DECLARE_FUNCTION(execConvertBytesToString); \
	DECLARE_FUNCTION(execConvertStringToBytes); \
	DECLARE_FUNCTION(execBytesToColors); \
	DECLARE_FUNCTION(execColorsToBytes); \
	DECLARE_FUNCTION(execHexadecimalToDecimal); \
	DECLARE_FUNCTION(execDecimalToHexadecimal); \
	DECLARE_FUNCTION(execGetNewLine);


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_INCLASS \
private: \
	static void StaticRegisterNativesUEstapeToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UEstapeToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UEstapeToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EstapeTools"), NO_API) \
	DECLARE_SERIALIZER(UEstapeToolsBPLibrary)


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_STANDARD_CONSTRUCTORS \
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


#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_142_PROLOG
#define FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_RPC_WRAPPERS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_INCLASS \
	FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_145_STANDARD_CONSTRUCTORS \
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

#define FOREACH_ENUM_ETEXTUREFORMAT(op) \
	op(ETextureFormat::PF_Unknown) \
	op(ETextureFormat::PF_A32B32G32R32F) \
	op(ETextureFormat::PF_B8G8R8A8) \
	op(ETextureFormat::PF_G8) \
	op(ETextureFormat::PF_G16) \
	op(ETextureFormat::PF_DXT1) \
	op(ETextureFormat::PF_DXT3) \
	op(ETextureFormat::PF_DXT5) \
	op(ETextureFormat::PF_UYVY) \
	op(ETextureFormat::PF_FloatRGB) \
	op(ETextureFormat::PF_FloatRGBA) \
	op(ETextureFormat::PF_DepthStencil) \
	op(ETextureFormat::PF_ShadowDepth) \
	op(ETextureFormat::PF_R32_FLOAT) \
	op(ETextureFormat::PF_G16R16) \
	op(ETextureFormat::PF_G16R16F) \
	op(ETextureFormat::PF_G16R16F_FILTER) \
	op(ETextureFormat::PF_G32R32F) \
	op(ETextureFormat::PF_A2B10G10R10) \
	op(ETextureFormat::PF_A16B16G16R16) \
	op(ETextureFormat::PF_D24) \
	op(ETextureFormat::PF_R16F) \
	op(ETextureFormat::PF_R16F_FILTER) \
	op(ETextureFormat::PF_BC5) \
	op(ETextureFormat::PF_V8U8) \
	op(ETextureFormat::PF_A1) \
	op(ETextureFormat::PF_FloatR11G11B10) \
	op(ETextureFormat::PF_A8) \
	op(ETextureFormat::PF_R32_UINT) \
	op(ETextureFormat::PF_R32_SINT) \
	op(ETextureFormat::PF_PVRTC2) \
	op(ETextureFormat::PF_PVRTC4) \
	op(ETextureFormat::PF_R16_UINT) \
	op(ETextureFormat::PF_R16_SINT) \
	op(ETextureFormat::PF_R16G16B16A16_UINT) \
	op(ETextureFormat::PF_R16G16B16A16_SINT) \
	op(ETextureFormat::PF_R5G6B5_UNORM) \
	op(ETextureFormat::PF_R8G8B8A8) \
	op(ETextureFormat::PF_A8R8G8B8) \
	op(ETextureFormat::PF_BC4) \
	op(ETextureFormat::PF_R8G8) \
	op(ETextureFormat::PF_ATC_RGB) \
	op(ETextureFormat::PF_ATC_RGBA_E) \
	op(ETextureFormat::PF_ATC_RGBA_I) \
	op(ETextureFormat::PF_X24_G8) \
	op(ETextureFormat::PF_ETC1) \
	op(ETextureFormat::PF_ETC2_RGB) \
	op(ETextureFormat::PF_ETC2_RGBA) \
	op(ETextureFormat::PF_R32G32B32A32_UINT) \
	op(ETextureFormat::PF_R16G16_UINT) \
	op(ETextureFormat::PF_ASTC_4x4) \
	op(ETextureFormat::PF_ASTC_6x6) \
	op(ETextureFormat::PF_ASTC_8x8) \
	op(ETextureFormat::PF_ASTC_10x10) \
	op(ETextureFormat::PF_ASTC_12x12) \
	op(ETextureFormat::PF_BC6H) \
	op(ETextureFormat::PF_BC7) \
	op(ETextureFormat::PF_R8_UINT) \
	op(ETextureFormat::PF_L8) \
	op(ETextureFormat::PF_XGXR8) \
	op(ETextureFormat::PF_R8G8B8A8_UINT) \
	op(ETextureFormat::PF_R8G8B8A8_SNORM) \
	op(ETextureFormat::PF_R16G16B16A16_UNORM) \
	op(ETextureFormat::PF_R16G16B16A16_SNORM) \
	op(ETextureFormat::PF_PLATFORM_HDR_0) \
	op(ETextureFormat::PF_PLATFORM_HDR_1) \
	op(ETextureFormat::PF_PLATFORM_HDR_2) \
	op(ETextureFormat::PF_NV12) \
	op(ETextureFormat::PF_R32G32_UINT) \
	op(ETextureFormat::PF_ETC2_R11_EAC) \
	op(ETextureFormat::PF_ETC2_RG11_EAC) \
	op(ETextureFormat::PF_R8) \
	op(ETextureFormat::PF_B5G5R5A1_UNORM) \
	op(ETextureFormat::PF_ASTC_4x4_HDR) \
	op(ETextureFormat::PF_ASTC_6x6_HDR) \
	op(ETextureFormat::PF_ASTC_8x8_HDR) \
	op(ETextureFormat::PF_ASTC_10x10_HDR) \
	op(ETextureFormat::PF_ASTC_12x12_HDR) \
	op(ETextureFormat::PF_G16R16_SNORM) \
	op(ETextureFormat::PF_R8G8_UINT) \
	op(ETextureFormat::PF_R32G32B32_UINT) \
	op(ETextureFormat::PF_R32G32B32_SINT) \
	op(ETextureFormat::PF_R32G32B32F) \
	op(ETextureFormat::PF_R8_SINT) \
	op(ETextureFormat::PF_R64_UINT) \
	op(ETextureFormat::PF_R9G9B9EXP5) \
	op(ETextureFormat::PF_P010) \
	op(ETextureFormat::PF_ASTC_4x4_NORM_RG) \
	op(ETextureFormat::PF_ASTC_6x6_NORM_RG) \
	op(ETextureFormat::PF_ASTC_8x8_NORM_RG) \
	op(ETextureFormat::PF_ASTC_10x10_NORM_RG) \
	op(ETextureFormat::PF_ASTC_12x12_NORM_RG) 

enum class ETextureFormat : uint8;
template<> struct TIsUEnumClass<ETextureFormat> { enum { Value = true }; };
template<> ESTAPETOOLS_API UEnum* StaticEnum<ETextureFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
