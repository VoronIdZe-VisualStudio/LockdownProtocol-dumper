﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Astronaut_PP

#include "Basic.hpp"

#include "ABP_Astronaut_PP_classes.hpp"
#include "ABP_Astronaut_PP_parameters.hpp"


namespace SDK
{

// Function ABP_Astronaut_PP.ABP_Astronaut_PP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Astronaut_PP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Astronaut_PP_C", "AnimGraph");

	Params::ABP_Astronaut_PP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

