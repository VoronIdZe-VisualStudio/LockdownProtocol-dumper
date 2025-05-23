﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Buff

#include "Basic.hpp"

#include "W_Buff_classes.hpp"
#include "W_Buff_parameters.hpp"


namespace SDK
{

// Function W_Buff.W_Buff_C.Color Level
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FLinearColor&              _2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              _1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              One                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Two                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UW_Buff_C::Color_Level(const struct FLinearColor& _2, const struct FLinearColor& _1, const struct FLinearColor& One, const struct FLinearColor& Two)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Color Level");

	Params::W_Buff_C_Color_Level Parms{};

	Parms._2 = std::move(_2);
	Parms._1 = std::move(_1);
	Parms.One = std::move(One);
	Parms.Two = std::move(Two);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_Buff.W_Buff_C.Color State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FLinearColor&              Heal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Armor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Sneak                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Buff_C::Color_State(const struct FLinearColor& Heal, const struct FLinearColor& Speed, const struct FLinearColor& Armor, const struct FLinearColor& Sneak, struct FLinearColor* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Color State");

	Params::W_Buff_C_Color_State Parms{};

	Parms.Heal = std::move(Heal);
	Parms.Speed = std::move(Speed);
	Parms.Armor = std::move(Armor);
	Parms.Sneak = std::move(Sneak);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function W_Buff.W_Buff_C.Color Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FLinearColor&              Seringe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Bottle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Grenade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Buff_C::Color_Type(const struct FLinearColor& Seringe, const struct FLinearColor& Bottle, const struct FLinearColor& Grenade, struct FLinearColor* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Color Type");

	Params::W_Buff_C_Color_Type Parms{};

	Parms.Seringe = std::move(Seringe);
	Parms.Bottle = std::move(Bottle);
	Parms.Grenade = std::move(Grenade);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function W_Buff.W_Buff_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Buff_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Buff.W_Buff_C.Delete
// (BlueprintCallable, BlueprintEvent)

void UW_Buff_C::Delete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Delete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Buff.W_Buff_C.ExecuteUbergraph_W_Buff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Buff_C::ExecuteUbergraph_W_Buff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "ExecuteUbergraph_W_Buff");

	Params::W_Buff_C_ExecuteUbergraph_W_Buff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Buff.W_Buff_C.Full Update
// (BlueprintCallable, BlueprintEvent)

void UW_Buff_C::Full_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Full Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Buff.W_Buff_C.Name Level
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    _2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    _1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    One                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    Two                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UW_Buff_C::Name_Level(const class FString& _2, const class FString& _1, const class FString& One, const class FString& Two)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Name Level");

	Params::W_Buff_C_Name_Level Parms{};

	Parms._2 = std::move(_2);
	Parms._1 = std::move(_1);
	Parms.One = std::move(One);
	Parms.Two = std::move(Two);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_Buff.W_Buff_C.Name State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    Heal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    Armor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    Sneak                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          Value                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_Buff_C::Name_State(const class FString& Heal, const class FString& Speed, const class FString& Armor, const class FString& Sneak, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Name State");

	Params::W_Buff_C_Name_State Parms{};

	Parms.Heal = std::move(Heal);
	Parms.Speed = std::move(Speed);
	Parms.Armor = std::move(Armor);
	Parms.Sneak = std::move(Sneak);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function W_Buff.W_Buff_C.Name Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    Seringe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    Bottle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    Grenade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          Value                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_Buff_C::Name_Type(const class FString& Seringe, const class FString& Bottle, const class FString& Grenade, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Name Type");

	Params::W_Buff_C_Name_Type Parms{};

	Parms.Seringe = std::move(Seringe);
	Parms.Bottle = std::move(Bottle);
	Parms.Grenade = std::move(Grenade);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function W_Buff.W_Buff_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Buff_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Buff.W_Buff_C.Select Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                          Value                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_Buff_C::Select_Name(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Select Name");

	Params::W_Buff_C_Select_Name Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function W_Buff.W_Buff_C.Set Color
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Buff_C::Set_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Set Color");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Buff.W_Buff_C.Set Elevation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Elevation_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Buff_C::Set_Elevation(int32 Elevation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Set Elevation");

	Params::W_Buff_C_Set_Elevation Parms{};

	Parms.Elevation_0 = Elevation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Buff.W_Buff_C.Set Time Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_Buff_C::Set_Time_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Set Time Text");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Buff.W_Buff_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Buff_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Tick");

	Params::W_Buff_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Buff.W_Buff_C.Time Update
// (BlueprintCallable, BlueprintEvent)

void UW_Buff_C::Time_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Buff_C", "Time Update");

	UObject::ProcessEvent(Func, nullptr);
}

}

