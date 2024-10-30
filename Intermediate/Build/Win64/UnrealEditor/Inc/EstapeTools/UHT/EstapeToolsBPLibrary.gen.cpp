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

// Begin Class UEstapeToolsBPLibrary
void UEstapeToolsBPLibrary::StaticRegisterNativesUEstapeToolsBPLibrary()
{
	UClass* Class = UEstapeToolsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ArrayColorToArrayLinearColor", &UEstapeToolsBPLibrary::execArrayColorToArrayLinearColor },
		{ "ArrayLinearColorToArrayColor", &UEstapeToolsBPLibrary::execArrayLinearColorToArrayColor },
		{ "BytesToColors", &UEstapeToolsBPLibrary::execBytesToColors },
		{ "ColorsToBytes", &UEstapeToolsBPLibrary::execColorsToBytes },
		{ "ConvertBytesToString", &UEstapeToolsBPLibrary::execConvertBytesToString },
		{ "ConvertStringToBytes", &UEstapeToolsBPLibrary::execConvertStringToBytes },
		{ "DecimalToHexadecimal", &UEstapeToolsBPLibrary::execDecimalToHexadecimal },
		{ "GetNewLine", &UEstapeToolsBPLibrary::execGetNewLine },
		{ "HexadecimalToDecimal", &UEstapeToolsBPLibrary::execHexadecimalToDecimal },
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
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ColorsToBytes, "ColorsToBytes" }, // 2840225786
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertBytesToString, "ConvertBytesToString" }, // 2557724210
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_ConvertStringToBytes, "ConvertStringToBytes" }, // 2126026406
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_DecimalToHexadecimal, "DecimalToHexadecimal" }, // 2307546783
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_GetNewLine, "GetNewLine" }, // 3727302882
		{ &Z_Construct_UFunction_UEstapeToolsBPLibrary_HexadecimalToDecimal, "HexadecimalToDecimal" }, // 3904367630
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
		{ Z_Construct_UClass_UEstapeToolsBPLibrary, UEstapeToolsBPLibrary::StaticClass, TEXT("UEstapeToolsBPLibrary"), &Z_Registration_Info_UClass_UEstapeToolsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEstapeToolsBPLibrary), 2413919463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_3908726401(TEXT("/Script/EstapeTools"),
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EstapeToolsProject_Plugins_EstapeTools_Source_EstapeTools_Public_EstapeToolsBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
