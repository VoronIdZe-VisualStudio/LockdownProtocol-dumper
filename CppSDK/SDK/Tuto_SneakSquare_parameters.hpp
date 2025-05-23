﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_SneakSquare

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Tuto_SneakSquare.Tuto_SneakSquare_C.Check Items on Square
// 0x0004 (0x0004 - 0x0000)
struct Tuto_SneakSquare_C_Check_Items_on_Square final
{
public:
	int32                                         Item_In_Count;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tuto_SneakSquare_C_Check_Items_on_Square) == 0x000004, "Wrong alignment on Tuto_SneakSquare_C_Check_Items_on_Square");
static_assert(sizeof(Tuto_SneakSquare_C_Check_Items_on_Square) == 0x000004, "Wrong size on Tuto_SneakSquare_C_Check_Items_on_Square");
static_assert(offsetof(Tuto_SneakSquare_C_Check_Items_on_Square, Item_In_Count) == 0x000000, "Member 'Tuto_SneakSquare_C_Check_Items_on_Square::Item_In_Count' has a wrong offset!");

// Function Tuto_SneakSquare.Tuto_SneakSquare_C.ExecuteUbergraph_Tuto_SneakSquare
// 0x00F8 (0x00F8 - 0x0000)
struct Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue;             // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_2;                 // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMec_C*                                 K2Node_DynamicCast_AsMec;                          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPointInBox_ReturnValue;                 // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_State;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_3;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGM_C*                                  K2Node_DynamicCast_AsGM;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Start)>                   K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Start;                          // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare) == 0x000008, "Wrong alignment on Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare");
static_assert(sizeof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare) == 0x0000F8, "Wrong size on Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, EntryPoint) == 0x000000, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_Conv_IntToVector_ReturnValue) == 0x000008, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_Conv_IntToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_SwitchInteger_CmpSuccess) == 0x000021, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_SwitchInteger_CmpSuccess_1) == 0x000022, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_SwitchInteger_CmpSuccess_2) == 0x000023, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_SwitchInteger_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000040, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000058, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_GetPlayerPawn_ReturnValue) == 0x000070, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_DynamicCast_AsMec) == 0x000078, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_DynamicCast_AsMec' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_IsPointInBox_ReturnValue) == 0x0000A0, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_IsPointInBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_CustomEvent_State) == 0x0000A4, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_CustomEvent_State' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_SwitchInteger_CmpSuccess_3) == 0x0000A8, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_SwitchInteger_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, CallFunc_GetGameMode_ReturnValue) == 0x0000C0, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C8, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_DynamicCast_AsGM) == 0x0000D8, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_DynamicCast_AsGM' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E4, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare, K2Node_CustomEvent_Start) == 0x0000F4, "Member 'Tuto_SneakSquare_C_ExecuteUbergraph_Tuto_SneakSquare::K2Node_CustomEvent_Start' has a wrong offset!");

// Function Tuto_SneakSquare.Tuto_SneakSquare_C.Go To State
// 0x0004 (0x0004 - 0x0000)
struct Tuto_SneakSquare_C_Go_To_State final
{
public:
	int32                                         State_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tuto_SneakSquare_C_Go_To_State) == 0x000004, "Wrong alignment on Tuto_SneakSquare_C_Go_To_State");
static_assert(sizeof(Tuto_SneakSquare_C_Go_To_State) == 0x000004, "Wrong size on Tuto_SneakSquare_C_Go_To_State");
static_assert(offsetof(Tuto_SneakSquare_C_Go_To_State, State_0) == 0x000000, "Member 'Tuto_SneakSquare_C_Go_To_State::State_0' has a wrong offset!");

// Function Tuto_SneakSquare.Tuto_SneakSquare_C.Tutorial Change
// 0x0001 (0x0001 - 0x0000)
struct Tuto_SneakSquare_C_Tutorial_Change final
{
public:
	bool                                          Start;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tuto_SneakSquare_C_Tutorial_Change) == 0x000001, "Wrong alignment on Tuto_SneakSquare_C_Tutorial_Change");
static_assert(sizeof(Tuto_SneakSquare_C_Tutorial_Change) == 0x000001, "Wrong size on Tuto_SneakSquare_C_Tutorial_Change");
static_assert(offsetof(Tuto_SneakSquare_C_Tutorial_Change, Start) == 0x000000, "Member 'Tuto_SneakSquare_C_Tutorial_Change::Start' has a wrong offset!");

}

