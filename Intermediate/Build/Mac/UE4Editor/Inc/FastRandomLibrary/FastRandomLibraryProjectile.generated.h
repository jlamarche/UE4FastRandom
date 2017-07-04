// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FASTRANDOMLIBRARY_FastRandomLibraryProjectile_generated_h
#error "FastRandomLibraryProjectile.generated.h already included, missing '#pragma once' in FastRandomLibraryProjectile.h"
#endif
#define FASTRANDOMLIBRARY_FastRandomLibraryProjectile_generated_h

#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFastRandomLibraryProjectile(); \
	friend FASTRANDOMLIBRARY_API class UClass* Z_Construct_UClass_AFastRandomLibraryProjectile(); \
public: \
	DECLARE_CLASS(AFastRandomLibraryProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FastRandomLibrary"), NO_API) \
	DECLARE_SERIALIZER(AFastRandomLibraryProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFastRandomLibraryProjectile(); \
	friend FASTRANDOMLIBRARY_API class UClass* Z_Construct_UClass_AFastRandomLibraryProjectile(); \
public: \
	DECLARE_CLASS(AFastRandomLibraryProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FastRandomLibrary"), NO_API) \
	DECLARE_SERIALIZER(AFastRandomLibraryProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFastRandomLibraryProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFastRandomLibraryProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFastRandomLibraryProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFastRandomLibraryProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFastRandomLibraryProjectile(AFastRandomLibraryProjectile&&); \
	NO_API AFastRandomLibraryProjectile(const AFastRandomLibraryProjectile&); \
public:


#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFastRandomLibraryProjectile(AFastRandomLibraryProjectile&&); \
	NO_API AFastRandomLibraryProjectile(const AFastRandomLibraryProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFastRandomLibraryProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFastRandomLibraryProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFastRandomLibraryProjectile)


#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFastRandomLibraryProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFastRandomLibraryProjectile, ProjectileMovement); }


#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_9_PROLOG
#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_RPC_WRAPPERS \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_INCLASS \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FastRandomLibrary_Source_FastRandomLibrary_FastRandomLibraryProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
