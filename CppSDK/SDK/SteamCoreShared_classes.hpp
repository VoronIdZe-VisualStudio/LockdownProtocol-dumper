﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamCoreShared

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class SteamCoreShared.SteamCoreAudioCaptureBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamCoreAudioCaptureBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_AudioInputDeviceInfoToString(const struct FSteamCoreAudioInputDeviceInfo& Info);
	static void GetAvailableAudioInputDevices(const class UObject* WorldContextObject, const TDelegate<void(const TArray<struct FSteamCoreAudioInputDeviceInfo>& AvailableDevices)>& OnObtainDevicesEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamCoreAudioCaptureBlueprintLibrary">();
	}
	static class USteamCoreAudioCaptureBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamCoreAudioCaptureBlueprintLibrary>();
	}
};
static_assert(alignof(USteamCoreAudioCaptureBlueprintLibrary) == 0x000008, "Wrong alignment on USteamCoreAudioCaptureBlueprintLibrary");
static_assert(sizeof(USteamCoreAudioCaptureBlueprintLibrary) == 0x000028, "Wrong size on USteamCoreAudioCaptureBlueprintLibrary");

// Class SteamCoreShared.SteamCoreSharedAudioSubsystem
// 0x0000 (0x0030 - 0x0030)
class USteamCoreSharedAudioSubsystem final : public UWorldSubsystem
{
public:
	static struct FSteamCoreAudioInputDeviceInfo K2_FindAudioDeviceInfoFromDeviceId(const class FString& DeviceID);
	static struct FSteamCoreAudioInputDeviceInfo K2_FindAudioDeviceInfoFromDeviceName(const class FString& DeviceName);
	static TArray<struct FSteamCoreAudioInputDeviceInfo> K2_GetAudioInputDevices();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamCoreSharedAudioSubsystem">();
	}
	static class USteamCoreSharedAudioSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamCoreSharedAudioSubsystem>();
	}
};
static_assert(alignof(USteamCoreSharedAudioSubsystem) == 0x000008, "Wrong alignment on USteamCoreSharedAudioSubsystem");
static_assert(sizeof(USteamCoreSharedAudioSubsystem) == 0x000030, "Wrong size on USteamCoreSharedAudioSubsystem");

}

