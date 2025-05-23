﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MapDot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MapDot.W_MapDot_C
// 0x0018 (0x02E8 - 0x02D0)
class UW_MapDot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_49;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_MapDot(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MapDot_C">();
	}
	static class UW_MapDot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MapDot_C>();
	}
};
static_assert(alignof(UW_MapDot_C) == 0x000008, "Wrong alignment on UW_MapDot_C");
static_assert(sizeof(UW_MapDot_C) == 0x0002E8, "Wrong size on UW_MapDot_C");
static_assert(offsetof(UW_MapDot_C, UberGraphFrame) == 0x0002D0, "Member 'UW_MapDot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_MapDot_C, Image_49) == 0x0002D8, "Member 'UW_MapDot_C::Image_49' has a wrong offset!");
static_assert(offsetof(UW_MapDot_C, Radius) == 0x0002E0, "Member 'UW_MapDot_C::Radius' has a wrong offset!");

}

