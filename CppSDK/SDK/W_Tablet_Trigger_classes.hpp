﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tablet_Trigger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Tablet_Trigger.W_Tablet_Trigger_C
// 0x0090 (0x0360 - 0x02D0)
class UW_Tablet_Trigger_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowBackground;                                    // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Hovered;                                           // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              On_Pressed;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Menu_C*                              Menu;                                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              On_Released;                                       // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FVector2D& Mouse_Delta)> Hold_Tick;                   // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Last_Hovered;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              On_Enter;                                          // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_Leave;                                          // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Can_Hold;                                          // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hold;                                              // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sound;                                             // 0x0353(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATablet_C*                              Tablet_Ref;                                        // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Click();
	void Reset();
	void Construct();
	void Reset_Trigger();
	void ExecuteUbergraph_W_Tablet_Trigger(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Tablet_Trigger_C">();
	}
	static class UW_Tablet_Trigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Tablet_Trigger_C>();
	}
};
static_assert(alignof(UW_Tablet_Trigger_C) == 0x000008, "Wrong alignment on UW_Tablet_Trigger_C");
static_assert(sizeof(UW_Tablet_Trigger_C) == 0x000360, "Wrong size on UW_Tablet_Trigger_C");
static_assert(offsetof(UW_Tablet_Trigger_C, UberGraphFrame) == 0x0002D0, "Member 'UW_Tablet_Trigger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, ShowBackground) == 0x0002D8, "Member 'UW_Tablet_Trigger_C::ShowBackground' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Background) == 0x0002E0, "Member 'UW_Tablet_Trigger_C::Background' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Hovered) == 0x0002E8, "Member 'UW_Tablet_Trigger_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, On_Pressed) == 0x0002F0, "Member 'UW_Tablet_Trigger_C::On_Pressed' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Menu) == 0x000300, "Member 'UW_Tablet_Trigger_C::Menu' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, On_Released) == 0x000308, "Member 'UW_Tablet_Trigger_C::On_Released' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Hold_Tick) == 0x000318, "Member 'UW_Tablet_Trigger_C::Hold_Tick' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Last_Hovered) == 0x000328, "Member 'UW_Tablet_Trigger_C::Last_Hovered' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, On_Enter) == 0x000330, "Member 'UW_Tablet_Trigger_C::On_Enter' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, On_Leave) == 0x000340, "Member 'UW_Tablet_Trigger_C::On_Leave' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Can_Hold) == 0x000350, "Member 'UW_Tablet_Trigger_C::Can_Hold' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Hold) == 0x000351, "Member 'UW_Tablet_Trigger_C::Hold' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Debug) == 0x000352, "Member 'UW_Tablet_Trigger_C::Debug' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Sound) == 0x000353, "Member 'UW_Tablet_Trigger_C::Sound' has a wrong offset!");
static_assert(offsetof(UW_Tablet_Trigger_C, Tablet_Ref) == 0x000358, "Member 'UW_Tablet_Trigger_C::Tablet_Ref' has a wrong offset!");

}

