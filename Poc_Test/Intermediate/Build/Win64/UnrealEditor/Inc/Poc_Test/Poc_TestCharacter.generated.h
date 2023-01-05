// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POC_TEST_Poc_TestCharacter_generated_h
#error "Poc_TestCharacter.generated.h already included, missing '#pragma once' in Poc_TestCharacter.h"
#endif
#define POC_TEST_Poc_TestCharacter_generated_h

#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_SPARSE_DATA
#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_RPC_WRAPPERS
#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoc_TestCharacter(); \
	friend struct Z_Construct_UClass_APoc_TestCharacter_Statics; \
public: \
	DECLARE_CLASS(APoc_TestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Poc_Test"), NO_API) \
	DECLARE_SERIALIZER(APoc_TestCharacter)


#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPoc_TestCharacter(); \
	friend struct Z_Construct_UClass_APoc_TestCharacter_Statics; \
public: \
	DECLARE_CLASS(APoc_TestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Poc_Test"), NO_API) \
	DECLARE_SERIALIZER(APoc_TestCharacter)


#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APoc_TestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APoc_TestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoc_TestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoc_TestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoc_TestCharacter(APoc_TestCharacter&&); \
	NO_API APoc_TestCharacter(const APoc_TestCharacter&); \
public:


#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoc_TestCharacter(APoc_TestCharacter&&); \
	NO_API APoc_TestCharacter(const APoc_TestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoc_TestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoc_TestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoc_TestCharacter)


#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_20_PROLOG
#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_SPARSE_DATA \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_RPC_WRAPPERS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_INCLASS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_SPARSE_DATA \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POC_TEST_API UClass* StaticClass<class APoc_TestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Poc_Test_Source_Poc_Test_Poc_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
