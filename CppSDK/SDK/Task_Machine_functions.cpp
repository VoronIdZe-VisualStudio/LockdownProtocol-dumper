﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_Machine

#include "Basic.hpp"

#include "Task_Machine_classes.hpp"
#include "Task_Machine_parameters.hpp"


namespace SDK
{

// Function Task_Machine.Task_Machine_C.Check Machines
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   End                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATask_Machine_C::Check_Machines(bool* End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "Check Machines");

	Params::Task_Machine_C_Check_Machines Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;
}


// Function Task_Machine.Task_Machine_C.Check Machines End
// (BlueprintCallable, BlueprintEvent)

void ATask_Machine_C::Check_Machines_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "Check Machines End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_Machine.Task_Machine_C.Clear
// (BlueprintCallable, BlueprintEvent)

void ATask_Machine_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_Machine.Task_Machine_C.ExecuteUbergraph_Task_Machine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATask_Machine_C::ExecuteUbergraph_Task_Machine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "ExecuteUbergraph_Task_Machine");

	Params::Task_Machine_C_ExecuteUbergraph_Task_Machine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_Machine.Task_Machine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATask_Machine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_Machine.Task_Machine_C.Start Task
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATask_Machine_C::Start_Task(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "Start Task");

	Params::Task_Machine_C_Start_Task Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_Machine.Task_Machine_C.Suffle Bottles
// (Public, BlueprintCallable, BlueprintEvent)

void ATask_Machine_C::Suffle_Bottles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_Machine_C", "Suffle Bottles");

	UObject::ProcessEvent(Func, nullptr);
}

}

