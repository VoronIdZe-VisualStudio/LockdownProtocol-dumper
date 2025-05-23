﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Slider

#include "Basic.hpp"

#include "W_Slider_classes.hpp"
#include "W_Slider_parameters.hpp"


namespace SDK
{

// Function W_Slider.W_Slider_C.Range Relative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UW_Slider_C::Range_Relative(double A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Range Relative");

	Params::W_Slider_C_Range_Relative Parms{};

	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_Slider.W_Slider_C.Set SpinSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Slider_C::Set_SpinSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Set SpinSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.Round Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double*                                 Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::Round_Value(double* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Round Value");

	Params::W_Slider_C_Round_Value Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function W_Slider.W_Slider_C.Update Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_Slider_C::Update_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Update Text");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "PreConstruct");

	Params::W_Slider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Tick");

	Params::W_Slider_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::W_Slider_C_BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_1_K2Node_ComponentBoundEvent_2_On Pressed__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_1_K2Node_ComponentBoundEvent_2_On_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_1_K2Node_ComponentBoundEvent_2_On Pressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_6_Hold Tick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Mouse_Delta                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_6_Hold_Tick__DelegateSignature(const struct FVector2D& Mouse_Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_6_Hold Tick__DelegateSignature");

	Params::W_Slider_C_BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_6_Hold_Tick__DelegateSignature Parms{};

	Parms.Mouse_Delta = std::move(Mouse_Delta);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::W_Slider_C_BndEvt__W_Slider_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_8_On Released__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_8_On_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_8_On Released__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_1_On Enter__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_1_On_Enter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_1_On Enter__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_3_On Leave__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_3_On_Leave__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_Jauge_K2Node_ComponentBoundEvent_3_On Leave__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_Text_K2Node_ComponentBoundEvent_4_On Enter__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_Text_K2Node_ComponentBoundEvent_4_On_Enter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_Text_K2Node_ComponentBoundEvent_4_On Enter__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_W_Trigger_Text_K2Node_ComponentBoundEvent_5_On Leave__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_W_Trigger_Text_K2Node_ComponentBoundEvent_5_On_Leave__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_W_Trigger_Text_K2Node_ComponentBoundEvent_5_On Leave__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_All_Trigger_K2Node_ComponentBoundEvent_9_On Enter__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_All_Trigger_K2Node_ComponentBoundEvent_9_On_Enter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_All_Trigger_K2Node_ComponentBoundEvent_9_On Enter__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.BndEvt__W_Slider_All_Trigger_K2Node_ComponentBoundEvent_10_On Leave__DelegateSignature
// (BlueprintEvent)

void UW_Slider_C::BndEvt__W_Slider_All_Trigger_K2Node_ComponentBoundEvent_10_On_Leave__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_All_Trigger_K2Node_ComponentBoundEvent_10_On Leave__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.Set Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::Set_Value(double Value_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Set Value");

	Params::W_Slider_C_Set_Value Parms{};

	Parms.Value_0 = Value_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.ExecuteUbergraph_W_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::ExecuteUbergraph_W_Slider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "ExecuteUbergraph_W_Slider");

	Params::W_Slider_C_ExecuteUbergraph_W_Slider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

