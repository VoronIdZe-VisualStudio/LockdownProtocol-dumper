﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Pizzusshi_Screen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Pizzusshi_Screen.W_Pizzusshi_Screen_C
// 0x0018 (0x02E8 - 0x02D0)
class UW_Pizzusshi_Screen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_Pizzusshi_Screen(int32 EntryPoint);
	void Set_Text(const class FString& Title_0, const class FString& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Pizzusshi_Screen_C">();
	}
	static class UW_Pizzusshi_Screen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Pizzusshi_Screen_C>();
	}
};
static_assert(alignof(UW_Pizzusshi_Screen_C) == 0x000008, "Wrong alignment on UW_Pizzusshi_Screen_C");
static_assert(sizeof(UW_Pizzusshi_Screen_C) == 0x0002E8, "Wrong size on UW_Pizzusshi_Screen_C");
static_assert(offsetof(UW_Pizzusshi_Screen_C, UberGraphFrame) == 0x0002D0, "Member 'UW_Pizzusshi_Screen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Pizzusshi_Screen_C, TextBlock) == 0x0002D8, "Member 'UW_Pizzusshi_Screen_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_Pizzusshi_Screen_C, Title) == 0x0002E0, "Member 'UW_Pizzusshi_Screen_C::Title' has a wrong offset!");

}

