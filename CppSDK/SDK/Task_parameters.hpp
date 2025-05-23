﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task

#include "Basic.hpp"


namespace SDK::Params
{

// Function Task.Task_C.Start Task
// 0x0008 (0x0008 - 0x0000)
struct Task_C_Start_Task final
{
public:
	double                                        Delay;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_C_Start_Task) == 0x000008, "Wrong alignment on Task_C_Start_Task");
static_assert(sizeof(Task_C_Start_Task) == 0x000008, "Wrong size on Task_C_Start_Task");
static_assert(offsetof(Task_C_Start_Task, Delay) == 0x000000, "Member 'Task_C_Start_Task::Delay' has a wrong offset!");

// Function Task.Task_C.ExecuteUbergraph_Task
// 0x0058 (0x0058 - 0x0000)
struct Task_C_ExecuteUbergraph_Task final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_Delay;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemSpawn_Handler_C*                   CallFunc_GetActorOfClass_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGM_C*                                  K2Node_DynamicCast_AsGM;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Value;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_C_ExecuteUbergraph_Task) == 0x000008, "Wrong alignment on Task_C_ExecuteUbergraph_Task");
static_assert(sizeof(Task_C_ExecuteUbergraph_Task) == 0x000058, "Wrong size on Task_C_ExecuteUbergraph_Task");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, EntryPoint) == 0x000000, "Member 'Task_C_ExecuteUbergraph_Task::EntryPoint' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'Task_C_ExecuteUbergraph_Task::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, K2Node_CustomEvent_Delay) == 0x000008, "Member 'Task_C_ExecuteUbergraph_Task::K2Node_CustomEvent_Delay' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, CallFunc_GetActorOfClass_ReturnValue) == 0x000010, "Member 'Task_C_ExecuteUbergraph_Task::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, CallFunc_GetGameMode_ReturnValue) == 0x000018, "Member 'Task_C_ExecuteUbergraph_Task::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, K2Node_DynamicCast_AsGM) == 0x000020, "Member 'Task_C_ExecuteUbergraph_Task::K2Node_DynamicCast_AsGM' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Task_C_ExecuteUbergraph_Task::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'Task_C_ExecuteUbergraph_Task::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, K2Node_CustomEvent_Value) == 0x00003C, "Member 'Task_C_ExecuteUbergraph_Task::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'Task_C_ExecuteUbergraph_Task::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Task_C_ExecuteUbergraph_Task, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'Task_C_ExecuteUbergraph_Task::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Task.Task_C.All Update Count
// 0x0004 (0x0004 - 0x0000)
struct Task_C_All_Update_Count final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_C_All_Update_Count) == 0x000004, "Wrong alignment on Task_C_All_Update_Count");
static_assert(sizeof(Task_C_All_Update_Count) == 0x000004, "Wrong size on Task_C_All_Update_Count");
static_assert(offsetof(Task_C_All_Update_Count, Value) == 0x000000, "Member 'Task_C_All_Update_Count::Value' has a wrong offset!");

}

