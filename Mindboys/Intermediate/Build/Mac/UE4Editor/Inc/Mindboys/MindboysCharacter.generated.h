// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINDBOYS_MindboysCharacter_generated_h
#error "MindboysCharacter.generated.h already included, missing '#pragma once' in MindboysCharacter.h"
#endif
#define MINDBOYS_MindboysCharacter_generated_h

#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_RPC_WRAPPERS
#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMindboysCharacter(); \
	friend MINDBOYS_API class UClass* Z_Construct_UClass_AMindboysCharacter(); \
public: \
	DECLARE_CLASS(AMindboysCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mindboys"), NO_API) \
	DECLARE_SERIALIZER(AMindboysCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMindboysCharacter(); \
	friend MINDBOYS_API class UClass* Z_Construct_UClass_AMindboysCharacter(); \
public: \
	DECLARE_CLASS(AMindboysCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mindboys"), NO_API) \
	DECLARE_SERIALIZER(AMindboysCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMindboysCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMindboysCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMindboysCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMindboysCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMindboysCharacter(AMindboysCharacter&&); \
	NO_API AMindboysCharacter(const AMindboysCharacter&); \
public:


#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMindboysCharacter(AMindboysCharacter&&); \
	NO_API AMindboysCharacter(const AMindboysCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMindboysCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMindboysCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMindboysCharacter)


#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMindboysCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMindboysCharacter, FollowCamera); }


#define Mindboys_Source_Mindboys_MindboysCharacter_h_9_PROLOG
#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_RPC_WRAPPERS \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_INCLASS \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mindboys_Source_Mindboys_MindboysCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Mindboys_Source_Mindboys_MindboysCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mindboys_Source_Mindboys_MindboysCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
