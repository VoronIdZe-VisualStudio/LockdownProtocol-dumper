﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_InputsSettings

#include "Basic.hpp"

#include "W_InputsSettings_classes.hpp"
#include "W_InputsSettings_parameters.hpp"


namespace SDK
{

// Function W_InputsSettings.W_InputsSettings_C.BndEvt__W_InputsSettings_Slider_Camera_K2Node_ComponentBoundEvent_1_On Confirm Value__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InputsSettings_C::BndEvt__W_InputsSettings_Slider_Camera_K2Node_ComponentBoundEvent_1_On_Confirm_Value__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "BndEvt__W_InputsSettings_Slider_Camera_K2Node_ComponentBoundEvent_1_On Confirm Value__DelegateSignature");

	Params::W_InputsSettings_C_BndEvt__W_InputsSettings_Slider_Camera_K2Node_ComponentBoundEvent_1_On_Confirm_Value__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_InputsSettings.W_InputsSettings_C.BndEvt__W_InputsSettings_W_Selector_2_K2Node_ComponentBoundEvent_4_On Value Change__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InputsSettings_C::BndEvt__W_InputsSettings_W_Selector_2_K2Node_ComponentBoundEvent_4_On_Value_Change__DelegateSignature(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "BndEvt__W_InputsSettings_W_Selector_2_K2Node_ComponentBoundEvent_4_On Value Change__DelegateSignature");

	Params::W_InputsSettings_C_BndEvt__W_InputsSettings_W_Selector_2_K2Node_ComponentBoundEvent_4_On_Value_Change__DelegateSignature Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_InputsSettings.W_InputsSettings_C.BndEvt__W_InputsSettings_W_Selector_3_K2Node_ComponentBoundEvent_3_On Value Change__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InputsSettings_C::BndEvt__W_InputsSettings_W_Selector_3_K2Node_ComponentBoundEvent_3_On_Value_Change__DelegateSignature(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "BndEvt__W_InputsSettings_W_Selector_3_K2Node_ComponentBoundEvent_3_On Value Change__DelegateSignature");

	Params::W_InputsSettings_C_BndEvt__W_InputsSettings_W_Selector_3_K2Node_ComponentBoundEvent_3_On_Value_Change__DelegateSignature Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_InputsSettings.W_InputsSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_InputsSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_InputsSettings.W_InputsSettings_C.ExecuteUbergraph_W_InputsSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InputsSettings_C::ExecuteUbergraph_W_InputsSettings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "ExecuteUbergraph_W_InputsSettings");

	Params::W_InputsSettings_C_ExecuteUbergraph_W_InputsSettings Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_InputsSettings.W_InputsSettings_C.Save Settings
// (BlueprintCallable, BlueprintEvent)

void UW_InputsSettings_C::Save_Settings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "Save Settings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_InputsSettings.W_InputsSettings_C.Set Default Modes
// (Public, BlueprintCallable, BlueprintEvent)

void UW_InputsSettings_C::Set_Default_Modes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_InputsSettings_C", "Set Default Modes");

	UObject::ProcessEvent(Func, nullptr);
}

}

