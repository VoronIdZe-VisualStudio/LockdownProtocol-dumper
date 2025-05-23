﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncTickPhysics

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class AsyncTickPhysics.AsyncTickActorComponent
// 0x0000 (0x00A0 - 0x00A0)
class UAsyncTickActorComponent final : public UActorComponent
{
public:
	void AsyncTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncTickActorComponent">();
	}
	static class UAsyncTickActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncTickActorComponent>();
	}
};
static_assert(alignof(UAsyncTickActorComponent) == 0x000008, "Wrong alignment on UAsyncTickActorComponent");
static_assert(sizeof(UAsyncTickActorComponent) == 0x0000A0, "Wrong size on UAsyncTickActorComponent");

// Class AsyncTickPhysics.AsyncTickFunctions
// 0x0000 (0x0028 - 0x0028)
class UAsyncTickFunctions final : public UBlueprintFunctionLibrary
{
public:
	static void ATP_AddAngularImpulseInDegrees(class UPrimitiveComponent* Component, const struct FVector& Torque, bool bVelChange, class FName BoneName);
	static void ATP_AddAngularImpulseInRadians(class UPrimitiveComponent* Component, const struct FVector& Torque, bool bVelChange, class FName BoneName);
	static void ATP_AddForce(class UPrimitiveComponent* Component, const struct FVector& Force, bool bAccelChange, class FName BoneName);
	static void ATP_AddForceAtPosition(class UPrimitiveComponent* Component, const struct FVector& position, const struct FVector& Force, class FName BoneName);
	static void ATP_AddImpulse(class UPrimitiveComponent* Component, const struct FVector& Impulse, bool bVelChange, class FName BoneName);
	static void ATP_AddImpulseAtPosition(class UPrimitiveComponent* Component, const struct FVector& position, const struct FVector& Impulse, class FName BoneName);
	static void ATP_AddTorque(class UPrimitiveComponent* Component, const struct FVector& Torque, bool bAccelChange, class FName BoneName);
	static struct FVector ATP_GetAngularVelocity(class UPrimitiveComponent* Component, class FName BoneName);
	static struct FVector ATP_GetCoMPosition(class UPrimitiveComponent* Component);
	static struct FVector ATP_GetLinearVelocity(class UPrimitiveComponent* Component, class FName BoneName);
	static struct FVector ATP_GetLinearVelocityAtPoint(class UPrimitiveComponent* Component, const struct FVector& Point, class FName BoneName);
	static struct FTransform ATP_GetTransform(class UPrimitiveComponent* Component);
	static void ATP_SetAngularVelocityInDegrees(class UPrimitiveComponent* Component, const struct FVector& AngVelocity, bool bAddToCurrent, class FName BoneName);
	static void ATP_SetAngularVelocityInRadians(class UPrimitiveComponent* Component, const struct FVector& AngVelocity, bool bAddToCurrent, class FName BoneName);
	static void ATP_SetLinearVelocity(class UPrimitiveComponent* Component, const struct FVector& Velocity, bool bAddToCurrent, class FName BoneName);
	static void ATP_SetWorldLocation(class USceneComponent* Component, const struct FVector& Location);
	static void ATP_SetWorldLocationAndRotation(class UPrimitiveComponent* Component, const struct FVector& Location, const struct FRotator& Rotation);
	static void ATP_SetWorldRotation(class UPrimitiveComponent* Component, const struct FRotator& Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncTickFunctions">();
	}
	static class UAsyncTickFunctions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncTickFunctions>();
	}
};
static_assert(alignof(UAsyncTickFunctions) == 0x000008, "Wrong alignment on UAsyncTickFunctions");
static_assert(sizeof(UAsyncTickFunctions) == 0x000028, "Wrong size on UAsyncTickFunctions");

// Class AsyncTickPhysics.AsyncTickPawn
// 0x0000 (0x0328 - 0x0328)
class AAsyncTickPawn : public APawn
{
public:
	void AsyncTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncTickPawn">();
	}
	static class AAsyncTickPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAsyncTickPawn>();
	}
};
static_assert(alignof(AAsyncTickPawn) == 0x000008, "Wrong alignment on AAsyncTickPawn");
static_assert(sizeof(AAsyncTickPawn) == 0x000328, "Wrong size on AAsyncTickPawn");

}

