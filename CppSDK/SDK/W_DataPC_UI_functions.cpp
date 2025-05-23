﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DataPC_UI

#include "Basic.hpp"

#include "W_DataPC_UI_classes.hpp"
#include "W_DataPC_UI_parameters.hpp"


namespace SDK
{

// Function W_DataPC_UI.W_DataPC_UI_C.Clear Messages
// (BlueprintCallable, BlueprintEvent)

void UW_DataPC_UI_C::Clear_Messages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "Clear Messages");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_DataPC_UI.W_DataPC_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_DataPC_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_DataPC_UI.W_DataPC_UI_C.Draw Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DataPC_UI_C::Draw_Message(const class FString& Message, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "Draw Message");

	Params::W_DataPC_UI_C_Draw_Message Parms{};

	Parms.Message = std::move(Message);
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DataPC_UI.W_DataPC_UI_C.ExecuteUbergraph_W_DataPC_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DataPC_UI_C::ExecuteUbergraph_W_DataPC_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "ExecuteUbergraph_W_DataPC_UI");

	Params::W_DataPC_UI_C_ExecuteUbergraph_W_DataPC_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DataPC_UI.W_DataPC_UI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DataPC_UI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "PreConstruct");

	Params::W_DataPC_UI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DataPC_UI.W_DataPC_UI_C.Set Index
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FStr_ItemSpawnLocation&    Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DataPC_UI_C::Set_Index(const struct FStr_ItemSpawnLocation& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "Set Index");

	Params::W_DataPC_UI_C_Set_Index Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DataPC_UI.W_DataPC_UI_C.Set Partner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Room                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DataPC_UI_C::Set_Partner(int32 Room)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "Set Partner");

	Params::W_DataPC_UI_C_Set_Partner Parms{};

	Parms.Room = Room;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_DataPC_UI.W_DataPC_UI_C.Set Screen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_DataPC_State                          State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DataPC_UI_C::Set_Screen(E_DataPC_State State, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_DataPC_UI_C", "Set Screen");

	Params::W_DataPC_UI_C_Set_Screen Parms{};

	Parms.State = State;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

