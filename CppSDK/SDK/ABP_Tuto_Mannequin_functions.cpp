﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Tuto_Mannequin

#include "Basic.hpp"

#include "ABP_Tuto_Mannequin_classes.hpp"
#include "ABP_Tuto_Mannequin_parameters.hpp"


namespace SDK
{

// Function ABP_Tuto_Mannequin.ABP_Tuto_Mannequin_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Tuto_Mannequin_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Tuto_Mannequin_C", "AnimGraph");

	Params::ABP_Tuto_Mannequin_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Tuto_Mannequin.ABP_Tuto_Mannequin_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_Tuto_Mannequin_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Tuto_Mannequin_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Tuto_Mannequin.ABP_Tuto_Mannequin_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Tuto_Mannequin_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Tuto_Mannequin_C", "BlueprintUpdateAnimation");

	Params::ABP_Tuto_Mannequin_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Tuto_Mannequin.ABP_Tuto_Mannequin_C.Draw Segment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   From                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   To                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Thickness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Tuto_Mannequin_C::Draw_Segment(const struct FVector& From, const struct FVector& To, int32 Start, int32 End, const struct FLinearColor& Color, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Tuto_Mannequin_C", "Draw Segment");

	Params::ABP_Tuto_Mannequin_C_Draw_Segment Parms{};

	Parms.From = std::move(From);
	Parms.To = std::move(To);
	Parms.Start = Start;
	Parms.End = End;
	Parms.Color = std::move(Color);
	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Tuto_Mannequin.ABP_Tuto_Mannequin_C.ExecuteUbergraph_ABP_Tuto_Mannequin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Tuto_Mannequin_C::ExecuteUbergraph_ABP_Tuto_Mannequin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Tuto_Mannequin_C", "ExecuteUbergraph_ABP_Tuto_Mannequin");

	Params::ABP_Tuto_Mannequin_C_ExecuteUbergraph_ABP_Tuto_Mannequin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

