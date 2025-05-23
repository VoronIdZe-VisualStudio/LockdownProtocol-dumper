﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RuntimeDataTable

#include "Basic.hpp"


namespace SDK
{

// Enum RuntimeDataTable.ERuntimeDataTableBackupResultCode
// NumValues: 0x0007
enum class ERuntimeDataTableBackupResultCode : uint8
{
	DownloadFailedWithoutBackup              = 0,
	DownloadFailedAndBackupExistsBuCouldNotBeLoaded = 1,
	DownloadSucceededButCsvCouldNotBeParsed  = 2,
	DownloadFailedAndBackupLoaded            = 3,
	DownloadSucceededAndBackupSaved          = 4,
	DownloadSucceededAndBackupCouldNotBeSaved = 5,
	ERuntimeDataTableBackupResultCode_MAX    = 6,
};

// ScriptStruct RuntimeDataTable.RuntimeDataTableCallbackInfo
// 0x0028 (0x0028 - 0x0000)
struct FRuntimeDataTableCallbackInfo final
{
public:
	class FName                                   OperationName;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWasSuccessful;                                    // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ResponseAsString;                                  // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResponseCode;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRuntimeDataTableCallbackInfo) == 0x000008, "Wrong alignment on FRuntimeDataTableCallbackInfo");
static_assert(sizeof(FRuntimeDataTableCallbackInfo) == 0x000028, "Wrong size on FRuntimeDataTableCallbackInfo");
static_assert(offsetof(FRuntimeDataTableCallbackInfo, OperationName) == 0x000000, "Member 'FRuntimeDataTableCallbackInfo::OperationName' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableCallbackInfo, bWasSuccessful) == 0x000008, "Member 'FRuntimeDataTableCallbackInfo::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableCallbackInfo, ResponseAsString) == 0x000010, "Member 'FRuntimeDataTableCallbackInfo::ResponseAsString' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableCallbackInfo, ResponseCode) == 0x000020, "Member 'FRuntimeDataTableCallbackInfo::ResponseCode' has a wrong offset!");

// ScriptStruct RuntimeDataTable.RuntimeDataTableOperationParams
// 0x000C (0x000C - 0x0000)
struct FRuntimeDataTableOperationParams final
{
public:
	class FName                                   OperationName;                                     // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RequestTimeout;                                    // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRuntimeDataTableOperationParams) == 0x000004, "Wrong alignment on FRuntimeDataTableOperationParams");
static_assert(sizeof(FRuntimeDataTableOperationParams) == 0x00000C, "Wrong size on FRuntimeDataTableOperationParams");
static_assert(offsetof(FRuntimeDataTableOperationParams, OperationName) == 0x000000, "Member 'FRuntimeDataTableOperationParams::OperationName' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableOperationParams, RequestTimeout) == 0x000008, "Member 'FRuntimeDataTableOperationParams::RequestTimeout' has a wrong offset!");

// ScriptStruct RuntimeDataTable.RuntimeDataTableTokenInfo
// 0x0048 (0x0048 - 0x0000)
struct FRuntimeDataTableTokenInfo final
{
public:
	class FString                                 PrivateKey;                                        // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ServiceAccountEmail;                               // 0x0010(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ClaimUrl;                                          // 0x0020(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TokenUri;                                          // 0x0030(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SecondsUntilExpiration;                            // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRuntimeDataTableTokenInfo) == 0x000008, "Wrong alignment on FRuntimeDataTableTokenInfo");
static_assert(sizeof(FRuntimeDataTableTokenInfo) == 0x000048, "Wrong size on FRuntimeDataTableTokenInfo");
static_assert(offsetof(FRuntimeDataTableTokenInfo, PrivateKey) == 0x000000, "Member 'FRuntimeDataTableTokenInfo::PrivateKey' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableTokenInfo, ServiceAccountEmail) == 0x000010, "Member 'FRuntimeDataTableTokenInfo::ServiceAccountEmail' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableTokenInfo, ClaimUrl) == 0x000020, "Member 'FRuntimeDataTableTokenInfo::ClaimUrl' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableTokenInfo, TokenUri) == 0x000030, "Member 'FRuntimeDataTableTokenInfo::TokenUri' has a wrong offset!");
static_assert(offsetof(FRuntimeDataTableTokenInfo, SecondsUntilExpiration) == 0x000040, "Member 'FRuntimeDataTableTokenInfo::SecondsUntilExpiration' has a wrong offset!");

}

