﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_DelivryIn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Task_classes.hpp"
#include "Enum_Sectors_structs.hpp"
#include "E_Difficulty_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_DelivryIn.Task_DelivryIn_C
// 0x0040 (0x03A8 - 0x0368)
class ATask_DelivryIn_C final : public ATask_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Task_DelivryIn_C;                   // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ADeliveryCase_C*>                Cases;                                             // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ADeliveryCase_C*>                Task_Cases;                                        // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Packages_Count;                                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_Packages;                                      // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<Enum_Sectors>                          Sectors_List;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Check_Cases(bool* Finished, int32* Count);
	void Check_Deliveries();
	void Choose_Cases(int32 Size, TArray<class ADeliveryCase_C*>* Result);
	void ExecuteUbergraph_Task_DelivryIn(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Select_Cases(int32 Count);
	void Start_Task(double Delay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_DelivryIn_C">();
	}
	static class ATask_DelivryIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATask_DelivryIn_C>();
	}
};
static_assert(alignof(ATask_DelivryIn_C) == 0x000008, "Wrong alignment on ATask_DelivryIn_C");
static_assert(sizeof(ATask_DelivryIn_C) == 0x0003A8, "Wrong size on ATask_DelivryIn_C");
static_assert(offsetof(ATask_DelivryIn_C, UberGraphFrame_Task_DelivryIn_C) == 0x000368, "Member 'ATask_DelivryIn_C::UberGraphFrame_Task_DelivryIn_C' has a wrong offset!");
static_assert(offsetof(ATask_DelivryIn_C, Cases) == 0x000370, "Member 'ATask_DelivryIn_C::Cases' has a wrong offset!");
static_assert(offsetof(ATask_DelivryIn_C, Task_Cases) == 0x000380, "Member 'ATask_DelivryIn_C::Task_Cases' has a wrong offset!");
static_assert(offsetof(ATask_DelivryIn_C, Packages_Count) == 0x000390, "Member 'ATask_DelivryIn_C::Packages_Count' has a wrong offset!");
static_assert(offsetof(ATask_DelivryIn_C, Max_Packages) == 0x000394, "Member 'ATask_DelivryIn_C::Max_Packages' has a wrong offset!");
static_assert(offsetof(ATask_DelivryIn_C, Sectors_List) == 0x000398, "Member 'ATask_DelivryIn_C::Sectors_List' has a wrong offset!");

}

