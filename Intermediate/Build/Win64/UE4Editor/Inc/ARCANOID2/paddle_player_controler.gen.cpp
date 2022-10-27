// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARCANOID2/paddle_player_controler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepaddle_player_controler() {}
// Cross Module References
	ARCANOID2_API UClass* Z_Construct_UClass_Apaddle_player_controler_NoRegister();
	ARCANOID2_API UClass* Z_Construct_UClass_Apaddle_player_controler();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ARCANOID2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARCANOID2_API UClass* Z_Construct_UClass_ABall_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Apaddle_player_controler::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void Apaddle_player_controler::StaticRegisterNativesApaddle_player_controler()
	{
		UClass* Class = Apaddle_player_controler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &Apaddle_player_controler::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "paddle_player_controler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Apaddle_player_controler, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Apaddle_player_controler_NoRegister()
	{
		return Apaddle_player_controler::StaticClass();
	}
	struct Z_Construct_UClass_Apaddle_player_controler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BallObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apaddle_player_controler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ARCANOID2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Apaddle_player_controler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Apaddle_player_controler_SetupInputComponent, "SetupInputComponent" }, // 3905935442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apaddle_player_controler_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "paddle_player_controler.h" },
		{ "ModuleRelativePath", "paddle_player_controler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apaddle_player_controler_Statics::NewProp_BallObj_MetaData[] = {
		{ "Category", "paddle_player_controler" },
		{ "ModuleRelativePath", "paddle_player_controler.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Apaddle_player_controler_Statics::NewProp_BallObj = { "BallObj", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apaddle_player_controler, BallObj), Z_Construct_UClass_ABall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Apaddle_player_controler_Statics::NewProp_BallObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Apaddle_player_controler_Statics::NewProp_BallObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Apaddle_player_controler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Apaddle_player_controler_Statics::NewProp_BallObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apaddle_player_controler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apaddle_player_controler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Apaddle_player_controler_Statics::ClassParams = {
		&Apaddle_player_controler::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Apaddle_player_controler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Apaddle_player_controler_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_Apaddle_player_controler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Apaddle_player_controler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Apaddle_player_controler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Apaddle_player_controler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Apaddle_player_controler, 1012568579);
	template<> ARCANOID2_API UClass* StaticClass<Apaddle_player_controler>()
	{
		return Apaddle_player_controler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Apaddle_player_controler(Z_Construct_UClass_Apaddle_player_controler, &Apaddle_player_controler::StaticClass, TEXT("/Script/ARCANOID2"), TEXT("Apaddle_player_controler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apaddle_player_controler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
