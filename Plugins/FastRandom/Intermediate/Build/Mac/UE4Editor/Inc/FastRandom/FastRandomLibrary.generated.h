// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FASTRANDOM_FastRandomLibrary_generated_h
#error "FastRandomLibrary.generated.h already included, missing '#pragma once' in FastRandomLibrary.h"
#endif
#define FASTRANDOM_FastRandomLibrary_generated_h

#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFastRandomUnitVectorInConeGaussian5) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFastRandomLibrary::FastRandomUnitVectorInConeGaussian5(Z_Param_ConeDir,Z_Param_ConeHalfAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomUnitVectorInConeGaussian3) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFastRandomLibrary::FastRandomUnitVectorInConeGaussian3(Z_Param_ConeDir,Z_Param_ConeHalfAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomUnitVectorInCone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFastRandomLibrary::FastRandomUnitVectorInCone(Z_Param_ConeDir,Z_Param_ConeHalfAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatGaussian5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatGaussian5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatInRangeGaussian5) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatInRangeGaussian5(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatGaussian3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatGaussian3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatInRangeGaussian3) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatInRangeGaussian3(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloat(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatInRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatInRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	}


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFastRandomUnitVectorInConeGaussian5) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFastRandomLibrary::FastRandomUnitVectorInConeGaussian5(Z_Param_ConeDir,Z_Param_ConeHalfAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomUnitVectorInConeGaussian3) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFastRandomLibrary::FastRandomUnitVectorInConeGaussian3(Z_Param_ConeDir,Z_Param_ConeHalfAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomUnitVectorInCone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ConeDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ConeHalfAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFastRandomLibrary::FastRandomUnitVectorInCone(Z_Param_ConeDir,Z_Param_ConeHalfAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatGaussian5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatGaussian5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatInRangeGaussian5) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatInRangeGaussian5(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatGaussian3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatGaussian3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatInRangeGaussian3) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatInRangeGaussian3(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloat(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastRandomFloatInRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Min); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFastRandomLibrary::FastRandomFloatInRange(Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	}


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFastRandomLibrary(); \
	friend FASTRANDOM_API class UClass* Z_Construct_UClass_UFastRandomLibrary(); \
public: \
	DECLARE_CLASS(UFastRandomLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FastRandom"), NO_API) \
	DECLARE_SERIALIZER(UFastRandomLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFastRandomLibrary(); \
	friend FASTRANDOM_API class UClass* Z_Construct_UClass_UFastRandomLibrary(); \
public: \
	DECLARE_CLASS(UFastRandomLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FastRandom"), NO_API) \
	DECLARE_SERIALIZER(UFastRandomLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastRandomLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastRandomLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastRandomLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastRandomLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFastRandomLibrary(UFastRandomLibrary&&); \
	NO_API UFastRandomLibrary(const UFastRandomLibrary&); \
public:


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastRandomLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFastRandomLibrary(UFastRandomLibrary&&); \
	NO_API UFastRandomLibrary(const UFastRandomLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastRandomLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastRandomLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastRandomLibrary)


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_22_PROLOG
#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_RPC_WRAPPERS \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_INCLASS \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FastRandomLibrary_Plugins_FastRandom_Source_FastRandom_Public_FastRandomLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
