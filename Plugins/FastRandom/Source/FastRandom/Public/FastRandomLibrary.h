// Copyright 2017, Jeff LaMarche

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FastRandomLibrary.generated.h"

int32 fastRandomInt32(int32 n);
float fastRandomFloat();
float fastRandomFloatInRange(float min, float max);

/**
 *  Fast Random Library is a library of random functions based on the Xoroshiro128+ pseudo-random number generator ( http://xoroshiro.di.unimi.it/xoroshiro128plus.c ), which is considerably faster than every current platform implementation of `random()`. As of writing this, xoroshiro128+ tops the PRNG shootout ( http://xoroshiro.di.unimi.it ) in both speed _and_ distribution quality. Although it is not a cryptographically viable PRNG, it is extremely well suited to game development, since it can produce pseudo-random numbers with a great distribution very quickly: a single 64-bit number from Xoroshiro128+ takes less than a nanosecond on a core i7-4770 @3.4GHz. Since we're mostly interested in 32-bit random floats in Unreal, that means we can produce two pseudo-random 32-bit numbers in less than a nanosecond on that hardware. To put that in perspective, that's over three times the speed of the Mersenne Twister algorithm which, itself, is approximately three times faster than linear congruential generators.
 
	Although pseudo-random number generation is rarely the cause for performance issues, the overall quality of the generated numbers is much better with this plugin, and with this extra speed, we can comfortably afford to generate randoms with a gaussian distribution rather than a straight linear distribution. For some situations, gaussian distributions can generate more realistic results.
 
	 This library seeds the PRNG with calls to random() seeded by time. For better seeding, you could replace the random() calls with a call to /dev/urandom (Linux/MacOS) or CryptGenRandom (Windows), though it's unlikely to make a noticeable difference for game purposes.
 
	This code is provided with no restrictions or limitations. You may use it it any project, commercial or otherwise, with no obligations whatsoever.
 
 */
UCLASS()
class FASTRANDOM_API UFastRandomLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	/** Returns a super fast random floating point number in the specified range. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomFloatinRange/index.html capable of producing faster results with better pseudo-random quality. */
	UFUNCTION(BlueprintPure, Category="Math|Random")
	static float FastRandomFloatInRange(float Min, float Max);

	/** Returns a super fast random floating point number between 0.0 and 1.0. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomFloat/index.html capable of producing faster results with better pseudo-random quality. */
	UFUNCTION(BlueprintPure, Category="Math|Random")
	static float FastRandomFloat();
	
	/** Returns a random float between Min and Max using a simplified Gaussian approximation at +/- 3 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for real-world simulations, but rather is a fast approximation suitable for some game purposes.
	 
		@param	Min	- The lowest possible random value
		@param	Max - The highest possible random value
		@result	Value between Min and Max exclusive, weighted toward the center range.
	 */
	UFUNCTION(BlueprintPure, Category="Math|Random")
	static float FastRandomFloatInRangeGaussian3(float Min, float Max);
	
	
	/** Returns a random float between 0 and 1 using a simplified Gaussian approximation at +/- 3 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for real-world simulations, but rather is a fast approximation suitable for some game purposes. */
	UFUNCTION(BlueprintPure, Category="Math|Random")
	static float FastRandomFloatGaussian3();
	
	
	/** Returns a random float between Min and Max using a simplified Gaussian approximation at +/- 5 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for real-world simulations, but rather is a fast approximation suitable for some game purposes.
	 
		@param	Min	- The lowest possible random value
		@param	Max - The highest possible random value
		@result	Value between Min and Max exclusive, weighted toward the center range.
	 */
	UFUNCTION(BlueprintPure, Category="Math|Random")
	static float FastRandomFloatInRangeGaussian5(float Min, float Max);
	
	/** Returns a random float between 0 and 1 using a simplified Gaussian approximation at +/- 5 standard deviations. More processor intensive than RandomFloatInRange, but will clump results around the mean (.5), simulating a bell curve distribution. Note: This is not a statistically sound gaussian distribution suitable for simulations, but rather is a fast approximation suitable for some game purposes. */
	UFUNCTION(BlueprintPure, Category="Math|Random")
	static float FastRandomFloatGaussian5();
	
	/**
	 * Returns a random vector with length of 1, within the specified cone, with uniform random distribution. This is a faster, better drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomUnitVectorinCone/index.html
	 * @param ConeDir	The base "center" direction of the cone.
	 * @param ConeHalfAngle		The half-angle of the cone (from ConeDir to edge), in radians.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Random")
	static FVector FastRandomUnitVectorInCone(FVector ConeDir, float ConeHalfAngle);
	
	/**
	 * Returns a random vector with length of 1, within the specified cone, with values spread across a guassian distribution of +/- 3 standard deviations. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomUnitVectorinCone/index.html that "clumps" the values mostly within one standard deviation for a more natural looking spread. Though this is more computationally expensive than FastRandomUnitVectorInCone, it should be at least as fast as RandomUnitVectorInCone due to the use of a much faster PRNG.
	 * @param ConeDir	The base "center" direction of the cone.
	 * @param ConeHalfAngle		The half-angle of the cone (from ConeDir to edge), in radians.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Random")
	static FVector FastRandomUnitVectorInConeGaussian3(FVector ConeDir, float ConeHalfAngle);
	
	/**
	 * Returns a random vector with length of 1, within the specified cone, with values spread across a guassian distribution of +/- 5 standard deviations. This is a drop-in replacement for https://docs.unrealengine.com/latest/INT/BlueprintAPI/Math/Random/RandomUnitVectorinCone/index.html that "clumps" the values mostly within one standard deviation for a more natural looking spread. Though this is more computationally expensive than FastRandomUnitVectorInCone, it should be roughly comparable in speed to RandomUnitVectorInCone due to the use of a much faster PRNG.
	 * @param ConeDir	The base "center" direction of the cone.
	 * @param ConeHalfAngle		The half-angle of the cone (from ConeDir to edge), in radians.
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Random")
	static FVector FastRandomUnitVectorInConeGaussian5(FVector ConeDir, float ConeHalfAngle);
	
	
	
	// MARK: - Non UFUNCTION
	
	/** Util to generate a random number between 0.0 and 1.0 using a simplified gaussian distribution over +/- 3 standard deviations. This can give more realistic results in certain situations by "clumping" the majority of results within one standard deviation (in this case, the middle third). Assumes desired mean equals 0.5. This function requires a bit more processing cycles than a straight call to FastRandomFloat(), but should be at least as fast as a FRandRange() call. It is not appropriate for all situations, but can yield more "real" feeling results in many situations, such as for making AI decisions. This is not a stastically sound gaussian distribution, but rather a fast approximation suitable for certain game purposes. */
	static FORCEINLINE float _FastRandomFloatGaussian3()
	{
		float V1 = fastRandomFloat() / 3.0;
		float V2 = fastRandomFloat() / 3.0;
		float V3 = fastRandomFloat() / 3.0;
		double Normalized = ((double)V1 + (double)V2 + (double)V3);
		return (float)Normalized;
	}
	
	/** Util to generate a random number between 0.0 and 1.0 using a simplified gaussian distribution over +/- 5 standard deviations. This can give more realistic results in certain situations by "clumping" the majority of results within one standard deviation. Assumes desired mean equals 0.5. This function requires a bit more processing cycles than a straight call to FastRandomFloat(), but should about as fast as a FRandRange() call. This is not appropriate for all situations, but can yield more "real" feeling results in many situations, such as for making AI decisions or "grouping" bullet deviation. This does not produce a stastically sound gaussian distribution, but rather a fast approximation suitable for game purposes. */
	static FORCEINLINE float _FastRandomFloatGaussian5()
	{
		float V1 = fastRandomFloat() / 5.0;
		float V2 = fastRandomFloat() / 5.0;
		float V3 = fastRandomFloat() / 5.0;
		float V4 = fastRandomFloat() / 5.0;
		float V5 = fastRandomFloat() / 5.0;
		//double Normalized = ((double)V1 + (double)V2 + (double)V3 + (double)V4 + (double)V5);
		return V1 + V2 + V3 + V4 + V5;
	}
	
	/** Util to generate a random number in a range using a simplified gaussian distribution over +/- 3 standard deviations. This can give more realistic results in certain situations by "clumping" the majority of results within one standard deviation. Assumes desired mean equals (InMin + ((InMax - InMin) / 2)).  This function requires a bit more processing cycles than a straight call to FastRandomFloatInRange(), but should be at least as fast as a FRandRange() call. and is not appropriate for all situations, but can yield more "real" feeling results in many situations, such as for making AI decisions. This is not a stastically sound gaussian distribution, but rather a fast approximation suitable for certain game purposes. */
	static FORCEINLINE float _FastRandomFloatGaussian3InRange(float InMin, float InMax)
	{
		return (InMin) + (InMax - InMin) * _FastRandomFloatGaussian3();
	}
	
	/** Util to generate a random number in a range using a simplified gaussian distribution over +/- 5 standard deviations. This can give more realistic results in certain situations by "clumping" the majority of results within one standard deviation (in this case, the middle fifth). Assumes desired mean equals (InMin + ((InMax - InMin) / 2)). This function requires a bit more processing cycles than a straight call to FasatRandomFloatInRange(), but should about as fast as a FRandRange() call. It is not appropriate for all situations, but can yield more "real" feeling results in many situations, such as for making AI decisions. This is not a stastically sound gaussian distribution, but rather a fast approximation suitable for certain game purposes. */
	static FORCEINLINE float _FastRandomFloatGaussian5InRange(float InMin, float InMax)
	{
		return (InMin) + (InMax - InMin) * _FastRandomFloatGaussian5();
	}
	
	// Common logic for the fast V random in cone
	static FORCEINLINE FVector _FastVRandConeImplementation(FVector const& Dir, float ConeHalfAngleRad, float RandU, float RandV)
	{
		// Get spherical coords that have an even distribution over the unit sphere
		// Method described at http://mathworld.wolfram.com/SpherePointPicking.html
		float Theta = 2.f * PI * RandU;
		float Phi = FMath::Acos((2.f * RandV) - 1.f);
		
		// restrict phi to [0, ConeHalfAngleRad]
		// this gives an even distribution of points on the surface of the cone
		// centered at the origin, pointing upward (z), with the desired angle
		Phi = FMath::Fmod(Phi, ConeHalfAngleRad);
		
		// get axes we need to rotate around
		FMatrix const DirMat = FRotationMatrix(Dir.Rotation());
		// note the axis translation, since we want the variation to be around X
		FVector const DirZ = DirMat.GetUnitAxis( EAxis::X );
		FVector const DirY = DirMat.GetUnitAxis( EAxis::Y );
		
		FVector Result = Dir.RotateAngleAxis(Phi * 180.f / PI, DirY);
		Result = Result.RotateAngleAxis(Theta * 180.f / PI, DirZ);
		
		// ensure it's a unit vector (might not have been passed in that way)
		Result = Result.GetSafeNormal();
		
		return Result;
		
	}
	
	/**
	 * Returns a random unit vector, uniformly distributed, within the specified cone. This is a drop-in replacement for VRandCone from RandomStream.h
	 *
	 * @param Dir The center direction of the cone
	 * @param ConeHalfAngleRad Half-angle of cone, in radians.
	 * @return Normalized vector within the specified cone.
	 */
	static FORCEINLINE FVector _FastRandomInCone(FVector const& Dir, float ConeHalfAngleRad)
	{
		if (ConeHalfAngleRad > 0.f)
		{
			float const RandU = fastRandomFloat();
			float const RandV = fastRandomFloat();
			
			return _FastVRandConeImplementation(Dir, ConeHalfAngleRad, RandU, RandV);
		}
		else
		{
			return Dir.GetSafeNormal();
		}
	}
	
	/**
	 * Returns a random unit vector within the specified cone using a gaussian distribution of +/- 3 Standard Deviations, This is a drop-in replacement for VRandCone from RandomStream.h but clusters shots in a more natural way
	 *
	 * @param Dir The center direction of the cone
	 * @param ConeHalfAngleRad Half-angle of cone, in radians.
	 * @return Normalized vector within the specified cone.
	 */
	static FORCEINLINE FVector _FastRandomInConeGaussian3(FVector const& Dir, float ConeHalfAngleRad)
	{
		if (ConeHalfAngleRad > 0.f)
		{
			float const RandU = _FastRandomFloatGaussian3();
			float const RandV = _FastRandomFloatGaussian3();
			
			return _FastVRandConeImplementation(Dir, ConeHalfAngleRad, RandU, RandV);
		}
		else
		{
			return Dir.GetSafeNormal();
		}
	}
	
	/**
	 * Returns a random unit vector within the specified cone using a gaussian distribution of +/- 3 Standard Deviations, This is a drop-in replacement for VRandCone from RandomStream.h but clusters shots in a more natural way
	 *
	 * @param Dir The center direction of the cone
	 * @param ConeHalfAngleRad Half-angle of cone, in radians.
	 * @return Normalized vector within the specified cone.
	 */
	static FORCEINLINE FVector _FastRandomInConeGaussian5(FVector const& Dir, float ConeHalfAngleRad)
	{
		if (ConeHalfAngleRad > 0.f)
		{
			float const RandU = _FastRandomFloatGaussian5();
			float const RandV = _FastRandomFloatGaussian5();
			
			return _FastVRandConeImplementation(Dir, ConeHalfAngleRad, RandU, RandV);
		}
		else
		{
			return Dir.GetSafeNormal();
		}
	}
};
