// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FastRandom.h"
#include "FastRandom.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FastRandom() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloat();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian3();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian5();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRange();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian3();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian5();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInCone();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian3();
	FASTRANDOM_API class UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian5();
	FASTRANDOM_API class UClass* Z_Construct_UClass_UFastRandomLibrary_NoRegister();
	FASTRANDOM_API class UClass* Z_Construct_UClass_UFastRandomLibrary();
	FASTRANDOM_API class UPackage* Z_Construct_UPackage__Script_FastRandom();
	void UFastRandomLibrary::StaticRegisterNativesUFastRandomLibrary()
	{
		UClass* Class = UFastRandomLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FastRandomFloat", (Native)&UFastRandomLibrary::execFastRandomFloat },
			{ "FastRandomFloatGaussian3", (Native)&UFastRandomLibrary::execFastRandomFloatGaussian3 },
			{ "FastRandomFloatGaussian5", (Native)&UFastRandomLibrary::execFastRandomFloatGaussian5 },
			{ "FastRandomFloatInRange", (Native)&UFastRandomLibrary::execFastRandomFloatInRange },
			{ "FastRandomFloatInRangeGaussian3", (Native)&UFastRandomLibrary::execFastRandomFloatInRangeGaussian3 },
			{ "FastRandomFloatInRangeGaussian5", (Native)&UFastRandomLibrary::execFastRandomFloatInRangeGaussian5 },
			{ "FastRandomUnitVectorInCone", (Native)&UFastRandomLibrary::execFastRandomUnitVectorInCone },
			{ "FastRandomUnitVectorInConeGaussian3", (Native)&UFastRandomLibrary::execFastRandomUnitVectorInConeGaussian3 },
			{ "FastRandomUnitVectorInConeGaussian5", (Native)&UFastRandomLibrary::execFastRandomUnitVectorInConeGaussian5 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 9);
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloat()
	{
		struct FastRandomLibrary_eventFastRandomFloat_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(FastRandomLibrary_eventFastRandomFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomFloat_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a super fast random floating point number between 0.0 and 1.0. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomFloat/index.html capable of producing faster results with better pseudo-random quality."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian3()
	{
		struct FastRandomLibrary_eventFastRandomFloatGaussian3_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomFloatGaussian3"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(FastRandomLibrary_eventFastRandomFloatGaussian3_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomFloatGaussian3_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random float between 0 and 1 using a simplified Gaussian approximation at +/- 3 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for real-world simulations, but rather is a fast approximation suitable for some game purposes."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian5()
	{
		struct FastRandomLibrary_eventFastRandomFloatGaussian5_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomFloatGaussian5"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(FastRandomLibrary_eventFastRandomFloatGaussian5_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomFloatGaussian5_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random float between 0 and 1 using a simplified Gaussian approximation at +/- 5 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for simulations, but rather is a fast approximation suitable for some game purposes."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRange()
	{
		struct FastRandomLibrary_eventFastRandomFloatInRange_Parms
		{
			float Min;
			float Max;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomFloatInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(FastRandomLibrary_eventFastRandomFloatInRange_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomFloatInRange_Parms), 0x0010000000000580);
			UProperty* NewProp_Max = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Max"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Max, FastRandomLibrary_eventFastRandomFloatInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_Min = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Min"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Min, FastRandomLibrary_eventFastRandomFloatInRange_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a super fast random floating point number in the specified range. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomFloatinRange/index.html capable of producing faster results with better pseudo-random quality."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian3()
	{
		struct FastRandomLibrary_eventFastRandomFloatInRangeGaussian3_Parms
		{
			float Min;
			float Max;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomFloatInRangeGaussian3"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(FastRandomLibrary_eventFastRandomFloatInRangeGaussian3_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomFloatInRangeGaussian3_Parms), 0x0010000000000580);
			UProperty* NewProp_Max = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Max"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Max, FastRandomLibrary_eventFastRandomFloatInRangeGaussian3_Parms), 0x0010000000000080);
			UProperty* NewProp_Min = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Min"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Min, FastRandomLibrary_eventFastRandomFloatInRangeGaussian3_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random float between Min and Max using a simplified Gaussian approximation at +/- 3 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for real-world simulations, but rather is a fast approximation suitable for some game purposes.\n\n              @param  Min     - The lowest possible random value\n              @param  Max - The highest possible random value\n              @result Value between Min and Max exclusive, weighted toward the center range."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian5()
	{
		struct FastRandomLibrary_eventFastRandomFloatInRangeGaussian5_Parms
		{
			float Min;
			float Max;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomFloatInRangeGaussian5"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(FastRandomLibrary_eventFastRandomFloatInRangeGaussian5_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomFloatInRangeGaussian5_Parms), 0x0010000000000580);
			UProperty* NewProp_Max = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Max"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Max, FastRandomLibrary_eventFastRandomFloatInRangeGaussian5_Parms), 0x0010000000000080);
			UProperty* NewProp_Min = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Min"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Min, FastRandomLibrary_eventFastRandomFloatInRangeGaussian5_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random float between Min and Max using a simplified Gaussian approximation at +/- 5 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for real-world simulations, but rather is a fast approximation suitable for some game purposes.\n\n              @param  Min     - The lowest possible random value\n              @param  Max - The highest possible random value\n              @result Value between Min and Max exclusive, weighted toward the center range."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInCone()
	{
		struct FastRandomLibrary_eventFastRandomUnitVectorInCone_Parms
		{
			FVector ConeDir;
			float ConeHalfAngle;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomUnitVectorInCone"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14842401, 65535, sizeof(FastRandomLibrary_eventFastRandomUnitVectorInCone_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomUnitVectorInCone_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ConeHalfAngle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConeHalfAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ConeHalfAngle, FastRandomLibrary_eventFastRandomUnitVectorInCone_Parms), 0x0010000000000080);
			UProperty* NewProp_ConeDir = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConeDir"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConeDir, FastRandomLibrary_eventFastRandomUnitVectorInCone_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random vector with length of 1, within the specified cone, with uniform random distribution. This is a faster, better drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomUnitVectorinCone/index.html\n@param ConeDir       The base \"center\" direction of the cone.\n@param ConeHalfAngle         The half-angle of the cone (from ConeDir to edge), in radians."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian3()
	{
		struct FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian3_Parms
		{
			FVector ConeDir;
			float ConeHalfAngle;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomUnitVectorInConeGaussian3"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14842401, 65535, sizeof(FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian3_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian3_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ConeHalfAngle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConeHalfAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ConeHalfAngle, FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian3_Parms), 0x0010000000000080);
			UProperty* NewProp_ConeDir = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConeDir"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConeDir, FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian3_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random vector with length of 1, within the specified cone, with values spread across a guassian distribution of +/- 3 standard deviations. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomUnitVectorinCone/index.html that \"clumps\" the values mostly within one standard deviation for a more natural looking spread. Though this is more computationally expensive than FastRandomUnitVectorInCone, it should be at least as fast as RandomUnitVectorInCone due to the use of a much faster PRNG.\n@param ConeDir       The base \"center\" direction of the cone.\n@param ConeHalfAngle         The half-angle of the cone (from ConeDir to edge), in radians."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian5()
	{
		struct FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian5_Parms
		{
			FVector ConeDir;
			float ConeHalfAngle;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFastRandomLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FastRandomUnitVectorInConeGaussian5"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14842401, 65535, sizeof(FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian5_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian5_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ConeHalfAngle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConeHalfAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ConeHalfAngle, FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian5_Parms), 0x0010000000000080);
			UProperty* NewProp_ConeDir = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConeDir"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConeDir, FastRandomLibrary_eventFastRandomUnitVectorInConeGaussian5_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Math|Random"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a random vector with length of 1, within the specified cone, with values spread across a guassian distribution of +/- 5 standard deviations. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomUnitVectorinCone/index.html that \"clumps\" the values mostly within one standard deviation for a more natural looking spread. Though this is more computationally expensive than FastRandomUnitVectorInCone, it should be roughly comparable in speed to RandomUnitVectorInCone due to the use of a much faster PRNG.\n@param ConeDir       The base \"center\" direction of the cone.\n@param ConeHalfAngle         The half-angle of the cone (from ConeDir to edge), in radians."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFastRandomLibrary_NoRegister()
	{
		return UFastRandomLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UFastRandomLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_FastRandom();
			OuterClass = UFastRandomLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian3());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian5());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRange());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian3());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian5());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInCone());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian3());
				OuterClass->LinkChild(Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian5());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloat(), "FastRandomFloat"); // 719814969
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian3(), "FastRandomFloatGaussian3"); // 1644810778
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatGaussian5(), "FastRandomFloatGaussian5"); // 3972804465
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRange(), "FastRandomFloatInRange"); // 568831325
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian3(), "FastRandomFloatInRangeGaussian3"); // 4030967261
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomFloatInRangeGaussian5(), "FastRandomFloatInRangeGaussian5"); // 1251939307
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInCone(), "FastRandomUnitVectorInCone"); // 3151212855
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian3(), "FastRandomUnitVectorInConeGaussian3"); // 2175478128
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFastRandomLibrary_FastRandomUnitVectorInConeGaussian5(), "FastRandomUnitVectorInConeGaussian5"); // 611134601
				static TCppClassTypeInfo<TCppClassTypeTraits<UFastRandomLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FastRandomLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FastRandomLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Fast Random Library is a library of random functions based on the Xoroshiro128+ pseudo-random number generator ( http://xoroshiro.di.unimi.it/xoroshiro128plus.c ), which is considerably faster than every current platform implementation of `random()`. As of writing this, xoroshiro128+ tops the PRNG shootout ( http://xoroshiro.di.unimi.it ) in both speed _and_ distribution quality. Although it is not a cryptographically viable PRNG, it is extremely well suited to game development, since it can produce pseudo-random numbers with a great distribution very quickly: a single 64-bit number from Xoroshiro128+ takes less than a nanosecond on a core i7-4770 @3.4GHz. Since we're mostly interested in 32-bit random floats in Unreal, that means we can produce two pseudo-random 32-bit numbers in less than a nanosecond on that hardware. To put that in perspective, that's over three times the speed of the Mersenne Twister algorithm which, itself, is approximately three times faster than linear congruential generators.\n\n      Although pseudo-random number generation is rarely the cause for performance issues, the overall quality of the generated numbers is much better with this plugin, and with this extra speed, we can comfortably afford to generate randoms with a gaussian distribution rather than a straight linear distribution. For some situations, gaussian distributions can generate more realistic results.\n\n       This library seeds the PRNG with calls to random() seeded by time. For better seeding, you could replace the random() calls with a call to /dev/urandom (Linux/MacOS) or CryptGenRandom (Windows), though it's unlikely to make a noticeable difference for game purposes.\n\n      This code is provided with no restrictions or limitations. You may use it it any project, commercial or otherwise, with no obligations whatsoever."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFastRandomLibrary, 2206812121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFastRandomLibrary(Z_Construct_UClass_UFastRandomLibrary, &UFastRandomLibrary::StaticClass, TEXT("/Script/FastRandom"), TEXT("UFastRandomLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFastRandomLibrary);
	UPackage* Z_Construct_UPackage__Script_FastRandom()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FastRandom")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x08353981;
			Guid.B = 0x39A29E86;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
