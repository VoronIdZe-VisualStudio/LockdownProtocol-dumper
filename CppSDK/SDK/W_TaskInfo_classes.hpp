﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TaskInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TaskInfo.W_TaskInfo_C
// 0x0038 (0x0308 - 0x02D0)
class UW_TaskInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ListBox;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Truc;                                              // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATablet_C*                              Tablet_Ref;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Mouse_Position;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_TaskInfo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Random_Event(const TArray<class ATask_C*>& Tasks);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TaskInfo_C">();
	}
	static class UW_TaskInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TaskInfo_C>();
	}
};
static_assert(alignof(UW_TaskInfo_C) == 0x000008, "Wrong alignment on UW_TaskInfo_C");
static_assert(sizeof(UW_TaskInfo_C) == 0x000308, "Wrong size on UW_TaskInfo_C");
static_assert(offsetof(UW_TaskInfo_C, UberGraphFrame) == 0x0002D0, "Member 'UW_TaskInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TaskInfo_C, Background) == 0x0002D8, "Member 'UW_TaskInfo_C::Background' has a wrong offset!");
static_assert(offsetof(UW_TaskInfo_C, ListBox) == 0x0002E0, "Member 'UW_TaskInfo_C::ListBox' has a wrong offset!");
static_assert(offsetof(UW_TaskInfo_C, Truc) == 0x0002E8, "Member 'UW_TaskInfo_C::Truc' has a wrong offset!");
static_assert(offsetof(UW_TaskInfo_C, Tablet_Ref) == 0x0002F0, "Member 'UW_TaskInfo_C::Tablet_Ref' has a wrong offset!");
static_assert(offsetof(UW_TaskInfo_C, Mouse_Position) == 0x0002F8, "Member 'UW_TaskInfo_C::Mouse_Position' has a wrong offset!");

}

