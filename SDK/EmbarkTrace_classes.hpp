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

// Class EmbarkTrace.EmbarkTrace
// 0x0000 (0x0028 - 0x0028)
class UEmbarkTrace : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTrace.EmbarkTrace"));
		return ptr;
	}


	bool STATIC_QueryTraceHits(class UObject* WorldContextObject, uint64_t InTraceHandle, bool bAppendHits, TArray<struct FHitResult>* OutHits);//Offset:Discovery.exe+0x19F6790
	bool STATIC_CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, const struct FRotator& Orientation, struct FHitResult* OutHit);//Offset:Discovery.exe+0x19F7A10
	uint64_t STATIC_BatchLineTraceSingleByProfile(class UObject* WorldContextObject, TArray<struct FEmbarkTraceLineSeg> LineSegs, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);//Offset:Discovery.exe+0x19F73D0
	uint64_t STATIC_AsyncSphereTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf);//Offset:Discovery.exe+0x19F6D70
	uint64_t STATIC_AsyncLineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf);//Offset:Discovery.exe+0x19F70D0
	uint64_t STATIC_AsyncCapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FRotator& Orientation, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf);//Offset:Discovery.exe+0x19F6930
	bool STATIC_ActorLineTraceSingle(class AActor* AgainstActor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* OutHit);//Offset:Discovery.exe+0x19F76D0
};


// Class EmbarkTrace.EmbarkRayQueryBuffer
// 0x00A0 (0x00C8 - 0x0028)
class UEmbarkRayQueryBuffer : public UObject
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Start;                                                    // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             End;                                                      // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FRayHitSimple>                       Hits;                                                     // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // 0x0080(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FLinearColor                                TraceColor;                                               // 0x0084(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // 0x0094(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DrawTime;                                                 // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTrace.EmbarkRayQueryBuffer"));
		return ptr;
	}


	void Tick(float DeltaTime);//Offset:Discovery.exe+0x19F87B0
	void SetNum(int Size);//Offset:Discovery.exe+0x19F88F0
	bool HasCompleted();//Offset:Discovery.exe+0x19F8780
	void Execute(int FrameDelay);//Offset:Discovery.exe+0x19F8850
};


// Class EmbarkTrace.EmbarkGridQueryBuffer
// 0x0308 (0x0330 - 0x0028)
class UEmbarkGridQueryBuffer : public UObject
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       TraceProfile;                                             // 0x0034(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x003C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	struct FLinearColor                                TraceColor;                                               // 0x0054(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // 0x0064(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DrawTime;                                                 // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBilinearFilter;                                       // 0x0078(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                MaximumRaysPerTick;                                       // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RaysPerTick;                                              // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAdaptiveRayCount;                                     // 0x0084(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                AdaptiveGrowth;                                           // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AdaptiveDecay;                                            // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlushFrequency;                                           // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CacheMissCount;                                           // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVisualizeGrid;                                           // 0x0098(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                RayCount;                                                 // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x290];                                     // 0x00A0(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTrace.EmbarkGridQueryBuffer"));
		return ptr;
	}


	void Update(const struct FVector& Location, float Orientation, const struct FVector& LinearVelocity);//Offset:Discovery.exe+0x19F90D0
	void Tick(float DeltaTime);//Offset:Discovery.exe+0x19F8F60
	void SetSize(int SamplePointsX, int SamplePointsY, float InternalResolutionRatio, float Width, float RayLength, float CacheScale);//Offset:Discovery.exe+0x19F9210
	void SampleToBuffer();//Offset:Discovery.exe+0x19F90B0
	struct FIntPoint ProjectToSampledGrid(const struct FVector& Location);//Offset:Discovery.exe+0x19F9430
	int GetSamplePointsY();//Offset:Discovery.exe+0x19F99A0
	int GetSamplePointsX();//Offset:Discovery.exe+0x19F99D0
	float GetSampleCellSize();//Offset:Discovery.exe+0x19F9940
	TArray<struct FRayHitSimple> GetResults();//Offset:Discovery.exe+0x19F9850
	void GetCurrentSamplingLocations(struct FVector* Origin, struct FVector* StepSide, struct FVector* StepRow);//Offset:Discovery.exe+0x19F8E10
	float GetCurrentOrientation();//Offset:Discovery.exe+0x19F98E0
	struct FVector GetCurrentLocation();//Offset:Discovery.exe+0x19F9910
	float GetCellSize();//Offset:Discovery.exe+0x19F9970
	bool GetAverageHeightsAboveGrid(TArray<struct FVector> DesiredPoints, TArray<float> QueryRadii, bool bAverageNormals, bool bVisualize, TArray<float>* OutHeights, TArray<TEnumAsByte<EQueryResult>>* Status, TArray<struct FVector>* OutNormals);//Offset:Discovery.exe+0x19F94F0
	void CustomSampleToBuffer(TArray<struct FVector> SamplePoints);//Offset:Discovery.exe+0x19F9000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
