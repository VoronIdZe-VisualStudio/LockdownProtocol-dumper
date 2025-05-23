﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Data_Skin_Ghost

#include "Basic.hpp"

#include "Str_SkinMaterial_structs.hpp"
#include "Enum_SelectedColor_structs.hpp"
#include "Data_Skin_Element_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Data_Skin_Ghost.Data_Skin_Ghost_C
// 0x0030 (0x00A0 - 0x0070)
class UData_Skin_Ghost_C final : public UData_Skin_Element_C
{
public:
	class UStaticMesh*                            Mesh_H;                                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_V;                                            // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStr_SkinMaterial>              Materials_H;                                       // 0x0080(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStr_SkinMaterial>              Materials_V;                                       // 0x0090(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Set_Ghost(class UStaticMeshComponent* Mesh_H_0, class UStaticMeshComponent* Mesh_V_0, const Enum_SelectedColor& Color, class UData_Face_C* Face);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Data_Skin_Ghost_C">();
	}
	static class UData_Skin_Ghost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UData_Skin_Ghost_C>();
	}
};
static_assert(alignof(UData_Skin_Ghost_C) == 0x000008, "Wrong alignment on UData_Skin_Ghost_C");
static_assert(sizeof(UData_Skin_Ghost_C) == 0x0000A0, "Wrong size on UData_Skin_Ghost_C");
static_assert(offsetof(UData_Skin_Ghost_C, Mesh_H) == 0x000070, "Member 'UData_Skin_Ghost_C::Mesh_H' has a wrong offset!");
static_assert(offsetof(UData_Skin_Ghost_C, Mesh_V) == 0x000078, "Member 'UData_Skin_Ghost_C::Mesh_V' has a wrong offset!");
static_assert(offsetof(UData_Skin_Ghost_C, Materials_H) == 0x000080, "Member 'UData_Skin_Ghost_C::Materials_H' has a wrong offset!");
static_assert(offsetof(UData_Skin_Ghost_C, Materials_V) == 0x000090, "Member 'UData_Skin_Ghost_C::Materials_V' has a wrong offset!");

}

