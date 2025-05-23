﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_ItemSquare

#include "Basic.hpp"

#include "Tuto_ItemSquare_classes.hpp"
#include "Tuto_ItemSquare_parameters.hpp"


namespace SDK
{

// Function Tuto_ItemSquare.Tuto_ItemSquare_C.Check Items on Square
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATuto_ItemSquare_C::Check_Items_on_Square(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_ItemSquare_C", "Check Items on Square");

	Params::Tuto_ItemSquare_C_Check_Items_on_Square Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function Tuto_ItemSquare.Tuto_ItemSquare_C.Check Square Item
// (BlueprintCallable, BlueprintEvent)

void ATuto_ItemSquare_C::Check_Square_Item()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_ItemSquare_C", "Check Square Item");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tuto_ItemSquare.Tuto_ItemSquare_C.Clear
// (BlueprintCallable, BlueprintEvent)

void ATuto_ItemSquare_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_ItemSquare_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Tuto_ItemSquare.Tuto_ItemSquare_C.Error
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATuto_ItemSquare_C::Error(bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_ItemSquare_C", "Error");

	Params::Tuto_ItemSquare_C_Error Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tuto_ItemSquare.Tuto_ItemSquare_C.ExecuteUbergraph_Tuto_ItemSquare
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATuto_ItemSquare_C::ExecuteUbergraph_Tuto_ItemSquare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_ItemSquare_C", "ExecuteUbergraph_Tuto_ItemSquare");

	Params::Tuto_ItemSquare_C_ExecuteUbergraph_Tuto_ItemSquare Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tuto_ItemSquare.Tuto_ItemSquare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATuto_ItemSquare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tuto_ItemSquare_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

