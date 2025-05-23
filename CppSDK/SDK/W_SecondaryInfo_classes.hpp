﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SecondaryInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SecondaryInfo.W_SecondaryInfo_C
// 0x0078 (0x0348 - 0x02D0)
class UW_SecondaryInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       cul;                                               // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Hidder;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Switching_Item;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               M_Jauge;                                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Size;                                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Spacer_Size;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Hidder_Opacity;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_SecondaryInfo(int32 EntryPoint);
	void Get_Size();
	void Set_Info(const class FString& Text);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SecondaryInfo_C">();
	}
	static class UW_SecondaryInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SecondaryInfo_C>();
	}
};
static_assert(alignof(UW_SecondaryInfo_C) == 0x000008, "Wrong alignment on UW_SecondaryInfo_C");
static_assert(sizeof(UW_SecondaryInfo_C) == 0x000348, "Wrong size on UW_SecondaryInfo_C");
static_assert(offsetof(UW_SecondaryInfo_C, UberGraphFrame) == 0x0002D0, "Member 'UW_SecondaryInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, cul) == 0x0002D8, "Member 'UW_SecondaryInfo_C::cul' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Hidder) == 0x0002E0, "Member 'UW_SecondaryInfo_C::Hidder' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Overlay) == 0x0002E8, "Member 'UW_SecondaryInfo_C::Overlay' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, SizeBox) == 0x0002F0, "Member 'UW_SecondaryInfo_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Spacer) == 0x0002F8, "Member 'UW_SecondaryInfo_C::Spacer' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, TextBlock) == 0x000300, "Member 'UW_SecondaryInfo_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Mec_Ref) == 0x000308, "Member 'UW_SecondaryInfo_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Switching_Item) == 0x000310, "Member 'UW_SecondaryInfo_C::Switching_Item' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, M_Jauge) == 0x000318, "Member 'UW_SecondaryInfo_C::M_Jauge' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Size) == 0x000320, "Member 'UW_SecondaryInfo_C::Size' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Valid) == 0x000328, "Member 'UW_SecondaryInfo_C::Valid' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Spacer_Size) == 0x000330, "Member 'UW_SecondaryInfo_C::Spacer_Size' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Delta) == 0x000338, "Member 'UW_SecondaryInfo_C::Delta' has a wrong offset!");
static_assert(offsetof(UW_SecondaryInfo_C, Hidder_Opacity) == 0x000340, "Member 'UW_SecondaryInfo_C::Hidder_Opacity' has a wrong offset!");

}

