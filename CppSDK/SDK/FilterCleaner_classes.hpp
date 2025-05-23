﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FilterCleaner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_GenericMachine_State_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FilterCleaner.FilterCleaner_C
// 0x00E8 (0x0390 - 0x02A8)
class AFilterCleaner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   MapMesh_TaskMachine_FliterCleaner_SlotFrame;       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MS_Machine;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MS_Filter;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_SoundPath;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_Button;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MapMesh_TaskMachine_ContainerCleaner_Lights;       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MapMesh_TaskMachine_ContainerCleaner;              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_Filter;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TL_Filter_Anim_Machine_Sound_F8CD93EE465C35AB30A4879E19D5304E; // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TL_Filter_Anim_Anim_F8CD93EE465C35AB30A4879E19D5304E; // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Filter_Anim__Direction_F8CD93EE465C35AB30A4879E19D5304E; // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Filter_Anim;                                    // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Process;                                           // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_344[0x4];                                      // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_GenericMachine_Jauge_C*              W_Screen;                                          // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Charge_Speed;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	E_GenericMachine_State                        State;                                             // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemSlot_C*                            Filter;                                            // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AButton_C*                              Button;                                            // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_Process;                                       // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASoundPath_C*                           SoundPath;                                         // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          In_Anim;                                           // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void All_PLay_Bip(int32 State_0);
	void BndEvt__Analyzer_Button_K2Node_ComponentBoundEvent_0_Button_Push__DelegateSignature(class AMec_C* Source);
	void BndEvt__Analyzer_Sample_K2Node_ComponentBoundEvent_1_Place_Item__DelegateSignature();
	void BndEvt__Analyzer_Sample_K2Node_ComponentBoundEvent_2_Take_Item__DelegateSignature();
	void Clear();
	void ExecuteUbergraph_FilterCleaner(int32 EntryPoint);
	void Filter_Animation(bool In);
	void Get_Key(class AActor** Key);
	void Get_Name(class AMec_C* Mec, class FString* Name_0);
	void Local_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State);
	void Net_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State);
	void OnRep_Process();
	void OnRep_State();
	void Other_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State);
	void Pause_Process();
	void Process_Screen();
	void Process_Tick();
	void ReceiveBeginPlay();
	void Request_Update_Screen();
	void Set_State(E_GenericMachine_State State_0);
	void Start_Process();
	void TL_Filter_Anim__FinishedFunc();
	void TL_Filter_Anim__UpdateFunc();
	void Update_Screen(int32 Process_0, E_GenericMachine_State State_0);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilterCleaner_C">();
	}
	static class AFilterCleaner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFilterCleaner_C>();
	}
};
static_assert(alignof(AFilterCleaner_C) == 0x000008, "Wrong alignment on AFilterCleaner_C");
static_assert(sizeof(AFilterCleaner_C) == 0x000390, "Wrong size on AFilterCleaner_C");
static_assert(offsetof(AFilterCleaner_C, UberGraphFrame) == 0x0002A8, "Member 'AFilterCleaner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, MapMesh_TaskMachine_FliterCleaner_SlotFrame) == 0x0002B0, "Member 'AFilterCleaner_C::MapMesh_TaskMachine_FliterCleaner_SlotFrame' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, MS_Machine) == 0x0002B8, "Member 'AFilterCleaner_C::MS_Machine' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, MS_Filter) == 0x0002C0, "Member 'AFilterCleaner_C::MS_Filter' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, C_SoundPath) == 0x0002C8, "Member 'AFilterCleaner_C::C_SoundPath' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, C_Button) == 0x0002D0, "Member 'AFilterCleaner_C::C_Button' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, MapMesh_TaskMachine_ContainerCleaner_Lights) == 0x0002D8, "Member 'AFilterCleaner_C::MapMesh_TaskMachine_ContainerCleaner_Lights' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, MapMesh_TaskMachine_ContainerCleaner) == 0x0002E0, "Member 'AFilterCleaner_C::MapMesh_TaskMachine_ContainerCleaner' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, C_Filter) == 0x0002E8, "Member 'AFilterCleaner_C::C_Filter' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Widget) == 0x0002F0, "Member 'AFilterCleaner_C::Widget' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Root) == 0x0002F8, "Member 'AFilterCleaner_C::Root' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, TL_Filter_Anim_Machine_Sound_F8CD93EE465C35AB30A4879E19D5304E) == 0x000300, "Member 'AFilterCleaner_C::TL_Filter_Anim_Machine_Sound_F8CD93EE465C35AB30A4879E19D5304E' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, TL_Filter_Anim_Anim_F8CD93EE465C35AB30A4879E19D5304E) == 0x000318, "Member 'AFilterCleaner_C::TL_Filter_Anim_Anim_F8CD93EE465C35AB30A4879E19D5304E' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, TL_Filter_Anim__Direction_F8CD93EE465C35AB30A4879E19D5304E) == 0x000330, "Member 'AFilterCleaner_C::TL_Filter_Anim__Direction_F8CD93EE465C35AB30A4879E19D5304E' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, TL_Filter_Anim) == 0x000338, "Member 'AFilterCleaner_C::TL_Filter_Anim' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Process) == 0x000340, "Member 'AFilterCleaner_C::Process' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, W_Screen) == 0x000348, "Member 'AFilterCleaner_C::W_Screen' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Timer) == 0x000350, "Member 'AFilterCleaner_C::Timer' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Charge_Speed) == 0x000358, "Member 'AFilterCleaner_C::Charge_Speed' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, State) == 0x000360, "Member 'AFilterCleaner_C::State' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Filter) == 0x000368, "Member 'AFilterCleaner_C::Filter' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Button) == 0x000370, "Member 'AFilterCleaner_C::Button' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, Max_Process) == 0x000378, "Member 'AFilterCleaner_C::Max_Process' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, SoundPath) == 0x000380, "Member 'AFilterCleaner_C::SoundPath' has a wrong offset!");
static_assert(offsetof(AFilterCleaner_C, In_Anim) == 0x000388, "Member 'AFilterCleaner_C::In_Anim' has a wrong offset!");

}

