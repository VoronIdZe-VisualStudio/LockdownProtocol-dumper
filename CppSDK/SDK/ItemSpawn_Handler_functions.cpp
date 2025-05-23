﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemSpawn_Handler

#include "Basic.hpp"

#include "ItemSpawn_Handler_classes.hpp"
#include "ItemSpawn_Handler_parameters.hpp"


namespace SDK
{

// Function ItemSpawn_Handler.ItemSpawn_Handler_C.ExecuteUbergraph_ItemSpawn_Handler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemSpawn_Handler_C::ExecuteUbergraph_ItemSpawn_Handler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "ExecuteUbergraph_ItemSpawn_Handler");

	Params::ItemSpawn_Handler_C_ExecuteUbergraph_ItemSpawn_Handler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSpawn_Handler.ItemSpawn_Handler_C.Place Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AItemSpawn_Handler_C::Place_Items()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "Place Items");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSpawn_Handler.ItemSpawn_Handler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AItemSpawn_Handler_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSpawn_Handler.ItemSpawn_Handler_C.Search Spawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AItemSpawn_Handler_C::Search_Spawners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "Search Spawners");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSpawn_Handler.ItemSpawn_Handler_C.Show Placers
// (BlueprintCallable, BlueprintEvent)

void AItemSpawn_Handler_C::Show_Placers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "Show Placers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSpawn_Handler.ItemSpawn_Handler_C.Show Spawners
// (BlueprintCallable, BlueprintEvent)

void AItemSpawn_Handler_C::Show_Spawners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "Show Spawners");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSpawn_Handler.ItemSpawn_Handler_C.Spawn Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FStr_Item&                 Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStr_ItemSpawnRequest>&   Locations                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStr_ItemSpawnLocation*          Location                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemSpawn_Handler_C::Spawn_Item(const struct FStr_Item& Item, TArray<struct FStr_ItemSpawnRequest>& Locations, struct FStr_ItemSpawnLocation* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSpawn_Handler_C", "Spawn Item");

	Params::ItemSpawn_Handler_C_Spawn_Item Parms{};

	Parms.Item = std::move(Item);
	Parms.Locations = std::move(Locations);

	UObject::ProcessEvent(Func, &Parms);

	Locations = std::move(Parms.Locations);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}

}

