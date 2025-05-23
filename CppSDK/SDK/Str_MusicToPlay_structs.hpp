﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Str_MusicToPlay

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Str_MusicToPlay.Str_MusicToPlay
// 0x0028 (0x0028 - 0x0000)
struct FStr_MusicToPlay final
{
public:
	class FString                                 Title_10_D0409C4E4622BC1412756AB2EA2B3E71;         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Artists_9_1062BE244DDE7863903DB6BB65B19995;        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_6_A85FA52340EAEB208029C9B4C155D8F1;          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStr_MusicToPlay) == 0x000008, "Wrong alignment on FStr_MusicToPlay");
static_assert(sizeof(FStr_MusicToPlay) == 0x000028, "Wrong size on FStr_MusicToPlay");
static_assert(offsetof(FStr_MusicToPlay, Title_10_D0409C4E4622BC1412756AB2EA2B3E71) == 0x000000, "Member 'FStr_MusicToPlay::Title_10_D0409C4E4622BC1412756AB2EA2B3E71' has a wrong offset!");
static_assert(offsetof(FStr_MusicToPlay, Artists_9_1062BE244DDE7863903DB6BB65B19995) == 0x000010, "Member 'FStr_MusicToPlay::Artists_9_1062BE244DDE7863903DB6BB65B19995' has a wrong offset!");
static_assert(offsetof(FStr_MusicToPlay, Sound_6_A85FA52340EAEB208029C9B4C155D8F1) == 0x000020, "Member 'FStr_MusicToPlay::Sound_6_A85FA52340EAEB208029C9B4C155D8F1' has a wrong offset!");

}

