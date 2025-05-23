﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SecondaryInfo

#include "Basic.hpp"

#include "W_SecondaryInfo_classes.hpp"
#include "W_SecondaryInfo_parameters.hpp"


namespace SDK
{

// Function W_SecondaryInfo.W_SecondaryInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SecondaryInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SecondaryInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SecondaryInfo.W_SecondaryInfo_C.ExecuteUbergraph_W_SecondaryInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SecondaryInfo_C::ExecuteUbergraph_W_SecondaryInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SecondaryInfo_C", "ExecuteUbergraph_W_SecondaryInfo");

	Params::W_SecondaryInfo_C_ExecuteUbergraph_W_SecondaryInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SecondaryInfo.W_SecondaryInfo_C.Get Size
// (BlueprintCallable, BlueprintEvent)

void UW_SecondaryInfo_C::Get_Size()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SecondaryInfo_C", "Get Size");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SecondaryInfo.W_SecondaryInfo_C.Set Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SecondaryInfo_C::Set_Info(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SecondaryInfo_C", "Set Info");

	Params::W_SecondaryInfo_C_Set_Info Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SecondaryInfo.W_SecondaryInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SecondaryInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SecondaryInfo_C", "Tick");

	Params::W_SecondaryInfo_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

