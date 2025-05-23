﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Data_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_Logic_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Data_Item.Data_Item_C
// 0x02A0 (0x02D0 - 0x0030)
#pragma pack(push, 0x1)
class alignas(0x10) UData_Item_C : public UPrimaryDataAsset
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 Name_0;                                            // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_Hand_Idle;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_Body_Idle;                                      // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_Body_Inspect;                                   // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AM_Body_Pick;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AM_Body_Put;                                       // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AM_Body_Draw;                                      // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_Body_Run;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Body_Aim_Root;                                     // 0x0088(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_Hand_Inspect;                                   // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AM_Hand_Pick;                                      // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AM_Hand_Put;                                       // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AM_Hand_Draw;                                      // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_Hand_Run;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ItemMove_Arms;                                     // 0x00C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ItemMove_Hands;                                    // 0x00E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ItemMove_Spring;                                   // 0x00F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ItemMove_Axis;                                     // 0x0110(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Use_Name;                                          // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                Interaction_Location;                              // 0x0138(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Logic                                       Logic;                                             // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundWave*                             Use_Sound;                                         // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                      Use_Attenuation;                                   // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ItemDOF;                                           // 0x0168(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Body_Aim_Offset;                                   // 0x0180(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Can_Inventory;                                     // 0x0198(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UData_Item_C*                           Tool_Interaction;                                  // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UData_ItemThrowType_C*                  Throw_Type;                                        // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Drop_Transform;                                    // 0x01B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Handling;                                          // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Jump_Factor;                                       // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Aberration;                                        // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Drop_Type;                                         // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Throw_Force;                                       // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Throw_Stamina;                                     // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Drop_Radius;                                       // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Hitbox_Radius;                                     // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Restitution;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                             Place_Sound;                                       // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                             Take_Sound;                                        // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Hand_Scale;                                        // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                             Sneak_Drop_Sound;                                  // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Sneack_Floor_Pitch;                                // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sneack_End_Pitch;                                  // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                             Hit_Drop_Sound;                                    // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Hit_Wall_Pitch;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Hit_Floor_Pitch;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SlotSphere_Location;                               // 0x0298(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlotSphere_Radius;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMec_C*                                 Mec_Ref;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           NewVar;                                            // 0x02C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Use();
	void ExecuteUbergraph_Data_Item(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Data_Item_C">();
	}
	static class UData_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UData_Item_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UData_Item_C) == 0x000010, "Wrong alignment on UData_Item_C");
static_assert(sizeof(UData_Item_C) == 0x0002D0, "Wrong size on UData_Item_C");
static_assert(offsetof(UData_Item_C, UberGraphFrame) == 0x000030, "Member 'UData_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Name_0) == 0x000038, "Member 'UData_Item_C::Name_0' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Mesh) == 0x000048, "Member 'UData_Item_C::Mesh' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AS_Hand_Idle) == 0x000050, "Member 'UData_Item_C::AS_Hand_Idle' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AS_Body_Idle) == 0x000058, "Member 'UData_Item_C::AS_Body_Idle' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AS_Body_Inspect) == 0x000060, "Member 'UData_Item_C::AS_Body_Inspect' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AM_Body_Pick) == 0x000068, "Member 'UData_Item_C::AM_Body_Pick' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AM_Body_Put) == 0x000070, "Member 'UData_Item_C::AM_Body_Put' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AM_Body_Draw) == 0x000078, "Member 'UData_Item_C::AM_Body_Draw' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AS_Body_Run) == 0x000080, "Member 'UData_Item_C::AS_Body_Run' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Body_Aim_Root) == 0x000088, "Member 'UData_Item_C::Body_Aim_Root' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AS_Hand_Inspect) == 0x0000A0, "Member 'UData_Item_C::AS_Hand_Inspect' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AM_Hand_Pick) == 0x0000A8, "Member 'UData_Item_C::AM_Hand_Pick' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AM_Hand_Put) == 0x0000B0, "Member 'UData_Item_C::AM_Hand_Put' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AM_Hand_Draw) == 0x0000B8, "Member 'UData_Item_C::AM_Hand_Draw' has a wrong offset!");
static_assert(offsetof(UData_Item_C, AS_Hand_Run) == 0x0000C0, "Member 'UData_Item_C::AS_Hand_Run' has a wrong offset!");
static_assert(offsetof(UData_Item_C, ItemMove_Arms) == 0x0000C8, "Member 'UData_Item_C::ItemMove_Arms' has a wrong offset!");
static_assert(offsetof(UData_Item_C, ItemMove_Hands) == 0x0000E0, "Member 'UData_Item_C::ItemMove_Hands' has a wrong offset!");
static_assert(offsetof(UData_Item_C, ItemMove_Spring) == 0x0000F8, "Member 'UData_Item_C::ItemMove_Spring' has a wrong offset!");
static_assert(offsetof(UData_Item_C, ItemMove_Axis) == 0x000110, "Member 'UData_Item_C::ItemMove_Axis' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Use_Name) == 0x000128, "Member 'UData_Item_C::Use_Name' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Interaction_Location) == 0x000138, "Member 'UData_Item_C::Interaction_Location' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Logic) == 0x000150, "Member 'UData_Item_C::Logic' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Use_Sound) == 0x000158, "Member 'UData_Item_C::Use_Sound' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Use_Attenuation) == 0x000160, "Member 'UData_Item_C::Use_Attenuation' has a wrong offset!");
static_assert(offsetof(UData_Item_C, ItemDOF) == 0x000168, "Member 'UData_Item_C::ItemDOF' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Body_Aim_Offset) == 0x000180, "Member 'UData_Item_C::Body_Aim_Offset' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Can_Inventory) == 0x000198, "Member 'UData_Item_C::Can_Inventory' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Tool_Interaction) == 0x0001A0, "Member 'UData_Item_C::Tool_Interaction' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Throw_Type) == 0x0001A8, "Member 'UData_Item_C::Throw_Type' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Drop_Transform) == 0x0001B0, "Member 'UData_Item_C::Drop_Transform' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Handling) == 0x000210, "Member 'UData_Item_C::Handling' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Jump_Factor) == 0x000218, "Member 'UData_Item_C::Jump_Factor' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Aberration) == 0x000220, "Member 'UData_Item_C::Aberration' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Drop_Type) == 0x000228, "Member 'UData_Item_C::Drop_Type' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Throw_Force) == 0x00022C, "Member 'UData_Item_C::Throw_Force' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Throw_Stamina) == 0x000230, "Member 'UData_Item_C::Throw_Stamina' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Drop_Radius) == 0x000238, "Member 'UData_Item_C::Drop_Radius' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Hitbox_Radius) == 0x000240, "Member 'UData_Item_C::Hitbox_Radius' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Restitution) == 0x000248, "Member 'UData_Item_C::Restitution' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Place_Sound) == 0x000250, "Member 'UData_Item_C::Place_Sound' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Take_Sound) == 0x000258, "Member 'UData_Item_C::Take_Sound' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Hand_Scale) == 0x000260, "Member 'UData_Item_C::Hand_Scale' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Sneak_Drop_Sound) == 0x000268, "Member 'UData_Item_C::Sneak_Drop_Sound' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Sneack_Floor_Pitch) == 0x000270, "Member 'UData_Item_C::Sneack_Floor_Pitch' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Sneack_End_Pitch) == 0x000278, "Member 'UData_Item_C::Sneack_End_Pitch' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Hit_Drop_Sound) == 0x000280, "Member 'UData_Item_C::Hit_Drop_Sound' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Hit_Wall_Pitch) == 0x000288, "Member 'UData_Item_C::Hit_Wall_Pitch' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Hit_Floor_Pitch) == 0x000290, "Member 'UData_Item_C::Hit_Floor_Pitch' has a wrong offset!");
static_assert(offsetof(UData_Item_C, SlotSphere_Location) == 0x000298, "Member 'UData_Item_C::SlotSphere_Location' has a wrong offset!");
static_assert(offsetof(UData_Item_C, SlotSphere_Radius) == 0x0002B0, "Member 'UData_Item_C::SlotSphere_Radius' has a wrong offset!");
static_assert(offsetof(UData_Item_C, Mec_Ref) == 0x0002B8, "Member 'UData_Item_C::Mec_Ref' has a wrong offset!");
static_assert(offsetof(UData_Item_C, NewVar) == 0x0002C0, "Member 'UData_Item_C::NewVar' has a wrong offset!");

}

