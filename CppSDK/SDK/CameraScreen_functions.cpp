﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraScreen

#include "Basic.hpp"

#include "CameraScreen_classes.hpp"
#include "CameraScreen_parameters.hpp"


namespace SDK
{

// Function CameraScreen.CameraScreen_C.Capture Tick
// (BlueprintCallable, BlueprintEvent)

void ACameraScreen_C::Capture_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraScreen_C", "Capture Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraScreen.CameraScreen_C.ExecuteUbergraph_CameraScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraScreen_C::ExecuteUbergraph_CameraScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraScreen_C", "ExecuteUbergraph_CameraScreen");

	Params::CameraScreen_C_ExecuteUbergraph_CameraScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraScreen.CameraScreen_C.Set New Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomCamera_C*                    Camera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraScreen_C::Set_New_Camera(class ARoomCamera_C* Camera, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraScreen_C", "Set New Camera");

	Params::CameraScreen_C_Set_New_Camera Parms{};

	Parms.Camera = Camera;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraScreen.CameraScreen_C.Start Screen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraScreen_C::Start_Screen(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraScreen_C", "Start Screen");

	Params::CameraScreen_C_Start_Screen Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraScreen.CameraScreen_C.Stop Screen
// (BlueprintCallable, BlueprintEvent)

void ACameraScreen_C::Stop_Screen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraScreen_C", "Stop Screen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraScreen.CameraScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACameraScreen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraScreen_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

