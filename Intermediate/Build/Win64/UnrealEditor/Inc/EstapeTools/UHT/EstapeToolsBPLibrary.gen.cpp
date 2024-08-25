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
		{ "Category", "EstapeTools|Texture" },
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
		{ "Category", "EstapeTools|Texture" },
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

// Begin Class UEstapeToolsBPLibrary Function ColorsParseTexture2D
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics
{
	struct EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms
	{
		TArray<FColor> Colors;
		int32 Width;
		int32 Height;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert an array of colors in format of UE5 Texture to a texture.\n" },
#endif
		{ "Keywords", "Texture Colors convert parse" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an array of colors in format of UE5 Texture to a texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ColorsParseTexture2D", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::EstapeToolsBPLibrary_eventColorsParseTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execColorsParseTexture2D)
{
	P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UEstapeToolsBPLibrary::ColorsParseTexture2D(Z_Param_Out_Colors,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ColorsParseTexture2D

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

// Begin Class UEstapeToolsBPLibrary Function DecToHex
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics
{
	struct EstapeToolsBPLibrary_eventDecToHex_Parms
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
		{ "Keywords", "Decimal Hexadecimal" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_Decimal = { "Decimal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecToHex_Parms, Decimal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventDecToHex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_Decimal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "DecToHex", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::EstapeToolsBPLibrary_eventDecToHex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::EstapeToolsBPLibrary_eventDecToHex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execDecToHex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Decimal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEstapeToolsBPLibrary::DecToHex(Z_Param_Decimal);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function DecToHex

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

// Begin Class UEstapeToolsBPLibrary Function HexToDec
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics
{
	struct EstapeToolsBPLibrary_eventHexToDec_Parms
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
		{ "Keywords", "Hexadecimal Decimal" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexToDec_Parms, HexString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexString_MetaData), NewProp_HexString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventHexToDec_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_HexString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "HexToDec", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::EstapeToolsBPLibrary_eventHexToDec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::EstapeToolsBPLibrary_eventHexToDec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execHexToDec)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UEstapeToolsBPLibrary::HexToDec(Z_Param_HexString);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function HexToDec

// Begin Class UEstapeToolsBPLibrary Function ReadCLUTData
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics
{
	struct EstapeToolsBPLibrary_eventReadCLUTData_Parms
	{
		TArray<uint8> RawData;
		int32 LenData;
		TArray<FLinearColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Read data generated by the 'Write CLUT Data' node or similar back to a linear color format\n" },
#endif
		{ "Keywords", "CLUT color" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read data generated by the 'Write CLUT Data' node or similar back to a linear color format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LenData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventReadCLUTData_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_LenData = { "LenData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventReadCLUTData_Parms, LenData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventReadCLUTData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_RawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_LenData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "ReadCLUTData", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::EstapeToolsBPLibrary_eventReadCLUTData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::EstapeToolsBPLibrary_eventReadCLUTData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execReadCLUTData)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
	P_GET_PROPERTY(FIntProperty,Z_Param_LenData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FLinearColor>*)Z_Param__Result=UEstapeToolsBPLibrary::ReadCLUTData(Z_Param_Out_RawData,Z_Param_LenData);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function ReadCLUTData

// Begin Class UEstapeToolsBPLibrary Function Texture2DParseColors
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics
{
	struct EstapeToolsBPLibrary_eventTexture2DParseColors_Parms
	{
		UTexture2D* Texture;
		TArray<FColor> OutColors;
		int32 Width;
		int32 Height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a texture to an array of colors.\n" },
#endif
		{ "Keywords", "Texture Colors convert parse" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a texture to an array of colors." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutColors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DParseColors_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_OutColors_Inner = { "OutColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_OutColors = { "OutColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DParseColors_Parms, OutColors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DParseColors_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventTexture2DParseColors_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EstapeToolsBPLibrary_eventTexture2DParseColors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EstapeToolsBPLibrary_eventTexture2DParseColors_Parms), &Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_OutColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_OutColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "Texture2DParseColors", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::EstapeToolsBPLibrary_eventTexture2DParseColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::EstapeToolsBPLibrary_eventTexture2DParseColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execTexture2DParseColors)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_OutColors);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEstapeToolsBPLibrary::Texture2DParseColors(Z_Param_Texture,Z_Param_Out_OutColors,Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function Texture2DParseColors

// Begin Class UEstapeToolsBPLibrary Function WriteCLUTData
struct Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics
{
	struct EstapeToolsBPLibrary_eventWriteCLUTData_Parms
	{
		TArray<FLinearColor> Colors;
		int32 LenData;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EstapeTools|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert). WARNING: Compress a higher image quality may result in a loss of color information (banding).\n" },
#endif
		{ "Keywords", "CLUT color" },
		{ "ModuleRelativePath", "Public/EstapeToolsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compress Linear Color data into a 16-byte format. This node enables the creation of a custom CLUT (Color Lookup Table), a technique commonly used in 32-bit consoles. (Colors will be multiplied by 255 before convert). WARNING: Compress a higher image quality may result in a loss of color information (banding)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LenData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventWriteCLUTData_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_LenData = { "LenData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventWriteCLUTData_Parms, LenData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EstapeToolsBPLibrary_eventWriteCLUTData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_LenData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEstapeToolsBPLibrary, nullptr, "WriteCLUTData", nullptr, nullptr, Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::EstapeToolsBPLibrary_eventWriteCLUTData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::EstapeToolsBPLibrary_eventWriteCLUTData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEstapeToolsBPLibrary::execWriteCLUTData)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LenData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEstapeToolsBPLibrary::WriteCLUTData(Z_Param_Out_Colors,Z_Param_Out_LenData);
	P_NATIVE_END;
}
// End Class UEstapeToolsBPLibrary Function WriteCLUTData

// Begin Class UEstapeToolsBPLibrary
void UEstapeToolsBPLibrary::StaticRegisterNativesUEstapeToolsBPLibrary()
{
	UClass* Class = UEstapeToolsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ArrayColorToArrayLinearColor", &UEstapeToolsBPLibrary::execArrayColorToArrayLinearColor },
		{ "ArrayLinearColorToArrayColor", &UEstapeToolsBPLibrary::execArrayLinearColorToArrayColor },
		{ "BytesToColors", &UEstapeToolsBPLibrary::execBytesToColors },
		{ "ColorsParseTexture2D", &UEstapeToolsBPLibrary::execColorsParseTexture2D },
		{ "ColorsToBytes", &UEstapeToolsBPLibrary::execColorsToBytes },
		{ "DecToHex", &UEstapeToolsBPLibrary::execDecToHex },
		{ "GetNewLine", &UEstapeToolsBPLibrary::execGetNewLine },
		{ "HexToDec", &UEstapeToolsBPLibrary::execHexToDec },
		{ "ReadCLUTData", &UEstapeToolsBPLibrary::execReadCLUTData },
		{ "Texture2DParseColors", &UEstapeToolsBPLibrary::execTexture2DParseColors },
		{ "WriteCLUTData", &UEstapeToolsBPLibrary::execWriteCLUTData },
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
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayColorToArrayLinearColor, "ArrayColorToArrayLinearColor" }, // 3627453979
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ArrayLinearColorToArrayColor, "ArrayLinearColorToArrayColor" }, // 1208400383
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_BytesToColors, "BytesToColors" }, // 1247536535
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsParseTexture2D, "ColorsParseTexture2D" }, // 2890096019
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes, "ColorsToBytes" }, // 3691078666
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_DecToHex, "DecToHex" }, // 812159379
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine, "GetNewLine" }, // 2362747976
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_HexToDec, "HexToDec" }, // 4245788583
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ReadCLUTData, "ReadCLUTData" }, // 3094371412
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_Texture2DParseColors, "Texture2DParseColors" }, // 940030587
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_WriteCLUTData, "WriteCLUTData" }, // 3887913739
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
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEstapeToolsBPLibrary, UEstapeToolsBPLibrary::StaticClass, TEXT("UEstapeToolsBPLibrary"), &Z_Registration_Info_UClass_UEstapeToolsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEstapeToolsBPLibrary), 2016066120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_967412683(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
