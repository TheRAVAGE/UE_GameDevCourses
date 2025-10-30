// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroCppProject_init() {}
	INTROCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_IntroCppProject_BulletCountUpdatedDelegate__DelegateSignature();
	INTROCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_IntroCppProject_DamagedDelegate__DelegateSignature();
	INTROCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_IntroCppProject_PawnDeathDelegate__DelegateSignature();
	INTROCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_IntroCppProject_SprintStateChangedDelegate__DelegateSignature();
	INTROCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_IntroCppProject_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IntroCppProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IntroCppProject()
	{
		if (!Z_Registration_Info_UPackage__Script_IntroCppProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroCppProject_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroCppProject_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroCppProject_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroCppProject_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IntroCppProject_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IntroCppProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDA5C9308,
				0x95FD139F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IntroCppProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IntroCppProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IntroCppProject(Z_Construct_UPackage__Script_IntroCppProject, TEXT("/Script/IntroCppProject"), Z_Registration_Info_UPackage__Script_IntroCppProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA5C9308, 0x95FD139F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
