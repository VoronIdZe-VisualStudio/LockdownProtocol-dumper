﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskManager

#include "Basic.hpp"

#include "TaskManager_classes.hpp"
#include "TaskManager_parameters.hpp"


namespace SDK
{

// Function TaskManager.TaskManager_C.All Join Update
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATask_C*>&                 Tasks                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATaskManager_C::All_Join_Update(TArray<class ATask_C*>& Tasks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "All Join Update");

	Params::TaskManager_C_All_Join_Update Parms{};

	Parms.Tasks = std::move(Tasks);

	UObject::ProcessEvent(Func, &Parms);

	Tasks = std::move(Parms.Tasks);
}


// Function TaskManager.TaskManager_C.Check Finished Tasks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   End                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATaskManager_C::Check_Finished_Tasks(bool* End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Check Finished Tasks");

	Params::TaskManager_C_Check_Finished_Tasks Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;
}


// Function TaskManager.TaskManager_C.Check Tasks End
// (BlueprintCallable, BlueprintEvent)

void ATaskManager_C::Check_Tasks_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Check Tasks End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.Clear Tasks
// (BlueprintCallable, BlueprintEvent)

void ATaskManager_C::Clear_Tasks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Clear Tasks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.ExecuteUbergraph_TaskManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATaskManager_C::ExecuteUbergraph_TaskManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "ExecuteUbergraph_TaskManager");

	Params::TaskManager_C_ExecuteUbergraph_TaskManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TaskManager.TaskManager_C.Focus Task
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Next                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATaskManager_C::Focus_Task(bool Next)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Focus Task");

	Params::TaskManager_C_Focus_Task Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TaskManager.TaskManager_C.Generate Tasks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Task_Count                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Difficulty                            Difficulty_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Player_Count_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATaskManager_C::Generate_Tasks(int32 Task_Count, E_Difficulty Difficulty_0, int32 Player_Count_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Generate Tasks");

	Params::TaskManager_C_Generate_Tasks Parms{};

	Parms.Task_Count = Task_Count;
	Parms.Difficulty_0 = Difficulty_0;
	Parms.Player_Count_0 = Player_Count_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TaskManager.TaskManager_C.Get Available Tasks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ATask_C*>*                 Tasks                                                  (Parm, OutParm)
// int32*                                  Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATaskManager_C::Get_Available_Tasks(TArray<class ATask_C*>* Tasks, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Get Available Tasks");

	Params::TaskManager_C_Get_Available_Tasks Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Tasks != nullptr)
		*Tasks = std::move(Parms.Tasks);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function TaskManager.TaskManager_C.Join Update
// (BlueprintCallable, BlueprintEvent)

void ATaskManager_C::Join_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Join Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.OnRep_Focused Task
// (BlueprintCallable, BlueprintEvent)

void ATaskManager_C::OnRep_Focused_Task()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "OnRep_Focused Task");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.OnRep_Session Tasks
// (BlueprintCallable, BlueprintEvent)

void ATaskManager_C::OnRep_Session_Tasks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "OnRep_Session Tasks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATaskManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.Set Session Tasks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Task_Count                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATask_C*>*                 Selected_Tasks                                         (Parm, OutParm)

void ATaskManager_C::Set_Session_Tasks(int32 Task_Count, TArray<class ATask_C*>* Selected_Tasks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Set Session Tasks");

	Params::TaskManager_C_Set_Session_Tasks Parms{};

	Parms.Task_Count = Task_Count;

	UObject::ProcessEvent(Func, &Parms);

	if (Selected_Tasks != nullptr)
		*Selected_Tasks = std::move(Parms.Selected_Tasks);
}


// Function TaskManager.TaskManager_C.Spawn Weapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATaskManager_C::Spawn_Weapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "Spawn Weapons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskManager.TaskManager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATaskManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

