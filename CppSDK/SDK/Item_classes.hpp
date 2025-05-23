﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_Logic_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Str_ItemState_structs.hpp"
#include "E_ItemPlaceType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item.Item_C
// 0x0128 (0x03D0 - 0x02A8)
class AItem_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ShadowBounds;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CA_SoundSource;                                    // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CA_Interaction;                                    // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Place_Marge_Marge_4E2A4D4E4BDBA4AA606E38A703076ACF; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Place_Marge__Direction_4E2A4D4E4BDBA4AA606E38A703076ACF; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Place_Marge;                                    // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Simulate;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Net_Location;                                      // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Net_TargetLocation;                                // 0x0300(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Net_Velocity;                                      // 0x0318(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Net_Rotation;                                      // 0x0330(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Spawn_Velocity;                                    // 0x0348(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Spawn_Rotation;                                    // 0x0360(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UData_Item_C*                           Item_Data;                                         // 0x0378(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x0380(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FStr_ItemState                         Item_State;                                        // 0x0388(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASoundSource_C*                         Sound_Source;                                      // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Can_Sound;                                         // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Logic                                       Logic;                                             // 0x0399(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AInteraction_C*                         Interaction;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AInteraction_C*                         Tool_Interaction;                                  // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_ItemPlaceType                               Place_Type;                                        // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Smooth;                                            // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B2[0x6];                                      // 0x03B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Place_Marge;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGM_C*                                  GM_Ref;                                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShadowVisibility;                                  // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void All_Impact_Sound(double Value);
	void BndEvt__Item_Interaction_K2Node_ComponentBoundEvent_3_Local_Trigger__DelegateSignature(class AMec_C* Source, const struct FStr_ItemState& State);
	void BndEvt__Item_Interaction_K2Node_ComponentBoundEvent_4_Focus__DelegateSignature(bool TRUE_0);
	void BndEvt__Item_Interaction_K2Node_ComponentBoundEvent_5_Focusable__DelegateSignature(bool TRUE_0);
	void BndEvt__World_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, class FName BoneName);
	void BndEvt__World_Item_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, class FName BoneName);
	void BndEvt__World_Item_StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Clear();
	void ExecuteUbergraph_Item(int32 EntryPoint);
	void Initiate();
	void OnRep_Interaction();
	void OnRep_Item_Data();
	void OnRep_Logic();
	void OnRep_Mesh();
	void OnRep_Net_TargetLocation();
	void OnRep_Simulate();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Set_Movement(bool Velocity);
	void Set_Simulation();
	void TL_Place_Marge__FinishedFunc();
	void TL_Place_Marge__UpdateFunc();
	void Update_Shadow();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_C">();
	}
	static class AItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItem_C>();
	}
};
static_assert(alignof(AItem_C) == 0x000008, "Wrong alignment on AItem_C");
static_assert(sizeof(AItem_C) == 0x0003D0, "Wrong size on AItem_C");
static_assert(offsetof(AItem_C, UberGraphFrame) == 0x0002A8, "Member 'AItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItem_C, ShadowBounds) == 0x0002B0, "Member 'AItem_C::ShadowBounds' has a wrong offset!");
static_assert(offsetof(AItem_C, CA_SoundSource) == 0x0002B8, "Member 'AItem_C::CA_SoundSource' has a wrong offset!");
static_assert(offsetof(AItem_C, CA_Interaction) == 0x0002C0, "Member 'AItem_C::CA_Interaction' has a wrong offset!");
static_assert(offsetof(AItem_C, StaticMesh) == 0x0002C8, "Member 'AItem_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AItem_C, TL_Place_Marge_Marge_4E2A4D4E4BDBA4AA606E38A703076ACF) == 0x0002D0, "Member 'AItem_C::TL_Place_Marge_Marge_4E2A4D4E4BDBA4AA606E38A703076ACF' has a wrong offset!");
static_assert(offsetof(AItem_C, TL_Place_Marge__Direction_4E2A4D4E4BDBA4AA606E38A703076ACF) == 0x0002D4, "Member 'AItem_C::TL_Place_Marge__Direction_4E2A4D4E4BDBA4AA606E38A703076ACF' has a wrong offset!");
static_assert(offsetof(AItem_C, TL_Place_Marge) == 0x0002D8, "Member 'AItem_C::TL_Place_Marge' has a wrong offset!");
static_assert(offsetof(AItem_C, Simulate) == 0x0002E0, "Member 'AItem_C::Simulate' has a wrong offset!");
static_assert(offsetof(AItem_C, Net_Location) == 0x0002E8, "Member 'AItem_C::Net_Location' has a wrong offset!");
static_assert(offsetof(AItem_C, Net_TargetLocation) == 0x000300, "Member 'AItem_C::Net_TargetLocation' has a wrong offset!");
static_assert(offsetof(AItem_C, Net_Velocity) == 0x000318, "Member 'AItem_C::Net_Velocity' has a wrong offset!");
static_assert(offsetof(AItem_C, Net_Rotation) == 0x000330, "Member 'AItem_C::Net_Rotation' has a wrong offset!");
static_assert(offsetof(AItem_C, Spawn_Velocity) == 0x000348, "Member 'AItem_C::Spawn_Velocity' has a wrong offset!");
static_assert(offsetof(AItem_C, Spawn_Rotation) == 0x000360, "Member 'AItem_C::Spawn_Rotation' has a wrong offset!");
static_assert(offsetof(AItem_C, Item_Data) == 0x000378, "Member 'AItem_C::Item_Data' has a wrong offset!");
static_assert(offsetof(AItem_C, Mesh) == 0x000380, "Member 'AItem_C::Mesh' has a wrong offset!");
static_assert(offsetof(AItem_C, Item_State) == 0x000388, "Member 'AItem_C::Item_State' has a wrong offset!");
static_assert(offsetof(AItem_C, Sound_Source) == 0x000390, "Member 'AItem_C::Sound_Source' has a wrong offset!");
static_assert(offsetof(AItem_C, Can_Sound) == 0x000398, "Member 'AItem_C::Can_Sound' has a wrong offset!");
static_assert(offsetof(AItem_C, Logic) == 0x000399, "Member 'AItem_C::Logic' has a wrong offset!");
static_assert(offsetof(AItem_C, Interaction) == 0x0003A0, "Member 'AItem_C::Interaction' has a wrong offset!");
static_assert(offsetof(AItem_C, Tool_Interaction) == 0x0003A8, "Member 'AItem_C::Tool_Interaction' has a wrong offset!");
static_assert(offsetof(AItem_C, Place_Type) == 0x0003B0, "Member 'AItem_C::Place_Type' has a wrong offset!");
static_assert(offsetof(AItem_C, Smooth) == 0x0003B1, "Member 'AItem_C::Smooth' has a wrong offset!");
static_assert(offsetof(AItem_C, Place_Marge) == 0x0003B8, "Member 'AItem_C::Place_Marge' has a wrong offset!");
static_assert(offsetof(AItem_C, GM_Ref) == 0x0003C0, "Member 'AItem_C::GM_Ref' has a wrong offset!");
static_assert(offsetof(AItem_C, ShadowVisibility) == 0x0003C8, "Member 'AItem_C::ShadowVisibility' has a wrong offset!");

}

