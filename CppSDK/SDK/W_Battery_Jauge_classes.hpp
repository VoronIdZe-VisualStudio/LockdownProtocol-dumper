﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Battery_Jauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Battery_Jauge.W_Battery_Jauge_C
// 0x0078 (0x0348 - 0x02D0)
class UW_Battery_Jauge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 JaugeImage;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Truc;                                              // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Standby_Text;                                      // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Ready_Text;                                        // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Not_Valid_Text;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Process;                                           // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Finished_Text;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Error_Text;                                        // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_W_Battery_Jauge(int32 EntryPoint);
	void Rename_Infos(const class FText& Standby, const class FText& Ready, const class FText& Not_Valid, const class FText& Process_Text, const class FText& Finished, const class FText& Error);
	void Set_Process(int32 Percent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Battery_Jauge_C">();
	}
	static class UW_Battery_Jauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Battery_Jauge_C>();
	}
};
static_assert(alignof(UW_Battery_Jauge_C) == 0x000008, "Wrong alignment on UW_Battery_Jauge_C");
static_assert(sizeof(UW_Battery_Jauge_C) == 0x000348, "Wrong size on UW_Battery_Jauge_C");
static_assert(offsetof(UW_Battery_Jauge_C, UberGraphFrame) == 0x0002D0, "Member 'UW_Battery_Jauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, JaugeImage) == 0x0002D8, "Member 'UW_Battery_Jauge_C::JaugeImage' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Truc) == 0x0002E0, "Member 'UW_Battery_Jauge_C::Truc' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Standby_Text) == 0x0002E8, "Member 'UW_Battery_Jauge_C::Standby_Text' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Ready_Text) == 0x0002F8, "Member 'UW_Battery_Jauge_C::Ready_Text' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Not_Valid_Text) == 0x000308, "Member 'UW_Battery_Jauge_C::Not_Valid_Text' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Process) == 0x000318, "Member 'UW_Battery_Jauge_C::Process' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Finished_Text) == 0x000328, "Member 'UW_Battery_Jauge_C::Finished_Text' has a wrong offset!");
static_assert(offsetof(UW_Battery_Jauge_C, Error_Text) == 0x000338, "Member 'UW_Battery_Jauge_C::Error_Text' has a wrong offset!");

}

