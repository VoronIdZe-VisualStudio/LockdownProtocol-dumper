﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_NewMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_NewMenu.W_NewMenu_C
// 0x0110 (0x03E0 - 0x02D0)
class UW_NewMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TitleSwitch;                                       // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MenuOpacity;                                       // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MainSwitcher;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_MainTab_C*                      MainTab;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MainTitle;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_Graphics_C*                     MenuGraphics;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_Rules_C*                        MenuRules;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          MouseLocked;                                       // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mouse_M;                                           // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Mouse_Lock_Position;                               // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MouseB_M;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Mouse_Down_Lerp;                                   // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Mouse_Delta;                                       // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mouse_H_M;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Menu_Bend;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Menu_Open;                                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Menu_Opacity;                                      // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              CloseMenu;                                         // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           Session_Refresh_Timer;                             // 0x0388(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Open;                                              // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              Press;                                             // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              Release;                                           // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FVector2D& Coord)> Mouse;                             // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMainGI_C*                              GI_Ref;                                            // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APC_C*                                  PC_Ref;                                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_NewMenu_MainTab_K2Node_ComponentBoundEvent_0_Tab_Selected__DelegateSignature(const class FText& Name_0);
	void Center_Mouse();
	void Clamp_Mouse_Location(const struct FVector2D& DeadZone);
	void Close_Menu();
	void Construct();
	void ExecuteUbergraph_W_NewMenu(int32 EntryPoint);
	void Generate_Settings(const TArray<struct FStr_GameSetting_Category>& Settings);
	void InpActEvt_IA_Culture_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void Lock_Cursor();
	void PreConstruct(bool IsDesignTime);
	void Show(bool TRUE_0);
	void Unlock_Cursor();
	void W_Settings_AutoGenFunc(const struct FVector& NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_NewMenu_C">();
	}
	static class UW_NewMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_NewMenu_C>();
	}
};
static_assert(alignof(UW_NewMenu_C) == 0x000008, "Wrong alignment on UW_NewMenu_C");
static_assert(sizeof(UW_NewMenu_C) == 0x0003E0, "Wrong size on UW_NewMenu_C");
static_assert(offsetof(UW_NewMenu_C, UberGraphFrame) == 0x0002D0, "Member 'UW_NewMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, TitleSwitch) == 0x0002D8, "Member 'UW_NewMenu_C::TitleSwitch' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MenuOpacity) == 0x0002E0, "Member 'UW_NewMenu_C::MenuOpacity' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MainSwitcher) == 0x0002E8, "Member 'UW_NewMenu_C::MainSwitcher' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MainTab) == 0x0002F0, "Member 'UW_NewMenu_C::MainTab' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MainTitle) == 0x0002F8, "Member 'UW_NewMenu_C::MainTitle' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MenuGraphics) == 0x000300, "Member 'UW_NewMenu_C::MenuGraphics' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MenuRules) == 0x000308, "Member 'UW_NewMenu_C::MenuRules' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mec_Ref) == 0x000310, "Member 'UW_NewMenu_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MouseLocked) == 0x000318, "Member 'UW_NewMenu_C::MouseLocked' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mouse_M) == 0x000320, "Member 'UW_NewMenu_C::Mouse_M' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mouse_Lock_Position) == 0x000328, "Member 'UW_NewMenu_C::Mouse_Lock_Position' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, MouseB_M) == 0x000338, "Member 'UW_NewMenu_C::MouseB_M' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mouse_Down_Lerp) == 0x000340, "Member 'UW_NewMenu_C::Mouse_Down_Lerp' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mouse_Delta) == 0x000348, "Member 'UW_NewMenu_C::Mouse_Delta' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mouse_H_M) == 0x000358, "Member 'UW_NewMenu_C::Mouse_H_M' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Menu_Bend) == 0x000360, "Member 'UW_NewMenu_C::Menu_Bend' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Menu_Open) == 0x000368, "Member 'UW_NewMenu_C::Menu_Open' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Menu_Opacity) == 0x000370, "Member 'UW_NewMenu_C::Menu_Opacity' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, CloseMenu) == 0x000378, "Member 'UW_NewMenu_C::CloseMenu' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Session_Refresh_Timer) == 0x000388, "Member 'UW_NewMenu_C::Session_Refresh_Timer' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Open) == 0x000390, "Member 'UW_NewMenu_C::Open' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Press) == 0x0003A0, "Member 'UW_NewMenu_C::Press' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Release) == 0x0003B0, "Member 'UW_NewMenu_C::Release' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, Mouse) == 0x0003C0, "Member 'UW_NewMenu_C::Mouse' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, GI_Ref) == 0x0003D0, "Member 'UW_NewMenu_C::GI_Ref' has a wrong offset!");
static_assert(offsetof(UW_NewMenu_C, PC_Ref) == 0x0003D8, "Member 'UW_NewMenu_C::PC_Ref' has a wrong offset!");

}

