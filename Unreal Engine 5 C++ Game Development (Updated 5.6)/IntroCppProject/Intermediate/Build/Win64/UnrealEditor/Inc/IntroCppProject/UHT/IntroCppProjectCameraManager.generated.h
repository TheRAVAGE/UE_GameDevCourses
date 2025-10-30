// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppProjectCameraManager.h"

#ifdef INTROCPPPROJECT_IntroCppProjectCameraManager_generated_h
#error "IntroCppProjectCameraManager.generated.h already included, missing '#pragma once' in IntroCppProjectCameraManager.h"
#endif
#define INTROCPPPROJECT_IntroCppProjectCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppProjectCameraManager ********************************************
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectCameraManager_NoRegister();

#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppProjectCameraManager(); \
	friend struct Z_Construct_UClass_AIntroCppProjectCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppProjectCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCppProject"), Z_Construct_UClass_AIntroCppProjectCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppProjectCameraManager)


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppProjectCameraManager(AIntroCppProjectCameraManager&&) = delete; \
	AIntroCppProjectCameraManager(const AIntroCppProjectCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppProjectCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppProjectCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntroCppProjectCameraManager) \
	NO_API virtual ~AIntroCppProjectCameraManager();


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h_13_PROLOG
#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppProjectCameraManager;

// ********** End Class AIntroCppProjectCameraManager **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
