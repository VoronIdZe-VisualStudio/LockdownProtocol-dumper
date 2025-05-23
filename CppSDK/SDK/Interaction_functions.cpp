﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Interaction

#include "Basic.hpp"

#include "Interaction_classes.hpp"
#include "Interaction_parameters.hpp"


namespace SDK
{

// Function Interaction.Interaction_C.Get Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMec_C*                           Mec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString*                          Param_Name_0                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AInteraction_C::Get_Name(class AMec_C* Mec, class FString* Param_Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Get Name");

	Params::Interaction_C_Get_Name Parms{};

	Parms.Mec = Mec;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Name_0 != nullptr)
		*Param_Name_0 = std::move(Parms.Param_Name_0);
}


// Function Interaction.Interaction_C.Get Key
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          Key                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Get_Key(class AActor** Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Get Key");

	Params::Interaction_C_Get_Key Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = Parms.Key;
}


// Function Interaction.Interaction_C.OnRep_Lock
// (BlueprintCallable, BlueprintEvent)

void AInteraction_C::OnRep_Lock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "OnRep_Lock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Interaction.Interaction_C.Other Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Other_Interaction(int32 Param_Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Other Interaction");

	Params::Interaction_C_Other_Interaction Parms{};

	Parms.Param_Index_0 = Param_Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInteraction_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Interaction.Interaction_C.Local Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Local_Interaction(int32 Param_Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Local Interaction");

	Params::Interaction_C_Local_Interaction Parms{};

	Parms.Param_Index_0 = Param_Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.Net Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Net_Interaction(int32 Param_Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Net Interaction");

	Params::Interaction_C_Net_Interaction Parms{};

	Parms.Param_Index_0 = Param_Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Activate(bool Active_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Activate");

	Params::Interaction_C_Activate Parms{};

	Parms.Active_0 = Active_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.Set Lock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Set_Lock(bool Lock_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Set Lock");

	Params::Interaction_C_Set_Lock Parms{};

	Parms.Lock_0 = Lock_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.Set Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TRUE_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Set_Focus(bool TRUE_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Set Focus");

	Params::Interaction_C_Set_Focus Parms{};

	Parms.TRUE_0 = TRUE_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.Set Private Lock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::Set_Private_Lock(bool Lock_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Set Private Lock");

	Params::Interaction_C_Set_Private_Lock Parms{};

	Parms.Lock_0 = Lock_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Interaction.Interaction_C.Search Tick
// (BlueprintCallable, BlueprintEvent)

void AInteraction_C::Search_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "Search Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Interaction.Interaction_C.ExecuteUbergraph_Interaction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteraction_C::ExecuteUbergraph_Interaction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interaction_C", "ExecuteUbergraph_Interaction");

	Params::Interaction_C_ExecuteUbergraph_Interaction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

