﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Tuto_Mannequin

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ABP_Tuto_Mannequin_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Tuto_Mannequin.ABP_Tuto_Mannequin_C
// 0x02F0 (0x06B0 - 0x03C0)
class UABP_Tuto_Mannequin_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3B8[0x8];                                      // 0x03B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Tuto_Mannequin::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;           // 0x03C8(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA[0x6];                                      // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03D0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03D8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0400(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0448(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0490(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x04D8(0x00E8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05C0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0608(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0650(0x0048)()
	float                                         Delta;                                             // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69C[0x4];                                      // 0x069C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATuto_Mannequin_C*                      Mannequin_Ref;                                     // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Draw_Segment(const struct FVector& From, const struct FVector& To, int32 Start, int32 End, const struct FLinearColor& Color, float Thickness);
	void ExecuteUbergraph_ABP_Tuto_Mannequin(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Tuto_Mannequin_C">();
	}
	static class UABP_Tuto_Mannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Tuto_Mannequin_C>();
	}
};
static_assert(alignof(UABP_Tuto_Mannequin_C) == 0x000010, "Wrong alignment on UABP_Tuto_Mannequin_C");
static_assert(sizeof(UABP_Tuto_Mannequin_C) == 0x0006B0, "Wrong size on UABP_Tuto_Mannequin_C");
static_assert(offsetof(UABP_Tuto_Mannequin_C, UberGraphFrame) == 0x0003C0, "Member 'UABP_Tuto_Mannequin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, __AnimBlueprintMutables) == 0x0003C8, "Member 'UABP_Tuto_Mannequin_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimBlueprintExtension_PropertyAccess) == 0x0003D0, "Member 'UABP_Tuto_Mannequin_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimBlueprintExtension_Base) == 0x0003D8, "Member 'UABP_Tuto_Mannequin_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_Root) == 0x0003E0, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_SequencePlayer_4) == 0x000400, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_SequencePlayer_3) == 0x000448, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_SequencePlayer_2) == 0x000490, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_LayeredBoneBlend) == 0x0004D8, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_SequencePlayer_1) == 0x0005C0, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_BlendListByEnum) == 0x000608, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, AnimGraphNode_SequencePlayer) == 0x000650, "Member 'UABP_Tuto_Mannequin_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, Delta) == 0x000698, "Member 'UABP_Tuto_Mannequin_C::Delta' has a wrong offset!");
static_assert(offsetof(UABP_Tuto_Mannequin_C, Mannequin_Ref) == 0x0006A0, "Member 'UABP_Tuto_Mannequin_C::Mannequin_Ref' has a wrong offset!");

}

