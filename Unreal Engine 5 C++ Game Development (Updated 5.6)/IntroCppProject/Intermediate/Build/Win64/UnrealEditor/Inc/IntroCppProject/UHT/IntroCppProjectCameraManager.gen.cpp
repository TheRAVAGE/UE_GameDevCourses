// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroCppProjectCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntroCppProjectCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectCameraManager();
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroCppProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroCppProjectCameraManager ********************************************
void AIntroCppProjectCameraManager::StaticRegisterNativesAIntroCppProjectCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroCppProjectCameraManager;
UClass* AIntroCppProjectCameraManager::GetPrivateStaticClass()
{
	using TClass = AIntroCppProjectCameraManager;
	if (!Z_Registration_Info_UClass_AIntroCppProjectCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntroCppProjectCameraManager"),
			Z_Registration_Info_UClass_AIntroCppProjectCameraManager.InnerSingleton,
			StaticRegisterNativesAIntroCppProjectCameraManager,
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
	return Z_Registration_Info_UClass_AIntroCppProjectCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroCppProjectCameraManager_NoRegister()
{
	return AIntroCppProjectCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroCppProjectCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "IntroCppProjectCameraManager.h" },
		{ "ModuleRelativePath", "IntroCppProjectCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroCppProjectCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIntroCppProjectCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroCppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppProjectCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroCppProjectCameraManager_Statics::ClassParams = {
	&AIntroCppProjectCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppProjectCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroCppProjectCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroCppProjectCameraManager()
{
	if (!Z_Registration_Info_UClass_AIntroCppProjectCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroCppProjectCameraManager.OuterSingleton, Z_Construct_UClass_AIntroCppProjectCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroCppProjectCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroCppProjectCameraManager);
AIntroCppProjectCameraManager::~AIntroCppProjectCameraManager() {}
// ********** End Class AIntroCppProjectCameraManager **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h__Script_IntroCppProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroCppProjectCameraManager, AIntroCppProjectCameraManager::StaticClass, TEXT("AIntroCppProjectCameraManager"), &Z_Registration_Info_UClass_AIntroCppProjectCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroCppProjectCameraManager), 3491939441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h__Script_IntroCppProject_2767390568(TEXT("/Script/IntroCppProject"),
	Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h__Script_IntroCppProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h__Script_IntroCppProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
