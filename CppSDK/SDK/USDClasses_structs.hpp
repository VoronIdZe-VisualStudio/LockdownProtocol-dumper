﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: USDClasses

#include "Basic.hpp"


namespace SDK
{

// Enum USDClasses.EUsdDrawMode
// NumValues: 0x0006
enum class EUsdDrawMode : uint32
{
	Origin                                   = 0,
	Bounds                                   = 1,
	Cards                                    = 2,
	Default                                  = 3,
	Inherited                                = 4,
	EUsdDrawMode_MAX                         = 5,
};

// Enum USDClasses.EUsdModelCardGeometry
// NumValues: 0x0004
enum class EUsdModelCardGeometry : uint32
{
	Cross                                    = 0,
	Box                                      = 1,
	FromTexture                              = 2,
	EUsdModelCardGeometry_MAX                = 3,
};

// Enum USDClasses.EUsdModelCardFace
// NumValues: 0x0008
enum class EUsdModelCardFace : uint32
{
	None                                     = 0,
	XPos                                     = 1,
	YPos                                     = 2,
	ZPos                                     = 4,
	XNeg                                     = 8,
	YNeg                                     = 16,
	ZNeg                                     = 32,
	EUsdModelCardFace_MAX                    = 33,
};

// Enum USDClasses.EUsdDuplicateType
// NumValues: 0x0004
enum class EUsdDuplicateType : uint8
{
	FlattenComposedPrim                      = 0,
	SingleLayerSpecs                         = 1,
	AllLocalLayerSpecs                       = 2,
	EUsdDuplicateType_MAX                    = 3,
};

// Enum USDClasses.EUsdSaveDialogBehavior
// NumValues: 0x0004
enum class EUsdSaveDialogBehavior : uint8
{
	NeverSave                                = 0,
	AlwaysSave                               = 1,
	ShowPrompt                               = 2,
	EUsdSaveDialogBehavior_MAX               = 3,
};

// Enum USDClasses.EUsdEditInInstanceBehavior
// NumValues: 0x0004
enum class EUsdEditInInstanceBehavior : uint8
{
	Ignore                                   = 0,
	RemoveInstanceable                       = 1,
	ShowPrompt                               = 2,
	EUsdEditInInstanceBehavior_MAX           = 3,
};

// Enum USDClasses.EUsdUpAxis
// NumValues: 0x0003
enum class EUsdUpAxis : uint8
{
	YAxis                                    = 0,
	ZAxis                                    = 1,
	EUsdUpAxis_MAX                           = 2,
};

// ScriptStruct USDClasses.UsdPrimPathList
// 0x0010 (0x0010 - 0x0000)
struct FUsdPrimPathList final
{
public:
	TArray<class FString>                         PrimPaths;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUsdPrimPathList) == 0x000008, "Wrong alignment on FUsdPrimPathList");
static_assert(sizeof(FUsdPrimPathList) == 0x000010, "Wrong size on FUsdPrimPathList");
static_assert(offsetof(FUsdPrimPathList, PrimPaths) == 0x000000, "Member 'FUsdPrimPathList::PrimPaths' has a wrong offset!");

// ScriptStruct USDClasses.UsdMetadataValue
// 0x0020 (0x0020 - 0x0000)
struct FUsdMetadataValue final
{
public:
	class FString                                 TypeName;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringifiedValue;                                  // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUsdMetadataValue) == 0x000008, "Wrong alignment on FUsdMetadataValue");
static_assert(sizeof(FUsdMetadataValue) == 0x000020, "Wrong size on FUsdMetadataValue");
static_assert(offsetof(FUsdMetadataValue, TypeName) == 0x000000, "Member 'FUsdMetadataValue::TypeName' has a wrong offset!");
static_assert(offsetof(FUsdMetadataValue, StringifiedValue) == 0x000010, "Member 'FUsdMetadataValue::StringifiedValue' has a wrong offset!");

// ScriptStruct USDClasses.UsdPrimMetadata
// 0x0050 (0x0050 - 0x0000)
struct FUsdPrimMetadata final
{
public:
	TMap<class FString, struct FUsdMetadataValue> MetaData;                                          // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUsdPrimMetadata) == 0x000008, "Wrong alignment on FUsdPrimMetadata");
static_assert(sizeof(FUsdPrimMetadata) == 0x000050, "Wrong size on FUsdPrimMetadata");
static_assert(offsetof(FUsdPrimMetadata, MetaData) == 0x000000, "Member 'FUsdPrimMetadata::MetaData' has a wrong offset!");

// ScriptStruct USDClasses.UsdCombinedPrimMetadata
// 0x0050 (0x0050 - 0x0000)
struct FUsdCombinedPrimMetadata final
{
public:
	TMap<class FString, struct FUsdPrimMetadata>  PrimPathToMetadata;                                // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUsdCombinedPrimMetadata) == 0x000008, "Wrong alignment on FUsdCombinedPrimMetadata");
static_assert(sizeof(FUsdCombinedPrimMetadata) == 0x000050, "Wrong size on FUsdCombinedPrimMetadata");
static_assert(offsetof(FUsdCombinedPrimMetadata, PrimPathToMetadata) == 0x000000, "Member 'FUsdCombinedPrimMetadata::PrimPathToMetadata' has a wrong offset!");

// ScriptStruct USDClasses.UsdMetadataImportOptions
// 0x0020 (0x0020 - 0x0000)
struct FUsdMetadataImportOptions final
{
public:
	bool                                          bCollectMetadata;                                  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCollectFromEntireSubtrees;                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCollectOnComponents;                              // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         BlockedPrefixFilters;                              // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bInvertFilters;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUsdMetadataImportOptions) == 0x000008, "Wrong alignment on FUsdMetadataImportOptions");
static_assert(sizeof(FUsdMetadataImportOptions) == 0x000020, "Wrong size on FUsdMetadataImportOptions");
static_assert(offsetof(FUsdMetadataImportOptions, bCollectMetadata) == 0x000000, "Member 'FUsdMetadataImportOptions::bCollectMetadata' has a wrong offset!");
static_assert(offsetof(FUsdMetadataImportOptions, bCollectFromEntireSubtrees) == 0x000001, "Member 'FUsdMetadataImportOptions::bCollectFromEntireSubtrees' has a wrong offset!");
static_assert(offsetof(FUsdMetadataImportOptions, bCollectOnComponents) == 0x000002, "Member 'FUsdMetadataImportOptions::bCollectOnComponents' has a wrong offset!");
static_assert(offsetof(FUsdMetadataImportOptions, BlockedPrefixFilters) == 0x000008, "Member 'FUsdMetadataImportOptions::BlockedPrefixFilters' has a wrong offset!");
static_assert(offsetof(FUsdMetadataImportOptions, bInvertFilters) == 0x000018, "Member 'FUsdMetadataImportOptions::bInvertFilters' has a wrong offset!");

// ScriptStruct USDClasses.UsdStageOptions
// 0x0008 (0x0008 - 0x0000)
struct FUsdStageOptions final
{
public:
	float                                         MetersPerUnit;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUsdUpAxis                                    UpAxis;                                            // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUsdStageOptions) == 0x000004, "Wrong alignment on FUsdStageOptions");
static_assert(sizeof(FUsdStageOptions) == 0x000008, "Wrong size on FUsdStageOptions");
static_assert(offsetof(FUsdStageOptions, MetersPerUnit) == 0x000000, "Member 'FUsdStageOptions::MetersPerUnit' has a wrong offset!");
static_assert(offsetof(FUsdStageOptions, UpAxis) == 0x000004, "Member 'FUsdStageOptions::UpAxis' has a wrong offset!");

// ScriptStruct USDClasses.UsdUnrealAssetInfo
// 0x0070 (0x0070 - 0x0000)
struct FUsdUnrealAssetInfo final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Identifier;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Version;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UnrealContentPath;                                 // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UnrealAssetType;                                   // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UnrealExportTime;                                  // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UnrealEngineVersion;                               // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUsdUnrealAssetInfo) == 0x000008, "Wrong alignment on FUsdUnrealAssetInfo");
static_assert(sizeof(FUsdUnrealAssetInfo) == 0x000070, "Wrong size on FUsdUnrealAssetInfo");
static_assert(offsetof(FUsdUnrealAssetInfo, Name) == 0x000000, "Member 'FUsdUnrealAssetInfo::Name' has a wrong offset!");
static_assert(offsetof(FUsdUnrealAssetInfo, Identifier) == 0x000010, "Member 'FUsdUnrealAssetInfo::Identifier' has a wrong offset!");
static_assert(offsetof(FUsdUnrealAssetInfo, Version) == 0x000020, "Member 'FUsdUnrealAssetInfo::Version' has a wrong offset!");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealContentPath) == 0x000030, "Member 'FUsdUnrealAssetInfo::UnrealContentPath' has a wrong offset!");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealAssetType) == 0x000040, "Member 'FUsdUnrealAssetInfo::UnrealAssetType' has a wrong offset!");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealExportTime) == 0x000050, "Member 'FUsdUnrealAssetInfo::UnrealExportTime' has a wrong offset!");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealEngineVersion) == 0x000060, "Member 'FUsdUnrealAssetInfo::UnrealEngineVersion' has a wrong offset!");

}

