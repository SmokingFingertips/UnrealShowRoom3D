// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef POC_TEST_Poc_TestProjectile_generated_h
#error "Poc_TestProjectile.generated.h already included, missing '#pragma once' in Poc_TestProjectile.h"
#endif
#define POC_TEST_Poc_TestProjectile_generated_h

#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_SPARSE_DATA
#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoc_TestProjectile(); \
	friend struct Z_Construct_UClass_APoc_TestProjectile_Statics; \
public: \
	DECLARE_CLASS(APoc_TestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Poc_Test"), NO_API) \
	DECLARE_SERIALIZER(APoc_TestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPoc_TestProjectile(); \
	friend struct Z_Construct_UClass_APoc_TestProjectile_Statics; \
public: \
	DECLARE_CLASS(APoc_TestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Poc_Test"), NO_API) \
	DECLARE_SERIALIZER(APoc_TestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APoc_TestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APoc_TestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoc_TestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoc_TestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoc_TestProjectile(APoc_TestProjectile&&); \
	NO_API APoc_TestProjectile(const APoc_TestProjectile&); \
public:


#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoc_TestProjectile(APoc_TestProjectile&&); \
	NO_API APoc_TestProjectile(const APoc_TestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoc_TestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoc_TestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoc_TestProjectile)


#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_12_PROLOG
#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_SPARSE_DATA \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_RPC_WRAPPERS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_INCLASS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_SPARSE_DATA \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POC_TEST_API UClass* StaticClass<class APoc_TestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Poc_Test_Source_Poc_Test_Poc_TestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
