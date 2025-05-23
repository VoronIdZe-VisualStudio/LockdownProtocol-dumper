﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineCameras

#include "Basic.hpp"

#include "EngineCameras_classes.hpp"
#include "EngineCameras_parameters.hpp"


namespace SDK
{

// Function EngineCameras.LegacyCameraShake.StartLegacyCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*             PlayerCameraManager                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULegacyCameraShake>   ShakeClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECameraShakePlaySpace                   PlaySpace                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FRotator&                  UserPlaySpaceRot                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LegacyCameraShake", "StartLegacyCameraShake");

	Params::LegacyCameraShake_StartLegacyCameraShake Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = std::move(UserPlaySpaceRot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*             PlayerCameraManager                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULegacyCameraShake>   ShakeClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraShakeSourceComponent*      SourceComponent                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECameraShakePlaySpace                   PlaySpace                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FRotator&                  UserPlaySpaceRot                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LegacyCameraShake", "StartLegacyCameraShakeFromSource");

	Params::LegacyCameraShake_StartLegacyCameraShakeFromSource Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.SourceComponent = SourceComponent;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = std::move(UserPlaySpaceRot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.LegacyCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Alpha                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FMinimalViewInfo&          POV                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo*                ModifiedPOV                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void ULegacyCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyCameraShake", "BlueprintUpdateCameraShake");

	Params::LegacyCameraShake_BlueprintUpdateCameraShake Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Alpha = Alpha;
	Parms.POV = std::move(POV);

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = std::move(Parms.ModifiedPOV);
}


// Function EngineCameras.LegacyCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegacyCameraShake::ReceivePlayShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyCameraShake", "ReceivePlayShake");

	Params::LegacyCameraShake_ReceivePlayShake Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngineCameras.LegacyCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bImmediately                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegacyCameraShake::ReceiveStopShake(bool bImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyCameraShake", "ReceiveStopShake");

	Params::LegacyCameraShake_ReceiveStopShake Parms{};

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngineCameras.LegacyCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULegacyCameraShake::ReceiveIsFinished() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyCameraShake", "ReceiveIsFinished");

	Params::LegacyCameraShake_ReceiveIsFinished Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*                 CameraShake                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShakeFunctionLibrary::Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LegacyCameraShakeFunctionLibrary", "Conv_LegacyCameraShake");

	Params::LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake Parms{};

	Parms.CameraShake = CameraShake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PlayerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(const class UObject* WorldContextObject, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::CameraAnimationCameraModifier_GetCameraAnimationCameraModifier Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ControllerId                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(const class UObject* WorldContextObject, int32 ControllerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ControllerId = ControllerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class APlayerController*          PlayerController                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(const class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*         Sequence                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCameraAnimationParams&    Params_0                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle           ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::CameraAnimationCameraModifier_PlayCameraAnimation Parms{};

	Parms.Sequence = Sequence;
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bImmediate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimations");

	Params::CameraAnimationCameraModifier_StopAllCameraAnimations Parms{};

	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*         Sequence                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bImmediate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimationsOf");

	Params::CameraAnimationCameraModifier_StopAllCameraAnimationsOf Parms{};

	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineCameras.CameraAnimationCameraModifier.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FCameraAnimationHandle&    Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bImmediate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopCameraAnimation");

	Params::CameraAnimationCameraModifier_StopCameraAnimation Parms{};

	Parms.Handle = std::move(Handle);
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FCameraAnimationHandle&    Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "IsCameraAnimationActive");

	Params::CameraAnimationCameraModifier_IsCameraAnimationActive Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.EngineCameraAnimationFunctionLibrary.Conv_CameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerCameraManager*             PlayerCameraManager                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UEngineCameraAnimationFunctionLibrary::Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EngineCameraAnimationFunctionLibrary", "Conv_CameraAnimationCameraModifier");

	Params::EngineCameraAnimationFunctionLibrary_Conv_CameraAnimationCameraModifier Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.EngineCameraAnimationFunctionLibrary.Conv_CameraAnimationPlaySpace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECameraShakePlaySpace                   CameraShakePlaySpace                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECameraAnimationPlaySpace               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECameraAnimationPlaySpace UEngineCameraAnimationFunctionLibrary::Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EngineCameraAnimationFunctionLibrary", "Conv_CameraAnimationPlaySpace");

	Params::EngineCameraAnimationFunctionLibrary_Conv_CameraAnimationPlaySpace Parms{};

	Parms.CameraShakePlaySpace = CameraShakePlaySpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.EngineCameraAnimationFunctionLibrary.Conv_CameraShakePlaySpace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECameraAnimationPlaySpace               CameraAnimationPlaySpace                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECameraShakePlaySpace                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECameraShakePlaySpace UEngineCameraAnimationFunctionLibrary::Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EngineCameraAnimationFunctionLibrary", "Conv_CameraShakePlaySpace");

	Params::EngineCameraAnimationFunctionLibrary_Conv_CameraShakePlaySpace Parms{};

	Parms.CameraAnimationPlaySpace = CameraAnimationPlaySpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.EngineCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationSequence*         Sequence                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCameraAnimationParams&    Params_0                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle           ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FCameraAnimationHandle UEngineCamerasSubsystem::PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngineCamerasSubsystem", "PlayCameraAnimation");

	Params::EngineCamerasSubsystem_PlayCameraAnimation Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineCameras.EngineCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bImmediate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEngineCamerasSubsystem::StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngineCamerasSubsystem", "StopAllCameraAnimations");

	Params::EngineCamerasSubsystem_StopAllCameraAnimations Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineCameras.EngineCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationSequence*         Sequence                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bImmediate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEngineCamerasSubsystem::StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngineCamerasSubsystem", "StopAllCameraAnimationsOf");

	Params::EngineCamerasSubsystem_StopAllCameraAnimationsOf Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineCameras.EngineCamerasSubsystem.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCameraAnimationHandle&    Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bImmediate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEngineCamerasSubsystem::StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngineCamerasSubsystem", "StopCameraAnimation");

	Params::EngineCamerasSubsystem_StopCameraAnimation Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Handle = std::move(Handle);
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineCameras.EngineCamerasSubsystem.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCameraAnimationHandle&    Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEngineCamerasSubsystem::IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngineCamerasSubsystem", "IsCameraAnimationActive");

	Params::EngineCamerasSubsystem_IsCameraAnimationActive Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

