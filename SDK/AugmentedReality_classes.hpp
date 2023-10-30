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

// Class AugmentedReality.ARActor
// 0x0000 (0x02C8 - 0x02C8)
class AARActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARActor"));
		return ptr;
	}


	class UARComponent* AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID);//Offset:Discovery.exe+0x44BA060
};


// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARBlueprintLibrary"));
		return ptr;
	}


	void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);//Offset:Discovery.exe+0x44BBEC0
	bool STATIC_ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType);//Offset:Discovery.exe+0x44BD300
	void STATIC_StopARSession();//Offset:Discovery.exe+0x44BD4A0
	void STATIC_StartARSession(class UARSessionConfig* SessionConfig);//Offset:Discovery.exe+0x44BD4E0
	void STATIC_SetEnabledXRCamera(bool bOnOff);//Offset:Discovery.exe+0x44BD270
	void STATIC_SetARWorldScale(float InWorldScale);//Offset:Discovery.exe+0x44BAC30
	void STATIC_SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);//Offset:Discovery.exe+0x44BACC0
	void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);//Offset:Discovery.exe+0x44BD0E0
	bool STATIC_SaveARPinToLocalStore(const struct FName& InSaveName, class UARPin* InPin);//Offset:Discovery.exe+0x44BBAE0
	struct FIntPoint STATIC_ResizeXRCamera(const struct FIntPoint& InSize);//Offset:Discovery.exe+0x44BD1C0
	void STATIC_RemovePin(class UARPin* PinToRemove);//Offset:Discovery.exe+0x44BBE30
	void STATIC_RemoveARPinFromLocalStore(const struct FName& InSaveName);//Offset:Discovery.exe+0x44BBA50
	void STATIC_RemoveAllARPinsFromLocalStore();//Offset:Discovery.exe+0x44BBA30
	class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName);//Offset:Discovery.exe+0x44BC030
	bool STATIC_PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);//Offset:Discovery.exe+0x44BBF50
	class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);//Offset:Discovery.exe+0x44BC1B0
	void STATIC_PauseARSession();//Offset:Discovery.exe+0x44BD4C0
	TMap<struct FName, class UARPin*> STATIC_LoadARPinsFromLocalStore();//Offset:Discovery.exe+0x44BBBC0
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);//Offset:Discovery.exe+0x44BCA90
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);//Offset:Discovery.exe+0x44BCE10
	bool STATIC_IsSessionTypeSupported(enum class EARSessionType SessionType);//Offset:Discovery.exe+0x44BC760
	bool STATIC_IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature);//Offset:Discovery.exe+0x44BB2D0
	bool STATIC_IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod);//Offset:Discovery.exe+0x44BB1F0
	bool STATIC_IsARSupported();//Offset:Discovery.exe+0x44BD570
	bool STATIC_IsARPinLocalStoreSupported();//Offset:Discovery.exe+0x44BBD80
	bool STATIC_IsARPinLocalStoreReady();//Offset:Discovery.exe+0x44BBD50
	enum class EARWorldMappingState STATIC_GetWorldMappingStatus();//Offset:Discovery.exe+0x44BB6F0
	enum class EARTrackingQualityReason STATIC_GetTrackingQualityReason();//Offset:Discovery.exe+0x44BCA30
	enum class EARTrackingQuality STATIC_GetTrackingQuality();//Offset:Discovery.exe+0x44BCA60
	TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(enum class EARSessionType SessionType);//Offset:Discovery.exe+0x44BB5A0
	class UARSessionConfig* STATIC_GetSessionConfig();//Offset:Discovery.exe+0x44BD3E0
	TArray<struct FVector> STATIC_GetPointCloud();//Offset:Discovery.exe+0x44BB670
	class UARTexture* STATIC_GetPersonSegmentationImage();//Offset:Discovery.exe+0x44BB030
	class UARTexture* STATIC_GetPersonSegmentationDepthImage();//Offset:Discovery.exe+0x44BB000
	bool STATIC_GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, float MaxLocationDiff, enum class EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation);//Offset:Discovery.exe+0x44BAE60
	int STATIC_GetNumberOfTrackedFacesSupported();//Offset:Discovery.exe+0x44BA520
	class UARLightEstimate* STATIC_GetCurrentLightEstimate();//Offset:Discovery.exe+0x44BC390
	bool STATIC_GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics);//Offset:Discovery.exe+0x44BA460
	class UARTextureCameraImage* STATIC_GetCameraImage();//Offset:Discovery.exe+0x44BC8B0
	class UARTextureCameraDepth* STATIC_GetCameraDepth();//Offset:Discovery.exe+0x44BC880
	float STATIC_GetARWorldScale();//Offset:Discovery.exe+0x44BAC00
	class UARTexture* STATIC_GetARTexture(enum class EARTextureType TextureType);//Offset:Discovery.exe+0x44BC7F0
	struct FARSessionStatus STATIC_GetARSessionStatus();//Offset:Discovery.exe+0x44BD410
	TArray<class UARTrackedPose*> STATIC_GetAllTrackedPoses();//Offset:Discovery.exe+0x44BB060
	TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();//Offset:Discovery.exe+0x44BB930
	TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();//Offset:Discovery.exe+0x44BB9B0
	TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();//Offset:Discovery.exe+0x44BB8B0
	TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();//Offset:Discovery.exe+0x44BB830
	TArray<struct FARPose2D> STATIC_GetAllTracked2DPoses();//Offset:Discovery.exe+0x44BB0E0
	TArray<class UARPin*> STATIC_GetAllPins();//Offset:Discovery.exe+0x44BBDB0
	TArray<class UARTrackedGeometry*> STATIC_GetAllGeometriesByClass(class UClass* GeometryClass);//Offset:Discovery.exe+0x44BC8E0
	TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();//Offset:Discovery.exe+0x44BC9B0
	struct FTransform STATIC_GetAlignmentTransform();//Offset:Discovery.exe+0x44BAB70
	TArray<class UARTrackedPoint*> STATIC_FindTrackedPointsByName(const struct FString& PointName);//Offset:Discovery.exe+0x44BA8F0
	void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);//Offset:Discovery.exe+0x44BC590
	void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);//Offset:Discovery.exe+0x44BC3C0
	void STATIC_CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> Endpoints, struct FVector* ClosestIntersection);//Offset:Discovery.exe+0x44BA780
	void STATIC_CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform);//Offset:Discovery.exe+0x44BA550
	bool STATIC_AddTrackedPointWithName(const struct FTransform& WorldTransform, const struct FString& PointName, bool bDeletePointsWithSameName);//Offset:Discovery.exe+0x44BA9D0
	class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth);//Offset:Discovery.exe+0x44BB3B0
	bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);//Offset:Discovery.exe+0x44BB720
};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTraceResultLibrary"));
		return ptr;
	}


	class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);//Offset:Discovery.exe+0x44BF890
	enum class EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);//Offset:Discovery.exe+0x44BF7B0
	struct FTransform STATIC_GetLocalTransform(const struct FARTraceResult& TraceResult);//Offset:Discovery.exe+0x44BF980
	struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);//Offset:Discovery.exe+0x44BFAB0
	struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);//Offset:Discovery.exe+0x44BFBE0
	float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);//Offset:Discovery.exe+0x44BFD10
};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (0x0050 - 0x0030)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy"));
		return ptr;
	}

};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (0x0080 - 0x0050)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy"));
		return ptr;
	}


	class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);//Offset:Discovery.exe+0x44C0430
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0060 (0x00B0 - 0x0050)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy"));
		return ptr;
	}


	class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);//Offset:Discovery.exe+0x44C07C0
};


// Class AugmentedReality.ARComponent
// 0x0080 (0x0350 - 0x02D0)
class UARComponent : public USceneComponent
{
public:
	struct FGuid                                       NativeID;                                                 // 0x02D0(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x02E0(0x0030) MISSED OFFSET
	bool                                               bUseDefaultReplication;                                   // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class UMaterialInterface*                          DefaultMeshMaterial;                                      // 0x0318(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                             // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMRMeshComponent*                            MRMeshComponent;                                          // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UARTrackedGeometry*                          MyTrackedGeometry;                                        // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARComponent"));
		return ptr;
	}


	void UpdateVisualization();//Offset:Discovery.exe+0x44C2860
	void SetNativeID(const struct FGuid& NativeID);//Offset:Discovery.exe+0x44C28A0
	void ReceiveRemove();//Offset:Discovery.exe+0x327F8B0
	void OnRep_Payload();//Offset:Discovery.exe+0x44C2840
	class UMRMeshComponent* GetMRMesh();//Offset:Discovery.exe+0x44C2880
};


// Class AugmentedReality.ARPlaneComponent
// 0x00D0 (0x0420 - 0x0350)
class UARPlaneComponent : public UARComponent
{
public:
	struct FARPlaneUpdatePayload                       ReplicatedPayload;                                        // 0x0350(0x00D0) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARPlaneComponent"));
		return ptr;
	}


	void STATIC_SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode);//Offset:Discovery.exe+0x44C31C0
	void STATIC_SetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor> InColors);//Offset:Discovery.exe+0x44C3070
	void ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C2EC0
	void ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARPlaneUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	TMap<enum class EARObjectClassification, struct FLinearColor> STATIC_GetObjectClassificationDebugColors();//Offset:Discovery.exe+0x44C3040
};


// Class AugmentedReality.ARPointComponent
// 0x0010 (0x0360 - 0x0350)
class UARPointComponent : public UARComponent
{
public:
	struct FARPointUpdatePayload                       ReplicatedPayload;                                        // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0351(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARPointComponent"));
		return ptr;
	}


	void ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C3C60
	void ReceiveUpdate(const struct FARPointUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARPointUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARFaceComponent
// 0x0090 (0x03E0 - 0x0350)
class UARFaceComponent : public UARComponent
{
public:
	enum class EARFaceTransformMixing                  TransformSetting;                                         // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateVertexNormal;                                      // 0x0351(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFaceOutOfScreen;                                         // 0x0352(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0353(0x0005) MISSED OFFSET
	struct FARFaceUpdatePayload                        ReplicatedPayload;                                        // 0x0358(0x0060) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData01[0x28];                                      // 0x03B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARFaceComponent"));
		return ptr;
	}


	void STATIC_SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode);//Offset:Discovery.exe+0x44C4360
	void ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C4270
	void ReceiveUpdate(const struct FARFaceUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARFaceUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARImageComponent
// 0x00A0 (0x03F0 - 0x0350)
class UARImageComponent : public UARComponent
{
public:
	struct FARImageUpdatePayload                       ReplicatedPayload;                                        // 0x0350(0x00A0) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARImageComponent"));
		return ptr;
	}


	void STATIC_SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode);//Offset:Discovery.exe+0x44C4BD0
	void ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C4A90
	void ReceiveUpdate(const struct FARImageUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARImageUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARQRCodeComponent
// 0x00B0 (0x0400 - 0x0350)
class UARQRCodeComponent : public UARComponent
{
public:
	struct FARQRCodeUpdatePayload                      ReplicatedPayload;                                        // 0x0350(0x00B0) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARQRCodeComponent"));
		return ptr;
	}


	void STATIC_SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode);//Offset:Discovery.exe+0x44C5510
	void ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C53C0
	void ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARPoseComponent
// 0x0070 (0x03C0 - 0x0350)
class UARPoseComponent : public UARComponent
{
public:
	struct FARPoseUpdatePayload                        ReplicatedPayload;                                        // 0x0350(0x0070) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARPoseComponent"));
		return ptr;
	}


	void STATIC_SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode);//Offset:Discovery.exe+0x44C5F80
	void ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C5E50
	void ReceiveUpdate(const struct FARPoseUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARPoseUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.AREnvironmentProbeComponent
// 0x0060 (0x03B0 - 0x0350)
class UAREnvironmentProbeComponent : public UARComponent
{
public:
	struct FAREnvironmentProbeUpdatePayload            ReplicatedPayload;                                        // 0x0350(0x0060) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.AREnvironmentProbeComponent"));
		return ptr;
	}


	void ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C6770
	void ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARObjectComponent
// 0x0060 (0x03B0 - 0x0350)
class UARObjectComponent : public UARComponent
{
public:
	struct FARObjectUpdatePayload                      ReplicatedPayload;                                        // 0x0350(0x0060) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARObjectComponent"));
		return ptr;
	}


	void ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C6770
	void ReceiveUpdate(const struct FARObjectUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARObjectUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARMeshComponent
// 0x0090 (0x03E0 - 0x0350)
class UARMeshComponent : public UARComponent
{
public:
	struct FARMeshUpdatePayload                        ReplicatedPayload;                                        // 0x0350(0x0090) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARMeshComponent"));
		return ptr;
	}


	void ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C7380
	void ReceiveUpdate(const struct FARMeshUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARMeshUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARGeoAnchorComponent
// 0x00A0 (0x03F0 - 0x0350)
class UARGeoAnchorComponent : public UARComponent
{
public:
	struct FARGeoAnchorUpdatePayload                   ReplicatedPayload;                                        // 0x0350(0x00A0) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARGeoAnchorComponent"));
		return ptr;
	}


	void STATIC_SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode);//Offset:Discovery.exe+0x44C7CB0
	void ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload);//Offset:Discovery.exe+0x44C7B50
	void ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
	void ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARDependencyHandler
// 0x0000 (0x0028 - 0x0028)
class UARDependencyHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARDependencyHandler"));
		return ptr;
	}


	void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo);//Offset:Discovery.exe+0x44C86E0
	void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, enum class EARServicePermissionRequestResult* OutPermissionResult);//Offset:Discovery.exe+0x44C8830
	void InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EARServiceInstallRequestResult* OutInstallResult);//Offset:Discovery.exe+0x44C89F0
	class UARDependencyHandler* STATIC_GetARDependencyHandler();//Offset:Discovery.exe+0x44C8CB0
	void CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EARServiceAvailability* OutAvailability);//Offset:Discovery.exe+0x44C8B50
};


// Class AugmentedReality.ARGeoTrackingSupport
// 0x0000 (0x0028 - 0x0028)
class UARGeoTrackingSupport : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARGeoTrackingSupport"));
		return ptr;
	}


	class UARGeoTrackingSupport* STATIC_GetGeoTrackingSupport();//Offset:Discovery.exe+0x44C9680
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason();//Offset:Discovery.exe+0x1461930
	enum class EARGeoTrackingState GetGeoTrackingState();//Offset:Discovery.exe+0x11BE930
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy();//Offset:Discovery.exe+0x1DC1420
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const struct FString& OptionalAnchorName);//Offset:Discovery.exe+0x44C92F0
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const struct FString& OptionalAnchorName);//Offset:Discovery.exe+0x44C94E0
};


// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// 0x0050 (0x00A0 - 0x0050)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy"));
		return ptr;
	}


	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const struct FString& Error);//Offset:Discovery.exe+0x327F8B0
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* STATIC_CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);//Offset:Discovery.exe+0x44C9C50
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* STATIC_CheckGeoTrackingAvailability(class UObject* WorldContextObject);//Offset:Discovery.exe+0x44C9D80
};


// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// 0x0058 (0x00A8 - 0x0050)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy"));
		return ptr;
	}


	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const struct FString& Error);//Offset:Discovery.exe+0x327F8B0
	class UGetGeoLocationAsyncTaskBlueprintProxy* STATIC_GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition);//Offset:Discovery.exe+0x44CA1A0
};


// Class AugmentedReality.ARLifeCycleComponent
// 0x0030 (0x0300 - 0x02D0)
class UARLifeCycleComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnARActorSpawnedDelegate;                                 // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnARActorToBeDestroyedDelegate;                           // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARLifeCycleComponent"));
		return ptr;
	}


	void ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID);//Offset:Discovery.exe+0x44CC4E0
	void ServerDestroyARActor(class AARActor* Actor);//Offset:Discovery.exe+0x44CC420
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);//Offset:Discovery.exe+0x327F8B0
	void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor);//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0028 - 0x0028)
class UARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARLightEstimate"));
		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (0x0040 - 0x0028)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientColor;                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARBasicLightEstimate"));
		return ptr;
	}


	float GetAmbientIntensityLumens();//Offset:Discovery.exe+0x44CCB40
	float GetAmbientColorTemperatureKelvin();//Offset:Discovery.exe+0x44CCB10
	struct FLinearColor GetAmbientColor();//Offset:Discovery.exe+0x44CCAC0
};


// Class AugmentedReality.AROriginActor
// 0x0000 (0x02C8 - 0x02C8)
class AAROriginActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.AROriginActor"));
		return ptr;
	}

};


// Class AugmentedReality.ARPin
// 0x0128 (0x0150 - 0x0028)
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinnedComponent;                                          // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0060) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x00A0(0x0060) (IsPlainOldData)
	enum class EARTrackingState                        TrackingState;                                            // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0101(0x001F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnARTrackingStateChanged;                                 // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnARTransformUpdated;                                     // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARPin"));
		return ptr;
	}


	enum class EARTrackingState GetTrackingState();//Offset:Discovery.exe+0x44CD220
	class UARTrackedGeometry* GetTrackedGeometry();//Offset:Discovery.exe+0x44CD1F0
	class USceneComponent* GetPinnedComponent();//Offset:Discovery.exe+0x44CD1C0
	struct FTransform GetLocalToWorldTransform();//Offset:Discovery.exe+0x44CD250
	struct FTransform GetLocalToTrackingTransform();//Offset:Discovery.exe+0x44CD2E0
	struct FName GetDebugName();//Offset:Discovery.exe+0x44CCFE0
	void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);//Offset:Discovery.exe+0x44CD030
};


// Class AugmentedReality.ARSessionConfig
// 0x00E0 (0x0110 - 0x0030)
class UARSessionConfig : public UDataAsset
{
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollisionForMeshData;                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateNavMeshForMeshData;                              // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMeshDataForOcclusion;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderMeshDataInWireframe;                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackSceneObjects;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePersonSegmentationForOcclusion;                       // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSceneDepthForOcclusion;                               // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutomaticImageScaleEstimation;                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStandardOnboardingUX;                                 // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARWorldAlignment                       WorldAlignment;                                           // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARSessionType                          SessionType;                                              // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARPlaneDetectionMode                   PlaneDetectionMode;                                       // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHorizontalPlaneDetection;                                // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVerticalPlaneDetection;                                  // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoFocus;                                         // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARLightEstimationMode                  LightEstimationMode;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARFrameSyncMode                        FrameSyncMode;                                            // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCameraTracking;                                     // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetTrackedObjects;                                     // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	TArray<class UARCandidateImage*>                   CandidateImages;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumSimultaneousImagesTracked;                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EAREnvironmentCaptureProbeType          EnvironmentCaptureProbeType;                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              WorldMapData;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FARVideoFormat                              DesiredVideoFormat;                                       // 0x0080(0x000C) (Edit)
	bool                                               bUseOptimalVideoFormat;                                   // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARFaceTrackingDirection                FaceTrackingDirection;                                    // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARFaceTrackingUpdate                   FaceTrackingUpdate;                                       // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	int                                                MaxNumberOfTrackedFaces;                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                       // 0x0098(0x0010) (ZeroConstructor)
	enum class EARSessionTrackingFeature               EnabledSessionTrackingFeature;                            // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARSceneReconstruction                  SceneReconstructionMethod;                                // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	class UClass*                                      PlaneComponentClass;                                      // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PointComponentClass;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FaceComponentClass;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ImageComponentClass;                                      // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QRCodeComponentClass;                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PoseComponentClass;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnvironmentProbeComponentClass;                           // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectComponentClass;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MeshComponentClass;                                       // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeoAnchorComponentClass;                                  // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMeshMaterial;                                      // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                             // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARSessionConfig"));
		return ptr;
	}


	bool ShouldResetTrackedObjects();//Offset:Discovery.exe+0x44CE6E0
	bool ShouldResetCameraTracking();//Offset:Discovery.exe+0x44CE7B0
	bool ShouldRenderCameraOverlay();//Offset:Discovery.exe+0x44CE8E0
	bool ShouldEnableCameraTracking();//Offset:Discovery.exe+0x44CE8B0
	bool ShouldEnableAutoFocus();//Offset:Discovery.exe+0x44CE880
	void SetWorldMapData(TArray<unsigned char> WorldMapData);//Offset:Discovery.exe+0x44CE370
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature);//Offset:Discovery.exe+0x44CDE30
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod);//Offset:Discovery.exe+0x44CDDA0
	void SetResetTrackedObjects(bool bNewValue);//Offset:Discovery.exe+0x44CE640
	void SetResetCameraTracking(bool bNewValue);//Offset:Discovery.exe+0x44CE710
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);//Offset:Discovery.exe+0x44CDF20
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);//Offset:Discovery.exe+0x44CDFE0
	void SetEnableAutoFocus(bool bNewValue);//Offset:Discovery.exe+0x44CE7E0
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);//Offset:Discovery.exe+0x44CE0A0
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);//Offset:Discovery.exe+0x44CE250
	TArray<unsigned char> GetWorldMapData();//Offset:Discovery.exe+0x44CE460
	enum class EARWorldAlignment GetWorldAlignment();//Offset:Discovery.exe+0x44CE9D0
	enum class EARSessionType GetSessionType();//Offset:Discovery.exe+0x44CE9A0
	enum class EARSceneReconstruction GetSceneReconstructionMethod();//Offset:Discovery.exe+0x44CDEC0
	enum class EARPlaneDetectionMode GetPlaneDetectionMode();//Offset:Discovery.exe+0x44CE970
	int GetMaxNumSimultaneousImagesTracked();//Offset:Discovery.exe+0x44CE500
	enum class EARLightEstimationMode GetLightEstimationMode();//Offset:Discovery.exe+0x44CE940
	enum class EARFrameSyncMode GetFrameSyncMode();//Offset:Discovery.exe+0x44CE910
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate();//Offset:Discovery.exe+0x44CDFB0
	enum class EARFaceTrackingDirection GetFaceTrackingDirection();//Offset:Discovery.exe+0x44CE070
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();//Offset:Discovery.exe+0x44CE4D0
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature();//Offset:Discovery.exe+0x44CDEF0
	struct FARVideoFormat GetDesiredVideoFormat();//Offset:Discovery.exe+0x44CE150
	TArray<class UARCandidateObject*> GetCandidateObjectList();//Offset:Discovery.exe+0x44CE300
	TArray<class UARCandidateImage*> GetCandidateImageList();//Offset:Discovery.exe+0x44CE5D0
	void AddCandidateObject(class UARCandidateObject* CandidateObject);//Offset:Discovery.exe+0x44CE1B0
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);//Offset:Discovery.exe+0x44CE530
};


// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (0x0418 - 0x03B0)
class AARSharedWorldGameMode : public AGameMode
{
public:
	int                                                BufferSizePerChunk;                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x03B4(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARSharedWorldGameMode"));
		return ptr;
	}


	void SetPreviewImageData(TArray<unsigned char> ImageData);//Offset:Discovery.exe+0x44CFE90
	void SetARWorldSharingIsReady();//Offset:Discovery.exe+0x44CFD80
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);//Offset:Discovery.exe+0x44CFDA0
	class AARSharedWorldGameState* GetARSharedWorldGameState();//Offset:Discovery.exe+0x44CFD50
};


// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (0x0370 - 0x0338)
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                         // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              ARWorldData;                                              // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PreviewImageBytesTotal;                                   // 0x0358(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesTotal;                                        // 0x035C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviewImageBytesDelivered;                               // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesDelivered;                                    // 0x0364(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARSharedWorldGameState"));
		return ptr;
	}


	void K2_OnARWorldMapIsReady();//Offset:Discovery.exe+0x327F8B0
};


// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (0x0820 - 0x0818)
class AARSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0818(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARSharedWorldPlayerController"));
		return ptr;
	}


	void ServerMarkReadyForReceiving();//Offset:Discovery.exe+0x44D0830
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);//Offset:Discovery.exe+0x44D0600
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);//Offset:Discovery.exe+0x44D04E0
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);//Offset:Discovery.exe+0x44D0720
};


// Class AugmentedReality.ARSkyLight
// 0x0010 (0x02E8 - 0x02D8)
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                             // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARSkyLight"));
		return ptr;
	}


	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);//Offset:Discovery.exe+0x44D1620
};


// Class AugmentedReality.ARTexture
// 0x0030 (0x0220 - 0x01F0)
class UARTexture : public UTexture
{
public:
	enum class EARTextureType                          TextureType;                                              // 0x01F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x01F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTexture"));
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (0x0220 - 0x0220)
class UARTextureCameraImage : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTextureCameraImage"));
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraDepth
// 0x0000 (0x0220 - 0x0220)
class UARTextureCameraDepth : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTextureCameraDepth"));
		return ptr;
	}

};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0030 (0x02C0 - 0x0290)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	enum class EARTextureType                          TextureType;                                              // 0x0290(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0294(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.AREnvironmentCaptureProbeTexture"));
		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTraceResultDummy"));
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x0138 (0x0160 - 0x0028)
class UARTrackedGeometry : public UObject
{
public:
	struct FGuid                                       UniqueId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0060) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x00A0(0x0060) (IsPlainOldData)
	enum class EARTrackingState                        TrackingState;                                            // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0101(0x000F) MISSED OFFSET
	class UMRMeshComponent*                            UnderlyingMesh;                                           // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	enum class EARObjectClassification                 ObjectClassification;                                     // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class EARSpatialMeshUsageFlags                SpatialMeshUsageFlags;                                    // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x011A(0x0016) MISSED OFFSET
	int                                                LastUpdateFrameNumber;                                    // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0134(0x000C) MISSED OFFSET
	struct FName                                       DebugName;                                                // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0148(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackedGeometry"));
		return ptr;
	}


	bool IsTracked();//Offset:Discovery.exe+0x44D23D0
	bool HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag);//Offset:Discovery.exe+0x44D21A0
	class UMRMeshComponent* GetUnderlyingMesh();//Offset:Discovery.exe+0x44D2280
	enum class EARTrackingState GetTrackingState();//Offset:Discovery.exe+0x44CD220
	enum class EARObjectClassification GetObjectClassification();//Offset:Discovery.exe+0x44D2250
	struct FString GetName();//Offset:Discovery.exe+0x44D2310
	struct FTransform GetLocalToWorldTransform();//Offset:Discovery.exe+0x44D2400
	struct FTransform GetLocalToTrackingTransform();//Offset:Discovery.exe+0x44CD2E0
	float GetLastUpdateTimestamp();//Offset:Discovery.exe+0x44D22B0
	int GetLastUpdateFrameNumber();//Offset:Discovery.exe+0x44D22E0
	struct FName GetDebugName();//Offset:Discovery.exe+0x44D2380
};


// Class AugmentedReality.ARPlaneGeometry
// 0x0050 (0x01B0 - 0x0160)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	struct FVector                                     Center;                                                   // 0x0160(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0178(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             BoundaryPolygon;                                          // 0x0190(0x0010) (ZeroConstructor)
	class UARPlaneGeometry*                            SubsumedBy;                                               // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARPlaneGeometry"));
		return ptr;
	}


	class UARPlaneGeometry* GetSubsumedBy();//Offset:Discovery.exe+0x44D2C50
	enum class EARPlaneOrientation GetOrientation();//Offset:Discovery.exe+0x44D2C30
	struct FVector GetExtent();//Offset:Discovery.exe+0x44D2DA0
	struct FVector GetCenter();//Offset:Discovery.exe+0x44D2DF0
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();//Offset:Discovery.exe+0x44D2C70
};


// Class AugmentedReality.ARTrackedPoint
// 0x0000 (0x0160 - 0x0160)
class UARTrackedPoint : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackedPoint"));
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedImage
// 0x0010 (0x0170 - 0x0160)
class UARTrackedImage : public UARTrackedGeometry
{
public:
	struct FVector2D                                   EstimatedSize;                                            // 0x0160(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackedImage"));
		return ptr;
	}


	struct FVector2D GetEstimateSize();//Offset:Discovery.exe+0x44D3440
	class UARCandidateImage* GetDetectedImage();//Offset:Discovery.exe+0x44D3490
};


// Class AugmentedReality.ARTrackedQRCode
// 0x0020 (0x0190 - 0x0170)
class UARTrackedQRCode : public UARTrackedImage
{
public:
	struct FString                                     QRCode;                                                   // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Version;                                                  // 0x0180(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0184(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackedQRCode"));
		return ptr;
	}

};


// Class AugmentedReality.ARFaceGeometry
// 0x0160 (0x02C0 - 0x0160)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET
	bool                                               bIsTracked;                                               // 0x0170(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	TMap<enum class EARFaceBlendShape, float>          BlendShapes;                                              // 0x0178(0x0050)
	unsigned char                                      UnknownData02[0x38];                                      // 0x01C8(0x0038) MISSED OFFSET
	struct FTransform                                  LeftEyeTransform;                                         // 0x0200(0x0060) (IsPlainOldData)
	struct FTransform                                  RightEyeTransform;                                        // 0x0260(0x0060) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARFaceGeometry"));
		return ptr;
	}


	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye);//Offset:Discovery.exe+0x44D3AE0
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye);//Offset:Discovery.exe+0x44D3BD0
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape);//Offset:Discovery.exe+0x44D3D80
	TMap<enum class EARFaceBlendShape, float> GetBlendShapes();//Offset:Discovery.exe+0x44D3CA0
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0020 (0x0180 - 0x0160)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.AREnvironmentCaptureProbe"));
		return ptr;
	}


	struct FVector GetExtent();//Offset:Discovery.exe+0x44D4340
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();//Offset:Discovery.exe+0x44D4310
};


// Class AugmentedReality.ARTrackedObject
// 0x0000 (0x0160 - 0x0160)
class UARTrackedObject : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackedObject"));
		return ptr;
	}


	class UARCandidateObject* GetDetectedObject();//Offset:Discovery.exe+0x44D3490
};


// Class AugmentedReality.ARTrackedPose
// 0x0050 (0x01B0 - 0x0160)
class UARTrackedPose : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0160(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackedPose"));
		return ptr;
	}


	struct FARPose3D GetTrackedPoseData();//Offset:Discovery.exe+0x44D4930
};


// Class AugmentedReality.ARMeshGeometry
// 0x0000 (0x0160 - 0x0160)
class UARMeshGeometry : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARMeshGeometry"));
		return ptr;
	}


	bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, float MaxLocationDiff, enum class EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation);//Offset:Discovery.exe+0x44D4C50
};


// Class AugmentedReality.ARGeoAnchor
// 0x0010 (0x0170 - 0x0160)
class UARGeoAnchor : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARGeoAnchor"));
		return ptr;
	}


	float GetLongitude();//Offset:Discovery.exe+0x44D5130
	float GetLatitude();//Offset:Discovery.exe+0x44D5100
	enum class EARAltitudeSource GetAltitudeSource();//Offset:Discovery.exe+0x44D50A0
	float GetAltitudeMeters();//Offset:Discovery.exe+0x44D50D0
};


// Class AugmentedReality.ARTrackableNotifyComponent
// 0x0150 (0x0208 - 0x00B8)
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnAddTrackedGeometry;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedGeometry;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedGeometry;                                  // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedPlane;                                        // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedPlane;                                     // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedPlane;                                     // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedPoint;                                        // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedPoint;                                     // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedPoint;                                     // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedImage;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedImage;                                     // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedImage;                                     // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedFace;                                         // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedFace;                                      // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedFace;                                      // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedEnvProbe;                                     // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedEnvProbe;                                  // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedEnvProbe;                                  // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddTrackedObject;                                       // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateTrackedObject;                                    // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveTrackedObject;                                    // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTrackableNotifyComponent"));
		return ptr;
	}

};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0028 - 0x0028)
class UARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARTypesDummyClass"));
		return ptr;
	}

};


// Class AugmentedReality.ARCandidateImage
// 0x0028 (0x0058 - 0x0030)
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     FriendlyName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EARCandidateImageOrientation            Orientation;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARCandidateImage"));
		return ptr;
	}


	float GetPhysicalWidth();//Offset:Discovery.exe+0x44D5F00
	float GetPhysicalHeight();//Offset:Discovery.exe+0x44D5EE0
	enum class EARCandidateImageOrientation GetOrientation();//Offset:Discovery.exe+0x44D5EC0
	struct FString GetFriendlyName();//Offset:Discovery.exe+0x44D5F20
	class UTexture2D* GetCandidateTexture();//Offset:Discovery.exe+0x1A83670
};


// Class AugmentedReality.ARCandidateObject
// 0x0058 (0x0088 - 0x0030)
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x0050(0x0038) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AugmentedReality.ARCandidateObject"));
		return ptr;
	}


	void SetFriendlyName(const struct FString& NewName);//Offset:Discovery.exe+0x44D64D0
	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);//Offset:Discovery.exe+0x44D6630
	void SetBoundingBox(const struct FBox& InBoundingBox);//Offset:Discovery.exe+0x44D63A0
	struct FString GetFriendlyName();//Offset:Discovery.exe+0x44D65C0
	TArray<unsigned char> GetCandidateObjectData();//Offset:Discovery.exe+0x44D6790
	struct FBox GetBoundingBox();//Offset:Discovery.exe+0x44D6490
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
