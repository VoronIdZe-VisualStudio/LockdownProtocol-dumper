﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Interaction

#include "Basic.hpp"

#include "BPI_Interaction_classes.hpp"
#include "BPI_Interaction_parameters.hpp"


namespace SDK
{

// Function BPI_Interaction.BPI_Interaction_C.Get Key
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          Key                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_C::Get_Key(class AActor** Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_C", "Get Key");

	Params::BPI_Interaction_C_Get_Key Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = Parms.Key;
}


// Function BPI_Interaction.BPI_Interaction_C.Get Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMec_C*                           Mec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString*                          Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_Interaction_C::Get_Name(class AMec_C* Mec, class FString* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_C", "Get Name");

	Params::BPI_Interaction_C_Get_Name Parms{};

	Parms.Mec = Mec;

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function BPI_Interaction.BPI_Interaction_C.Local Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_C::Local_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_C", "Local Interaction");

	Params::BPI_Interaction_C_Local_Interaction Parms{};

	Parms.Index_0 = Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Interaction.BPI_Interaction_C.Net Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_C::Net_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_C", "Net Interaction");

	Params::BPI_Interaction_C_Net_Interaction Parms{};

	Parms.Index_0 = Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Interaction.BPI_Interaction_C.Other Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FStr_ItemState&            Item_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_C::Other_Interaction(int32 Index_0, class AActor* Source, const struct FStr_ItemState& Item_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_C", "Other Interaction");

	Params::BPI_Interaction_C_Other_Interaction Parms{};

	Parms.Index_0 = Index_0;
	Parms.Source = Source;
	Parms.Item_State = std::move(Item_State);

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

