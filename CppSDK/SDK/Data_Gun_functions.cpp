﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Data_Gun

#include "Basic.hpp"

#include "Data_Gun_classes.hpp"
#include "Data_Gun_parameters.hpp"


namespace SDK
{

// Function Data_Gun.Data_Gun_C.Get Random Ammo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Crate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UData_Gun_C::Get_Random_Ammo(bool Crate, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Data_Gun_C", "Get Random Ammo");

	Params::Data_Gun_C_Get_Random_Ammo Parms{};

	Parms.Crate = Crate;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}

}

