﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Bannier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Bannier.W_Bannier_C
// 0x0058 (0x0328 - 0x02D0)
class UW_Bannier_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowBackground;                                    // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Hovered;                                           // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              On_Pressed;                                        // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Menu_C*                              Parent;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 Text;                                              // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Width;                                             // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_Bannier(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Bannier_C">();
	}
	static class UW_Bannier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Bannier_C>();
	}
};
static_assert(alignof(UW_Bannier_C) == 0x000008, "Wrong alignment on UW_Bannier_C");
static_assert(sizeof(UW_Bannier_C) == 0x000328, "Wrong size on UW_Bannier_C");
static_assert(offsetof(UW_Bannier_C, UberGraphFrame) == 0x0002D0, "Member 'UW_Bannier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, ShowBackground) == 0x0002D8, "Member 'UW_Bannier_C::ShowBackground' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, ButtonText) == 0x0002E0, "Member 'UW_Bannier_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, SizeBox) == 0x0002E8, "Member 'UW_Bannier_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, Hovered) == 0x0002F0, "Member 'UW_Bannier_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, On_Pressed) == 0x0002F8, "Member 'UW_Bannier_C::On_Pressed' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, Parent) == 0x000308, "Member 'UW_Bannier_C::Parent' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, Text) == 0x000310, "Member 'UW_Bannier_C::Text' has a wrong offset!");
static_assert(offsetof(UW_Bannier_C, Width) == 0x000320, "Member 'UW_Bannier_C::Width' has a wrong offset!");

}

