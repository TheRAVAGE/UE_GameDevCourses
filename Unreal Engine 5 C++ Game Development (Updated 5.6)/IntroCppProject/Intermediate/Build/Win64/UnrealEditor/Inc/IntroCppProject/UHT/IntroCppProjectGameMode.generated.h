// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppProjectGameMode.h"

#ifdef INTROCPPPROJECT_IntroCppProjectGameMode_generated_h
#error "IntroCppProjectGameMode.generated.h already included, missing '#pragma once' in IntroCppProjectGameMode.h"
#endif
#define INTROCPPPROJECT_IntroCppProjectGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppProjectGameMode *************************************************
INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectGameMode_NoRegister();

#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppProjectGameMode(); \
	friend struct Z_Construct_UClass_AIntroCppProjectGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCppProject"), Z_Construct_UClass_AIntroCppProjectGameMode_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppProjectGameMode)


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppProjectGameMode(AIntroCppProjectGameMode&&) = delete; \
	AIntroCppProjectGameMode(const AIntroCppProjectGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppProjectGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroCppProjectGameMode) \
	NO_API virtual ~AIntroCppProjectGameMode();


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h_12_PROLOG
#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppProjectGameMode;

// ********** End Class AIntroCppProjectGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
