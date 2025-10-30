// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppProjectPlayerController.h"

#ifdef INTROCPPPROJECT_IntroCppProjectPlayerController_generated_h
#error "IntroCppProjectPlayerController.generated.h already included, missing '#pragma once' in IntroCppProjectPlayerController.h"
#endif
#define INTROCPPPROJECT_IntroCppProjectPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppProjectPlayerController *****************************************
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectPlayerController_NoRegister();

#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppProjectPlayerController(); \
	friend struct Z_Construct_UClass_AIntroCppProjectPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCppProject"), Z_Construct_UClass_AIntroCppProjectPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppProjectPlayerController)


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppProjectPlayerController(AIntroCppProjectPlayerController&&) = delete; \
	AIntroCppProjectPlayerController(const AIntroCppProjectPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppProjectPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroCppProjectPlayerController) \
	NO_API virtual ~AIntroCppProjectPlayerController();


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h_17_PROLOG
#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppProjectPlayerController;

// ********** End Class AIntroCppProjectPlayerController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
