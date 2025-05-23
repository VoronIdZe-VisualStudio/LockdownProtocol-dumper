﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_HandsSquare

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tuto_HandsSquare.Tuto_HandsSquare_C
// 0x0050 (0x02F8 - 0x02A8)
class ATuto_HandsSquare_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Plane;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ATuto_Button_C*                         Button_1;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ATuto_Button_C*                         Button_2;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ATuto_Check_C*                          Check_1;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ATuto_Check_C*                          Check_2;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         State;                                             // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_C*                                  GM_Ref;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Tuto_SneakSquare_Button_1_K2Node_ComponentBoundEvent_0_Press__DelegateSignature();
	void BndEvt__Tuto_SneakSquare_Button_2_K2Node_ComponentBoundEvent_1_Press__DelegateSignature();
	void Check_Items_on_Square();
	void Clear();
	void ExecuteUbergraph_Tuto_HandsSquare(int32 EntryPoint);
	void Go_To_State(int32 State_0);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Tutorial_Change(bool Start);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tuto_HandsSquare_C">();
	}
	static class ATuto_HandsSquare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATuto_HandsSquare_C>();
	}
};
static_assert(alignof(ATuto_HandsSquare_C) == 0x000008, "Wrong alignment on ATuto_HandsSquare_C");
static_assert(sizeof(ATuto_HandsSquare_C) == 0x0002F8, "Wrong size on ATuto_HandsSquare_C");
static_assert(offsetof(ATuto_HandsSquare_C, UberGraphFrame) == 0x0002A8, "Member 'ATuto_HandsSquare_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, Plane) == 0x0002B0, "Member 'ATuto_HandsSquare_C::Plane' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, DefaultSceneRoot) == 0x0002B8, "Member 'ATuto_HandsSquare_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, Mec_Ref) == 0x0002C0, "Member 'ATuto_HandsSquare_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, Button_1) == 0x0002C8, "Member 'ATuto_HandsSquare_C::Button_1' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, Button_2) == 0x0002D0, "Member 'ATuto_HandsSquare_C::Button_2' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, Check_1) == 0x0002D8, "Member 'ATuto_HandsSquare_C::Check_1' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, Check_2) == 0x0002E0, "Member 'ATuto_HandsSquare_C::Check_2' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, State) == 0x0002E8, "Member 'ATuto_HandsSquare_C::State' has a wrong offset!");
static_assert(offsetof(ATuto_HandsSquare_C, GM_Ref) == 0x0002F0, "Member 'ATuto_HandsSquare_C::GM_Ref' has a wrong offset!");

}

