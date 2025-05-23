﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UpperScreen

#include "Basic.hpp"

#include "W_UpperScreen_classes.hpp"
#include "W_UpperScreen_parameters.hpp"


namespace SDK
{

// Function W_UpperScreen.W_UpperScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_UpperScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UpperScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_UpperScreen.W_UpperScreen_C.ExecuteUbergraph_W_UpperScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_UpperScreen_C::ExecuteUbergraph_W_UpperScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UpperScreen_C", "ExecuteUbergraph_W_UpperScreen");

	Params::W_UpperScreen_C_ExecuteUbergraph_W_UpperScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_UpperScreen.W_UpperScreen_C.Set Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_UpperScreen_C::Set_Time(int32 Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UpperScreen_C", "Set Time");

	Params::W_UpperScreen_C_Set_Time Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_UpperScreen.W_UpperScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_UpperScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UpperScreen_C", "Tick");

	Params::W_UpperScreen_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

