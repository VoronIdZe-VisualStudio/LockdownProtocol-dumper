﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Placer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Str_ItemSpawnLocation_structs.hpp"
#include "Str_Item_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_Placer.Item_Placer_C
// 0x0040 (0x02E8 - 0x02A8)
class AItem_Placer_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_DynamicMesh;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Spawn_Rate;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStr_ItemSpawnLocation                 Location;                                          // 0x02CC(0x0002)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CE[0x2];                                      // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemDynamicMesh_C*                     Preview_Mesh;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_Item                              Item;                                              // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Item_Placer(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Spawn_Item();
	void Spawn_with_Chances();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_Placer_C">();
	}
	static class AItem_Placer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItem_Placer_C>();
	}
};
static_assert(alignof(AItem_Placer_C) == 0x000008, "Wrong alignment on AItem_Placer_C");
static_assert(sizeof(AItem_Placer_C) == 0x0002E8, "Wrong size on AItem_Placer_C");
static_assert(offsetof(AItem_Placer_C, UberGraphFrame) == 0x0002A8, "Member 'AItem_Placer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, Sphere) == 0x0002B0, "Member 'AItem_Placer_C::Sphere' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, C_DynamicMesh) == 0x0002B8, "Member 'AItem_Placer_C::C_DynamicMesh' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, Root) == 0x0002C0, "Member 'AItem_Placer_C::Root' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, Spawn_Rate) == 0x0002C8, "Member 'AItem_Placer_C::Spawn_Rate' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, Location) == 0x0002CC, "Member 'AItem_Placer_C::Location' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, Preview_Mesh) == 0x0002D0, "Member 'AItem_Placer_C::Preview_Mesh' has a wrong offset!");
static_assert(offsetof(AItem_Placer_C, Item) == 0x0002D8, "Member 'AItem_Placer_C::Item' has a wrong offset!");

}

