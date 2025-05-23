﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_VentState_structs.hpp"
#include "Enum_Sectors_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vent.Vent_C
// 0x00D0 (0x0378 - 0x02A8)
class AVent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Collisions1;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Collisions;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Map_Position;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_SoundPath;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Filter_Indicator;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lock_Indicator;                                    // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_Screw_L;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_Screw_R;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_Filter;                                          // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         In_Color;                                          // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Out_Color;                                         // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Energy;                                            // 0x0318(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemSlot_C*                            Filter;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Filter_Cleaned;                                    // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AButton_C*                              As_Button;                                         // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AScrew_C*>                       Screws;                                            // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	E_VentState                                   LockState;                                         // 0x0350(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          ScrewLock;                                         // 0x0351(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         FilterState;                                       // 0x0352(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353[0x1];                                      // 0x0353(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Clean_Request;                                     // 0x0354(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class ASoundSource_C*                         Sound;                                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Task_Vent;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASoundPath_C*                           Sound_Patch;                                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Vent_Pitch;                                        // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_VentState                                   Prv_State;                                         // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_Sectors                                  Sector;                                            // 0x0375(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void All_Update_Filter_Indicator(uint8 Filter_State);
	void All_Update_Lock_Indicator(E_VentState State, uint8 Filter_State);
	void BndEvt__Vent_Audio_K2Node_ComponentBoundEvent_1_OnAudioVirtualizationChanged__DelegateSignature(bool bIsVirtualized);
	void BndEvt__Vent_Filter_K2Node_ComponentBoundEvent_2_Place_Item__DelegateSignature();
	void BndEvt__Vent_Filter_K2Node_ComponentBoundEvent_3_Take_Item__DelegateSignature();
	void Check_Pitch(E_VentState Lock_State, uint8 Filter_State);
	void Check_Screw(E_VentState* LockState_0);
	void Clear();
	void ExecuteUbergraph_Vent(int32 EntryPoint);
	void Get_Map_Position(struct FVector* Location);
	void OnRep_Clean_Request();
	void OnRep_FilterState();
	void OnRep_LockState();
	void OnRep_Sound_Pitch();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Screw_Change(class AMec_C* Source);
	void Set_Light_State();
	void Start_Vent();
	void Update_Filter_Indicator(uint8 Filter_State);
	void Update_Lock_Indicator(E_VentState Lock_State, uint8 Filter_State);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vent_C">();
	}
	static class AVent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVent_C>();
	}
};
static_assert(alignof(AVent_C) == 0x000008, "Wrong alignment on AVent_C");
static_assert(sizeof(AVent_C) == 0x000378, "Wrong size on AVent_C");
static_assert(offsetof(AVent_C, UberGraphFrame) == 0x0002A8, "Member 'AVent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVent_C, Collisions1) == 0x0002B0, "Member 'AVent_C::Collisions1' has a wrong offset!");
static_assert(offsetof(AVent_C, Collisions) == 0x0002B8, "Member 'AVent_C::Collisions' has a wrong offset!");
static_assert(offsetof(AVent_C, Map_Position) == 0x0002C0, "Member 'AVent_C::Map_Position' has a wrong offset!");
static_assert(offsetof(AVent_C, Audio) == 0x0002C8, "Member 'AVent_C::Audio' has a wrong offset!");
static_assert(offsetof(AVent_C, C_SoundPath) == 0x0002D0, "Member 'AVent_C::C_SoundPath' has a wrong offset!");
static_assert(offsetof(AVent_C, Filter_Indicator) == 0x0002D8, "Member 'AVent_C::Filter_Indicator' has a wrong offset!");
static_assert(offsetof(AVent_C, Lock_Indicator) == 0x0002E0, "Member 'AVent_C::Lock_Indicator' has a wrong offset!");
static_assert(offsetof(AVent_C, C_Screw_L) == 0x0002E8, "Member 'AVent_C::C_Screw_L' has a wrong offset!");
static_assert(offsetof(AVent_C, C_Screw_R) == 0x0002F0, "Member 'AVent_C::C_Screw_R' has a wrong offset!");
static_assert(offsetof(AVent_C, C_Filter) == 0x0002F8, "Member 'AVent_C::C_Filter' has a wrong offset!");
static_assert(offsetof(AVent_C, Root) == 0x000300, "Member 'AVent_C::Root' has a wrong offset!");
static_assert(offsetof(AVent_C, Cube) == 0x000308, "Member 'AVent_C::Cube' has a wrong offset!");
static_assert(offsetof(AVent_C, In_Color) == 0x000310, "Member 'AVent_C::In_Color' has a wrong offset!");
static_assert(offsetof(AVent_C, Out_Color) == 0x000314, "Member 'AVent_C::Out_Color' has a wrong offset!");
static_assert(offsetof(AVent_C, Energy) == 0x000318, "Member 'AVent_C::Energy' has a wrong offset!");
static_assert(offsetof(AVent_C, Filter) == 0x000320, "Member 'AVent_C::Filter' has a wrong offset!");
static_assert(offsetof(AVent_C, Filter_Cleaned) == 0x000328, "Member 'AVent_C::Filter_Cleaned' has a wrong offset!");
static_assert(offsetof(AVent_C, As_Button) == 0x000338, "Member 'AVent_C::As_Button' has a wrong offset!");
static_assert(offsetof(AVent_C, Screws) == 0x000340, "Member 'AVent_C::Screws' has a wrong offset!");
static_assert(offsetof(AVent_C, LockState) == 0x000350, "Member 'AVent_C::LockState' has a wrong offset!");
static_assert(offsetof(AVent_C, ScrewLock) == 0x000351, "Member 'AVent_C::ScrewLock' has a wrong offset!");
static_assert(offsetof(AVent_C, FilterState) == 0x000352, "Member 'AVent_C::FilterState' has a wrong offset!");
static_assert(offsetof(AVent_C, Clean_Request) == 0x000354, "Member 'AVent_C::Clean_Request' has a wrong offset!");
static_assert(offsetof(AVent_C, Sound) == 0x000358, "Member 'AVent_C::Sound' has a wrong offset!");
static_assert(offsetof(AVent_C, Task_Vent) == 0x000360, "Member 'AVent_C::Task_Vent' has a wrong offset!");
static_assert(offsetof(AVent_C, Sound_Patch) == 0x000368, "Member 'AVent_C::Sound_Patch' has a wrong offset!");
static_assert(offsetof(AVent_C, Vent_Pitch) == 0x000370, "Member 'AVent_C::Vent_Pitch' has a wrong offset!");
static_assert(offsetof(AVent_C, Prv_State) == 0x000374, "Member 'AVent_C::Prv_State' has a wrong offset!");
static_assert(offsetof(AVent_C, Sector) == 0x000375, "Member 'AVent_C::Sector' has a wrong offset!");

}

