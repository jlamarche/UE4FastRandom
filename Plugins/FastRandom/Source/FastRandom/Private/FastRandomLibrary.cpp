// Fill out your copyright notice in the Description page of Project Settings.

#include "FastRandom.h"
#include "FastRandomLibrary.h"
#include <time.h>  
uint64 x128_seed[2];

static inline uint64_t x128_rotl(const uint64_t x, int k) {
	return (x << k) | (x >> (64 - k));
}

static inline uint64 x128_next(void) {
	const uint64 s0 = x128_seed[0];
	uint64 s1 = x128_seed[1];
	const uint64 result = s0 + s1;
	
	s1 ^= s0;
	x128_seed[0] = x128_rotl(s0, 55) ^ s1 ^ (s1 << 14); // a, b
	x128_seed[1] = x128_rotl(s1, 36); // c
	
	return result;
}

uint32 x128_random() {
	// Seed using rand()
	static bool first = true;
	static int count = 3;
	static uint64_t raw;
	if (first) {
		time_t t;
		srand((unsigned) time(&t));
		x128_seed[0] = (uint64)(rand()) << 32 | (uint64)rand();
		x128_seed[1] = (uint64)(rand()) << 32 | (uint64)rand();
		first = false;
	}
	
	if (count++ >= 2) {
		raw = x128_next();
		count = 0;
	}
	
	return (count == 0) ? (raw >> 32) & 0xFFFFFFFF : raw & 0xFFFFFFFF;
}

int32 x128_random_signed() {
	uint32 rr = x128_random();
	int32 r = *(int32*)&rr;
	return r;
}
int32 fastRandomInt32(int32 n) {
	if ((n - 1) == INT32_MAX) {
		return x128_random();
	} else {
		long end = INT32_MAX / n; // truncate skew
		end *= n;
		int32 r = x128_random_signed();
		
		while ((r = x128_random_signed()) >= end);
		return r % n;
	}
}

float fastRandomFloat() {
	return (float)(x128_random()) / (float)UINT32_MAX;
}

float fastRandomFloatInRange(float min, float max) {
	float delta = max - min;
	return (delta * fastRandomFloat()) + min;
}

float UFastRandomLibrary::FastRandomFloatInRange(float Min, float Max)
{
	return fastRandomFloatInRange(Min, Max);
}

float UFastRandomLibrary::FastRandomFloat()
{
	return fastRandomFloat();
}

float UFastRandomLibrary::FastRandomFloatInRangeGaussian3(float Min, float Max)
{
	return _FastRandomFloatGaussian3InRange(Min, Max);
}

float UFastRandomLibrary::FastRandomFloatGaussian3()
{
	return _FastRandomFloatGaussian3();
}

float UFastRandomLibrary::FastRandomFloatInRangeGaussian5(float Min, float Max)
{
	return _FastRandomFloatGaussian5InRange(Min, Max);
}

float UFastRandomLibrary::FastRandomFloatGaussian5()
{
	return _FastRandomFloatGaussian5();
}

FVector UFastRandomLibrary::FastRandomUnitVectorInCone(FVector ConeDir, float ConeHalfAngle)
{
	return _FastRandomInCone(ConeDir, ConeHalfAngle);
}

FVector UFastRandomLibrary::FastRandomUnitVectorInConeGaussian3(FVector ConeDir, float ConeHalfAngle)
{
	return _FastRandomInConeGaussian3(ConeDir, ConeHalfAngle);
}

FVector UFastRandomLibrary::FastRandomUnitVectorInConeGaussian5(FVector ConeDir, float ConeHalfAngle)
{
	return _FastRandomInConeGaussian5(ConeDir, ConeHalfAngle);
}
