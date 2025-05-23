﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Enum_Stance_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerState.W_PlayerState_C
// 0x0110 (0x03E0 - 0x02D0)
class UW_PlayerState_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Buffs_Overlay;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             dot;                                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             float_0;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Handling_spacer;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Handling_txt;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Heal_BG_Color;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HP_bar;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HPtext;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_582;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Main;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Speed_Bar;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Stance;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Stun_Bar;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Last_Speed;                                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               M_Speed;                                           // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               M_HP;                                              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UBuff_C*>                        Buffs_Ref;                                         // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UData_Player_C*                         PlayerData;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Speed_jauge_Value;                                 // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed_jauge_Opacity;                               // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Last_XY_Velocity;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HP_Jauge_Value;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HP_Text_Position;                                  // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HP_Text_Color;                                     // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Stamina_Jauge_Value;                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Smooth_Stamina;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HP_Flash_Cycle;                                    // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Stamina_Percent;                                   // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Handling;                                     // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hit_Color;                                         // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               StaminaState;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Buff(class UBuff_C* Buff);
	void Buffs_Checking();
	void Construct();
	void Delete_Buff(class UW_Buff_C* Widget);
	void Does_Buff_Widget_Exist_(class UBuff_C* Buff, bool* Exist_);
	void ExecuteUbergraph_W_PlayerState(int32 EntryPoint);
	void Hit();
	void Organize_Buffs();
	void PreConstruct(bool IsDesignTime);
	void Refresh_Buff(class UBuff_C* Buff);
	void Set_Heal_BG_Color(const struct FLinearColor& InColorAndOpacity);
	void Set_HP();
	void Set_Stance_Text(Enum_Stance Stance_0);
	void Set_Walk_Text();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Buffs();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerState_C">();
	}
	static class UW_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerState_C>();
	}
};
static_assert(alignof(UW_PlayerState_C) == 0x000008, "Wrong alignment on UW_PlayerState_C");
static_assert(sizeof(UW_PlayerState_C) == 0x0003E0, "Wrong size on UW_PlayerState_C");
static_assert(offsetof(UW_PlayerState_C, UberGraphFrame) == 0x0002D0, "Member 'UW_PlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Buffs_Overlay) == 0x0002D8, "Member 'UW_PlayerState_C::Buffs_Overlay' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, dot) == 0x0002E0, "Member 'UW_PlayerState_C::dot' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, float_0) == 0x0002E8, "Member 'UW_PlayerState_C::float_0' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Handling_spacer) == 0x0002F0, "Member 'UW_PlayerState_C::Handling_spacer' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Handling_txt) == 0x0002F8, "Member 'UW_PlayerState_C::Handling_txt' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Heal_BG_Color) == 0x000300, "Member 'UW_PlayerState_C::Heal_BG_Color' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, HP_bar) == 0x000308, "Member 'UW_PlayerState_C::HP_bar' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, HPtext) == 0x000310, "Member 'UW_PlayerState_C::HPtext' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Image_582) == 0x000318, "Member 'UW_PlayerState_C::Image_582' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Main) == 0x000320, "Member 'UW_PlayerState_C::Main' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Speed_Bar) == 0x000328, "Member 'UW_PlayerState_C::Speed_Bar' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Stance) == 0x000330, "Member 'UW_PlayerState_C::Stance' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Stun_Bar) == 0x000338, "Member 'UW_PlayerState_C::Stun_Bar' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Mec_Ref) == 0x000340, "Member 'UW_PlayerState_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Last_Speed) == 0x000348, "Member 'UW_PlayerState_C::Last_Speed' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, M_Speed) == 0x000350, "Member 'UW_PlayerState_C::M_Speed' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, M_HP) == 0x000358, "Member 'UW_PlayerState_C::M_HP' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Buffs_Ref) == 0x000360, "Member 'UW_PlayerState_C::Buffs_Ref' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, PlayerData) == 0x000370, "Member 'UW_PlayerState_C::PlayerData' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Speed_jauge_Value) == 0x000378, "Member 'UW_PlayerState_C::Speed_jauge_Value' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Speed_jauge_Opacity) == 0x000380, "Member 'UW_PlayerState_C::Speed_jauge_Opacity' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Delta) == 0x000388, "Member 'UW_PlayerState_C::Delta' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Last_XY_Velocity) == 0x000390, "Member 'UW_PlayerState_C::Last_XY_Velocity' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, HP_Jauge_Value) == 0x000398, "Member 'UW_PlayerState_C::HP_Jauge_Value' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, HP_Text_Position) == 0x0003A0, "Member 'UW_PlayerState_C::HP_Text_Position' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, HP_Text_Color) == 0x0003A8, "Member 'UW_PlayerState_C::HP_Text_Color' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Stamina_Jauge_Value) == 0x0003B0, "Member 'UW_PlayerState_C::Stamina_Jauge_Value' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Smooth_Stamina) == 0x0003B8, "Member 'UW_PlayerState_C::Smooth_Stamina' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, HP_Flash_Cycle) == 0x0003C0, "Member 'UW_PlayerState_C::HP_Flash_Cycle' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Stamina_Percent) == 0x0003C8, "Member 'UW_PlayerState_C::Stamina_Percent' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Last_Handling) == 0x0003D0, "Member 'UW_PlayerState_C::Last_Handling' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, Hit_Color) == 0x0003D4, "Member 'UW_PlayerState_C::Hit_Color' has a wrong offset!");
static_assert(offsetof(UW_PlayerState_C, StaminaState) == 0x0003D8, "Member 'UW_PlayerState_C::StaminaState' has a wrong offset!");

}

