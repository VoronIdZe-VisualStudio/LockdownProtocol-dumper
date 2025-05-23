﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Astronaut_PP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ControlRig_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Astronaut_PP.ABP_Astronaut_PP_C
// 0x05D0 (0x0990 - 0x03C0)
class UABP_Astronaut_PP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3B8[0x8];                                      // 0x03B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03C0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03C8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03D0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03F0(0x00B8)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x04A8(0x04E0)(ContainsInstancedReference)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Astronaut_PP_C">();
	}
	static class UABP_Astronaut_PP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Astronaut_PP_C>();
	}
};
static_assert(alignof(UABP_Astronaut_PP_C) == 0x000010, "Wrong alignment on UABP_Astronaut_PP_C");
static_assert(sizeof(UABP_Astronaut_PP_C) == 0x000990, "Wrong size on UABP_Astronaut_PP_C");
static_assert(offsetof(UABP_Astronaut_PP_C, AnimBlueprintExtension_PropertyAccess) == 0x0003C0, "Member 'UABP_Astronaut_PP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Astronaut_PP_C, AnimBlueprintExtension_Base) == 0x0003C8, "Member 'UABP_Astronaut_PP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Astronaut_PP_C, AnimGraphNode_Root) == 0x0003D0, "Member 'UABP_Astronaut_PP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Astronaut_PP_C, AnimGraphNode_LinkedInputPose) == 0x0003F0, "Member 'UABP_Astronaut_PP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Astronaut_PP_C, AnimGraphNode_ControlRig) == 0x0004A8, "Member 'UABP_Astronaut_PP_C::AnimGraphNode_ControlRig' has a wrong offset!");

}

