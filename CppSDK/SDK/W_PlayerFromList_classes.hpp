﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerFromList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerFromList.W_PlayerFromList_C
// 0x0078 (0x0348 - 0x02D0)
class UW_PlayerFromList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowBackground;                                    // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Ban;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Kick;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Trigger_C*                           W_Trigger_60;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Hovered;                                           // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              On_Pressed;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           Color;                                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Press_Color;                                       // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMec_C*                                 Mec;                                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_PlayerFromList_W_Ban_K2Node_ComponentBoundEvent_4_On_Pressed__DelegateSignature();
	void BndEvt__W_PlayerFromList_W_Kick_K2Node_ComponentBoundEvent_3_On_Pressed__DelegateSignature();
	void BndEvt__W_PlayerFromList_W_Trigger_60_K2Node_ComponentBoundEvent_5_On_Pressed__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_PlayerFromList(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerFromList_C">();
	}
	static class UW_PlayerFromList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerFromList_C>();
	}
};
static_assert(alignof(UW_PlayerFromList_C) == 0x000008, "Wrong alignment on UW_PlayerFromList_C");
static_assert(sizeof(UW_PlayerFromList_C) == 0x000348, "Wrong size on UW_PlayerFromList_C");
static_assert(offsetof(UW_PlayerFromList_C, UberGraphFrame) == 0x0002D0, "Member 'UW_PlayerFromList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, ShowBackground) == 0x0002D8, "Member 'UW_PlayerFromList_C::ShowBackground' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, Background) == 0x0002E0, "Member 'UW_PlayerFromList_C::Background' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, ButtonText) == 0x0002E8, "Member 'UW_PlayerFromList_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, W_Ban) == 0x0002F0, "Member 'UW_PlayerFromList_C::W_Ban' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, W_Kick) == 0x0002F8, "Member 'UW_PlayerFromList_C::W_Kick' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, W_Trigger_60) == 0x000300, "Member 'UW_PlayerFromList_C::W_Trigger_60' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, Hovered) == 0x000308, "Member 'UW_PlayerFromList_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, On_Pressed) == 0x000310, "Member 'UW_PlayerFromList_C::On_Pressed' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, Color) == 0x000320, "Member 'UW_PlayerFromList_C::Color' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, Press_Color) == 0x000330, "Member 'UW_PlayerFromList_C::Press_Color' has a wrong offset!");
static_assert(offsetof(UW_PlayerFromList_C, Mec) == 0x000340, "Member 'UW_PlayerFromList_C::Mec' has a wrong offset!");

}

