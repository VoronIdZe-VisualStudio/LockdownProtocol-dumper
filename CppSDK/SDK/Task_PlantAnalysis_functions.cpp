﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_PlantAnalysis

#include "Basic.hpp"

#include "Task_PlantAnalysis_classes.hpp"
#include "Task_PlantAnalysis_parameters.hpp"


namespace SDK
{

// Function Task_PlantAnalysis.Task_PlantAnalysis_C.BndEvt__Task_PlantAnalysis_PC Ref_K2Node_ComponentBoundEvent_0_Finito__DelegateSignature
// (BlueprintEvent)

void ATask_PlantAnalysis_C::BndEvt__Task_PlantAnalysis_PC_Ref_K2Node_ComponentBoundEvent_0_Finito__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_PlantAnalysis_C", "BndEvt__Task_PlantAnalysis_PC Ref_K2Node_ComponentBoundEvent_0_Finito__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_PlantAnalysis.Task_PlantAnalysis_C.Clear
// (BlueprintCallable, BlueprintEvent)

void ATask_PlantAnalysis_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_PlantAnalysis_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_PlantAnalysis.Task_PlantAnalysis_C.ExecuteUbergraph_Task_PlantAnalysis
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATask_PlantAnalysis_C::ExecuteUbergraph_Task_PlantAnalysis(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_PlantAnalysis_C", "ExecuteUbergraph_Task_PlantAnalysis");

	Params::Task_PlantAnalysis_C_ExecuteUbergraph_Task_PlantAnalysis Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_PlantAnalysis.Task_PlantAnalysis_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATask_PlantAnalysis_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_PlantAnalysis_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_PlantAnalysis.Task_PlantAnalysis_C.Set Plants
// (Public, BlueprintCallable, BlueprintEvent)

void ATask_PlantAnalysis_C::Set_Plants()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_PlantAnalysis_C", "Set Plants");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Task_PlantAnalysis.Task_PlantAnalysis_C.Start Task
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATask_PlantAnalysis_C::Start_Task(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_PlantAnalysis_C", "Start Task");

	Params::Task_PlantAnalysis_C_Start_Task Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}

}

