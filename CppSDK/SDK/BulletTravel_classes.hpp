﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletTravel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BulletTravel.BulletTravel_C
// 0x0040 (0x02E8 - 0x02A8)
class ABulletTravel_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        MS_BulletTravel;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Bullet_Travel_Travel_D2EA5C6E492CD1FDED5C9BB8629DA107; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Bullet_Travel__Direction_D2EA5C6E492CD1FDED5C9BB8629DA107; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Bullet_Travel;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Bullet_Type;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASoundSource_C*                         Sound_Source;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BulletTravel(int32 EntryPoint);
	void Play();
	void TL_Bullet_Travel__FinishedFunc();
	void TL_Bullet_Travel__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletTravel_C">();
	}
	static class ABulletTravel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABulletTravel_C>();
	}
};
static_assert(alignof(ABulletTravel_C) == 0x000008, "Wrong alignment on ABulletTravel_C");
static_assert(sizeof(ABulletTravel_C) == 0x0002E8, "Wrong size on ABulletTravel_C");
static_assert(offsetof(ABulletTravel_C, UberGraphFrame) == 0x0002A8, "Member 'ABulletTravel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, MS_BulletTravel) == 0x0002B0, "Member 'ABulletTravel_C::MS_BulletTravel' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, Root) == 0x0002B8, "Member 'ABulletTravel_C::Root' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, TL_Bullet_Travel_Travel_D2EA5C6E492CD1FDED5C9BB8629DA107) == 0x0002C0, "Member 'ABulletTravel_C::TL_Bullet_Travel_Travel_D2EA5C6E492CD1FDED5C9BB8629DA107' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, TL_Bullet_Travel__Direction_D2EA5C6E492CD1FDED5C9BB8629DA107) == 0x0002C4, "Member 'ABulletTravel_C::TL_Bullet_Travel__Direction_D2EA5C6E492CD1FDED5C9BB8629DA107' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, TL_Bullet_Travel) == 0x0002C8, "Member 'ABulletTravel_C::TL_Bullet_Travel' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, Bullet_Type) == 0x0002D0, "Member 'ABulletTravel_C::Bullet_Type' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, Sound_Source) == 0x0002D8, "Member 'ABulletTravel_C::Sound_Source' has a wrong offset!");
static_assert(offsetof(ABulletTravel_C, Distance) == 0x0002E0, "Member 'ABulletTravel_C::Distance' has a wrong offset!");

}

