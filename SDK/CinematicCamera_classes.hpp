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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x02F8 - 0x02C8)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02D6(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x02D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x02E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x02F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CinematicCamera.CameraRig_Crane"));
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x02E8 - 0x02C8)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOrientationToRail;                                   // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x02D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x02D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CinematicCamera.CameraRig_Rail"));
		return ptr;
	}


	class USplineComponent* GetRailSplineComponent();//Offset:Discovery.exe+0x2DC2F40
};


// Class CinematicCamera.CineCameraActor
// 0x0080 (0x0A40 - 0x09C0)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x09C0(0x0068) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0A28(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CinematicCamera.CineCameraActor"));
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();//Offset:Discovery.exe+0x4B9FFC0
};


// Class CinematicCamera.CineCameraComponent
// 0x0110 (0x0B50 - 0x0A40)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0A40(0x000C) (Deprecated)
	struct FCameraFilmbackSettings                     Filmback;                                                 // 0x0A4C(0x000C) (Edit, BlueprintVisible)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0A58(0x0018) (Edit, BlueprintVisible)
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0A70(0x0068) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0AE0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0AE4(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x0AF0(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x0B00(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x0B10(0x0010) (ZeroConstructor, Config, Deprecated)
	struct FString                                     DefaultFilmbackPreset;                                    // 0x0B20(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x0B30(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x0B40(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x0B44(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CinematicCamera.CineCameraComponent"));
		return ptr;
	}


	void SetLensPresetByName(const struct FString& InPresetName);//Offset:Discovery.exe+0x4BA0960
	void SetFilmbackPresetByName(const struct FString& InPresetName);//Offset:Discovery.exe+0x4BA0A90
	void SetCurrentFocalLength(float InFocalLength);//Offset:Discovery.exe+0x4BA0D50
	float GetVerticalFieldOfView();//Offset:Discovery.exe+0x4BA0CF0
	TArray<struct FNamedLensPreset> STATIC_GetLensPresetsCopy();//Offset:Discovery.exe+0x4BA0780
	struct FString GetLensPresetName();//Offset:Discovery.exe+0x4BA0A10
	float GetHorizontalFieldOfView();//Offset:Discovery.exe+0x4BA0D20
	TArray<struct FNamedFilmbackPreset> STATIC_GetFilmbackPresetsCopy();//Offset:Discovery.exe+0x4BA0870
	struct FString GetFilmbackPresetName();//Offset:Discovery.exe+0x4BA0C70
	struct FString GetDefaultFilmbackPresetName();//Offset:Discovery.exe+0x4BA0B40
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
