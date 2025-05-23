﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ProcessedRequest

#include "Basic.hpp"

#include "W_ProcessedRequest_classes.hpp"
#include "W_ProcessedRequest_parameters.hpp"


namespace SDK
{

// Function W_ProcessedRequest.W_ProcessedRequest_C.Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Check_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ProcessedRequest_C::Check(bool Check_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ProcessedRequest_C", "Check");

	Params::W_ProcessedRequest_C_Check Parms{};

	Parms.Check_0 = Check_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ProcessedRequest.W_ProcessedRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ProcessedRequest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ProcessedRequest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ProcessedRequest.W_ProcessedRequest_C.ExecuteUbergraph_W_ProcessedRequest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ProcessedRequest_C::ExecuteUbergraph_W_ProcessedRequest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ProcessedRequest_C", "ExecuteUbergraph_W_ProcessedRequest");

	Params::W_ProcessedRequest_C_ExecuteUbergraph_W_ProcessedRequest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

