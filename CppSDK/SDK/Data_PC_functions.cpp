﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Data_PC

#include "Basic.hpp"

#include "Data_PC_classes.hpp"
#include "Data_PC_parameters.hpp"


namespace SDK
{

// Function Data_PC.Data_PC_C.Add Message
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::Add_Message(const class FString& Message, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Add Message");

	Params::Data_PC_C_Add_Message Parms{};

	Parms.Message = std::move(Message);
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.All Clear Screen
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AData_PC_C::All_Clear_Screen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "All Clear Screen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Data_PC.Data_PC_C.BndEvt__Data_PC_Button L_K2Node_ComponentBoundEvent_1_Button Push__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AMec_C*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::BndEvt__Data_PC_Button_L_K2Node_ComponentBoundEvent_1_Button_Push__DelegateSignature(class AMec_C* Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "BndEvt__Data_PC_Button L_K2Node_ComponentBoundEvent_1_Button Push__DelegateSignature");

	Params::Data_PC_C_BndEvt__Data_PC_Button_L_K2Node_ComponentBoundEvent_1_Button_Push__DelegateSignature Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.BndEvt__Data_PC_Button_K2Node_ComponentBoundEvent_0_Button Push__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AMec_C*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::BndEvt__Data_PC_Button_K2Node_ComponentBoundEvent_0_Button_Push__DelegateSignature(class AMec_C* Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "BndEvt__Data_PC_Button_K2Node_ComponentBoundEvent_0_Button Push__DelegateSignature");

	Params::Data_PC_C_BndEvt__Data_PC_Button_K2Node_ComponentBoundEvent_0_Button_Push__DelegateSignature Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.Clear
// (BlueprintCallable, BlueprintEvent)

void AData_PC_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Data_PC.Data_PC_C.ExecuteUbergraph_Data_PC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::ExecuteUbergraph_Data_PC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "ExecuteUbergraph_Data_PC");

	Params::Data_PC_C_ExecuteUbergraph_Data_PC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.Get Key
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          Key                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::Get_Key(class AActor** Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Get Key");

	Params::Data_PC_C_Get_Key Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = Parms.Key;
}


// Function Data_PC.Data_PC_C.Get Map Position
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                         Location_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::Get_Map_Position(struct FVector* Location_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Get Map Position");

	Params::Data_PC_C_Get_Map_Position Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location_0 != nullptr)
		*Location_0 = std::move(Parms.Location_0);
}


// Function Data_PC.Data_PC_C.Get Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMec_C*                           Mec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString*                          Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AData_PC_C::Get_Name(class AMec_C* Mec, class FString* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Get Name");

	Params::Data_PC_C_Get_Name Parms{};

	Parms.Mec = Mec;

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function Data_PC.Data_PC_C.Local Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::Local_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Local Interaction");

	Params::Data_PC_C_Local_Interaction Parms{};

	Parms.Index_0 = Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.Net Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::Net_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Net Interaction");

	Params::Data_PC_C_Net_Interaction Parms{};

	Parms.Index_0 = Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.Other Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AData_PC_C::Other_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Other Interaction");

	Params::Data_PC_C_Other_Interaction Parms{};

	Parms.Index_0 = Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Data_PC.Data_PC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AData_PC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Data_PC.Data_PC_C.Set Screen Info
// (Public, BlueprintCallable, BlueprintEvent)

void AData_PC_C::Set_Screen_Info()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "Set Screen Info");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Data_PC.Data_PC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AData_PC_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_PC_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

