// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroCppProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntroCppProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectGameMode();
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroCppProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroCppProjectGameMode *************************************************
void AIntroCppProjectGameMode::StaticRegisterNativesAIntroCppProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroCppProjectGameMode;
UClass* AIntroCppProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AIntroCppProjectGameMode;
	if (!Z_Registration_Info_UClass_AIntroCppProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntroCppProjectGameMode"),
			Z_Registration_Info_UClass_AIntroCppProjectGameMode.InnerSingleton,
			StaticRegisterNativesAIntroCppProjectGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AIntroCppProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroCppProjectGameMode_NoRegister()
{
	return AIntroCppProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroCppProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IntroCppProjectGameMode.h" },
		{ "ModuleRelativePath", "IntroCppProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroCppProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIntroCppProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroCppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroCppProjectGameMode_Statics::ClassParams = {
	&AIntroCppProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroCppProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroCppProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AIntroCppProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroCppProjectGameMode.OuterSingleton, Z_Construct_UClass_AIntroCppProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroCppProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroCppProjectGameMode);
AIntroCppProjectGameMode::~AIntroCppProjectGameMode() {}
// ********** End Class AIntroCppProjectGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h__Script_IntroCppProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroCppProjectGameMode, AIntroCppProjectGameMode::StaticClass, TEXT("AIntroCppProjectGameMode"), &Z_Registration_Info_UClass_AIntroCppProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroCppProjectGameMode), 2761213217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h__Script_IntroCppProject_1898342758(TEXT("/Script/IntroCppProject"),
	Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h__Script_IntroCppProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h__Script_IntroCppProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
