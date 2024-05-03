// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AulaProgamming/MyPlayerControllerC_mais_mais.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerControllerC_mais_mais() {}
// Cross Module References
	AULAPROGAMMING_API UClass* Z_Construct_UClass_AMyPlayerControllerC_mais_mais();
	AULAPROGAMMING_API UClass* Z_Construct_UClass_AMyPlayerControllerC_mais_mais_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AulaProgamming();
// End Cross Module References
	void AMyPlayerControllerC_mais_mais::StaticRegisterNativesAMyPlayerControllerC_mais_mais()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerControllerC_mais_mais);
	UClass* Z_Construct_UClass_AMyPlayerControllerC_mais_mais_NoRegister()
	{
		return AMyPlayerControllerC_mais_mais::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AulaProgamming,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyPlayerControllerC_mais_mais.h" },
		{ "ModuleRelativePath", "MyPlayerControllerC_mais_mais.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerControllerC_mais_mais>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::ClassParams = {
		&AMyPlayerControllerC_mais_mais::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyPlayerControllerC_mais_mais()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerControllerC_mais_mais.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerControllerC_mais_mais.OuterSingleton, Z_Construct_UClass_AMyPlayerControllerC_mais_mais_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerControllerC_mais_mais.OuterSingleton;
	}
	template<> AULAPROGAMMING_API UClass* StaticClass<AMyPlayerControllerC_mais_mais>()
	{
		return AMyPlayerControllerC_mais_mais::StaticClass();
	}
	AMyPlayerControllerC_mais_mais::AMyPlayerControllerC_mais_mais(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerControllerC_mais_mais);
	AMyPlayerControllerC_mais_mais::~AMyPlayerControllerC_mais_mais() {}
	struct Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_MyPlayerControllerC_mais_mais_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_MyPlayerControllerC_mais_mais_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerControllerC_mais_mais, AMyPlayerControllerC_mais_mais::StaticClass, TEXT("AMyPlayerControllerC_mais_mais"), &Z_Registration_Info_UClass_AMyPlayerControllerC_mais_mais, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerControllerC_mais_mais), 3629783310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_MyPlayerControllerC_mais_mais_h_607878272(TEXT("/Script/AulaProgamming"),
		Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_MyPlayerControllerC_mais_mais_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josep_OneDrive_Documentos_Unreal_Projects_AulaProgamming_Source_AulaProgamming_MyPlayerControllerC_mais_mais_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
