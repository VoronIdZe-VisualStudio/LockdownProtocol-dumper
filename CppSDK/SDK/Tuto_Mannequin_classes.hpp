﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_Mannequin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_TutoMannequinState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tuto_Mannequin.Tuto_Mannequin_C
// 0x0060 (0x0308 - 0x02A8)
class ATuto_Mannequin_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Head_Hitbox;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkM_Body;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	Enum_TutoMannequinState                       State;                                             // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_C*                                  GM_Ref;                                            // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Head_Damage_Color;                                 // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Body_Damage_Color;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Recoil_Timer;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ATuto_Check_C*                          Check;                                             // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

public:
	void Clear();
	void ExecuteUbergraph_Tuto_Mannequin(int32 EntryPoint);
	void Fixed_Ticks();
	void Hit(int32 Health, int32 Stamina, bool Crit);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Set_State(Enum_TutoMannequinState State_0);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tuto_Mannequin_C">();
	}
	static class ATuto_Mannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATuto_Mannequin_C>();
	}
};
static_assert(alignof(ATuto_Mannequin_C) == 0x000008, "Wrong alignment on ATuto_Mannequin_C");
static_assert(sizeof(ATuto_Mannequin_C) == 0x000308, "Wrong size on ATuto_Mannequin_C");
static_assert(offsetof(ATuto_Mannequin_C, UberGraphFrame) == 0x0002A8, "Member 'ATuto_Mannequin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, Head_Hitbox) == 0x0002B0, "Member 'ATuto_Mannequin_C::Head_Hitbox' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, StaticMesh) == 0x0002B8, "Member 'ATuto_Mannequin_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, SkM_Body) == 0x0002C0, "Member 'ATuto_Mannequin_C::SkM_Body' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, DefaultSceneRoot) == 0x0002C8, "Member 'ATuto_Mannequin_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, State) == 0x0002D0, "Member 'ATuto_Mannequin_C::State' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, GM_Ref) == 0x0002D8, "Member 'ATuto_Mannequin_C::GM_Ref' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, Head_Damage_Color) == 0x0002E0, "Member 'ATuto_Mannequin_C::Head_Damage_Color' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, Delta) == 0x0002E8, "Member 'ATuto_Mannequin_C::Delta' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, Body_Damage_Color) == 0x0002F0, "Member 'ATuto_Mannequin_C::Body_Damage_Color' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, Recoil_Timer) == 0x0002F8, "Member 'ATuto_Mannequin_C::Recoil_Timer' has a wrong offset!");
static_assert(offsetof(ATuto_Mannequin_C, Check) == 0x000300, "Member 'ATuto_Mannequin_C::Check' has a wrong offset!");

}

