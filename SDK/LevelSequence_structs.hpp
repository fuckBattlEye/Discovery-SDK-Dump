#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                              // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	struct FSoftObjectPath                             ExternalObjectPath;                                       // 0x0010(0x0018) (ZeroConstructor)
	struct FString                                     ObjectPath;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0
struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                    // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: AnimSequenceInstances
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0020(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// 0x0002
struct FLevelSequenceCameraSettings
{
	bool                                               bOverrideAspectRatioAxisConstraint;                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// 0x0030
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid                                       SkelTrackGuid;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             PathToAnimSequence;                                       // 0x0010(0x0018) (ZeroConstructor)
	bool                                               bExportTransforms;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportMorphTargets;                                      // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportAttributeCurves;                                   // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportMaterialCurves;                                    // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecordInWorldSpace;                                      // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00A8
struct FLevelSequencePlayerSnapshot
{
	struct FString                                     MasterName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FQualifiedFrameTime                         MasterTime;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FQualifiedFrameTime                         SourceTime;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     CurrentShotName;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FQualifiedFrameTime                         CurrentShotLocalTime;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FQualifiedFrameTime                         CurrentShotSourceTime;                                    // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     SourceTimecode;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: CameraComponent
	class ULevelSequence*                              ActiveShot;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMovieSceneSequenceID                       ShotID;                                                   // 0x00A0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0001
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
