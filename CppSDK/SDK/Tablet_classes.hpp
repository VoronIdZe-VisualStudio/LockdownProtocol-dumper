﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tablet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tablet.Tablet_C
// 0x0078 (0x0320 - 0x02A8)
class ATablet_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                   MediaSound;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    Body_Light;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Hand_Widget;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UW_Tablet_UI_C*                         Screen;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Mouse_Position;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Click;                                             // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              Reset_Triggers;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Click_on_Tablet();
	void Draw();
	void ExecuteUbergraph_Tablet(int32 EntryPoint);
	void Force_Close_Tablet();
	void Initiate(class AMec_C* Mec_Ref_0);
	void Lock_Mouse(bool Lock);
	void Move(const struct FVector2D& Movement);
	void Put();
	void Reset_Buttons();
	void Set_Screen_Shader(bool Video);
	void Update_Tasks(const TArray<class ATask_C*>& Tasks);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tablet_C">();
	}
	static class ATablet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATablet_C>();
	}
};
static_assert(alignof(ATablet_C) == 0x000008, "Wrong alignment on ATablet_C");
static_assert(sizeof(ATablet_C) == 0x000320, "Wrong size on ATablet_C");
static_assert(offsetof(ATablet_C, UberGraphFrame) == 0x0002A8, "Member 'ATablet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATablet_C, MediaSound) == 0x0002B0, "Member 'ATablet_C::MediaSound' has a wrong offset!");
static_assert(offsetof(ATablet_C, SpotLight) == 0x0002B8, "Member 'ATablet_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ATablet_C, Body_Light) == 0x0002C0, "Member 'ATablet_C::Body_Light' has a wrong offset!");
static_assert(offsetof(ATablet_C, Hand_Widget) == 0x0002C8, "Member 'ATablet_C::Hand_Widget' has a wrong offset!");
static_assert(offsetof(ATablet_C, Root) == 0x0002D0, "Member 'ATablet_C::Root' has a wrong offset!");
static_assert(offsetof(ATablet_C, Mesh) == 0x0002D8, "Member 'ATablet_C::Mesh' has a wrong offset!");
static_assert(offsetof(ATablet_C, Screen) == 0x0002E0, "Member 'ATablet_C::Screen' has a wrong offset!");
static_assert(offsetof(ATablet_C, Mouse_Position) == 0x0002E8, "Member 'ATablet_C::Mouse_Position' has a wrong offset!");
static_assert(offsetof(ATablet_C, Mec_Ref) == 0x0002F8, "Member 'ATablet_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(ATablet_C, Click) == 0x000300, "Member 'ATablet_C::Click' has a wrong offset!");
static_assert(offsetof(ATablet_C, Reset_Triggers) == 0x000310, "Member 'ATablet_C::Reset_Triggers' has a wrong offset!");

}

