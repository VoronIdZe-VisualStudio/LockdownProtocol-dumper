﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_GameInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_SessionState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_GameInfo.W_GameInfo_C
// 0x00A0 (0x0370 - 0x02D0)
class UW_GameInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Day;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             fps_txt;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FrameRate;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Hour;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_582;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mili;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             min_0;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Month;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Ping_Value;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RED_Text;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RED_Text_1;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Sec;                                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             txt_ms;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             txt_ping;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             version_txt;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Year;                                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        FPS;                                               // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APC_C*                                  Player_Ref;                                        // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Second_Time;                                       // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_GameInfo(int32 EntryPoint);
	void Set_Host(E_SessionState State);
	void Set_Ping(int32 Value);
	void Show_RED(bool Up_to_date);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_GameInfo_C">();
	}
	static class UW_GameInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_GameInfo_C>();
	}
};
static_assert(alignof(UW_GameInfo_C) == 0x000008, "Wrong alignment on UW_GameInfo_C");
static_assert(sizeof(UW_GameInfo_C) == 0x000370, "Wrong size on UW_GameInfo_C");
static_assert(offsetof(UW_GameInfo_C, UberGraphFrame) == 0x0002D0, "Member 'UW_GameInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Day) == 0x0002D8, "Member 'UW_GameInfo_C::Day' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, fps_txt) == 0x0002E0, "Member 'UW_GameInfo_C::fps_txt' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, FrameRate) == 0x0002E8, "Member 'UW_GameInfo_C::FrameRate' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Hour) == 0x0002F0, "Member 'UW_GameInfo_C::Hour' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Image_582) == 0x0002F8, "Member 'UW_GameInfo_C::Image_582' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Mili) == 0x000300, "Member 'UW_GameInfo_C::Mili' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, min_0) == 0x000308, "Member 'UW_GameInfo_C::min_0' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Month) == 0x000310, "Member 'UW_GameInfo_C::Month' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Ping_Value) == 0x000318, "Member 'UW_GameInfo_C::Ping_Value' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, RED_Text) == 0x000320, "Member 'UW_GameInfo_C::RED_Text' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, RED_Text_1) == 0x000328, "Member 'UW_GameInfo_C::RED_Text_1' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Sec) == 0x000330, "Member 'UW_GameInfo_C::Sec' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, txt_ms) == 0x000338, "Member 'UW_GameInfo_C::txt_ms' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, txt_ping) == 0x000340, "Member 'UW_GameInfo_C::txt_ping' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, version_txt) == 0x000348, "Member 'UW_GameInfo_C::version_txt' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Year) == 0x000350, "Member 'UW_GameInfo_C::Year' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, FPS) == 0x000358, "Member 'UW_GameInfo_C::FPS' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Player_Ref) == 0x000360, "Member 'UW_GameInfo_C::Player_Ref' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Delta) == 0x000368, "Member 'UW_GameInfo_C::Delta' has a wrong offset!");
static_assert(offsetof(UW_GameInfo_C, Second_Time) == 0x00036C, "Member 'UW_GameInfo_C::Second_Time' has a wrong offset!");

}

