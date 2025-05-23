﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TutoScreeWorld

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_TutoScreeWorld.W_TutoScreeWorld_C.ExecuteUbergraph_W_TutoScreeWorld
// 0x0020 (0x0020 - 0x0000)
struct W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_True;                           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Value;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld) == 0x000008, "Wrong alignment on W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld");
static_assert(sizeof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld) == 0x000020, "Wrong size on W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, EntryPoint) == 0x000000, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, Temp_bool_Variable) == 0x000004, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, Temp_byte_Variable) == 0x000005, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, Temp_byte_Variable_1) == 0x000006, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, K2Node_CustomEvent_True) == 0x000007, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::K2Node_CustomEvent_True' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, K2Node_Select_Default) == 0x000008, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, K2Node_CustomEvent_Value) == 0x00000C, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'W_TutoScreeWorld_C_ExecuteUbergraph_W_TutoScreeWorld::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_TutoScreeWorld.W_TutoScreeWorld_C.Show Video
// 0x0001 (0x0001 - 0x0000)
struct W_TutoScreeWorld_C_Show_Video final
{
public:
	bool                                          TRUE_0;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutoScreeWorld_C_Show_Video) == 0x000001, "Wrong alignment on W_TutoScreeWorld_C_Show_Video");
static_assert(sizeof(W_TutoScreeWorld_C_Show_Video) == 0x000001, "Wrong size on W_TutoScreeWorld_C_Show_Video");
static_assert(offsetof(W_TutoScreeWorld_C_Show_Video, TRUE_0) == 0x000000, "Member 'W_TutoScreeWorld_C_Show_Video::TRUE_0' has a wrong offset!");

// Function W_TutoScreeWorld.W_TutoScreeWorld_C.Update jauge
// 0x0004 (0x0004 - 0x0000)
struct W_TutoScreeWorld_C_Update_jauge final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutoScreeWorld_C_Update_jauge) == 0x000004, "Wrong alignment on W_TutoScreeWorld_C_Update_jauge");
static_assert(sizeof(W_TutoScreeWorld_C_Update_jauge) == 0x000004, "Wrong size on W_TutoScreeWorld_C_Update_jauge");
static_assert(offsetof(W_TutoScreeWorld_C_Update_jauge, Value) == 0x000000, "Member 'W_TutoScreeWorld_C_Update_jauge::Value' has a wrong offset!");

}

