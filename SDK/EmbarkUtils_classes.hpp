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

// Class EmbarkUtils.EmbarkClassUtilsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkClassUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkClassUtilsFunctionLibrary"));
		return ptr;
	}


	TArray<class UClass*> STATIC_GetSubclassesOf(class UClass* ParentClass);//Offset:Discovery.exe+0x1BE3CD0
};


// Class EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkConsoleCommandMacroFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary"));
		return ptr;
	}


	TArray<struct FString> STATIC_StopRecordingMacro(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1BE41A0
	void STATIC_StartRecordingMacro(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1BE42E0
	void STATIC_PlayMacro(class UObject* WorldContextObject, TArray<struct FString> Commands, class APlayerController* SpecificPlayer);//Offset:Discovery.exe+0x1BE4020
};


// Class EmbarkUtils.EmbarkDebugUtilsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkDebugUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkDebugUtilsFunctionLibrary"));
		return ptr;
	}


	void STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float DrawTime, float Thickness, const struct FLinearColor& Color);//Offset:Discovery.exe+0x1BE46F0
	void STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float DrawTime, float Thickness, const struct FLinearColor& Color);//Offset:Discovery.exe+0x1BE46F0
};


// Class EmbarkUtils.EmbarkOctreeDataHandleMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkOctreeDataHandleMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkOctreeDataHandleMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(struct FEmbarkOctreeDataHandle* Handle);//Offset:Discovery.exe+0x1BE4E20
};


// Class EmbarkUtils.EmbarkGenericOctreeMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkGenericOctreeMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkGenericOctreeMixinLibrary"));
		return ptr;
	}


	void STATIC_UpdateNode(const struct FEmbarkOctreeDataHandle& ID, const struct FBoxSphereBounds& NewBounds, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE6190
	void STATIC_RemoveNode(const struct FEmbarkOctreeDataHandle& ID, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE6000
	bool STATIC_IsInitialized(struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE6400
	void STATIC_Initialize(const struct FBox& Bounds, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE6520
	void STATIC_FindNearbyElements(const struct FVector& Position, const struct FScriptDelegate& IterateBoundsFunc, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE5330
	void STATIC_FindFirstElementWithBoundsTest(const struct FBox& BoxBounds, const struct FScriptDelegate& IterateBoundsFunc, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE5630
	void STATIC_FindElementsWithBoundsTest(const struct FBox& BoxBounds, const struct FScriptDelegate& IterateBoundsFunc, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE5990
	TArray<struct FEmbarkOctreeDataHandle> STATIC_FindElements(const struct FBox& BoxBounds, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE5CD0
	void STATIC_DebugDrawOctree(class UWorld* World, struct FEmbarkGenericOctree* Octree);//Offset:Discovery.exe+0x1BE51B0
};


// Class EmbarkUtils.FMathUtilsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFMathUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.FMathUtilsFunctionLibrary"));
		return ptr;
	}


	bool STATIC_TraceBallisticPath(class UObject* WorldContextObject, const struct FEmbarkBallisticTraceInput& InputData, TArray<struct FVector>* OutTracedPath, struct FHitResult* OutHitResult);//Offset:Discovery.exe+0x1BE7750
	float STATIC_SampleProbabilityDensityFunction(class UCurveFloat* ProbabilityDensityFunction, int NumberOfSamples);//Offset:Discovery.exe+0x1BE8430
	struct FVector STATIC_ProjectVectorOnPlane(const struct FVector& Vec, const struct FVector& GroundNormal, const struct FVector& UpVector);//Offset:Discovery.exe+0x1BE7200
	void STATIC_ProjectOrientedBox(const struct FOrientedBox& Box, const struct FVector& ProjectionAxis, float* Min, float* Max);//Offset:Discovery.exe+0x1BE7530
	void STATIC_PredictBallistics_SpeedToDirection_Simple(const struct FEmbarkBallisticPredictionInput& InputData, struct FEmbarkBallisticPredictionOutput* OutputData);//Offset:Discovery.exe+0x1BE7D50
	bool STATIC_PredictBallistics_SpeedToDirection_Complex(const struct FEmbarkBallisticPredictionInput& InputData, TArray<struct FEmbarkBallisticPredictionOutput>* Results);//Offset:Discovery.exe+0x1BE7A70
	bool STATIC_PredictBallistics_SpeedToDirection_Basic(const struct FEmbarkBallisticPredictionInput& InputData, TArray<struct FEmbarkBallisticPredictionOutput>* Results);//Offset:Discovery.exe+0x1BE7BE0
	double STATIC_MinimumJerkTrajectory(double TargetValue, double TargetSpeed, double TargetAcc, double TimeLeft, double DeltaTime, double* CurrentValue, double* CurrentSpeed, double* CurrentAcc);//Offset:Discovery.exe+0x1BE88A0
	bool STATIC_LineLineIntersect(const struct FVector2D& L1Start, const struct FVector2D& L1End, const struct FVector2D& L2Start, const struct FVector2D& L2End, double Tolerance, struct FVector2D* OutIntersect);//Offset:Discovery.exe+0x1BE8510
	struct FVector STATIC_GetLinearVelocityAtPoint(const struct FVector& SpaceLoc, const struct FVector& SpaceLinVel, const struct FVector& SpaceAngVel, const struct FVector& Point);//Offset:Discovery.exe+0x1BE7360
	void STATIC_GetClosestPointsBetweenSegmentedLines(const struct FVector& Start1, const struct FVector& End1, const struct FVector& Start2, const struct FVector& End2, struct FVector* OutPoint1, struct FVector* OutPoint2);//Offset:Discovery.exe+0x1BE7ED0
	struct FVector STATIC_GetClosestPointInList(TArray<struct FVector> PointList, const struct FVector& Point);//Offset:Discovery.exe+0x1BE8130
	float STATIC_FastSin3(float X);//Offset:Discovery.exe+0x1BE8250
	float STATIC_FastSin2(float X);//Offset:Discovery.exe+0x1BE82F0
	float STATIC_FastSin(float X);//Offset:Discovery.exe+0x1BE8390
	int STATIC_CalculateWindingNumber2D(TArray<struct FVector> Polygon, const struct FVector& Point);//Offset:Discovery.exe+0x1BE70F0
	float STATIC_AlphaToBlendOption(float InAlpha, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomCurve);//Offset:Discovery.exe+0x1BE8770
};


// Class EmbarkUtils.EmbarkMeshMergeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkMeshMergeFunctionLibrary"));
		return ptr;
	}


	class USkeletalMesh* STATIC_MergeMeshes(class USkeleton* Skeleton, class USkeletalMesh* RootMesh, TArray<class USkeletalMesh*> MeshesToMerge, TArray<struct FEmbarkAttachedStaticMeshDesc> AttachedStaticMeshes, TArray<struct FName> MorphTargetsToMerge, int MaxNumLODsToMerge, bool bWaitUntilComplete, class UObject* CallbackObject, const struct FName& CallbackFunction, int CallbackUserData);//Offset:Discovery.exe+0x1BE9A60
	class USkeletalMesh* STATIC_MergeAttachedStaticMeshes(class USkeletalMesh* RootMesh, TArray<struct FEmbarkAttachedStaticMeshDesc> AttachedStaticMeshes, TArray<struct FName> MorphTargetsToMerge, int MaxNumLODsToMerge, bool bWaitUntilComplete, class UObject* CallbackObject, const struct FName& CallbackFunction, int CallbackUserData);//Offset:Discovery.exe+0x1BE9740
};


// Class EmbarkUtils.EmbarkPawnComponent
// 0x0028 (0x00E0 - 0x00B8)
class UEmbarkPawnComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPawnPossessed;                                          // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnUnPossessed;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldDelegatePossessToBeginPlay;                        // 0x00D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkPawnComponent"));
		return ptr;
	}


	void ReceiveOnUnpossessedBy(class AController* UnpossessedBy);//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnPossessedBy(class AController* PossessedBy);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkUtils.EmbarkPerformanceRecorderComponent
// 0x0050 (0x0108 - 0x00B8)
class UEmbarkPerformanceRecorderComponent : public UActorComponent
{
public:
	bool                                               bAutoStart;                                               // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              TargetFrameRate;                                          // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint64_t                                           RollingWindowSize;                                        // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint64_t                                           FrameCountHint;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              FrameTimeData;                                            // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<unsigned char>                              TotalSaturatedConnectionsData;                            // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                FirstFrame;                                               // 0x00F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                RollingBadFrames;                                         // 0x00F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TotalBadFrames;                                           // 0x00F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00FC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkPerformanceRecorderComponent"));
		return ptr;
	}


	void StopRecording();//Offset:Discovery.exe+0x1BEA420
	void StartRecording();//Offset:Discovery.exe+0x1BEA440
	void SendServerPerformanceTelemetryEvent();//Offset:Discovery.exe+0x1BEA400
};


// Class EmbarkUtils.EmbarkPhysicsUtil
// 0x0000 (0x0028 - 0x0028)
class UEmbarkPhysicsUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkPhysicsUtil"));
		return ptr;
	}


	void STATIC_SetBodyTransform(const struct FTransform& NewTransform, enum class ETeleportType Teleport, bool bAutoWake, struct FBodyInstance* Instance);//Offset:Discovery.exe+0x1BEDBE0
	bool STATIC_IsInstanceSimulating(class UPrimitiveComponent* Component, const struct FName& BoneName);//Offset:Discovery.exe+0x1BED860
	bool STATIC_IsInScene(struct FBodyInstance* Body);//Offset:Discovery.exe+0x1BEDB20
	class UPrimitiveComponent* STATIC_GetSimulatingParent(class USceneComponent* SceneComponent, const struct FName& BoneName);//Offset:Discovery.exe+0x1BED940
	struct FTransform STATIC_GetKinematicTarget(struct FBodyInstance* Body);//Offset:Discovery.exe+0x1BEDA20
	float STATIC_GetBodyInstanceMass(class UPrimitiveComponent* PrimitiveComponent, const struct FName& BoneName);//Offset:Discovery.exe+0x1BED770
	TArray<struct FOverlapResult> STATIC_EnhancedSphereOverlap(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore);//Offset:Discovery.exe+0x1BED480
	TArray<struct FOverlapResult> STATIC_EnhancedBoxOverlap(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FRotator& BoxRotation, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore);//Offset:Discovery.exe+0x1BED100
};


// Class EmbarkUtils.RootMotionAnimMatchingUtils
// 0x0000 (0x0028 - 0x0028)
class URootMotionAnimMatchingUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.RootMotionAnimMatchingUtils"));
		return ptr;
	}


	float STATIC_GetTimeAtClosestPoint(TArray<struct FRootMotionAnimMatching_PointAtTime> PointAtTimes, const struct FVector3f& Point, float MaxTimeToQuery);//Offset:Discovery.exe+0x1BEE580
};


// Class EmbarkUtils.EmbarkRootMotionUtils
// 0x0000 (0x0028 - 0x0028)
class UEmbarkRootMotionUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkRootMotionUtils"));
		return ptr;
	}


	struct FWarpCurvesValue STATIC_GetWarpCurvesFromSeqAtTime(class UAnimSequence* Sequence, float Time, const struct FWarpCurvesDefinition& WarpCurveDefinitions, const struct FWarpCurvesValue& ValuesIfCurvesDoNotExists);//Offset:Discovery.exe+0x1BEEAE0
	struct FTransform STATIC_GetInterpolatedWarpWorldTransform(const struct FTransform& AuxRootTransform, const struct FWarpCurvesValue& WarpCurves, const struct FTransform& WarpTargetWorldTransform, const struct FTransform& WarpStartTransform, float CapsuleHeight);//Offset:Discovery.exe+0x1BEECA0
	void STATIC_AdjustWarpCurvesForPhasedEntry(float CurrentClipTime, float StartTimeOffset, float RateScale, struct FWarpCurvesValue* OutWarpCurves);//Offset:Discovery.exe+0x1BEE960
};


// Class EmbarkUtils.EmbarkUtils
// 0x0000 (0x0028 - 0x0028)
class UEmbarkUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkUtils"));
		return ptr;
	}


	void STATIC_UnbindOnReceiveEmbarkPlayerController(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BEF990
	bool STATIC_TeleportActor(class AActor* Actor, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIsATest, bool bNoCheck);//Offset:Discovery.exe+0x1BF5900
	int STATIC_StringToEnumIdx(const struct FString& EnumName, const struct FString& Value);//Offset:Discovery.exe+0x1BF8500
	float STATIC_StopPerfTimer(struct FPerfTimerData* Data);//Offset:Discovery.exe+0x1BF0D10
	void STATIC_StartPerfTimer(struct FPerfTimerData* Data);//Offset:Discovery.exe+0x1BF0DC0
	bool STATIC_SphereOverlapByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> ActorsToIgnore, TArray<struct FOverlapResult>* OutOverlaps);//Offset:Discovery.exe+0x1BF7580
	void STATIC_SortLocationsByDistance2D(const struct FVector& Origin, TArray<struct FVector> Locations, TArray<int>* OutIndices);//Offset:Discovery.exe+0x1BF2630
	void STATIC_SortLocationsByDistance(const struct FVector& Origin, TArray<struct FVector> Locations, TArray<int>* OutIndices);//Offset:Discovery.exe+0x1BF27B0
	void STATIC_SortActorsByDistance(const struct FVector& Location, TArray<class AActor*>* Actors);//Offset:Discovery.exe+0x1BF2B60
	void STATIC_SimulateTicksOnActorComponent(class UActorComponent* ActorComponent, float TotalTime, float TimeStepTarget);//Offset:Discovery.exe+0x1BF5AE0
	void STATIC_SimulateTicksOnActor(class AActor* Actor, float TotalTime, float TimeStepTarget);//Offset:Discovery.exe+0x1BF5C10
	void STATIC_SimulateMouseRMBUp();//Offset:Discovery.exe+0x1BF0940
	void STATIC_SimulateMouseRMBDown();//Offset:Discovery.exe+0x1BF0960
	void STATIC_SimulateMouseMoved(int X, int Y, bool bActuallyMoveCursor);//Offset:Discovery.exe+0x1BF0810
	void STATIC_SimulateMouseLMBUp();//Offset:Discovery.exe+0x1BF0980
	void STATIC_SimulateMouseLMBDown();//Offset:Discovery.exe+0x1BF09A0
	void STATIC_SimulateMouseClick(const struct FKey& MouseButton, TEnumAsByte<EInputEvent> InputEvent);//Offset:Discovery.exe+0x1BF09C0
	void STATIC_SimulateKeyInput(const struct FKey& Key, TEnumAsByte<EInputEvent> InputEvent);//Offset:Discovery.exe+0x1BF0AE0
	void STATIC_SetVectorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FVector& Value);//Offset:Discovery.exe+0x1BF45D0
	void STATIC_SetTransformPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FTransform& Value);//Offset:Discovery.exe+0x1BF4070
	struct FTimerHandle STATIC_SetTimerDelegateForNextTickByFunctionName(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BF0650
	struct FTimerHandle STATIC_SetTimerDelegateForNextTick(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x1BF0740
	struct FTimerHandle STATIC_SetTimer(class UObject* Object, const struct FName& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);//Offset:Discovery.exe+0x1BEFEF0
	void STATIC_SetTickOrderForComponent(class UActorComponent* ActorComponent, uint64_t TickOrder);//Offset:Discovery.exe+0x1BEFC90
	void STATIC_SetTextPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FText& Value);//Offset:Discovery.exe+0x1BF4710
	void STATIC_SetStringPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FString& Value);//Offset:Discovery.exe+0x1BF4880
	void STATIC_SetSoftObjectPropertyByName(class UObject* Object, const struct FString& PropertyName);//Offset:Discovery.exe+0x1BF4B40
	void STATIC_SetSoftClassPropertyByName(class UObject* Object, const struct FString& PropertyName);//Offset:Discovery.exe+0x1BF49C0
	void STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FRotator& Value);//Offset:Discovery.exe+0x1BF4490
	void STATIC_SetObjectPropertyByName(class UObject* Object, const struct FString& PropertyName, class UObject* Value);//Offset:Discovery.exe+0x1BF4F40
	void STATIC_SetNamePropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FName& Value);//Offset:Discovery.exe+0x1BF4CC0
	void STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FLinearColor& Value);//Offset:Discovery.exe+0x1BF4350
	void STATIC_SetIntPropertyByName(class UObject* Object, const struct FString& PropertyName, int Value);//Offset:Discovery.exe+0x1BF5570
	void STATIC_SetInt64PropertyByName(class UObject* Object, const struct FString& PropertyName, int64_t Value);//Offset:Discovery.exe+0x1BF5430
	void STATIC_SetHighTickPrioForComponent(class UActorComponent* ActorComponent);//Offset:Discovery.exe+0x1BEFD80
	void STATIC_SetGameplayTagPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FGameplayTag& Value);//Offset:Discovery.exe+0x1BF3F30
	void STATIC_SetFloatPropertyByName(class UObject* Object, const struct FString& PropertyName, double Value);//Offset:Discovery.exe+0x1BF51C0
	void STATIC_SetColorPropertyByName(class UObject* Object, const struct FString& PropertyName, const struct FColor& Value);//Offset:Discovery.exe+0x1BF4210
	void STATIC_SetClassPropertyByName(class UObject* Object, const struct FString& PropertyName, class UClass* Value);//Offset:Discovery.exe+0x1BF4E00
	void STATIC_SetBytePropertyByName(class UObject* Object, const struct FString& PropertyName, unsigned char Value);//Offset:Discovery.exe+0x1BF5300
	void STATIC_SetBoolPropertyByName(class UObject* Object, const struct FString& PropertyName, bool Value);//Offset:Discovery.exe+0x1BF5080
	bool STATIC_SegmentCapsuleOverlapActors(class UObject* WorldContextObject, const struct FVector& CapsuleStart, const struct FVector& CapsuleEnd, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);//Offset:Discovery.exe+0x1BF7800
	void STATIC_SaveDeveloperStringSetting(const struct FString& SectionName, const struct FString& SettingsKey, const struct FString& Setting);//Offset:Discovery.exe+0x1BFB060
	void STATIC_SaveDeveloperIntSetting(const struct FString& SectionName, const struct FString& SettingsKey, int Setting);//Offset:Discovery.exe+0x1BFAC90
	void STATIC_SaveDeveloperFloatSetting(const struct FString& SectionName, const struct FString& SettingsKey, float Setting);//Offset:Discovery.exe+0x1BFAE70
	bool STATIC_SaveAutoExec(const struct FString& NewAutoExec);//Offset:Discovery.exe+0x1BFABA0
	class UClass* STATIC_ResolveClassFromString(const struct FString& ClassPath);//Offset:Discovery.exe+0x1BF9480
	bool STATIC_ResetObjectPropertyToCDO(class UObject* Object, const struct FString& PropertyName);//Offset:Discovery.exe+0x1BF3180
	bool STATIC_ResetObjectPropertiesToCDO(class UObject* Object);//Offset:Discovery.exe+0x1BF3270
	struct FString STATIC_RemoveWorldPIEPrefix(const struct FString& WorldPackagePath);//Offset:Discovery.exe+0x1BF9CC0
	void STATIC_RemoveSCSNodeFromBlueprint(class UClass* Class, class UActorComponent* RemoveNodeMatchingThisComponentTemplate);//Offset:Discovery.exe+0x1BF8B90
	void STATIC_ReinitSkeletalMeshComponentAnim(class USkeletalMeshComponent* SkeletalMeshComponent);//Offset:Discovery.exe+0x1BEF490
	void STATIC_ReinitializeProperties(class UObject* Source, class UObject* Target);//Offset:Discovery.exe+0x1BEF540
	void STATIC_RegisterComponent(class UActorComponent* ComponentToRegister);//Offset:Discovery.exe+0x1BF5D40
	void STATIC_OverrideClientRate(class UWorld* World, int MaxClientRate, int MaxInternetClientRate);//Offset:Discovery.exe+0x1BF2500
	struct FName STATIC_MakeUniqueObjectName(class UObject* Parent, class UClass* Class, const struct FName& InBaseName);//Offset:Discovery.exe+0x1BF2D60
	float STATIC_LoadFloatConsoleVariable(const struct FString& ConsoleVariableName);//Offset:Discovery.exe+0x1BF8270
	bool STATIC_LoadEngineStringSetting(const struct FString& SectionName, const struct FString& SettingsKey, struct FString* OutSetting);//Offset:Discovery.exe+0x1BF9FA0
	bool STATIC_LoadDeveloperStringSetting(const struct FString& SectionName, const struct FString& SettingsKey, struct FString* OutSetting);//Offset:Discovery.exe+0x1BFA9A0
	bool STATIC_LoadDeveloperSection(const struct FString& SectionName, TArray<struct FString>* OutSectionContents);//Offset:Discovery.exe+0x1BFA420
	bool STATIC_LoadDeveloperIntSetting(const struct FString& SectionName, const struct FString& SettingsKey, int* OutSetting);//Offset:Discovery.exe+0x1BFA5C0
	bool STATIC_LoadDeveloperFloatSetting(const struct FString& SectionName, const struct FString& SettingsKey, float* OutSetting);//Offset:Discovery.exe+0x1BFA7B0
	class UClass* STATIC_LoadClassFromString(const struct FString& ClassPath);//Offset:Discovery.exe+0x1BF9570
	bool STATIC_LoadAutoExec(TArray<struct FString>* Commands);//Offset:Discovery.exe+0x1BFA330
	void STATIC_LoadAssetsAsync(TArray<struct FSoftObjectPath> ObjectPaths, class UObject* CallbackObject, const struct FName& CallbackMethodName);//Offset:Discovery.exe+0x1BF9010
	void STATIC_LoadAssetAsync(const struct FSoftObjectPath& ObjectPath, class UObject* CallbackObject, const struct FName& CallbackMethodName);//Offset:Discovery.exe+0x1BF9240
	bool STATIC_LineTraceSingleBatched(class UObject* WorldContextObject, TArray<struct FVector> Start, TArray<struct FVector> End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);//Offset:Discovery.exe+0x1BF6370
	bool STATIC_IsWorldDistanceDependentSubLevel(class UWorld* PersistentWorld, const struct FName& SubLevelPackageName);//Offset:Discovery.exe+0x1BF9760
	bool STATIC_IsUnattended();//Offset:Discovery.exe+0x1BF0C00
	bool STATIC_IsStreamingLevelPending(class ULevelStreaming* LevelStreaming);//Offset:Discovery.exe+0x1BF9840
	bool STATIC_IsStaticJITTranspiledCodeLoaded();//Offset:Discovery.exe+0x1BF9730
	bool STATIC_IsRepGraphNetRelevant(class APawn* Pawn, class AActor* ActorToCheck, bool bIncludeDormant);//Offset:Discovery.exe+0x1BF0120
	bool STATIC_IsPropertyIdentical(class UObject* ObjA, const struct FString& PropertyNameA, class UObject* ObjB, const struct FString& PropertyNameB);//Offset:Discovery.exe+0x1BF3310
	bool STATIC_IsLevelInstanceLoaded(class ALevelInstance* LevelInstance);//Offset:Discovery.exe+0x1BF9C20
	bool STATIC_IsAutoplay();//Offset:Discovery.exe+0x1BF0CE0
	bool STATIC_IsAnonymousUser();//Offset:Discovery.exe+0x1BF0C30
	TMap<struct FVector, struct FColor> STATIC_GetVertexColorData(class USkeletalMesh* SkeletalMesh, uint32_t PaintingMeshLODIndex);//Offset:Discovery.exe+0x1BEF640
	int STATIC_GetUniqueId(class UObject* QueryObject);//Offset:Discovery.exe+0x1BF8990
	struct FText STATIC_GetTextPropertyByName(class UObject* Object, const struct FString& PropertyName);//Offset:Discovery.exe+0x1BF3DF0
	bool STATIC_GetSocketRelativeTransform(class UStaticMeshComponent* StaticMeshComponent, const struct FName& InSocketName, struct FTransform* OutRelativeTransform);//Offset:Discovery.exe+0x1BF60A0
	struct FTransform STATIC_GetSkeletalMeshRefPoseTransform(class USkeletalMesh* SkeletalMesh, const struct FName& BoneName);//Offset:Discovery.exe+0x1BF2000
	float STATIC_GetServerTimestampAccurate(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1BF6A70
	bool STATIC_GetServerTimestamp(float* OutServerTime);//Offset:Discovery.exe+0x1BF6B10
	class USCS_Node* STATIC_GetSCSNodeFromCDOComponent(class UClass* BPClass, class USceneComponent* CDOComponent);//Offset:Discovery.exe+0x1BF8D50
	struct FString STATIC_GetSanitizedComponentTemplateNameByObject(class UObject* ComponentTemplateObject);//Offset:Discovery.exe+0x1BF80C0
	struct FString STATIC_GetSanitizedComponentTemplateName(const struct FString& ComponentTemplateName);//Offset:Discovery.exe+0x1BF8190
	bool STATIC_GetPropertyValueAsString(class UObject* Obj, const struct FString& PropertyName, struct FString* OutPropertyValue);//Offset:Discovery.exe+0x1BF3920
	bool STATIC_GetPropertyTypeNameAsString(class UObject* Obj, const struct FString& PropertyName, struct FString* OutPropertyTypeName);//Offset:Discovery.exe+0x1BF56B0
	enum class EEmbarkPropertyTypes STATIC_GetPropertyType(class UObject* Obj, const struct FString& PropertyName);//Offset:Discovery.exe+0x1BF5810
	class APlayerController* STATIC_GetPlayerControllerInWorld(class UObject* WorldContextObject, uint64_t PlayerIndex);//Offset:Discovery.exe+0x1BEF8A0
	struct FString STATIC_GetPlatformUserName(bool bOnlyAlphaNumeric);//Offset:Discovery.exe+0x1BF9DA0
	int64_t STATIC_GetPlatformTimeMSTwoDecimals();//Offset:Discovery.exe+0x1BEFE20
	TEnumAsByte<EPhysicalSurface> STATIC_GetPhysicalSurfaceFromName(const struct FName& SurfaceName);//Offset:Discovery.exe+0x1BF6FE0
	class USceneComponent* STATIC_GetParentForCDOComponent(class UClass* BPClass, class USceneComponent* CDOComponent);//Offset:Discovery.exe+0x1BF8C70
	float STATIC_GetOutgoingPacketLossAverage(class APawn* Pawn);//Offset:Discovery.exe+0x1BF0510
	class UObject* STATIC_GetObjectFromNetGUID(class UObject* WorldContextObject, int NetGUID);//Offset:Discovery.exe+0x1BF0250
	TArray<struct FVector2D> STATIC_GetNotifyStateStartAndEndTimes(class UAnimSequence* Seq, class UClass* Type);//Offset:Discovery.exe+0x1BF0F90
	TArray<struct FVector2D> STATIC_GetNotifyStartAndEndTimeFromName(class UAnimSequence* Seq, const struct FName& Name);//Offset:Discovery.exe+0x1BF0E70
	int STATIC_GetNetGUIDForObject(class UObject* Object);//Offset:Discovery.exe+0x1BF0330
	struct FName STATIC_GetNameOfPhysicalSurface(TEnumAsByte<EPhysicalSurface> SurfaceType);//Offset:Discovery.exe+0x1BF7080
	bool STATIC_GetLookAtInfo(class APlayerController* PlayerController, float MaxDistance, struct FHitResult* OutLookAtInfo);//Offset:Discovery.exe+0x1BF7B20
	bool STATIC_GetLookAt(class APlayerController* PlayerController, struct FVector* OutLocation, struct FVector* OutDirection);//Offset:Discovery.exe+0x1BF7D40
	struct FString STATIC_GetLogTimestampFormat();//Offset:Discovery.exe+0x1BF69F0
	int STATIC_GetInvalidId();//Offset:Discovery.exe+0x1BF8A30
	void STATIC_GetInheritenceList(class UClass* StartingType, class UClass* TerminationType, TArray<class UClass*>* ClassInheritenceList);//Offset:Discovery.exe+0x1BF7F80
	float STATIC_GetIncomingPacketLossAverage(class APawn* Pawn);//Offset:Discovery.exe+0x1BF05B0
	int STATIC_GetEnumValueByIndex(const struct FString& EnumName, int Index);//Offset:Discovery.exe+0x1BF8360
	int STATIC_GetEnumCount(const struct FString& EnumName);//Offset:Discovery.exe+0x1BF8450
	float STATIC_GetConnectionJitter(class APawn* Pawn);//Offset:Discovery.exe+0x1BF0470
	TArray<class UActorComponent*> STATIC_GetComponentsByClassFromCDO(class UClass* ActorClass, class UClass* ComponentClass);//Offset:Discovery.exe+0x1BF6DE0
	void STATIC_GetClosestBoxActorsToWorldLocation(int ResultCount, float MaxDistanceToCenter, const struct FVector& WorldLocation, TArray<class AActor*> InBoxes, TArray<class AActor*>* OutBoxes);//Offset:Discovery.exe+0x1BF2930
	void STATIC_GetClientRate(class UWorld* World, int* MaxClientRate, int* MaxInternetClientRate);//Offset:Discovery.exe+0x1BF23C0
	struct FString STATIC_GetClassPath(class UClass* ClassToGetPathFrom);//Offset:Discovery.exe+0x1BF9660
	void STATIC_GetCDOComponentsForClass(class UClass* ActorClass, TArray<class UActorComponent*>* OutCDOComponents);//Offset:Discovery.exe+0x1BF8E30
	class UActorComponent* STATIC_GetCDOComponentFromClass(class UClass* ActorClass, class UClass* ComponentCDOClass);//Offset:Discovery.exe+0x1BF8F30
	int STATIC_GetBuildCL();//Offset:Discovery.exe+0x1BF9E70
	void STATIC_GetBlueprintInheritanceList(class UClass* StartingType, TArray<class UClass*>* ClassInheritanceList);//Offset:Discovery.exe+0x1BF7E80
	class UClass* STATIC_GetBlueprintGeneratedClass(class UBlueprint* Blueprint);//Offset:Discovery.exe+0x1BF93E0
	float STATIC_GetAverageFrameTime(class APawn* Pawn);//Offset:Discovery.exe+0x1BF03D0
	bool STATIC_GetAnimSequenceModelSpaceBoneTransformFromNameAtTime(class UAnimSequence* Seq, const struct FName& BoneName, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out);//Offset:Discovery.exe+0x1BF1940
	bool STATIC_GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime(class UAnimSequence* Seq, int BoneIndex, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out);//Offset:Discovery.exe+0x1BF1700
	bool STATIC_GetAnimSequenceBoneTransformFromNameAtTime(class UAnimSequence* Seq, const struct FName& BoneName, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out);//Offset:Discovery.exe+0x1BF1DC0
	bool STATIC_GetAnimSequenceBoneTransformFromIndexAtTime(class UAnimSequence* Seq, int BoneIndex, float Time, bool bApplyAdditiveAnimation, struct FTransform* Out);//Offset:Discovery.exe+0x1BF1B80
	void STATIC_GetAnimSequenceBoneTransform(class UAnimSequence* Seq, int TrackIndex, float Time, struct FTransform* Out);//Offset:Discovery.exe+0x1BF1520
	bool STATIC_GetAnimationSequenceCurveValueFromUIDAtTime(class UAnimSequence* Seq, uint16_t CurveUID, float Time, float* Out);//Offset:Discovery.exe+0x1BF1250
	bool STATIC_GetAnimationSequenceCurveValueFromNameAtTime(class UAnimSequence* Seq, const struct FName& CurveName, float Time, float* Out);//Offset:Discovery.exe+0x1BF10C0
	bool STATIC_GetAnimationSequenceCurveUIDFromName(class UAnimSequence* Seq, const struct FName& CurveName, uint16_t* OutUID);//Offset:Discovery.exe+0x1BF13E0
	TArray<class ULevelStreaming*> STATIC_GetAllSublevelsToLoadOnClient(class UWorld* PersistentWorld);//Offset:Discovery.exe+0x1BF9B50
	TArray<struct FName> STATIC_GetAllStreamingLevelsAssetPackageNames(class UWorld* PersistentWorld);//Offset:Discovery.exe+0x1BF98E0
	TArray<class ULevelStreaming*> STATIC_GetAllStreamingLevels(class UWorld* PersistentWorld);//Offset:Discovery.exe+0x1BF99B0
	void STATIC_GetAllSoftObjectPaths(class UObject* Object, bool bRecursivelySearchSubObjects, TArray<class UClass*> IgnoreSubObjectsOfClass, TArray<struct FSoftObjectPath>* OutPaths);//Offset:Discovery.exe+0x1BF3730
	void STATIC_GetAllPropertyNames(class UObject* Obj, bool bRecursivelyFindProperties, bool bOnlyBlueprintVisible, bool bDotSyntaxForNestedProperties, bool bIncludeEditorProperties, TArray<struct FString>* OutNames);//Offset:Discovery.exe+0x1BF34B0
	TArray<class ALevelInstance*> STATIC_GetAllLevelInstancesToLoadOnClient(class UWorld* PersistentWorld);//Offset:Discovery.exe+0x1BF9A80
	void STATIC_GetAllAttachedActors(class AActor* Actor, TArray<class AActor*>* OutAttachedActors);//Offset:Discovery.exe+0x1BF2C60
	bool STATIC_GetActorRelativeTransform(class USceneComponent* SceneComponent, struct FTransform* OutTransform);//Offset:Discovery.exe+0x1BF6230
	void STATIC_ForceUpdateOverlaps(class AActor* Actor, bool bNotify);//Offset:Discovery.exe+0x1BF7120
	struct FString STATIC_EnumValueToString(const struct FString& EnumName, int64_t Value);//Offset:Discovery.exe+0x1BF8600
	struct FString STATIC_EnumToString(const struct FString& EnumName, int Value);//Offset:Discovery.exe+0x1BF8860
	struct FString STATIC_EnumIndexToString(const struct FString& EnumName, int Index);//Offset:Discovery.exe+0x1BF8730
	bool STATIC_DoesPropertyExist(class UObject* Obj, const struct FString& PropertyName);//Offset:Discovery.exe+0x1BF3D00
	bool STATIC_DoesFunctionExist(class UObject* Obj, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BF30A0
	bool STATIC_DestroyController(class AController* Controller);//Offset:Discovery.exe+0x1BF6950
	void STATIC_DeleteDeveloperSetting(const struct FString& SectionName, const struct FString& SettingsKey);//Offset:Discovery.exe+0x1BFA1A0
	TArray<class UObject*> STATIC_DebugGetAllObjectsOfClass(class UClass* Class, bool bIncludeDerivedClasses);//Offset:Discovery.exe+0x1BF2EA0
	class UActorComponent* STATIC_CreateComponentOfType(class AActor* Owner, class UClass* ComponentType, bool bForceDisableReplication, TEnumAsByte<EComponentMobility> Opt_SceneComponentMobility, class USceneComponent* Opt_SceneComponentParent, const struct FName& Opt_SceneComponentAttachSocket, bool bCallRegisterComponent, bool bSetNetAddressable);//Offset:Discovery.exe+0x1BF5DD0
	bool STATIC_CopyProperty(class UObject* FromObj, const struct FString& FromPropertyName, class UObject* ToObj, const struct FString& ToPropertyName);//Offset:Discovery.exe+0x1BF3B60
	void STATIC_CopyPropertiesBetweenObjects(class UObject* FromObj, class UObject* ToObj);//Offset:Discovery.exe+0x1BF3A80
	void STATIC_CopyCollisionResponses(class UPrimitiveComponent* From, class UPrimitiveComponent* To);//Offset:Discovery.exe+0x1BF6F00
	struct FVector STATIC_Conv_StringToVector(const struct FString& InString);//Offset:Discovery.exe+0x1BF9EA0
	void STATIC_ClearAllTimersForObject(class UObject* WorldContextObject, class UObject* Object);//Offset:Discovery.exe+0x1BF2FC0
	bool STATIC_CapsuleOverlapByChannel(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, const struct FQuat& Rotation, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> ActorsToIgnore, TArray<struct FOverlapResult>* OutOverlaps);//Offset:Discovery.exe+0x1BF7200
	void STATIC_CalculateFullCDOExtent(class UClass* ActorClass, class AActor* Opt_DebugActor, struct FBox* OutExtent);//Offset:Discovery.exe+0x1BF8A60
	void STATIC_BindOnReceiveEmbarkPlayerController(class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1BEFB40
	struct FString STATIC_AutoplayGameMode();//Offset:Discovery.exe+0x1BF0C60
	bool STATIC_AreObjectPropertiesIdenticalWithProperties(class UObject* ObjectA, class UObject* ObjectB, TArray<struct FName>* OutDifferingProperties);//Offset:Discovery.exe+0x1BF6BB0
	bool STATIC_AreObjectPropertiesIdentical(class UObject* ObjectA, class UObject* ObjectB);//Offset:Discovery.exe+0x1BF6D00
	bool STATIC_AnimSequenceGetTrackIndex(class UAnimSequence* Seq, int BoneIndex, int* TrackIndex);//Offset:Discovery.exe+0x1BF2140
	bool STATIC_AnimSequenceGetBoneIndex(class UAnimSequence* Seq, const struct FName& BoneName, int* BoneIndex);//Offset:Discovery.exe+0x1BF2280
};


// Class EmbarkUtils.FakeEmbarkUtilsReflectionTester
// 0x0088 (0x00B0 - 0x0028)
class UFakeEmbarkUtilsReflectionTester : public UObject
{
public:
	float                                              FloatProperty;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IntProperty;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringProperty;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FName                                       NameProperty;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBoolProperty;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FVector                                     VectorProperty;                                           // 0x0050(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayTagProperty;                                      // 0x0068(0x0008) (Edit)
	class UClass*                                      ClassProperty;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFakeEmbarkUtilsStruct                      StructProperty;                                           // 0x0078(0x0028) (Edit)
	TArray<struct FFakeEmbarkUtilsStruct>              StructArrayProperty;                                      // 0x00A0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.FakeEmbarkUtilsReflectionTester"));
		return ptr;
	}

};


// Class EmbarkUtils.FakeEmbarkUtilsReflectionOneOfEachPropertyTester
// 0x0168 (0x0190 - 0x0028)
class UFakeEmbarkUtilsReflectionOneOfEachPropertyTester : public UObject
{
public:
	float                                              FloatProperty;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IntProperty;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64Property;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ByteProperty;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FName                                       NameProperty;                                             // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UObject*                                     ObjectProperty;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClassProperty;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FString                                     StringProperty;                                           // 0x00A8(0x0010) (Edit, ZeroConstructor)
	struct FText                                       TextProperty;                                             // 0x00B8(0x0018) (Edit)
	struct FVector                                     VectorProperty;                                           // 0x00D0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotatorProperty;                                          // 0x00E8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColorProperty;                                      // 0x0100(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ColorProperty;                                            // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0114(0x000C) MISSED OFFSET
	struct FTransform                                  TransformProperty;                                        // 0x0120(0x0060) (Edit, IsPlainOldData)
	struct FGameplayTag                                GameplayTagProperty;                                      // 0x0180(0x0008) (Edit)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.FakeEmbarkUtilsReflectionOneOfEachPropertyTester"));
		return ptr;
	}

};


// Class EmbarkUtils.FakeEmbarkUtilsReflectionContainerTester
// 0x0100 (0x0128 - 0x0028)
class UFakeEmbarkUtilsReflectionContainerTester : public UObject
{
public:
	TArray<int>                                        IntArray;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	TMap<struct FString, int>                          StringToIntMap;                                           // 0x0038(0x0050) (Edit)
	TMap<int, struct FFakeEmbarkUtilsStruct>           IntToStructMap;                                           // 0x0088(0x0050) (Edit)
	TMap<enum class EEmbarkPropertyTypes, int>         EnumToIntMap;                                             // 0x00D8(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.FakeEmbarkUtilsReflectionContainerTester"));
		return ptr;
	}

};


// Class EmbarkUtils.TestTickingActorComponent
// 0x0020 (0x00D8 - 0x00B8)
class UTestTickingActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.TestTickingActorComponent"));
		return ptr;
	}

};


// Class EmbarkUtils.TestTickingActor
// 0x0020 (0x02E8 - 0x02C8)
class ATestTickingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.TestTickingActor"));
		return ptr;
	}

};


// Class EmbarkUtils.EmbarkFakeNetDriver
// 0x0008 (0x0770 - 0x0768)
class UEmbarkFakeNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtils.EmbarkFakeNetDriver"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
