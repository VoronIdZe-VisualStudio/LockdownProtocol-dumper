﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Skin_ColorSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_SelectedColor_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Skin_ColorSelection.W_Skin_ColorSelection_C
// 0x0148 (0x0418 - 0x02D0)
class UW_Skin_ColorSelection_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowBackground;                                    // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Background_1;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Background_2;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText_1;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Frame;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Frame_1;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Frame_2;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_2;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tablet_Trigger_C*                    W_Tablet_Trigger;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Hovered;                                           // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              On_Pressed;                                        // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 Text;                                              // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Color;                                             // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Press_Color;                                       // 0x0374(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Invert_Text;                                       // 0x0384(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_385[0x3];                                      // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Text_Size;                                         // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Letter_Spacing;                                    // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Letter_Thickness;                                  // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColor;                                         // 0x0394(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Unovered_Color;                                    // 0x03A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Hovered_Color;                                     // 0x03B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Hovered_Text_Color;                                // 0x03C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Unovered_Text_Color;                               // 0x03D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Color_Preset;                                      // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lock;                                              // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              On_Enter;                                          // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_Leave;                                          // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	Enum_SelectedColor                            Data;                                              // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_Tablet_ButtonText_W_Tablet_Trigger_K2Node_ComponentBoundEvent_0_On_Pressed__DelegateSignature();
	void BndEvt__W_Tablet_ButtonText_W_Tablet_Trigger_K2Node_ComponentBoundEvent_4_On_Enter__DelegateSignature();
	void BndEvt__W_Tablet_ButtonText_W_Tablet_Trigger_K2Node_ComponentBoundEvent_5_On_Leave__DelegateSignature();
	void ExecuteUbergraph_W_Skin_ColorSelection(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Rename(const class FString& Text_0);
	void Reset();
	void Select_Skin();
	void Selected(bool TRUE_0);
	void Set_Owner(class AMec_C* Mec);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Skin_ColorSelection_C">();
	}
	static class UW_Skin_ColorSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Skin_ColorSelection_C>();
	}
};
static_assert(alignof(UW_Skin_ColorSelection_C) == 0x000008, "Wrong alignment on UW_Skin_ColorSelection_C");
static_assert(sizeof(UW_Skin_ColorSelection_C) == 0x000418, "Wrong size on UW_Skin_ColorSelection_C");
static_assert(offsetof(UW_Skin_ColorSelection_C, UberGraphFrame) == 0x0002D0, "Member 'UW_Skin_ColorSelection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, ShowBackground) == 0x0002D8, "Member 'UW_Skin_ColorSelection_C::ShowBackground' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Background) == 0x0002E0, "Member 'UW_Skin_ColorSelection_C::Background' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Background_1) == 0x0002E8, "Member 'UW_Skin_ColorSelection_C::Background_1' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Background_2) == 0x0002F0, "Member 'UW_Skin_ColorSelection_C::Background_2' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, ButtonText) == 0x0002F8, "Member 'UW_Skin_ColorSelection_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, ButtonText_1) == 0x000300, "Member 'UW_Skin_ColorSelection_C::ButtonText_1' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Frame) == 0x000308, "Member 'UW_Skin_ColorSelection_C::Frame' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Frame_1) == 0x000310, "Member 'UW_Skin_ColorSelection_C::Frame_1' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Frame_2) == 0x000318, "Member 'UW_Skin_ColorSelection_C::Frame_2' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Image) == 0x000320, "Member 'UW_Skin_ColorSelection_C::Image' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, SizeBox) == 0x000328, "Member 'UW_Skin_ColorSelection_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, SizeBox_1) == 0x000330, "Member 'UW_Skin_ColorSelection_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, SizeBox_2) == 0x000338, "Member 'UW_Skin_ColorSelection_C::SizeBox_2' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, W_Tablet_Trigger) == 0x000340, "Member 'UW_Skin_ColorSelection_C::W_Tablet_Trigger' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Hovered) == 0x000348, "Member 'UW_Skin_ColorSelection_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, On_Pressed) == 0x000350, "Member 'UW_Skin_ColorSelection_C::On_Pressed' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Text) == 0x000360, "Member 'UW_Skin_ColorSelection_C::Text' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Color) == 0x000370, "Member 'UW_Skin_ColorSelection_C::Color' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Press_Color) == 0x000374, "Member 'UW_Skin_ColorSelection_C::Press_Color' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Invert_Text) == 0x000384, "Member 'UW_Skin_ColorSelection_C::Invert_Text' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Text_Size) == 0x000388, "Member 'UW_Skin_ColorSelection_C::Text_Size' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Letter_Spacing) == 0x00038C, "Member 'UW_Skin_ColorSelection_C::Letter_Spacing' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Letter_Thickness) == 0x000390, "Member 'UW_Skin_ColorSelection_C::Letter_Thickness' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, TextColor) == 0x000394, "Member 'UW_Skin_ColorSelection_C::TextColor' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Unovered_Color) == 0x0003A4, "Member 'UW_Skin_ColorSelection_C::Unovered_Color' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Hovered_Color) == 0x0003B4, "Member 'UW_Skin_ColorSelection_C::Hovered_Color' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Hovered_Text_Color) == 0x0003C4, "Member 'UW_Skin_ColorSelection_C::Hovered_Text_Color' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Unovered_Text_Color) == 0x0003D4, "Member 'UW_Skin_ColorSelection_C::Unovered_Text_Color' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Color_Preset) == 0x0003E4, "Member 'UW_Skin_ColorSelection_C::Color_Preset' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Lock) == 0x0003E8, "Member 'UW_Skin_ColorSelection_C::Lock' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, On_Enter) == 0x0003F0, "Member 'UW_Skin_ColorSelection_C::On_Enter' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, On_Leave) == 0x000400, "Member 'UW_Skin_ColorSelection_C::On_Leave' has a wrong offset!");
static_assert(offsetof(UW_Skin_ColorSelection_C, Data) == 0x000410, "Member 'UW_Skin_ColorSelection_C::Data' has a wrong offset!");

}

