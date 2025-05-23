﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Str_ItemState_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemSlot.ItemSlot_C
// 0x0100 (0x03A8 - 0x02A8)
class AItemSlot_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_LineMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C_Mesh;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CA_Take_Interaction;                               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CA_Place_Interaction;                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AInteraction_C*                         Place;                                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AInteraction_C*                         Take;                                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_ItemState                         Item_State;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UData_Item_C*                           Item_Data;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Locked;                                            // 0x0300(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Item_In;                                           // 0x0301(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_302[0x6];                                      // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 In_Text;                                           // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Out_Text;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Place_Item;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              Take_Item;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                Interaction_Location;                              // 0x0348(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMec_C*                                 Mec_Ref;                                           // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AItemDynamicMesh_C*                     D_Mesh;                                            // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AItemDynamicMesh_C*                     D_LineMesh;                                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Shadow;                                            // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Sphere_Location;                                   // 0x0388(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sphere_Radius;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Get_Key(class AActor** Key);
	void Get_Name(class AMec_C* Mec, class FString* Name_0);
	void Get_State(struct FStr_ItemState* State, bool* In);
	void OnRep_Item_Data();
	void Update_Mesh();
	void Delete_Item(bool Call_Take_Item);
	void Force_Item(const struct FStr_ItemState& Item_State_0, bool Call_Place_Item);
	void Set_State(const struct FStr_ItemState& Item_State_0, bool Update_Mesh_0);
	void Lock(bool Locked_0);
	void Check_State(bool Item_In_0, bool Locked_0, const struct FStr_ItemState& State);
	void UserConstructionScript();
	void BndEvt__ItemSlot_In_K2Node_ComponentBoundEvent_0_Net_Trigger__DelegateSignature(class AMec_C* Source, const struct FStr_ItemState& State);
	void BndEvt__ItemSlot_Out_K2Node_ComponentBoundEvent_1_Net_Trigger__DelegateSignature(class AMec_C* Source, const struct FStr_ItemState& State);
	void Update(bool Item_In_0, bool Locked_0, const struct FStr_ItemState& State);
	void BndEvt__ItemSlot_In_K2Node_ComponentBoundEvent_2_Focus__DelegateSignature(bool TRUE_0);
	void BndEvt__ItemSlot_In_K2Node_ComponentBoundEvent_3_Focusable__DelegateSignature(bool TRUE_0);
	void BndEvt__ItemSlot_Out_K2Node_ComponentBoundEvent_4_Focus__DelegateSignature(bool TRUE_0);
	void BndEvt__ItemSlot_Out_K2Node_ComponentBoundEvent_5_Focusable__DelegateSignature(bool TRUE_0);
	void All_Sound(bool Place_0, class UData_Item_C* Data);
	void Hit_Sphere(const struct FStr_ItemState& State);
	void Set_Sphere_Collision(bool TRUE_0);
	void BndEvt__ItemSlot_Take_K2Node_ComponentBoundEvent_6_Local_Trigger__DelegateSignature(class AMec_C* Source, const struct FStr_ItemState& State);
	void BndEvt__ItemSlot_Place_K2Node_ComponentBoundEvent_7_Local_Trigger__DelegateSignature(class AMec_C* Source, const struct FStr_ItemState& State);
	void ReceiveBeginPlay();
	void Other_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State_0);
	void Local_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State_0);
	void Net_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State_0);
	void Set_Data(class UData_Item_C* Data);
	void ExecuteUbergraph_ItemSlot(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSlot_C">();
	}
	static class AItemSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemSlot_C>();
	}
};
static_assert(alignof(AItemSlot_C) == 0x000008, "Wrong alignment on AItemSlot_C");
static_assert(sizeof(AItemSlot_C) == 0x0003A8, "Wrong size on AItemSlot_C");
static_assert(offsetof(AItemSlot_C, UberGraphFrame) == 0x0002A8, "Member 'AItemSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Sphere) == 0x0002B0, "Member 'AItemSlot_C::Sphere' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, C_LineMesh) == 0x0002B8, "Member 'AItemSlot_C::C_LineMesh' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, C_Mesh) == 0x0002C0, "Member 'AItemSlot_C::C_Mesh' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, CA_Take_Interaction) == 0x0002C8, "Member 'AItemSlot_C::CA_Take_Interaction' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, CA_Place_Interaction) == 0x0002D0, "Member 'AItemSlot_C::CA_Place_Interaction' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Root) == 0x0002D8, "Member 'AItemSlot_C::Root' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Place) == 0x0002E0, "Member 'AItemSlot_C::Place' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Take) == 0x0002E8, "Member 'AItemSlot_C::Take' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Item_State) == 0x0002F0, "Member 'AItemSlot_C::Item_State' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Item_Data) == 0x0002F8, "Member 'AItemSlot_C::Item_Data' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Locked) == 0x000300, "Member 'AItemSlot_C::Locked' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Item_In) == 0x000301, "Member 'AItemSlot_C::Item_In' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, In_Text) == 0x000308, "Member 'AItemSlot_C::In_Text' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Out_Text) == 0x000318, "Member 'AItemSlot_C::Out_Text' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Place_Item) == 0x000328, "Member 'AItemSlot_C::Place_Item' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Take_Item) == 0x000338, "Member 'AItemSlot_C::Take_Item' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Interaction_Location) == 0x000348, "Member 'AItemSlot_C::Interaction_Location' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, NewVar_0) == 0x000360, "Member 'AItemSlot_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Mec_Ref) == 0x000368, "Member 'AItemSlot_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, D_Mesh) == 0x000370, "Member 'AItemSlot_C::D_Mesh' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, D_LineMesh) == 0x000378, "Member 'AItemSlot_C::D_LineMesh' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Shadow) == 0x000380, "Member 'AItemSlot_C::Shadow' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Sphere_Location) == 0x000388, "Member 'AItemSlot_C::Sphere_Location' has a wrong offset!");
static_assert(offsetof(AItemSlot_C, Sphere_Radius) == 0x0003A0, "Member 'AItemSlot_C::Sphere_Radius' has a wrong offset!");

}

