// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID2_paddle_generated_h
#error "paddle.generated.h already included, missing '#pragma once' in paddle.h"
#endif
#define ARCANOID2_paddle_generated_h

#define ARCANOID2_Source_ARCANOID2_paddle_h_13_SPARSE_DATA
#define ARCANOID2_Source_ARCANOID2_paddle_h_13_RPC_WRAPPERS
#define ARCANOID2_Source_ARCANOID2_paddle_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ARCANOID2_Source_ARCANOID2_paddle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesApaddle(); \
	friend struct Z_Construct_UClass_Apaddle_Statics; \
public: \
	DECLARE_CLASS(Apaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCANOID2"), NO_API) \
	DECLARE_SERIALIZER(Apaddle)


#define ARCANOID2_Source_ARCANOID2_paddle_h_13_INCLASS \
private: \
	static void StaticRegisterNativesApaddle(); \
	friend struct Z_Construct_UClass_Apaddle_Statics; \
public: \
	DECLARE_CLASS(Apaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCANOID2"), NO_API) \
	DECLARE_SERIALIZER(Apaddle)


#define ARCANOID2_Source_ARCANOID2_paddle_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Apaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Apaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Apaddle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Apaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Apaddle(Apaddle&&); \
	NO_API Apaddle(const Apaddle&); \
public:


#define ARCANOID2_Source_ARCANOID2_paddle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Apaddle(Apaddle&&); \
	NO_API Apaddle(const Apaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Apaddle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Apaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Apaddle)


#define ARCANOID2_Source_ARCANOID2_paddle_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_paddle() { return STRUCT_OFFSET(Apaddle, SM_paddle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(Apaddle, FloatingMovement); }


#define ARCANOID2_Source_ARCANOID2_paddle_h_10_PROLOG
#define ARCANOID2_Source_ARCANOID2_paddle_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_PRIVATE_PROPERTY_OFFSET \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_SPARSE_DATA \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_RPC_WRAPPERS \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_INCLASS \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCANOID2_Source_ARCANOID2_paddle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_PRIVATE_PROPERTY_OFFSET \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_SPARSE_DATA \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_INCLASS_NO_PURE_DECLS \
	ARCANOID2_Source_ARCANOID2_paddle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID2_API UClass* StaticClass<class Apaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARCANOID2_Source_ARCANOID2_paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
