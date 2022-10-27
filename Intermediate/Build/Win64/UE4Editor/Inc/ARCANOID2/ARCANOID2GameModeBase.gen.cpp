// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARCANOID2/ARCANOID2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCANOID2GameModeBase() {}
// Cross Module References
	ARCANOID2_API UClass* Z_Construct_UClass_AARCANOID2GameModeBase_NoRegister();
	ARCANOID2_API UClass* Z_Construct_UClass_AARCANOID2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ARCANOID2();
// End Cross Module References
	void AARCANOID2GameModeBase::StaticRegisterNativesAARCANOID2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AARCANOID2GameModeBase_NoRegister()
	{
		return AARCANOID2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AARCANOID2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARCANOID2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARCANOID2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCANOID2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARCANOID2GameModeBase.h" },
		{ "ModuleRelativePath", "ARCANOID2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARCANOID2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARCANOID2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARCANOID2GameModeBase_Statics::ClassParams = {
		&AARCANOID2GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARCANOID2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARCANOID2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARCANOID2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARCANOID2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARCANOID2GameModeBase, 1862120594);
	template<> ARCANOID2_API UClass* StaticClass<AARCANOID2GameModeBase>()
	{
		return AARCANOID2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARCANOID2GameModeBase(Z_Construct_UClass_AARCANOID2GameModeBase, &AARCANOID2GameModeBase::StaticClass, TEXT("/Script/ARCANOID2"), TEXT("AARCANOID2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARCANOID2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
