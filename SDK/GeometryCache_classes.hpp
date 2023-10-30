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

// Class GeometryCache.GeometryCache
// 0x0048 (0x0070 - 0x0028)
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	int                                                StartFrame;                                               // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EndFrame;                                                 // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint64_t                                           Hash;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCache"));
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x02D0 - 0x02C8)
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                   // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheActor"));
		return ptr;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();//Offset:Discovery.exe+0x2D56CF0
};


// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (0x0038 - 0x0028)
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int>                                        TopologyRanges;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheCodecBase"));
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheCodecRaw
// 0x0008 (0x0040 - 0x0038)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int                                                DummyProperty;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheCodecRaw"));
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheCodecV1
// 0x0008 (0x0040 - 0x0038)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheCodecV1"));
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheComponent
// 0x0080 (0x0640 - 0x05C0)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	bool                                               bRunning;                                                 // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExtrapolateFrames;                                       // 0x05C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05C3(0x0001) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionVectorScale;                                        // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumTracks;                                                // 0x05D0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x05D4(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x05D8(0x004C) MISSED OFFSET
	float                                              Duration;                                                 // 0x0624(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bManualTick;                                              // 0x0628(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideWireframeColor;                                  // 0x0629(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x062A(0x0002) MISSED OFFSET
	struct FLinearColor                                WireframeOverrideColor;                                   // 0x062C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x063C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheComponent"));
		return ptr;
	}


	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);//Offset:Discovery.exe+0x2D573D0
	void Stop();//Offset:Discovery.exe+0x2D57CF0
	void SetWireframeOverrideColor(const struct FLinearColor& Color);//Offset:Discovery.exe+0x2D575B0
	void SetStartTimeOffset(float NewStartTimeOffset);//Offset:Discovery.exe+0x2D577E0
	void SetPlaybackSpeed(float NewPlaybackSpeed);//Offset:Discovery.exe+0x2D57A20
	void SetOverrideWireframeColor(bool bOverride);//Offset:Discovery.exe+0x2D57680
	void SetMotionVectorScale(float NewMotionVectorScale);//Offset:Discovery.exe+0x2D57950
	void SetLooping(bool bNewLooping);//Offset:Discovery.exe+0x2D57BC0
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);//Offset:Discovery.exe+0x2D578B0
	void SetExtrapolateFrames(bool bNewExtrapolating);//Offset:Discovery.exe+0x2D57AF0
	void PlayReversedFromEnd();//Offset:Discovery.exe+0x2D57D30
	void PlayReversed();//Offset:Discovery.exe+0x2D57D50
	void PlayFromStart();//Offset:Discovery.exe+0x2D57D70
	void Play();//Offset:Discovery.exe+0x2D57D90
	void Pause();//Offset:Discovery.exe+0x2D57D10
	bool IsPlayingReversed();//Offset:Discovery.exe+0x2D57C90
	bool IsPlaying();//Offset:Discovery.exe+0x2D57CC0
	bool IsLooping();//Offset:Discovery.exe+0x2D57C60
	bool IsExtrapolatingFrames();//Offset:Discovery.exe+0x2D57B90
	struct FLinearColor GetWireframeOverrideColor();//Offset:Discovery.exe+0x2D57560
	float GetStartTimeOffset();//Offset:Discovery.exe+0x2D57880
	float GetPlaybackSpeed();//Offset:Discovery.exe+0x2D57AC0
	float GetPlaybackDirection();//Offset:Discovery.exe+0x2D57780
	bool GetOverrideWireframeColor();//Offset:Discovery.exe+0x2D57650
	int GetNumberOfFrames();//Offset:Discovery.exe+0x2D57720
	float GetMotionVectorScale();//Offset:Discovery.exe+0x2D579F0
	float GetDuration();//Offset:Discovery.exe+0x2D57750
	float GetAnimationTime();//Offset:Discovery.exe+0x2D577B0
};


// Class GeometryCache.GeometryCacheTrack
// 0x0030 (0x0058 - 0x0028)
class UGeometryCacheTrack : public UObject
{
public:
	float                                              Duration;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x002C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheTrack"));
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0080 - 0x0058)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x005C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation"));
		return ptr;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);//Offset:Discovery.exe+0x2D58FA0
};


// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0080 (0x00D8 - 0x0058)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*                     Codec;                                                    // 0x0058(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0060(0x0068) MISSED OFFSET
	float                                              StartSampleTime;                                          // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00CC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheTrackStreamable"));
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x00C8 (0x0120 - 0x0058)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0058(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheTrack_TransformAnimation"));
		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);//Offset:Discovery.exe+0x2D59490
};


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x00C8 (0x0120 - 0x0058)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0058(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation"));
		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);//Offset:Discovery.exe+0x2D59490
};


// Class GeometryCache.NiagaraGeometryCacheRendererProperties
// 0x0288 (0x0358 - 0x00D0)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference>      GeometryCaches;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsLooping;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	uint32_t                                           ComponentCountLimit;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x00E8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RotationBinding;                                          // 0x0140(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0198(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ElapsedTimeBinding;                                       // 0x01F0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            EnabledBinding;                                           // 0x0248(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ArrayIndexBinding;                                        // 0x02A0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x02F8(0x0058) (Edit)
	int                                                RendererVisibility;                                       // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAssignComponentsOnParticleID;                            // 0x0354(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCache.NiagaraGeometryCacheRendererProperties"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
