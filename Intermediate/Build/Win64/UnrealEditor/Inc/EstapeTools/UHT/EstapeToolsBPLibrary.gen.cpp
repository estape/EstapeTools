// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EstapeTools/Public/EstapeToolsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstapeToolsBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UEstapeToolsBPLibrary();
ESTAPETOOLS_API UClass* Z_Construct_UClass_UEstapeToolsBPLibrary_NoRegister();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtons();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_EDialogIcon();
ESTAPETOOLS_API UEnum* Z_Construct_UEnum_EstapeTools_ETextureFormat();
UPackage* Z_Construct_UPackage__Script_EstapeTools();
// End Cross Module References

// Begin Enum EDialogButtons
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogButtons;
static UEnum* EDialogButtons_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogButtons.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogButtons.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogButtons, (UObject*)Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogButtons"));
	}
	return Z_Registration_Info_UEnum_EDialogButtons.OuterSingleton;
}
template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtons>()
{
	return EDialogButtons_StaticEnum();
}
struct Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MB_ABORTRETRYIGNORE.DisplayName", "Abort, Retry, and Ignore" },
		{ "MB_ABORTRETRYIGNORE.Name", "EDialogButtons::MB_ABORTRETRYIGNORE" },
		{ "MB_CANCELTRYCONTINUE.DisplayName", "Cancel, Try Again, Continue" },
		{ "MB_CANCELTRYCONTINUE.Name", "EDialogButtons::MB_CANCELTRYCONTINUE" },
		{ "MB_OK.DisplayName", "OK" },
		{ "MB_OK.Name", "EDialogButtons::MB_OK" },
		{ "MB_OKCANCEL.DisplayName", "OK, Cancel" },
		{ "MB_OKCANCEL.Name", "EDialogButtons::MB_OKCANCEL" },
		{ "MB_RETRYCANCEL.DisplayName", "Retry, Cancel" },
		{ "MB_RETRYCANCEL.Name", "EDialogButtons::MB_RETRYCANCEL" },
		{ "MB_YESNO.DisplayName", "Yes, No" },
		{ "MB_YESNO.Name", "EDialogButtons::MB_YESNO" },
		{ "MB_YESNOCANCEL.DisplayName", "Yes, No, Cancel" },
		{ "MB_YESNOCANCEL.Name", "EDialogButtons::MB_YESNOCANCEL" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogButtons::MB_OK", (int64)EDialogButtons::MB_OK },
		{ "EDialogButtons::MB_OKCANCEL", (int64)EDialogButtons::MB_OKCANCEL },
		{ "EDialogButtons::MB_ABORTRETRYIGNORE", (int64)EDialogButtons::MB_ABORTRETRYIGNORE },
		{ "EDialogButtons::MB_YESNOCANCEL", (int64)EDialogButtons::MB_YESNOCANCEL },
		{ "EDialogButtons::MB_YESNO", (int64)EDialogButtons::MB_YESNO },
		{ "EDialogButtons::MB_RETRYCANCEL", (int64)EDialogButtons::MB_RETRYCANCEL },
		{ "EDialogButtons::MB_CANCELTRYCONTINUE", (int64)EDialogButtons::MB_CANCELTRYCONTINUE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
	nullptr,
	"EDialogButtons",
	"EDialogButtons",
	Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtons()
{
	if (!Z_Registration_Info_UEnum_EDialogButtons.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogButtons.InnerSingleton, Z_Construct_UEnum_EstapeTools_EDialogButtons_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogButtons.InnerSingleton;
}
// End Enum EDialogButtons

// Begin Enum EDialogIcon
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogIcon;
static UEnum* EDialogIcon_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogIcon.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogIcon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogIcon, (UObject*)Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogIcon"));
	}
	return Z_Registration_Info_UEnum_EDialogIcon.OuterSingleton;
}
template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogIcon>()
{
	return EDialogIcon_StaticEnum();
}
struct Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MB_ICONERROR.DisplayName", "Stop-sign icon" },
		{ "MB_ICONERROR.Name", "EDialogIcon::MB_ICONERROR" },
		{ "MB_ICONINFORMATION.DisplayName", "Information-point icon" },
		{ "MB_ICONINFORMATION.Name", "EDialogIcon::MB_ICONINFORMATION" },
		{ "MB_ICONWARNING.DisplayName", "Exclamation-point icon" },
		{ "MB_ICONWARNING.Name", "EDialogIcon::MB_ICONWARNING" },
		{ "MB_NONE.DisplayName", "No icon" },
		{ "MB_NONE.Name", "EDialogIcon::MB_NONE" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogIcon::MB_NONE", (int64)EDialogIcon::MB_NONE },
		{ "EDialogIcon::MB_ICONERROR", (int64)EDialogIcon::MB_ICONERROR },
		{ "EDialogIcon::MB_ICONWARNING", (int64)EDialogIcon::MB_ICONWARNING },
		{ "EDialogIcon::MB_ICONINFORMATION", (int64)EDialogIcon::MB_ICONINFORMATION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
	nullptr,
	"EDialogIcon",
	"EDialogIcon",
	Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EstapeTools_EDialogIcon()
{
	if (!Z_Registration_Info_UEnum_EDialogIcon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogIcon.InnerSingleton, Z_Construct_UEnum_EstapeTools_EDialogIcon_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogIcon.InnerSingleton;
}
// End Enum EDialogIcon

// Begin Enum EDialogButtonClicked
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogButtonClicked;
static UEnum* EDialogButtonClicked_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked, (UObject*)Z_Construct_UPackage__Script_EstapeTools(), TEXT("EDialogButtonClicked"));
	}
	return Z_Registration_Info_UEnum_EDialogButtonClicked.OuterSingleton;
}
template<> ESTAPETOOLS_API UEnum* StaticEnum<EDialogButtonClicked>()
{
	return EDialogButtonClicked_StaticEnum();
}
struct Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IDABORT.DisplayName", "Abort" },
		{ "IDABORT.Name", "EDialogButtonClicked::IDABORT" },
		{ "IDCANCEL.DisplayName", "Cancel" },
		{ "IDCANCEL.Name", "EDialogButtonClicked::IDCANCEL" },
		{ "IDCONTINUE.DisplayName", "Continue" },
		{ "IDCONTINUE.Name", "EDialogButtonClicked::IDCONTINUE" },
		{ "IDIGNORE.DisplayName", "Ignore" },
		{ "IDIGNORE.Name", "EDialogButtonClicked::IDIGNORE" },
		{ "IDNO.DisplayName", "No" },
		{ "IDNO.Name", "EDialogButtonClicked::IDNO" },
		{ "IDNONE.DisplayName", "None" },
		{ "IDNONE.Name", "EDialogButtonClicked::IDNONE" },
		{ "IDOK.DisplayName", "OK" },
		{ "IDOK.Name", "EDialogButtonClicked::IDOK" },
		{ "IDRETRY.DisplayName", "Retry" },
		{ "IDRETRY.Name", "EDialogButtonClicked::IDRETRY" },
		{ "IDTRYAGAIN.DisplayName", "TryAgain" },
		{ "IDTRYAGAIN.Name", "EDialogButtonClicked::IDTRYAGAIN" },
		{ "IDYES.DisplayName", "Yes" },
		{ "IDYES.Name", "EDialogButtonClicked::IDYES" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogButtonClicked::IDNONE", (int64)EDialogButtonClicked::IDNONE },
		{ "EDialogButtonClicked::IDOK", (int64)EDialogButtonClicked::IDOK },
		{ "EDialogButtonClicked::IDCANCEL", (int64)EDialogButtonClicked::IDCANCEL },
		{ "EDialogButtonClicked::IDABORT", (int64)EDialogButtonClicked::IDABORT },
		{ "EDialogButtonClicked::IDRETRY", (int64)EDialogButtonClicked::IDRETRY },
		{ "EDialogButtonClicked::IDIGNORE", (int64)EDialogButtonClicked::IDIGNORE },
		{ "EDialogButtonClicked::IDYES", (int64)EDialogButtonClicked::IDYES },
		{ "EDialogButtonClicked::IDNO", (int64)EDialogButtonClicked::IDNO },
		{ "EDialogButtonClicked::IDTRYAGAIN", (int64)EDialogButtonClicked::IDTRYAGAIN },
		{ "EDialogButtonClicked::IDCONTINUE", (int64)EDialogButtonClicked::IDCONTINUE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
	nullptr,
	"EDialogButtonClicked",
	"EDialogButtonClicked",
	Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EstapeTools_EDialogButtonClicked()
{
	if (!Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton, Z_Construct_UEnum_EstapeTools_EDialogButtonClicked_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogButtonClicked.InnerSingleton;
}
// End Enum EDialogButtonClicked

// Begin Enum ETextureFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureFormat;
static UEnum* ETextureFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EstapeTools_ETextureFormat, (UObject*)Z_Construct_UPackage__Script_EstapeTools(), TEXT("ETextureFormat"));
	}
	return Z_Registration_Info_UEnum_ETextureFormat.OuterSingleton;
}
template<> ESTAPETOOLS_API UEnum* StaticEnum<ETextureFormat>()
{
	return ETextureFormat_StaticEnum();
}
struct Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
		{ "PF_A1.DisplayName", "A1" },
		{ "PF_A1.Name", "ETextureFormat::PF_A1" },
		{ "PF_A16B16G16R16.DisplayName", "A16B16G16R16" },
		{ "PF_A16B16G16R16.Name", "ETextureFormat::PF_A16B16G16R16" },
		{ "PF_A2B10G10R10.DisplayName", "A2B10G10R10" },
		{ "PF_A2B10G10R10.Name", "ETextureFormat::PF_A2B10G10R10" },
		{ "PF_A32B32G32R32F.DisplayName", "A32B32G32R32F" },
		{ "PF_A32B32G32R32F.Name", "ETextureFormat::PF_A32B32G32R32F" },
		{ "PF_A8.DisplayName", "A8" },
		{ "PF_A8.Name", "ETextureFormat::PF_A8" },
		{ "PF_A8R8G8B8.DisplayName", "A8R8G8B8" },
		{ "PF_A8R8G8B8.Name", "ETextureFormat::PF_A8R8G8B8" },
		{ "PF_ASTC_10x10.DisplayName", "ASTC_10x10" },
		{ "PF_ASTC_10x10.Name", "ETextureFormat::PF_ASTC_10x10" },
		{ "PF_ASTC_10x10_HDR.DisplayName", "ASTC_10x10_HDR" },
		{ "PF_ASTC_10x10_HDR.Name", "ETextureFormat::PF_ASTC_10x10_HDR" },
		{ "PF_ASTC_10x10_NORM_RG.DisplayName", "ASTC_10x10_NORM_RG" },
		{ "PF_ASTC_10x10_NORM_RG.Name", "ETextureFormat::PF_ASTC_10x10_NORM_RG" },
		{ "PF_ASTC_12x12.DisplayName", "ASTC_12x12" },
		{ "PF_ASTC_12x12.Name", "ETextureFormat::PF_ASTC_12x12" },
		{ "PF_ASTC_12x12_HDR.DisplayName", "ASTC_12x12_HDR" },
		{ "PF_ASTC_12x12_HDR.Name", "ETextureFormat::PF_ASTC_12x12_HDR" },
		{ "PF_ASTC_12x12_NORM_RG.DisplayName", "ASTC_12x12_NORM_RG" },
		{ "PF_ASTC_12x12_NORM_RG.Name", "ETextureFormat::PF_ASTC_12x12_NORM_RG" },
		{ "PF_ASTC_4x4.DisplayName", "ASTC_4x4" },
		{ "PF_ASTC_4x4.Name", "ETextureFormat::PF_ASTC_4x4" },
		{ "PF_ASTC_4x4_HDR.DisplayName", "ASTC_4x4_HDR" },
		{ "PF_ASTC_4x4_HDR.Name", "ETextureFormat::PF_ASTC_4x4_HDR" },
		{ "PF_ASTC_4x4_NORM_RG.DisplayName", "ASTC_4x4_NORM_RG" },
		{ "PF_ASTC_4x4_NORM_RG.Name", "ETextureFormat::PF_ASTC_4x4_NORM_RG" },
		{ "PF_ASTC_6x6.DisplayName", "ASTC_6x6" },
		{ "PF_ASTC_6x6.Name", "ETextureFormat::PF_ASTC_6x6" },
		{ "PF_ASTC_6x6_HDR.DisplayName", "ASTC_6x6_HDR" },
		{ "PF_ASTC_6x6_HDR.Name", "ETextureFormat::PF_ASTC_6x6_HDR" },
		{ "PF_ASTC_6x6_NORM_RG.DisplayName", "ASTC_6x6_NORM_RG" },
		{ "PF_ASTC_6x6_NORM_RG.Name", "ETextureFormat::PF_ASTC_6x6_NORM_RG" },
		{ "PF_ASTC_8x8.DisplayName", "ASTC_8x8" },
		{ "PF_ASTC_8x8.Name", "ETextureFormat::PF_ASTC_8x8" },
		{ "PF_ASTC_8x8_HDR.DisplayName", "ASTC_8x8_HDR" },
		{ "PF_ASTC_8x8_HDR.Name", "ETextureFormat::PF_ASTC_8x8_HDR" },
		{ "PF_ASTC_8x8_NORM_RG.DisplayName", "ASTC_8x8_NORM_RG" },
		{ "PF_ASTC_8x8_NORM_RG.Name", "ETextureFormat::PF_ASTC_8x8_NORM_RG" },
		{ "PF_ATC_RGB.DisplayName", "ATC_RGB" },
		{ "PF_ATC_RGB.Name", "ETextureFormat::PF_ATC_RGB" },
		{ "PF_ATC_RGBA_E.DisplayName", "ATC_RGBA_E" },
		{ "PF_ATC_RGBA_E.Name", "ETextureFormat::PF_ATC_RGBA_E" },
		{ "PF_ATC_RGBA_I.DisplayName", "ATC_RGBA_I" },
		{ "PF_ATC_RGBA_I.Name", "ETextureFormat::PF_ATC_RGBA_I" },
		{ "PF_B5G5R5A1_UNORM.DisplayName", "B5G5R5A1_UNORM" },
		{ "PF_B5G5R5A1_UNORM.Name", "ETextureFormat::PF_B5G5R5A1_UNORM" },
		{ "PF_B8G8R8A8.DisplayName", "B8G8R8A8" },
		{ "PF_B8G8R8A8.Name", "ETextureFormat::PF_B8G8R8A8" },
		{ "PF_BC4.DisplayName", "BC4" },
		{ "PF_BC4.Name", "ETextureFormat::PF_BC4" },
		{ "PF_BC5.DisplayName", "BC5" },
		{ "PF_BC5.Name", "ETextureFormat::PF_BC5" },
		{ "PF_BC6H.DisplayName", "BC6H" },
		{ "PF_BC6H.Name", "ETextureFormat::PF_BC6H" },
		{ "PF_BC7.DisplayName", "BC7" },
		{ "PF_BC7.Name", "ETextureFormat::PF_BC7" },
		{ "PF_D24.DisplayName", "D24" },
		{ "PF_D24.Name", "ETextureFormat::PF_D24" },
		{ "PF_DepthStencil.DisplayName", "DepthStencil" },
		{ "PF_DepthStencil.Name", "ETextureFormat::PF_DepthStencil" },
		{ "PF_DXT1.DisplayName", "DXT1" },
		{ "PF_DXT1.Name", "ETextureFormat::PF_DXT1" },
		{ "PF_DXT3.DisplayName", "DXT3" },
		{ "PF_DXT3.Name", "ETextureFormat::PF_DXT3" },
		{ "PF_DXT5.DisplayName", "DXT5" },
		{ "PF_DXT5.Name", "ETextureFormat::PF_DXT5" },
		{ "PF_ETC1.DisplayName", "ETC1" },
		{ "PF_ETC1.Name", "ETextureFormat::PF_ETC1" },
		{ "PF_ETC2_R11_EAC.DisplayName", "ETC2_R11_EAC" },
		{ "PF_ETC2_R11_EAC.Name", "ETextureFormat::PF_ETC2_R11_EAC" },
		{ "PF_ETC2_RG11_EAC.DisplayName", "ETC2_RG11_EAC" },
		{ "PF_ETC2_RG11_EAC.Name", "ETextureFormat::PF_ETC2_RG11_EAC" },
		{ "PF_ETC2_RGB.DisplayName", "ETC2_RGB" },
		{ "PF_ETC2_RGB.Name", "ETextureFormat::PF_ETC2_RGB" },
		{ "PF_ETC2_RGBA.DisplayName", "ETC2_RGBA" },
		{ "PF_ETC2_RGBA.Name", "ETextureFormat::PF_ETC2_RGBA" },
		{ "PF_FloatR11G11B10.DisplayName", "FloatR11G11B10" },
		{ "PF_FloatR11G11B10.Name", "ETextureFormat::PF_FloatR11G11B10" },
		{ "PF_FloatRGB.DisplayName", "FloatRGB" },
		{ "PF_FloatRGB.Name", "ETextureFormat::PF_FloatRGB" },
		{ "PF_FloatRGBA.DisplayName", "FloatRGBA" },
		{ "PF_FloatRGBA.Name", "ETextureFormat::PF_FloatRGBA" },
		{ "PF_G16.DisplayName", "G16" },
		{ "PF_G16.Name", "ETextureFormat::PF_G16" },
		{ "PF_G16R16.DisplayName", "G16R16" },
		{ "PF_G16R16.Name", "ETextureFormat::PF_G16R16" },
		{ "PF_G16R16_SNORM.DisplayName", "G16R16_SNORM" },
		{ "PF_G16R16_SNORM.Name", "ETextureFormat::PF_G16R16_SNORM" },
		{ "PF_G16R16F.DisplayName", "G16R16F" },
		{ "PF_G16R16F.Name", "ETextureFormat::PF_G16R16F" },
		{ "PF_G16R16F_FILTER.DisplayName", "G16R16F_FILTER" },
		{ "PF_G16R16F_FILTER.Name", "ETextureFormat::PF_G16R16F_FILTER" },
		{ "PF_G32R32F.DisplayName", "G32R32F" },
		{ "PF_G32R32F.Name", "ETextureFormat::PF_G32R32F" },
		{ "PF_G8.DisplayName", "G8" },
		{ "PF_G8.Name", "ETextureFormat::PF_G8" },
		{ "PF_L8.DisplayName", "L8" },
		{ "PF_L8.Name", "ETextureFormat::PF_L8" },
		{ "PF_MAX.DisplayName", "MAX" },
		{ "PF_MAX.Name", "ETextureFormat::PF_MAX" },
		{ "PF_NV12.DisplayName", "NV12" },
		{ "PF_NV12.Name", "ETextureFormat::PF_NV12" },
		{ "PF_P010.DisplayName", "P010" },
		{ "PF_P010.Name", "ETextureFormat::PF_P010" },
		{ "PF_PLATFORM_HDR_0.DisplayName", "PLATFORM_HDR_0" },
		{ "PF_PLATFORM_HDR_0.Name", "ETextureFormat::PF_PLATFORM_HDR_0" },
		{ "PF_PLATFORM_HDR_1.DisplayName", "PLATFORM_HDR_1" },
		{ "PF_PLATFORM_HDR_1.Name", "ETextureFormat::PF_PLATFORM_HDR_1" },
		{ "PF_PLATFORM_HDR_2.DisplayName", "PLATFORM_HDR_2" },
		{ "PF_PLATFORM_HDR_2.Name", "ETextureFormat::PF_PLATFORM_HDR_2" },
		{ "PF_PVRTC2.DisplayName", "PVRTC2" },
		{ "PF_PVRTC2.Name", "ETextureFormat::PF_PVRTC2" },
		{ "PF_PVRTC4.DisplayName", "PVRTC4" },
		{ "PF_PVRTC4.Name", "ETextureFormat::PF_PVRTC4" },
		{ "PF_R16_SINT.DisplayName", "R16_SINT" },
		{ "PF_R16_SINT.Name", "ETextureFormat::PF_R16_SINT" },
		{ "PF_R16_UINT.DisplayName", "R16_UINT" },
		{ "PF_R16_UINT.Name", "ETextureFormat::PF_R16_UINT" },
		{ "PF_R16F.DisplayName", "R16F" },
		{ "PF_R16F.Name", "ETextureFormat::PF_R16F" },
		{ "PF_R16F_FILTER.DisplayName", "R16F_FILTER" },
		{ "PF_R16F_FILTER.Name", "ETextureFormat::PF_R16F_FILTER" },
		{ "PF_R16G16_UINT.DisplayName", "R16G16_UINT" },
		{ "PF_R16G16_UINT.Name", "ETextureFormat::PF_R16G16_UINT" },
		{ "PF_R16G16B16A16_SINT.DisplayName", "R16G16B16A16_SINT" },
		{ "PF_R16G16B16A16_SINT.Name", "ETextureFormat::PF_R16G16B16A16_SINT" },
		{ "PF_R16G16B16A16_SNORM.DisplayName", "R16G16B16A16_SNORM" },
		{ "PF_R16G16B16A16_SNORM.Name", "ETextureFormat::PF_R16G16B16A16_SNORM" },
		{ "PF_R16G16B16A16_UINT.DisplayName", "R16G16B16A16_UINT" },
		{ "PF_R16G16B16A16_UINT.Name", "ETextureFormat::PF_R16G16B16A16_UINT" },
		{ "PF_R16G16B16A16_UNORM.DisplayName", "R16G16B16A16_UNORM" },
		{ "PF_R16G16B16A16_UNORM.Name", "ETextureFormat::PF_R16G16B16A16_UNORM" },
		{ "PF_R32_FLOAT.DisplayName", "R32_FLOAT" },
		{ "PF_R32_FLOAT.Name", "ETextureFormat::PF_R32_FLOAT" },
		{ "PF_R32_SINT.DisplayName", "R32_SINT" },
		{ "PF_R32_SINT.Name", "ETextureFormat::PF_R32_SINT" },
		{ "PF_R32_UINT.DisplayName", "R32_UINT" },
		{ "PF_R32_UINT.Name", "ETextureFormat::PF_R32_UINT" },
		{ "PF_R32G32_UINT.DisplayName", "R32G32_UINT" },
		{ "PF_R32G32_UINT.Name", "ETextureFormat::PF_R32G32_UINT" },
		{ "PF_R32G32B32_SINT.DisplayName", "R32G32B32_SINT" },
		{ "PF_R32G32B32_SINT.Name", "ETextureFormat::PF_R32G32B32_SINT" },
		{ "PF_R32G32B32_UINT.DisplayName", "R32G32B32_UINT" },
		{ "PF_R32G32B32_UINT.Name", "ETextureFormat::PF_R32G32B32_UINT" },
		{ "PF_R32G32B32A32_UINT.DisplayName", "R32G32B32A32_UINT" },
		{ "PF_R32G32B32A32_UINT.Name", "ETextureFormat::PF_R32G32B32A32_UINT" },
		{ "PF_R32G32B32F.DisplayName", "R32G32B32F" },
		{ "PF_R32G32B32F.Name", "ETextureFormat::PF_R32G32B32F" },
		{ "PF_R5G6B5_UNORM.DisplayName", "R5G6B5_UNORM" },
		{ "PF_R5G6B5_UNORM.Name", "ETextureFormat::PF_R5G6B5_UNORM" },
		{ "PF_R64_UINT.DisplayName", "R64_UINT" },
		{ "PF_R64_UINT.Name", "ETextureFormat::PF_R64_UINT" },
		{ "PF_R8.DisplayName", "R8" },
		{ "PF_R8.Name", "ETextureFormat::PF_R8" },
		{ "PF_R8_SINT.DisplayName", "R8_SINT" },
		{ "PF_R8_SINT.Name", "ETextureFormat::PF_R8_SINT" },
		{ "PF_R8_UINT.DisplayName", "R8_UINT" },
		{ "PF_R8_UINT.Name", "ETextureFormat::PF_R8_UINT" },
		{ "PF_R8G8.DisplayName", "R8G8" },
		{ "PF_R8G8.Name", "ETextureFormat::PF_R8G8" },
		{ "PF_R8G8_UINT.DisplayName", "R8G8_UINT" },
		{ "PF_R8G8_UINT.Name", "ETextureFormat::PF_R8G8_UINT" },
		{ "PF_R8G8B8A8.DisplayName", "R8G8B8A8" },
		{ "PF_R8G8B8A8.Name", "ETextureFormat::PF_R8G8B8A8" },
		{ "PF_R8G8B8A8_SNORM.DisplayName", "R8G8B8A8_SNORM" },
		{ "PF_R8G8B8A8_SNORM.Name", "ETextureFormat::PF_R8G8B8A8_SNORM" },
		{ "PF_R8G8B8A8_UINT.DisplayName", "R8G8B8A8_UINT" },
		{ "PF_R8G8B8A8_UINT.Name", "ETextureFormat::PF_R8G8B8A8_UINT" },
		{ "PF_R9G9B9EXP5.DisplayName", "R9G9B9EXP5" },
		{ "PF_R9G9B9EXP5.Name", "ETextureFormat::PF_R9G9B9EXP5" },
		{ "PF_ShadowDepth.DisplayName", "ShadowDepth" },
		{ "PF_ShadowDepth.Name", "ETextureFormat::PF_ShadowDepth" },
		{ "PF_Unknown.DisplayName", "Unknown" },
		{ "PF_Unknown.Name", "ETextureFormat::PF_Unknown" },
		{ "PF_UYVY.DisplayName", "UYVY" },
		{ "PF_UYVY.Name", "ETextureFormat::PF_UYVY" },
		{ "PF_V8U8.DisplayName", "V8U8" },
		{ "PF_V8U8.Name", "ETextureFormat::PF_V8U8" },
		{ "PF_X24_G8.DisplayName", "X24_G8" },
		{ "PF_X24_G8.Name", "ETextureFormat::PF_X24_G8" },
		{ "PF_XGXR8.DisplayName", "XGXR8" },
		{ "PF_XGXR8.Name", "ETextureFormat::PF_XGXR8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureFormat::PF_Unknown", (int64)ETextureFormat::PF_Unknown },
		{ "ETextureFormat::PF_A32B32G32R32F", (int64)ETextureFormat::PF_A32B32G32R32F },
		{ "ETextureFormat::PF_B8G8R8A8", (int64)ETextureFormat::PF_B8G8R8A8 },
		{ "ETextureFormat::PF_G8", (int64)ETextureFormat::PF_G8 },
		{ "ETextureFormat::PF_G16", (int64)ETextureFormat::PF_G16 },
		{ "ETextureFormat::PF_DXT1", (int64)ETextureFormat::PF_DXT1 },
		{ "ETextureFormat::PF_DXT3", (int64)ETextureFormat::PF_DXT3 },
		{ "ETextureFormat::PF_DXT5", (int64)ETextureFormat::PF_DXT5 },
		{ "ETextureFormat::PF_UYVY", (int64)ETextureFormat::PF_UYVY },
		{ "ETextureFormat::PF_FloatRGB", (int64)ETextureFormat::PF_FloatRGB },
		{ "ETextureFormat::PF_FloatRGBA", (int64)ETextureFormat::PF_FloatRGBA },
		{ "ETextureFormat::PF_DepthStencil", (int64)ETextureFormat::PF_DepthStencil },
		{ "ETextureFormat::PF_ShadowDepth", (int64)ETextureFormat::PF_ShadowDepth },
		{ "ETextureFormat::PF_R32_FLOAT", (int64)ETextureFormat::PF_R32_FLOAT },
		{ "ETextureFormat::PF_G16R16", (int64)ETextureFormat::PF_G16R16 },
		{ "ETextureFormat::PF_G16R16F", (int64)ETextureFormat::PF_G16R16F },
		{ "ETextureFormat::PF_G16R16F_FILTER", (int64)ETextureFormat::PF_G16R16F_FILTER },
		{ "ETextureFormat::PF_G32R32F", (int64)ETextureFormat::PF_G32R32F },
		{ "ETextureFormat::PF_A2B10G10R10", (int64)ETextureFormat::PF_A2B10G10R10 },
		{ "ETextureFormat::PF_A16B16G16R16", (int64)ETextureFormat::PF_A16B16G16R16 },
		{ "ETextureFormat::PF_D24", (int64)ETextureFormat::PF_D24 },
		{ "ETextureFormat::PF_R16F", (int64)ETextureFormat::PF_R16F },
		{ "ETextureFormat::PF_R16F_FILTER", (int64)ETextureFormat::PF_R16F_FILTER },
		{ "ETextureFormat::PF_BC5", (int64)ETextureFormat::PF_BC5 },
		{ "ETextureFormat::PF_V8U8", (int64)ETextureFormat::PF_V8U8 },
		{ "ETextureFormat::PF_A1", (int64)ETextureFormat::PF_A1 },
		{ "ETextureFormat::PF_FloatR11G11B10", (int64)ETextureFormat::PF_FloatR11G11B10 },
		{ "ETextureFormat::PF_A8", (int64)ETextureFormat::PF_A8 },
		{ "ETextureFormat::PF_R32_UINT", (int64)ETextureFormat::PF_R32_UINT },
		{ "ETextureFormat::PF_R32_SINT", (int64)ETextureFormat::PF_R32_SINT },
		{ "ETextureFormat::PF_PVRTC2", (int64)ETextureFormat::PF_PVRTC2 },
		{ "ETextureFormat::PF_PVRTC4", (int64)ETextureFormat::PF_PVRTC4 },
		{ "ETextureFormat::PF_R16_UINT", (int64)ETextureFormat::PF_R16_UINT },
		{ "ETextureFormat::PF_R16_SINT", (int64)ETextureFormat::PF_R16_SINT },
		{ "ETextureFormat::PF_R16G16B16A16_UINT", (int64)ETextureFormat::PF_R16G16B16A16_UINT },
		{ "ETextureFormat::PF_R16G16B16A16_SINT", (int64)ETextureFormat::PF_R16G16B16A16_SINT },
		{ "ETextureFormat::PF_R5G6B5_UNORM", (int64)ETextureFormat::PF_R5G6B5_UNORM },
		{ "ETextureFormat::PF_R8G8B8A8", (int64)ETextureFormat::PF_R8G8B8A8 },
		{ "ETextureFormat::PF_A8R8G8B8", (int64)ETextureFormat::PF_A8R8G8B8 },
		{ "ETextureFormat::PF_BC4", (int64)ETextureFormat::PF_BC4 },
		{ "ETextureFormat::PF_R8G8", (int64)ETextureFormat::PF_R8G8 },
		{ "ETextureFormat::PF_ATC_RGB", (int64)ETextureFormat::PF_ATC_RGB },
		{ "ETextureFormat::PF_ATC_RGBA_E", (int64)ETextureFormat::PF_ATC_RGBA_E },
		{ "ETextureFormat::PF_ATC_RGBA_I", (int64)ETextureFormat::PF_ATC_RGBA_I },
		{ "ETextureFormat::PF_X24_G8", (int64)ETextureFormat::PF_X24_G8 },
		{ "ETextureFormat::PF_ETC1", (int64)ETextureFormat::PF_ETC1 },
		{ "ETextureFormat::PF_ETC2_RGB", (int64)ETextureFormat::PF_ETC2_RGB },
		{ "ETextureFormat::PF_ETC2_RGBA", (int64)ETextureFormat::PF_ETC2_RGBA },
		{ "ETextureFormat::PF_R32G32B32A32_UINT", (int64)ETextureFormat::PF_R32G32B32A32_UINT },
		{ "ETextureFormat::PF_R16G16_UINT", (int64)ETextureFormat::PF_R16G16_UINT },
		{ "ETextureFormat::PF_ASTC_4x4", (int64)ETextureFormat::PF_ASTC_4x4 },
		{ "ETextureFormat::PF_ASTC_6x6", (int64)ETextureFormat::PF_ASTC_6x6 },
		{ "ETextureFormat::PF_ASTC_8x8", (int64)ETextureFormat::PF_ASTC_8x8 },
		{ "ETextureFormat::PF_ASTC_10x10", (int64)ETextureFormat::PF_ASTC_10x10 },
		{ "ETextureFormat::PF_ASTC_12x12", (int64)ETextureFormat::PF_ASTC_12x12 },
		{ "ETextureFormat::PF_BC6H", (int64)ETextureFormat::PF_BC6H },
		{ "ETextureFormat::PF_BC7", (int64)ETextureFormat::PF_BC7 },
		{ "ETextureFormat::PF_R8_UINT", (int64)ETextureFormat::PF_R8_UINT },
		{ "ETextureFormat::PF_L8", (int64)ETextureFormat::PF_L8 },
		{ "ETextureFormat::PF_XGXR8", (int64)ETextureFormat::PF_XGXR8 },
		{ "ETextureFormat::PF_R8G8B8A8_UINT", (int64)ETextureFormat::PF_R8G8B8A8_UINT },
		{ "ETextureFormat::PF_R8G8B8A8_SNORM", (int64)ETextureFormat::PF_R8G8B8A8_SNORM },
		{ "ETextureFormat::PF_R16G16B16A16_UNORM", (int64)ETextureFormat::PF_R16G16B16A16_UNORM },
		{ "ETextureFormat::PF_R16G16B16A16_SNORM", (int64)ETextureFormat::PF_R16G16B16A16_SNORM },
		{ "ETextureFormat::PF_PLATFORM_HDR_0", (int64)ETextureFormat::PF_PLATFORM_HDR_0 },
		{ "ETextureFormat::PF_PLATFORM_HDR_1", (int64)ETextureFormat::PF_PLATFORM_HDR_1 },
		{ "ETextureFormat::PF_PLATFORM_HDR_2", (int64)ETextureFormat::PF_PLATFORM_HDR_2 },
		{ "ETextureFormat::PF_NV12", (int64)ETextureFormat::PF_NV12 },
		{ "ETextureFormat::PF_R32G32_UINT", (int64)ETextureFormat::PF_R32G32_UINT },
		{ "ETextureFormat::PF_ETC2_R11_EAC", (int64)ETextureFormat::PF_ETC2_R11_EAC },
		{ "ETextureFormat::PF_ETC2_RG11_EAC", (int64)ETextureFormat::PF_ETC2_RG11_EAC },
		{ "ETextureFormat::PF_R8", (int64)ETextureFormat::PF_R8 },
		{ "ETextureFormat::PF_B5G5R5A1_UNORM", (int64)ETextureFormat::PF_B5G5R5A1_UNORM },
		{ "ETextureFormat::PF_ASTC_4x4_HDR", (int64)ETextureFormat::PF_ASTC_4x4_HDR },
		{ "ETextureFormat::PF_ASTC_6x6_HDR", (int64)ETextureFormat::PF_ASTC_6x6_HDR },
		{ "ETextureFormat::PF_ASTC_8x8_HDR", (int64)ETextureFormat::PF_ASTC_8x8_HDR },
		{ "ETextureFormat::PF_ASTC_10x10_HDR", (int64)ETextureFormat::PF_ASTC_10x10_HDR },
		{ "ETextureFormat::PF_ASTC_12x12_HDR", (int64)ETextureFormat::PF_ASTC_12x12_HDR },
		{ "ETextureFormat::PF_G16R16_SNORM", (int64)ETextureFormat::PF_G16R16_SNORM },
		{ "ETextureFormat::PF_R8G8_UINT", (int64)ETextureFormat::PF_R8G8_UINT },
		{ "ETextureFormat::PF_R32G32B32_UINT", (int64)ETextureFormat::PF_R32G32B32_UINT },
		{ "ETextureFormat::PF_R32G32B32_SINT", (int64)ETextureFormat::PF_R32G32B32_SINT },
		{ "ETextureFormat::PF_R32G32B32F", (int64)ETextureFormat::PF_R32G32B32F },
		{ "ETextureFormat::PF_R8_SINT", (int64)ETextureFormat::PF_R8_SINT },
		{ "ETextureFormat::PF_R64_UINT", (int64)ETextureFormat::PF_R64_UINT },
		{ "ETextureFormat::PF_R9G9B9EXP5", (int64)ETextureFormat::PF_R9G9B9EXP5 },
		{ "ETextureFormat::PF_P010", (int64)ETextureFormat::PF_P010 },
		{ "ETextureFormat::PF_ASTC_4x4_NORM_RG", (int64)ETextureFormat::PF_ASTC_4x4_NORM_RG },
		{ "ETextureFormat::PF_ASTC_6x6_NORM_RG", (int64)ETextureFormat::PF_ASTC_6x6_NORM_RG },
		{ "ETextureFormat::PF_ASTC_8x8_NORM_RG", (int64)ETextureFormat::PF_ASTC_8x8_NORM_RG },
		{ "ETextureFormat::PF_ASTC_10x10_NORM_RG", (int64)ETextureFormat::PF_ASTC_10x10_NORM_RG },
		{ "ETextureFormat::PF_ASTC_12x12_NORM_RG", (int64)ETextureFormat::PF_ASTC_12x12_NORM_RG },
		{ "ETextureFormat::PF_MAX", (int64)ETextureFormat::PF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EstapeTools,
	nullptr,
	"ETextureFormat",
	"ETextureFormat",
	Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EstapeTools_ETextureFormat()
{
	if (!Z_Registration_Info_UEnum_ETextureFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureFormat.InnerSingleton, Z_Construct_UEnum_EstapeTools_ETextureFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureFormat.InnerSingleton;
}
// End Enum ETextureFormat

// Begin Class UEstapeToolsBPLibrary Function ArrayColorToArrayLinearColor
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics
{
	struct EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms
	{
		TArray<FColor> Colors;
		TArray<FLinearColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert an array of Linear Colors to an array of Colors.\n" },
#endif
		{ "CompactNodeTitle", "ToArrayLinearColor" },
		{ "Keywords", "Linear Colors convert parse" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an array of Linear Colors to an array of Colors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ArrayColorToArrayLinearColor", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::EstapeToolsBPLibrary_eventArrayColorToArrayLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execArrayColorToArrayLinearColor)
{
	P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FLinearColor>*)Z_Param__Result=UEstapeToolsBPLibrary::ArrayColorToArrayLinearColor(Z_Param_Out_Colors);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ArrayColorToArrayLinearColor

// Begin Class UEstapeToolsBPLibrary Function ArrayLinearColorToArrayColor
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics
{
	struct EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms
	{
		TArray<FLinearColor> LinearColors;
		TArray<FColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert an array of Colors to an array of Linear Colors.\n" },
#endif
		{ "CompactNodeTitle", "ToArrayColor" },
		{ "Keywords", "Linear Colors convert parse" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an array of Colors to an array of Linear Colors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinearColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_Inner = { "LinearColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors = { "LinearColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms, LinearColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearColors_MetaData), NewProp_LinearColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_LinearColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ArrayLinearColorToArrayColor", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::EstapeToolsBPLibrary_eventArrayLinearColorToArrayColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execArrayLinearColorToArrayColor)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_LinearColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FColor>*)Z_Param__Result=UEstapeToolsBPLibrary::ArrayLinearColorToArrayColor(Z_Param_Out_LinearColors);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ArrayLinearColorToArrayColor

// Begin Class UEstapeToolsBPLibrary Function BytesToColors
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics
{
	struct EstapeToolsBPLibrary_eventBytesToColors_Parms
	{
		TArray<uint8> Bytes;
		TArray<FColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert Bytes array to Color array (8-Bit).\n" },
#endif
		{ "CompactNodeTitle", "BytesToColors" },
		{ "Keywords", "Colors Bytes Array Texture" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Bytes array to Color array (8-Bit)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToColors_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "BytesToColors", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::EstapeToolsBPLibrary_eventBytesToColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::EstapeToolsBPLibrary_eventBytesToColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execBytesToColors)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FColor>*)Z_Param__Result=UEstapeToolsBPLibrary::BytesToColors(Z_Param_Out_Bytes);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function BytesToColors

// Begin Class UEstapeToolsBPLibrary Function BytesToTexture2D
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics
{
	struct EstapeToolsBPLibrary_eventBytesToTexture2D_Parms
	{
		TArray<uint8> BytesArray;
		UTexture2D* TextureLoaded;
		int32 Width;
		int32 Height;
		ETextureFormat TextureFormat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert Bytes to Texture2D.\n" },
#endif
		{ "Keywords", "Convert Bytes Texture2D" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Bytes to Texture2D." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BytesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BytesArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureLoaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureFormat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_BytesArray_Inner = { "BytesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_BytesArray = { "BytesArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToTexture2D_Parms, BytesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesArray_MetaData), NewProp_BytesArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_TextureLoaded = { "TextureLoaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToTexture2D_Parms, TextureLoaded), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToTexture2D_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToTexture2D_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_TextureFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_TextureFormat = { "TextureFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventBytesToTexture2D_Parms, TextureFormat), Z_Construct_UEnum_EstapeTools_ETextureFormat, METADATA_PARAMS(0, nullptr) }; // 667074390
void Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeToolsBPLibrary_eventBytesToTexture2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeToolsBPLibrary_eventBytesToTexture2D_Parms), &Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_BytesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_BytesArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_TextureLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_TextureFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_TextureFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "BytesToTexture2D", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::EstapeToolsBPLibrary_eventBytesToTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::EstapeToolsBPLibrary_eventBytesToTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execBytesToTexture2D)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_BytesArray);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_TextureLoaded);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_ENUM(ETextureFormat,Z_Param_TextureFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeToolsBPLibrary::BytesToTexture2D(Z_Param_Out_BytesArray,P_ARG_GC_BARRIER(Z_Param_Out_TextureLoaded),Z_Param_Width,Z_Param_Height,ETextureFormat(Z_Param_TextureFormat));
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function BytesToTexture2D

// Begin Class UEstapeToolsBPLibrary Function ColorsToBytes
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics
{
	struct EstapeToolsBPLibrary_eventColorsToBytes_Parms
	{
		TArray<FColor> Colors;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert Color array (8-Bit) to Bytes array.\n" },
#endif
		{ "CompactNodeTitle", "ColorsToBytes" },
		{ "Keywords", "Colors Bytes Array Texture" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Color array (8-Bit) to Bytes array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsToBytes_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ColorsToBytes", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::EstapeToolsBPLibrary_eventColorsToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::EstapeToolsBPLibrary_eventColorsToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execColorsToBytes)
{
	P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEstapeToolsBPLibrary::ColorsToBytes(Z_Param_Out_Colors);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ColorsToBytes

// Begin Class UEstapeToolsBPLibrary Function ConvertBytesToString
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics
{
	struct EstapeToolsBPLibrary_eventConvertBytesToString_Parms
	{
		TArray<uint8> input;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert bytes array to string data.\n" },
#endif
		{ "CompactNodeTitle", "BytesToString" },
		{ "KeyWords", "parse, convertion, string, bytes" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert bytes array to string data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_input_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertBytesToString_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertBytesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ConvertBytesToString", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::EstapeToolsBPLibrary_eventConvertBytesToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::EstapeToolsBPLibrary_eventConvertBytesToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execConvertBytesToString)
{
	P_GET_TARRAY(uint8,Z_Param_input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::ConvertBytesToString(Z_Param_input);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ConvertBytesToString

// Begin Class UEstapeToolsBPLibrary Function ConvertStringToBytes
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics
{
	struct EstapeToolsBPLibrary_eventConvertStringToBytes_Parms
	{
		FString input;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert String data to bytes array.\n" },
#endif
		{ "CompactNodeTitle", "StringToBytes" },
		{ "KeyWords", "parse, convertion, string, bytes" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert String data to bytes array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_input;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertStringToBytes_Parms, input), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventConvertStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ConvertStringToBytes", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::EstapeToolsBPLibrary_eventConvertStringToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::EstapeToolsBPLibrary_eventConvertStringToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execConvertStringToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEstapeToolsBPLibrary::ConvertStringToBytes(Z_Param_input);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ConvertStringToBytes

// Begin Class UEstapeToolsBPLibrary Function DecimalToHexadecimal
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics
{
	struct EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms
	{
		int32 Decimal;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a decimal value into an integer represented as a hexadecimal string.\n" },
#endif
		{ "CompactNodeTitle", "DecToHex" },
		{ "Keywords", "Decimal Hexadecimal Dec Hex" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a decimal value into an integer represented as a hexadecimal string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Decimal;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_Decimal = { "Decimal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms, Decimal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_Decimal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "DecimalToHexadecimal", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::EstapeToolsBPLibrary_eventDecimalToHexadecimal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execDecimalToHexadecimal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Decimal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::DecimalToHexadecimal(Z_Param_Decimal);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function DecimalToHexadecimal

// Begin Class UEstapeToolsBPLibrary Function GetNewLine
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics
{
	struct EstapeToolsBPLibrary_eventGetNewLine_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node inserts a new line by moving the remaining string value to the line below.\n" },
#endif
		{ "CompactNodeTitle", "GewNewLine" },
		{ "Keywords", "Get New Line" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node inserts a new line by moving the remaining string value to the line below." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventGetNewLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "GetNewLine", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::EstapeToolsBPLibrary_eventGetNewLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::EstapeToolsBPLibrary_eventGetNewLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execGetNewLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::GetNewLine();
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function GetNewLine

// Begin Class UEstapeToolsBPLibrary Function HexadecimalToDecimal
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics
{
	struct EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms
	{
		FString HexString;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a hexadecimal string value into a decimal integer.\n" },
#endif
		{ "CompactNodeTitle", "HexToDec" },
		{ "Keywords", "Hexadecimal Decimal Hex Dec" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a hexadecimal string value into a decimal integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms, HexString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexString_MetaData), NewProp_HexString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_HexString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "HexadecimalToDecimal", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::EstapeToolsBPLibrary_eventHexadecimalToDecimal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execHexadecimalToDecimal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEstapeToolsBPLibrary::HexadecimalToDecimal(Z_Param_HexString);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function HexadecimalToDecimal

// Begin Class UEstapeToolsBPLibrary Function Texture2DToBytes
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics
{
	struct EstapeToolsBPLibrary_eventTexture2DToBytes_Parms
	{
		UTexture2D* Texture;
		TArray<uint8> TextureData;
		int32 Width;
		int32 Height;
		ETextureFormat TextureFormat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert Texture2D to Bytes.\n" },
#endif
		{ "Keywords", "Convert Bytes Texture2D" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Texture2D to Bytes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureFormat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DToBytes_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DToBytes_Parms, TextureData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DToBytes_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DToBytes_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureFormat = { "TextureFormat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DToBytes_Parms, TextureFormat), Z_Construct_UEnum_EstapeTools_ETextureFormat, METADATA_PARAMS(0, nullptr) }; // 667074390
void Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeToolsBPLibrary_eventTexture2DToBytes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeToolsBPLibrary_eventTexture2DToBytes_Parms), &Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_TextureFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "Texture2DToBytes", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::EstapeToolsBPLibrary_eventTexture2DToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::EstapeToolsBPLibrary_eventTexture2DToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execTexture2DToBytes)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_TextureData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_GET_ENUM_REF(ETextureFormat,Z_Param_Out_TextureFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeToolsBPLibrary::Texture2DToBytes(Z_Param_Texture,Z_Param_Out_TextureData,Z_Param_Out_Width,Z_Param_Out_Height,(ETextureFormat&)(Z_Param_Out_TextureFormat));
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function Texture2DToBytes

// Begin Class UEstapeToolsBPLibrary
void UEstapeToolsBPLibrary::StaticRegisterNativesUEstapeToolsBPLibrary()
{
	UClass* Class = UEstapeToolsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ArrayColorToArrayLinearColor", &UEstapeToolsBPLibrary::execArrayColorToArrayLinearColor },
		{ "ArrayLinearColorToArrayColor", &UEstapeToolsBPLibrary::execArrayLinearColorToArrayColor },
		{ "BytesToColors", &UEstapeToolsBPLibrary::execBytesToColors },
		{ "BytesToTexture2D", &UEstapeToolsBPLibrary::execBytesToTexture2D },
		{ "ColorsToBytes", &UEstapeToolsBPLibrary::execColorsToBytes },
		{ "ConvertBytesToString", &UEstapeToolsBPLibrary::execConvertBytesToString },
		{ "ConvertStringToBytes", &UEstapeToolsBPLibrary::execConvertStringToBytes },
		{ "DecimalToHexadecimal", &UEstapeToolsBPLibrary::execDecimalToHexadecimal },
		{ "GetNewLine", &UEstapeToolsBPLibrary::execGetNewLine },
		{ "HexadecimalToDecimal", &UEstapeToolsBPLibrary::execHexadecimalToDecimal },
		{ "Texture2DToBytes", &UEstapeToolsBPLibrary::execTexture2DToBytes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEstapeToolsBPLibrary);
UClass* Z_Construct_UClass_UEstapeToolsBPLibrary_NoRegister()
{
	return UEstapeToolsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UEstapeToolsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EstapeToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor, "ArrayColorToArrayLinearColor" }, // 2877409321
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor, "ArrayLinearColorToArrayColor" }, // 3944431486
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors, "BytesToColors" }, // 3499322742
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToTexture2D, "BytesToTexture2D" }, // 259184652
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes, "ColorsToBytes" }, // 2840225786
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString, "ConvertBytesToString" }, // 2557724210
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes, "ConvertStringToBytes" }, // 2126026406
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal, "DecimalToHexadecimal" }, // 2307546783
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine, "GetNewLine" }, // 3727302882
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal, "HexadecimalToDecimal" }, // 3904367630
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DToBytes, "Texture2DToBytes" }, // 1789346310
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEstapeToolsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EstapeTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::ClassParams = {
	&UEstapeToolsBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEstapeToolsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UEstapeToolsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEstapeToolsBPLibrary.OuterSingleton, Z_Construct_UClass_UEstapeToolsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEstapeToolsBPLibrary.OuterSingleton;
}
template<> ESTAPETOOLS_API UClass* StaticClass<UEstapeToolsBPLibrary>()
{
	return UEstapeToolsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEstapeToolsBPLibrary);
UEstapeToolsBPLibrary::~UEstapeToolsBPLibrary() {}
// End Class UEstapeToolsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogButtons_StaticEnum, TEXT("EDialogButtons"), &Z_Registration_Info_UEnum_EDialogButtons, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3680733245U) },
		{ EDialogIcon_StaticEnum, TEXT("EDialogIcon"), &Z_Registration_Info_UEnum_EDialogIcon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 593296904U) },
		{ EDialogButtonClicked_StaticEnum, TEXT("EDialogButtonClicked"), &Z_Registration_Info_UEnum_EDialogButtonClicked, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1096604047U) },
		{ ETextureFormat_StaticEnum, TEXT("ETextureFormat"), &Z_Registration_Info_UEnum_ETextureFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 667074390U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEstapeToolsBPLibrary, UEstapeToolsBPLibrary::StaticClass, TEXT("UEstapeToolsBPLibrary"), &Z_Registration_Info_UClass_UEstapeToolsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEstapeToolsBPLibrary), 658211546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_4166707137(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
