// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppProjectCharacter.h"

#ifdef INTROCPPPROJECT_IntroCppProjectCharacter_generated_h
#error "IntroCppProjectCharacter.generated.h already included, missing '#pragma once' in IntroCppProjectCharacter.h"
#endif
#define INTROCPPPROJECT_IntroCppProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppProjectCharacter ************************************************
#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectCharacter_NoRegister();

#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppProjectCharacter(); \
	friend struct Z_Construct_UClass_AIntroCppProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPPPROJECT_API UClass* Z_Construct_UClass_AIntroCppProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCppProject"), Z_Construct_UClass_AIntroCppProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppProjectCharacter)


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppProjectCharacter(AIntroCppProjectCharacter&&) = delete; \
	AIntroCppProjectCharacter(const AIntroCppProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroCppProjectCharacter) \
	NO_API virtual ~AIntroCppProjectCharacter();


#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_21_PROLOG
#define FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppProjectCharacter;

// ********** End Class AIntroCppProjectCharacter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IntroCppProject_Source_IntroCppProject_IntroCppProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
