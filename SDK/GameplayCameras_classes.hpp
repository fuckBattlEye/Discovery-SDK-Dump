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

// Class GameplayCameras.CameraAnimationCameraModifier
// 0x0018 (0x0060 - 0x0048)
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>          ActiveAnimations;                                         // 0x0048(0x0010) (ZeroConstructor)
	uint16_t                                           InstanceSerialNumber;                                     // 0x0058(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.CameraAnimationCameraModifier"));
		return ptr;
	}


	void StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate);//Offset:Discovery.exe+0x29CCC80
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);//Offset:Discovery.exe+0x29CCB90
	void StopAllCameraAnimations(bool bImmediate);//Offset:Discovery.exe+0x29CCAF0
	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params);//Offset:Discovery.exe+0x29CCE30
	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle);//Offset:Discovery.exe+0x29CCD80
	class UCameraAnimationCameraModifier* STATIC_GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController);//Offset:Discovery.exe+0x29CC890
	class UCameraAnimationCameraModifier* STATIC_GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int ControllerId);//Offset:Discovery.exe+0x29CC930
	class UCameraAnimationCameraModifier* STATIC_GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int PlayerIndex);//Offset:Discovery.exe+0x29CCA10
};


// Class GameplayCameras.TestCameraShake
// 0x0000 (0x00F0 - 0x00F0)
class UTestCameraShake : public UCameraShakeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.TestCameraShake"));
		return ptr;
	}

};


// Class GameplayCameras.SimpleCameraShakePattern
// 0x0010 (0x0038 - 0x0028)
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                              Duration;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.SimpleCameraShakePattern"));
		return ptr;
	}

};


// Class GameplayCameras.ConstantCameraShakePattern
// 0x0030 (0x0068 - 0x0038)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct FVector                                     LocationOffset;                                           // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.ConstantCameraShakePattern"));
		return ptr;
	}

};


// Class GameplayCameras.CompositeCameraShakePattern
// 0x0020 (0x0048 - 0x0028)
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>                 ChildPatterns;                                            // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.CompositeCameraShakePattern"));
		return ptr;
	}

};


// Class GameplayCameras.DefaultCameraShakeBase
// 0x0000 (0x00F0 - 0x00F0)
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.DefaultCameraShakeBase"));
		return ptr;
	}

};


// Class GameplayCameras.MatineeCameraShake
// 0x0140 (0x0230 - 0x00F0)
class UMatineeCameraShake : public UCameraShakeBase
{
public:
	float                                              OscillationBlendOutTime;                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FROscillator                                RotOscillation;                                           // 0x00F4(0x0024) (Edit, BlueprintVisible)
	struct FVOscillator                                LocOscillation;                                           // 0x0118(0x0024) (Edit, BlueprintVisible)
	struct FFOscillator                                FOVOscillation;                                           // 0x013C(0x000C) (Edit, BlueprintVisible)
	float                                              AnimPlayRate;                                             // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimScale;                                                // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendInTime;                                          // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendOutTime;                                         // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomAnimSegmentDuration;                                // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	class UCameraAnim*                                 Anim;                                                     // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnimationSequence*                    AnimSequence;                                             // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomAnimSegment : 1;                                   // 0x0170(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              OscillatorTimeRemaining;                                  // 0x0174(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UCameraAnimInst*                             AnimInst;                                                 // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0180(0x0078) MISSED OFFSET
	class USequenceCameraShakePattern*                 SequenceShakePattern;                                     // 0x01F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0200(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.MatineeCameraShake"));
		return ptr;
	}


	class UMatineeCameraShake* STATIC_StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);//Offset:Discovery.exe+0x29CDD90
	class UMatineeCameraShake* STATIC_StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);//Offset:Discovery.exe+0x29CDFC0
	void ReceiveStopShake(bool bImmediately);//Offset:Discovery.exe+0x327F8B0
	void ReceivePlayShake(float Scale);//Offset:Discovery.exe+0x327F8B0
	bool ReceiveIsFinished();//Offset:Discovery.exe+0x14618B0
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);//Offset:Discovery.exe+0x327F8B0
};


// Class GameplayCameras.MatineeCameraShakePattern
// 0x0000 (0x0028 - 0x0028)
class UMatineeCameraShakePattern : public UCameraShakePattern
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.MatineeCameraShakePattern"));
		return ptr;
	}

};


// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator"));
		return ptr;
	}

};


// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.MatineeCameraShakeFunctionLibrary"));
		return ptr;
	}


	class UMatineeCameraShake* STATIC_Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);//Offset:Discovery.exe+0x29CEEA0
};


// Class GameplayCameras.PerlinNoiseCameraShakePattern
// 0x0080 (0x00B8 - 0x0038)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                              LocationAmplitudeMultiplier;                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationFrequencyMultiplier;                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPerlinNoiseShaker                          X;                                                        // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FPerlinNoiseShaker                          Y;                                                        // 0x0048(0x0008) (Edit, BlueprintVisible)
	struct FPerlinNoiseShaker                          Z;                                                        // 0x0050(0x0008) (Edit, BlueprintVisible)
	float                                              RotationAmplitudeMultiplier;                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationFrequencyMultiplier;                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPerlinNoiseShaker                          Pitch;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible)
	struct FPerlinNoiseShaker                          Yaw;                                                      // 0x0068(0x0008) (Edit, BlueprintVisible)
	struct FPerlinNoiseShaker                          Roll;                                                     // 0x0070(0x0008) (Edit, BlueprintVisible)
	struct FPerlinNoiseShaker                          FOV;                                                      // 0x0078(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.PerlinNoiseCameraShakePattern"));
		return ptr;
	}

};


// Class GameplayCameras.WaveOscillatorCameraShakePattern
// 0x00A0 (0x00D8 - 0x0038)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                              LocationAmplitudeMultiplier;                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationFrequencyMultiplier;                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWaveOscillator                             X;                                                        // 0x0040(0x000C) (Edit, BlueprintVisible)
	struct FWaveOscillator                             Y;                                                        // 0x004C(0x000C) (Edit, BlueprintVisible)
	struct FWaveOscillator                             Z;                                                        // 0x0058(0x000C) (Edit, BlueprintVisible)
	float                                              RotationAmplitudeMultiplier;                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationFrequencyMultiplier;                              // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWaveOscillator                             Pitch;                                                    // 0x006C(0x000C) (Edit, BlueprintVisible)
	struct FWaveOscillator                             Yaw;                                                      // 0x0078(0x000C) (Edit, BlueprintVisible)
	struct FWaveOscillator                             Roll;                                                     // 0x0084(0x000C) (Edit, BlueprintVisible)
	struct FWaveOscillator                             FOV;                                                      // 0x0090(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x009C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayCameras.WaveOscillatorCameraShakePattern"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
