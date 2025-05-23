﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_SwitchSquare

#include "Basic.hpp"

#include "Tuto_SwitchSquare_classes.hpp"
#include "Tuto_SwitchSquare_parameters.hpp"


namespace SDK
{

// Function Tuto_SwitchSquare.Tuto_SwitchSquare_C.Check Items
// (BlueprintCallable, BlueprintEvent)

void ATuto_SwitchSquare_C::Check_Items()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_SwitchSquare_C", "Check Items");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tuto_SwitchSquare.Tuto_SwitchSquare_C.Check Items on Square
// (Public, BlueprintCallable, BlueprintEvent)

void ATuto_SwitchSquare_C::Check_Items_on_Square()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_SwitchSquare_C", "Check Items on Square");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tuto_SwitchSquare.Tuto_SwitchSquare_C.Clear
// (BlueprintCallable, BlueprintEvent)

void ATuto_SwitchSquare_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_SwitchSquare_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tuto_SwitchSquare.Tuto_SwitchSquare_C.ExecuteUbergraph_Tuto_SwitchSquare
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATuto_SwitchSquare_C::ExecuteUbergraph_Tuto_SwitchSquare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_SwitchSquare_C", "ExecuteUbergraph_Tuto_SwitchSquare");

	Params::Tuto_SwitchSquare_C_ExecuteUbergraph_Tuto_SwitchSquare Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tuto_SwitchSquare.Tuto_SwitchSquare_C.Go To State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATuto_SwitchSquare_C::Go_To_State(int32 State_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_SwitchSquare_C", "Go To State");

	Params::Tuto_SwitchSquare_C_Go_To_State Parms{};

	Parms.State_0 = State_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tuto_SwitchSquare.Tuto_SwitchSquare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATuto_SwitchSquare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_SwitchSquare_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

