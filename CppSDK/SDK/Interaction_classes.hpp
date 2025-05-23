﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Interaction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Str_ItemState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Interaction.Interaction_C
// 0x00E8 (0x0390 - 0x02A8)
class AInteraction_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow5;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow4;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow3;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UData_Item_C*                           Tool;                                              // 0x02F0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lock;                                              // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Slot;                                              // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30B[0x5];                                      // 0x030B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Interaction_C*                       Circle;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Visible_Lerp;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFocus;                                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Focus_Lerp;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Optimising;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class AMec_C* Source, const struct FStr_ItemState& State)> Local_Trigger; // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class AMec_C* Source, const struct FStr_ItemState& State)> Net_Trigger; // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Debug;                                             // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool TRUE)>     Focus;                                             // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool TRUE)>     Focusable;                                         // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Private_Lock;                                      // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Long_Range;                                        // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Get_Name(class AMec_C* Mec, class FString* Param_Name_0);
	void Get_Key(class AActor** Key);
	void OnRep_Lock();
	void Other_Interaction(int32 Param_Index_0, class AActor* Source, const struct FStr_ItemState& Item_State);
	void ReceiveBeginPlay();
	void Local_Interaction(int32 Param_Index_0, class AActor* Source, const struct FStr_ItemState& Item_State);
	void Net_Interaction(int32 Param_Index_0, class AActor* Source, const struct FStr_ItemState& Item_State);
	void Activate(bool Active_0);
	void Set_Lock(bool Lock_0);
	void Set_Focus(bool TRUE_0);
	void Set_Private_Lock(bool Lock_0);
	void Search_Tick();
	void ExecuteUbergraph_Interaction(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Interaction_C">();
	}
	static class AInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteraction_C>();
	}
};
static_assert(alignof(AInteraction_C) == 0x000008, "Wrong alignment on AInteraction_C");
static_assert(sizeof(AInteraction_C) == 0x000390, "Wrong size on AInteraction_C");
static_assert(offsetof(AInteraction_C, UberGraphFrame) == 0x0002A8, "Member 'AInteraction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Arrow5) == 0x0002B0, "Member 'AInteraction_C::Arrow5' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Arrow4) == 0x0002B8, "Member 'AInteraction_C::Arrow4' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Arrow3) == 0x0002C0, "Member 'AInteraction_C::Arrow3' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Arrow2) == 0x0002C8, "Member 'AInteraction_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Arrow1) == 0x0002D0, "Member 'AInteraction_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Arrow) == 0x0002D8, "Member 'AInteraction_C::Arrow' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Root) == 0x0002E0, "Member 'AInteraction_C::Root' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Index_0) == 0x0002E8, "Member 'AInteraction_C::Index_0' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Tool) == 0x0002F0, "Member 'AInteraction_C::Tool' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Name_0) == 0x0002F8, "Member 'AInteraction_C::Name_0' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Active) == 0x000308, "Member 'AInteraction_C::Active' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Lock) == 0x000309, "Member 'AInteraction_C::Lock' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Slot) == 0x00030A, "Member 'AInteraction_C::Slot' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Circle) == 0x000310, "Member 'AInteraction_C::Circle' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Mec_Ref) == 0x000318, "Member 'AInteraction_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Visible_Lerp) == 0x000320, "Member 'AInteraction_C::Visible_Lerp' has a wrong offset!");
static_assert(offsetof(AInteraction_C, IsFocus) == 0x000328, "Member 'AInteraction_C::IsFocus' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Focus_Lerp) == 0x000330, "Member 'AInteraction_C::Focus_Lerp' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Optimising) == 0x000338, "Member 'AInteraction_C::Optimising' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Local_Trigger) == 0x000340, "Member 'AInteraction_C::Local_Trigger' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Net_Trigger) == 0x000350, "Member 'AInteraction_C::Net_Trigger' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Debug) == 0x000360, "Member 'AInteraction_C::Debug' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Focus) == 0x000368, "Member 'AInteraction_C::Focus' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Focusable) == 0x000378, "Member 'AInteraction_C::Focusable' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Private_Lock) == 0x000388, "Member 'AInteraction_C::Private_Lock' has a wrong offset!");
static_assert(offsetof(AInteraction_C, Long_Range) == 0x000389, "Member 'AInteraction_C::Long_Range' has a wrong offset!");

}

