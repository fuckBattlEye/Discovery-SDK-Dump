#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EmbarkAnimationDebugRuntime.AnimDebugCameraModifier
// 0x0038 (0x0080 - 0x0048)
class UAnimDebugCameraModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugCameraModifier"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimDebugPosableMeshComponent
// 0x0090 (0x0AA0 - 0x0A10)
class UAnimDebugPosableMeshComponent : public UPoseableMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0A10(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugPosableMeshComponent"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimDebugActor
// 0x0038 (0x0300 - 0x02C8)
class AAnimDebugActor : public AActor
{
public:
	TArray<class UAnimDebugPosableMeshComponent*>      PoseableMeshComponents;                                   // 0x02C8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
	class UCameraComponent*                            Camera;                                                   // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugActor"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimDebugWidgetSettings
// 0x0020 (0x0048 - 0x0028)
class UAnimDebugWidgetSettings : public UObject
{
public:
	struct FString                                     AnimTreeTypeFilterStr;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AnimTreeSearchStr;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugWidgetSettings"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimDebugQuickInspectCameraModifier
// 0x0070 (0x00B8 - 0x0048)
class UAnimDebugQuickInspectCameraModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0048(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugQuickInspectCameraModifier"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimDebugInfoWidgetSettings
// 0x0088 (0x00B0 - 0x0028)
class UAnimDebugInfoWidgetSettings : public UObject
{
public:
	struct FKey                                        ToggleRecordHotkey;                                       // 0x0028(0x0018) (Edit, Config)
	struct FKey                                        ToggleDebugCameraViewsHotkey;                             // 0x0040(0x0018) (Edit, Config)
	struct FKey                                        TimelineStepForwardHotkey;                                // 0x0058(0x0018) (Edit, Config)
	struct FKey                                        TimelineStepBackHotkey;                                   // 0x0070(0x0018) (Edit, Config)
	struct FKey                                        ToggleShowRecordingIDs;                                   // 0x0088(0x0018) (Edit, Config)
	struct FName                                       FirstPersonSkeletalMeshComponentName;                     // 0x00A0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseOldAutoRefreshInstancesOnPIEStart;                    // 0x00A8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugInfoWidgetSettings"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimInstanceBackdoor
// 0x0000 (0x0350 - 0x0350)
class UAnimInstanceBackdoor : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimInstanceBackdoor"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.EmbarkAnimationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAnimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.EmbarkAnimationFunctionLibrary"));
		return ptr;
	}


	TArray<struct FActiveAnimInfo> STATIC_GetAllActiveAnimations(class UAnimInstance* AnimInstance);//Offset:Discovery.exe+0x1B862D0
};


// Class EmbarkAnimationDebugRuntime.EmbarkAnimDebugRuntimeEngineSubsystem
// 0x0088 (0x00B8 - 0x0030)
class UEmbarkAnimDebugRuntimeEngineSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.EmbarkAnimDebugRuntimeEngineSubsystem"));
		return ptr;
	}

};


// Class EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimDebugRuntimeLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.AnimDebugRuntimeLibrary"));
		return ptr;
	}


	void STATIC_StartToRecord(class UAnimInstance* AnimInstance);//Offset:Discovery.exe+0x1B86A70
	void STATIC_AddCustomEntryCharacter(class ACharacter* Character, const struct FString& Name, const struct FString& Value);//Offset:Discovery.exe+0x1B867A0
	void STATIC_AddCustomEntry(class UAnimInstance* AnimInstance, const struct FString& Name, const struct FString& Value, bool bMainInstanceOnly);//Offset:Discovery.exe+0x1B868E0
};


// Class EmbarkAnimationDebugRuntime.EmbarkAnimDebugRuntimeWorldSubsystem
// 0x0000 (0x0040 - 0x0040)
class UEmbarkAnimDebugRuntimeWorldSubsystem : public UTickableWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAnimationDebugRuntime.EmbarkAnimDebugRuntimeWorldSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
