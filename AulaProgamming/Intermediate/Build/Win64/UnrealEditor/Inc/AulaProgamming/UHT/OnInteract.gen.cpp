// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AulaProgamming/OnInteract.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnInteract() {}
// Cross Module References
	AULAPROGAMMING_API UClass* Z_Construct_UClass_UOnInteract();
	AULAPROGAMMING_API UClass* Z_Construct_UClass_UOnInteract_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AulaProgamming();
// End Cross Module References
	void UOnInteract::StaticRegisterNativesUOnInteract()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnInteract);
	UClass* Z_Construct_UClass_UOnInteract_NoRegister()
	{
		return UOnInteract::StaticClass();
	}
	struct Z_Construct_UClass_UOnInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AulaProgamming,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnInteract_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnInteract_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnInteract.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnInteract>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnInteract_Statics::ClassParams = {
		&UOnInteract::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnInteract_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnInteract_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOnInteract()
	{
		if (!Z_Registration_Info_UClass_UOnInteract.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnInteract.OuterSingleton, Z_Construct_UClass_UOnInteract_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnInteract.OuterSingleton;
	}
	template<> AULAPROGAMMING_API UClass* StaticClass<UOnInteract>()
	{
		return UOnInteract::StaticClass();
	}
	UOnInteract::UOnInteract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnInteract);
	UOnInteract::~UOnInteract() {}
	struct Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_OnInteract_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_OnInteract_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnInteract, UOnInteract::StaticClass, TEXT("UOnInteract"), &Z_Registration_Info_UClass_UOnInteract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnInteract), 214644389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_OnInteract_h_1382689398(TEXT("/Script/AulaProgamming"),
		Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_OnInteract_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_OnInteract_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
