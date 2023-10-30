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

// Class EmbarkEngine.EmbarkGlobalSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkGlobalSubsystem : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkGlobalSubsystem"));
		return ptr;
	}


	void OnInitialized();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitialized();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkEngine.OptionalPrimaryDataAsset
// 0x0008 (0x0038 - 0x0030)
class UOptionalPrimaryDataAsset : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.OptionalPrimaryDataAsset"));
		return ptr;
	}

};


// Class EmbarkEngine.SimulatedSkinnedMeshComponent
// 0x01B0 (0x0A20 - 0x0870)
class USimulatedSkinnedMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0870(0x0018) MISSED OFFSET
	bool                                               bOnlyReadAwakeBodies;                                     // 0x0888(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateOverlapsOnPhysicsread;                             // 0x0889(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x196];                                     // 0x088A(0x0196) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.SimulatedSkinnedMeshComponent"));
		return ptr;
	}


	void TermBodiesBelow(const struct FName& ParentBoneName);//Offset:Discovery.exe+0x1AB5870
	void SetBoneCollisionProfileName(const struct FName& BoneName, const struct FName& InCollisionProfileName);//Offset:Discovery.exe+0x1AB5B50
	void SetBodyTransform(const struct FName& BoneName, const struct FTransform& Transform);//Offset:Discovery.exe+0x1AB5730
	void SetBodySimulatePhysics(const struct FName& BoneName, bool bInSimulate);//Offset:Discovery.exe+0x1AB5A60
	void SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);//Offset:Discovery.exe+0x1AB5910
	void OnPhysicsBodySleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);//Offset:Discovery.exe+0x1AB5480
	void OnPhysicsBodyAwake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName);//Offset:Discovery.exe+0x1AB5560
	bool K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance);//Offset:Discovery.exe+0x1AB5CE0
	struct FTransform GetBoneTransform(const struct FName& BoneName);//Offset:Discovery.exe+0x1AB5640
	struct FName FindConstraintBoneName(int ConstraintIndex);//Offset:Discovery.exe+0x1AB5C30
};


// Class EmbarkEngine.ActorWithEditorTick
// 0x0008 (0x02D0 - 0x02C8)
class AActorWithEditorTick : public AActor
{
public:
	bool                                               bUseEditorTick;                                           // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.ActorWithEditorTick"));
		return ptr;
	}


	void EditorTick(float DeltaSeconds);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkEngine.CurveTranslateRotate
// 0x0300 (0x0330 - 0x0030)
class UCurveTranslateRotate : public UCurveBase
{
public:
	struct FRichCurve                                  FloatCurves[0x6];                                         // 0x0030(0x0080)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.CurveTranslateRotate"));
		return ptr;
	}


	void UpdateOrAddKeys(float Time, const struct FTransform& Transform, bool bUnwindRotation);//Offset:Discovery.exe+0x1AB1260
	void UpdateOrAddKey(enum class ECurveTRTrack Track, float Time, float Value, bool bUnwindRotation, float KeyTimeTolerance);//Offset:Discovery.exe+0x1AB13F0
	void GetTrackValue(float InTime, struct FVector* OutTranslation, struct FVector* OutRotation);//Offset:Discovery.exe+0x1AB15C0
};


// Class EmbarkEngine.DDGICascadesComponent
// 0x0018 (0x00D0 - 0x00B8)
class UDDGICascadesComponent : public UActorComponent
{
public:
	int                                                LightingPriority;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x00BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.DDGICascadesComponent"));
		return ptr;
	}


	void UpdateVolumes();//Offset:Discovery.exe+0x1AB1AA0
};


// Class EmbarkEngine.EmbarkDataAsset
// 0x0000 (0x0030 - 0x0030)
class UEmbarkDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkDataAsset"));
		return ptr;
	}


	void ReceivePreSave();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkEngine.EmbarkEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkEngineBlueprintLibrary"));
		return ptr;
	}


	int STATIC_GetNumPrecompilingPSOsRemaining();//Offset:Discovery.exe+0x1AB1EF0
};


// Class EmbarkEngine.EmbarkGameEngine
// 0x0008 (0x0E00 - 0x0DF8)
class UEmbarkGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0DF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkGameEngine"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkResolutionStatSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkResolutionStatSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkResolutionStatSubsystem"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkSDFVolumeTexture
// 0x0050 (0x0240 - 0x01F0)
class UEmbarkSDFVolumeTexture : public UTexture
{
public:
	struct FIntVector                                  Size;                                                     // 0x01F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	struct FBox                                        Bounds;                                                   // 0x0200(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkSDFVolumeTexture"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkSDFVolumeTextureLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkSDFVolumeTextureLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkSDFVolumeTextureLibrary"));
		return ptr;
	}


	void STATIC_WriteSDFSphereToVolumeTexture(class UObject* WorldContextObject, class UEmbarkSDFVolumeTexture* Texture, const struct FVector& Origin, double Radius);//Offset:Discovery.exe+0x1AB2870
	void STATIC_WriteBoxToVolumeTexture(class UObject* WorldContextObject, class UEmbarkSDFVolumeTexture* Texture, const struct FVector& Origin, double Extent, double Intensity);//Offset:Discovery.exe+0x1AB26A0
	void STATIC_ReleaseSDFVolumeTexture(class UEmbarkSDFVolumeTexture* Texture);//Offset:Discovery.exe+0x1AB2B20
	class UEmbarkSDFVolumeTexture* STATIC_CreateSDFVolumeTexture(class UObject* WorldContextObject, const struct FIntVector& Size, const struct FBox& Bounds);//Offset:Discovery.exe+0x1AB2BB0
	void STATIC_ClearSDFVolumeTexture(class UObject* WorldContextObject, class UEmbarkSDFVolumeTexture* Texture, float MaxDistance);//Offset:Discovery.exe+0x1AB29F0
};


// Class EmbarkEngine.EmbarkTestGPUCrashSubsystem
// 0x0000 (0x0030 - 0x0030)
class UEmbarkTestGPUCrashSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkTestGPUCrashSubsystem"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkTestWorkloadSubsystem
// 0x0010 (0x0040 - 0x0030)
class UEmbarkTestWorkloadSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkTestWorkloadSubsystem"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkWorldSettingsBase
// 0x0058 (0x0530 - 0x04D8)
class AEmbarkWorldSettingsBase : public AWorldSettings
{
public:
	struct FVector                                     MaxWorldLimits;                                           // 0x04D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinWorldLimits;                                           // 0x04F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  FullChangeBitCountXYZ;                                    // 0x0508(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  SmallChangeBitCountXYZ;                                   // 0x0514(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BitCountForSmallChangeRotation;                           // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BitCountForFullChangeRotation;                            // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableActorTransformReplicationForDestruction;           // 0x0528(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkWorldSettingsBase"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkHttpRequestContainer
// 0x0038 (0x0060 - 0x0028)
class UEmbarkHttpRequestContainer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHttpRequestCompleted;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, InstancedReference)
	TArray<unsigned char>                              ResponseContent;                                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	int                                                ResponseCode;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x004C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkHttpRequestContainer"));
		return ptr;
	}


	void SetVerb(const struct FString& NewVerb);//Offset:Discovery.exe+0x1AB3AC0
	void SetURL(const struct FString& NewURL);//Offset:Discovery.exe+0x1AB3990
	void SetPayload(const struct FString& Payload);//Offset:Discovery.exe+0x1AB3600
	void SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);//Offset:Discovery.exe+0x1AB36B0
	void ProcessRequest();//Offset:Discovery.exe+0x1AB3BF0
	struct FString GetVerb();//Offset:Discovery.exe+0x1AB3B70
	struct FString GetURL();//Offset:Discovery.exe+0x1AB3A40
	TArray<struct FString> GetHeaders();//Offset:Discovery.exe+0x1AB38A0
	struct FString GetHeader(const struct FString& HeaderName);//Offset:Discovery.exe+0x1AB37B0
	float GetElapsedTime();//Offset:Discovery.exe+0x1AB35D0
};


// Class EmbarkEngine.HttpFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHttpFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.HttpFunctionLibrary"));
		return ptr;
	}


	struct FEmbarkHttpParameter STATIC_MakeHttpParameter(const struct FString& InParameterKey, const struct FString& InParameterValue);//Offset:Discovery.exe+0x1AB4710
	class UEmbarkHttpRequestContainer* STATIC_CreateSimpleHttpRequest(const struct FString& Verb, const struct FString& URL, TArray<struct FEmbarkHttpParameter> Parameters);//Offset:Discovery.exe+0x1AB4360
	class UEmbarkHttpRequestContainer* STATIC_CreateHttpRequest(const struct FString& AuthorizationToken, const struct FString& Verb, const struct FString& URL, TArray<struct FEmbarkHttpParameter> Parameters);//Offset:Discovery.exe+0x1AB4510
};


// Class EmbarkEngine.OptionallyCookableAsset
// 0x0000 (0x0028 - 0x0028)
class UOptionallyCookableAsset : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.OptionallyCookableAsset"));
		return ptr;
	}

};


// Class EmbarkEngine.MaterialExpressionEmbarkCompositeMeshNormal
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionEmbarkCompositeMeshNormal : public UMaterialExpression
{
public:
	TEnumAsByte<EEmbarkVertexSpace>                    NormalSpace;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.MaterialExpressionEmbarkCompositeMeshNormal"));
		return ptr;
	}

};


// Class EmbarkEngine.MaterialExpressionEmbarkCompositeMeshPosition
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionEmbarkCompositeMeshPosition : public UMaterialExpression
{
public:
	TEnumAsByte<EEmbarkVertexSpace>                    PositionSpace;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.MaterialExpressionEmbarkCompositeMeshPosition"));
		return ptr;
	}

};


// Class EmbarkEngine.EmbarkLandscapeLayerList
// 0x0010 (0x0040 - 0x0030)
class UEmbarkLandscapeLayerList : public UDataAsset
{
public:
	TArray<class ULandscapeLayerInfoObject*>           Layers;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.EmbarkLandscapeLayerList"));
		return ptr;
	}

};


// Class EmbarkEngine.MaterialExpressionEmbarkLandscapeLayerBlend
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionEmbarkLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FEmbarkLayerBlendInput>              EmbarkLayers;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UEmbarkLandscapeLayerList*                   LayerList;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.MaterialExpressionEmbarkLandscapeLayerBlend"));
		return ptr;
	}

};


// Class EmbarkEngine.MaterialExpressionEmbarkLandscapeLayerSample
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionEmbarkLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            SharpnessInput;                                           // 0x004C(0x0014)
	float                                              ConstSharpness;                                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCompositeLayers;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	class UEmbarkLandscapeLayerList*                   LayerList;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkEngine.MaterialExpressionEmbarkLandscapeLayerSample"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
