﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tuto_Button.Tuto_Button_C
// 0x0088 (0x0330 - 0x02A8)
class ATuto_Button_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   C_Button;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Material;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AButton_C*                              Button;                                            // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, int32>                    Outputs;                                           // 0x02D0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TMulticastInlineDelegate<void()>              Press;                                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__Tuto_Button_Button_K2Node_ComponentBoundEvent_0_Button_Push__DelegateSignature(class AMec_C* Source);
	void ExecuteUbergraph_Tuto_Button(int32 EntryPoint);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tuto_Button_C">();
	}
	static class ATuto_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATuto_Button_C>();
	}
};
static_assert(alignof(ATuto_Button_C) == 0x000008, "Wrong alignment on ATuto_Button_C");
static_assert(sizeof(ATuto_Button_C) == 0x000330, "Wrong size on ATuto_Button_C");
static_assert(offsetof(ATuto_Button_C, UberGraphFrame) == 0x0002A8, "Member 'ATuto_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATuto_Button_C, C_Button) == 0x0002B0, "Member 'ATuto_Button_C::C_Button' has a wrong offset!");
static_assert(offsetof(ATuto_Button_C, DefaultSceneRoot) == 0x0002B8, "Member 'ATuto_Button_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATuto_Button_C, Material) == 0x0002C0, "Member 'ATuto_Button_C::Material' has a wrong offset!");
static_assert(offsetof(ATuto_Button_C, Button) == 0x0002C8, "Member 'ATuto_Button_C::Button' has a wrong offset!");
static_assert(offsetof(ATuto_Button_C, Outputs) == 0x0002D0, "Member 'ATuto_Button_C::Outputs' has a wrong offset!");
static_assert(offsetof(ATuto_Button_C, Press) == 0x000320, "Member 'ATuto_Button_C::Press' has a wrong offset!");

}

