// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoc_Test_init() {}
	POC_TEST_API UFunction* Z_Construct_UDelegateFunction_Poc_Test_OnPickUp__DelegateSignature();
	POC_TEST_API UFunction* Z_Construct_UDelegateFunction_Poc_Test_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Poc_Test;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Poc_Test()
	{
		if (!Z_Registration_Info_UPackage__Script_Poc_Test.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Poc_Test_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Poc_Test_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Poc_Test",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC56A4854,
				0x779AD7A6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Poc_Test.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Poc_Test.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Poc_Test(Z_Construct_UPackage__Script_Poc_Test, TEXT("/Script/Poc_Test"), Z_Registration_Info_UPackage__Script_Poc_Test, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC56A4854, 0x779AD7A6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
