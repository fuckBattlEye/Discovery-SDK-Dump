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

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0020 (0x00C0 - 0x00A0)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x00A0(0x0020)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraParameterTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraBoolParameterTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraColorParameterTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraFloatParameterTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraIntegerParameterTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0010 (0x00F8 - 0x00E8)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                                     // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                                  // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00EC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class ENiagaraSystemSpawnSectionEndBehavior   SectionEndBehavior;                                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class ENiagaraAgeUpdateMode                   AgeUpdateMode;                                            // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowScalability;                                        // 0x00F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraSystemSpawnSection"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0008 (0x00A8 - 0x00A0)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraSystemTrack"));
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	int                                                ChannelsUsed;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.MovieSceneNiagaraVectorParameterTrack"));
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x0010 (0x02D8 - 0x02C8)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bDestroyOnSystemFinish : 1;                               // 0x02D0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraActor"));
		return ptr;
	}


	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);//Offset:Discovery.exe+0x184E020
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);//Offset:Discovery.exe+0x184DF80
};


// Class Niagara.NiagaraBakerSettings
// 0x0198 (0x01C0 - 0x0028)
class UNiagaraBakerSettings : public UObject
{
public:
	float                                              StartSeconds;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DurationSeconds;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FramesPerSecond;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPreviewLooping : 1;                                      // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FIntPoint                                   FramesPerDimension;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraBakerTextureSettings>        OutputTextures;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)
	enum class ENiagaraBakerViewMode                   CameraViewportMode;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FVector                                     CameraViewportLocation[0x7];                              // 0x0058(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraViewportRotation[0x7];                              // 0x0100(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraOrbitDistance;                                      // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOV;                                                // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraOrthoWidth;                                         // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseCameraAspectRatio : 1;                                // 0x01B4(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	float                                              CameraAspectRatio;                                        // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRenderComponentOnly : 1;                                 // 0x01BC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraBakerSettings"));
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0290 (0x0820 - 0x0590)
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                    // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraTickBehavior                    TickBehavior;                                             // 0x0598(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                RandomSeedOffset;                                         // 0x059C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       // 0x05A0(0x00D8)
	unsigned char                                      bForceSolo : 1;                                           // 0x0678(0x0001) (Edit)
	unsigned char                                      bEnableGpuComputeDebug : 1;                               // 0x0678(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x37];                                      // 0x0679(0x0037) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x06B0(0x0001)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x06B0(0x0001)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x06B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoAttachWeldSimulatedBodies : 1;                       // 0x06B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x06B8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSystemFinished;                                         // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x06D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       AutoAttachSocketName;                                     // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AutoAttachLocationRule;                                   // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AutoAttachRotationRule;                                   // 0x06E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AutoAttachScaleRule;                                      // 0x06E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x9];                                       // 0x06E3(0x0009) MISSED OFFSET
	unsigned char                                      UnknownData05 : 4;                                        // 0x06EC(0x0001)
	unsigned char                                      bAllowScalability : 1;                                    // 0x06EC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x123];                                     // 0x06ED(0x0123) MISSED OFFSET
	class UNiagaraCullProxyComponent*                  CullProxy;                                                // 0x0810(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0818(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraComponent"));
		return ptr;
	}


	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue);//Offset:Discovery.exe+0x18540C0
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue);//Offset:Discovery.exe+0x1853CE0
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue);//Offset:Discovery.exe+0x1853910
	void SetVariableTextureRenderTarget(const struct FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget);//Offset:Discovery.exe+0x1852D50
	void SetVariableTexture(const struct FName& InVariableName, class UTexture* Texture);//Offset:Discovery.exe+0x1852E30
	void SetVariableStaticMesh(const struct FName& InVariableName, class UStaticMesh* InValue);//Offset:Discovery.exe+0x1852F10
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue);//Offset:Discovery.exe+0x1853ED0
	void SetVariablePosition(const struct FName& InVariableName, const struct FVector& InValue);//Offset:Discovery.exe+0x1853AF0
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object);//Offset:Discovery.exe+0x18530D0
	void SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object);//Offset:Discovery.exe+0x1852FF0
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue);//Offset:Discovery.exe+0x18542F0
	void SetVariableInt(const struct FName& InVariableName, int InValue);//Offset:Discovery.exe+0x1853570
	void SetVariableFloat(const struct FName& InVariableName, float InValue);//Offset:Discovery.exe+0x1853740
	void SetVariableBool(const struct FName& InVariableName, bool InValue);//Offset:Discovery.exe+0x1853380
	void SetVariableActor(const struct FName& InVariableName, class AActor* Actor);//Offset:Discovery.exe+0x18532A0
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior);//Offset:Discovery.exe+0x18549D0
	void SetSystemFixedBounds(const struct FBox& LocalBounds);//Offset:Discovery.exe+0x18548D0
	void SetSeekDelta(float InSeekDelta);//Offset:Discovery.exe+0x1854CA0
	void SetRenderingEnabled(bool bInRenderingEnabled);//Offset:Discovery.exe+0x1852900
	void SetRandomSeedOffset(int NewRandomSeedOffset);//Offset:Discovery.exe+0x1854510
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);//Offset:Discovery.exe+0x1852480
	void SetPaused(bool bInPaused);//Offset:Discovery.exe+0x18526A0
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);//Offset:Discovery.exe+0x18541D0
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);//Offset:Discovery.exe+0x1853DD0
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);//Offset:Discovery.exe+0x1853A00
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);//Offset:Discovery.exe+0x1853FC0
	void SetNiagaraVariablePosition(const struct FString& InVariableName, const struct FVector& InValue);//Offset:Discovery.exe+0x1853BE0
	void SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object);//Offset:Discovery.exe+0x18531B0
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);//Offset:Discovery.exe+0x18543E0
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);//Offset:Discovery.exe+0x1853650
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);//Offset:Discovery.exe+0x1853820
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);//Offset:Discovery.exe+0x1853470
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);//Offset:Discovery.exe+0x18531B0
	void SetMaxSimTime(float InMaxTime);//Offset:Discovery.exe+0x1854B00
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);//Offset:Discovery.exe+0x1854BD0
	void SetGpuComputeDebug(bool bEnableDebug);//Offset:Discovery.exe+0x1855110
	void SetForceSolo(bool bInForceSolo);//Offset:Discovery.exe+0x18551E0
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect);//Offset:Discovery.exe+0x1852270
	void SetEmitterFixedBounds(const struct FName& EmitterName, const struct FBox& LocalBounds);//Offset:Discovery.exe+0x1854720
	void SetDesiredAge(float InDesiredAge);//Offset:Discovery.exe+0x1854EB0
	void SetCustomTimeDilation(float Dilation);//Offset:Discovery.exe+0x1855070
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);//Offset:Discovery.exe+0x1854D70
	void SetAutoDestroy(bool bInAutoDestroy);//Offset:Discovery.exe+0x1854A60
	void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);//Offset:Discovery.exe+0x18552A0
	void SetAllowScalability(bool bAllow);//Offset:Discovery.exe+0x1852340
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);//Offset:Discovery.exe+0x1854F80
	void SeekToDesiredAge(float InDesiredAge);//Offset:Discovery.exe+0x1854E10
	void ResetSystem();//Offset:Discovery.exe+0x18529C0
	void ReinitializeSystem();//Offset:Discovery.exe+0x18529A0
	bool IsPaused();//Offset:Discovery.exe+0x1852670
	void InitForPerformanceBaseline();//Offset:Discovery.exe+0x18523E0
	enum class ENiagaraTickBehavior GetTickBehavior();//Offset:Discovery.exe+0x18549A0
	struct FBox GetSystemFixedBounds();//Offset:Discovery.exe+0x1854860
	float GetSeekDelta();//Offset:Discovery.exe+0x1854D40
	int GetRandomSeedOffset();//Offset:Discovery.exe+0x18544E0
	bool GetPreviewLODDistanceEnabled();//Offset:Discovery.exe+0x1852450
	float GetPreviewLODDistance();//Offset:Discovery.exe+0x1852400
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);//Offset:Discovery.exe+0x18529E0
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);//Offset:Discovery.exe+0x1852B20
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);//Offset:Discovery.exe+0x1852C60
	float GetMaxSimTime();//Offset:Discovery.exe+0x1854BA0
	bool GetLockDesiredAgeDeltaTimeToSeekDelta();//Offset:Discovery.exe+0x1854C70
	bool GetForceSolo();//Offset:Discovery.exe+0x18551B0
	bool GetForceLocalPlayerEffect();//Offset:Discovery.exe+0x1852240
	struct FBox GetEmitterFixedBounds(const struct FName& EmitterName);//Offset:Discovery.exe+0x1854650
	float GetDesiredAge();//Offset:Discovery.exe+0x1854F50
	class UNiagaraDataInterface* GetDataInterface(const struct FString& Name);//Offset:Discovery.exe+0x18525C0
	float GetCustomTimeDilation();//Offset:Discovery.exe+0x1855040
	class UNiagaraSystem* GetAsset();//Offset:Discovery.exe+0x1855280
	bool GetAllowScalability();//Offset:Discovery.exe+0x1852310
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();//Offset:Discovery.exe+0x1855010
	void ClearSystemFixedBounds();//Offset:Discovery.exe+0x1854840
	void ClearEmitterFixedBounds(const struct FName& EmitterName);//Offset:Discovery.exe+0x18545B0
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);//Offset:Discovery.exe+0x1852740
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);//Offset:Discovery.exe+0x1852820
};


// Class Niagara.NiagaraComponentPool
// 0x0058 (0x0080 - 0x0028)
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                 // 0x0028(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraComponentPool"));
		return ptr;
	}

};


// Class Niagara.NiagaraRendererProperties
// 0x00A8 (0x00D0 - 0x0028)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0028(0x0030) (Edit)
	int                                                SortOrderHint;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraRendererMotionVectorSetting     MotionVectorSetting;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FNiagaraVariableAttributeBinding            RendererEnabledBinding;                                   // 0x0060(0x0058) (Edit)
	bool                                               bIsEnabled;                                               // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowInCullProxies;                                      // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMotionBlurEnabled;                                       // 0x00BA(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x00BB(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraRendererProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraComponentRendererProperties
// 0x0140 (0x0210 - 0x00D0)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	class UClass*                                      ComponentType;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ComponentCountLimit;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            EnabledBinding;                                           // 0x00E0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x0138(0x0058) (Edit)
	bool                                               bAssignComponentsOnParticleID;                            // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                     // 0x0191(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActivateNewlyAquiredComponents;                      // 0x0192(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0193(0x0001) MISSED OFFSET
	int                                                RendererVisibility;                                       // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TemplateComponent;                                        // 0x0198(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FNiagaraComponentPropertyBinding>    PropertyBindings;                                         // 0x01A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x60];                                      // 0x01B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraComponentRendererProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraComponentSettings
// 0x0190 (0x01B8 - 0x0028)
class UNiagaraComponentSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SuppressActivationList
	unsigned char                                      UnknownData01[0x50];                                      // 0x0078(0x0050) UNKNOWN PROPERTY: ForceAutoPooolingList
	unsigned char                                      UnknownData02[0x50];                                      // 0x00C8(0x0050) UNKNOWN PROPERTY: SuppressEmitterList
	unsigned char                                      UnknownData03[0x50];                                      // 0x0118(0x0050) UNKNOWN PROPERTY: GPUEmitterAllowList
	unsigned char                                      UnknownData04[0x50];                                      // 0x0168(0x0050) UNKNOWN PROPERTY: GpuDataInterfaceDenyList

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraComponentSettings"));
		return ptr;
	}

};


// Class Niagara.NiagaraConvertInPlaceUtilityBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraConvertInPlaceUtilityBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraCullProxyComponent
// 0x0010 (0x0830 - 0x0820)
class UNiagaraCullProxyComponent : public UNiagaraComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0820(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraCullProxyComponent"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterface
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterface"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterface2DArrayTexture
// 0x0028 (0x0060 - 0x0038)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture2DArray*                             Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                TextureUserParameter;                                     // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterface2DArrayTexture"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceActorComponent
// 0x0040 (0x0078 - 0x0038)
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
public:
	bool                                               bRequireCurrentFrameData;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	TLazyObjectPtr<class AActor>                       SourceActor;                                              // 0x003C(0x001C) (Edit, IsPlainOldData)
	struct FNiagaraUserParameterBinding                ActorOrComponentParameter;                                // 0x0058(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceActorComponent"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRWBase
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRWBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArray
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	enum class ENiagaraGpuSyncMode                     GpuSyncMode;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0038(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                MaxElements;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArray"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayFloat
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                      FloatData;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayFloat"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayFloat2
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2D>                           FloatData;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayFloat2"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayFloat3
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector>                             FloatData;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayFloat3"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayPosition
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraPosition>                    PositionData;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayPosition"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayFloat4
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4>                            FloatData;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayFloat4"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayColor
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                        ColorData;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayColor"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayQuat
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat>                               QuatData;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayQuat"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary"));
		return ptr;
	}


	void STATIC_SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector& Value, bool bSizeToFit);//Offset:Discovery.exe+0x185B300
	void STATIC_SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector4& Value, bool bSizeToFit);//Offset:Discovery.exe+0x185AF40
	void STATIC_SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector4> ArrayData);//Offset:Discovery.exe+0x185C780
	void STATIC_SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector2D& Value, bool bSizeToFit);//Offset:Discovery.exe+0x185B4D0
	void STATIC_SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector2D> ArrayData);//Offset:Discovery.exe+0x185CB40
	void STATIC_SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData);//Offset:Discovery.exe+0x185CA00
	void STATIC_SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FQuat& Value, bool bSizeToFit);//Offset:Discovery.exe+0x185ABA0
	void STATIC_SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FQuat> ArrayData);//Offset:Discovery.exe+0x185C500
	void STATIC_SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector& Value, bool bSizeToFit);//Offset:Discovery.exe+0x185B130
	void STATIC_SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData);//Offset:Discovery.exe+0x185C8C0
	void STATIC_SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, int Value, bool bSizeToFit);//Offset:Discovery.exe+0x185A9E0
	void STATIC_SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<int> ArrayData);//Offset:Discovery.exe+0x185C3C0
	void STATIC_SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, float Value, bool bSizeToFit);//Offset:Discovery.exe+0x185B6A0
	void STATIC_SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<float> ArrayData);//Offset:Discovery.exe+0x185CC80
	void STATIC_SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FLinearColor& Value, bool bSizeToFit);//Offset:Discovery.exe+0x185AD70
	void STATIC_SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FLinearColor> ArrayData);//Offset:Discovery.exe+0x185C640
	void STATIC_SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, bool Value, bool bSizeToFit);//Offset:Discovery.exe+0x185A810
	void STATIC_SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<bool> ArrayData);//Offset:Discovery.exe+0x185C280
	struct FVector STATIC_GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x185A460
	struct FVector4 STATIC_GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x185A1E0
	TArray<struct FVector4> STATIC_GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185BCE0
	struct FVector2D STATIC_GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x185A5A0
	TArray<struct FVector2D> STATIC_GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185C040
	TArray<struct FVector> STATIC_GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185BF20
	struct FQuat STATIC_GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x1859F60
	TArray<struct FQuat> STATIC_GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185BAA0
	struct FVector STATIC_GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x185A320
	TArray<struct FVector> STATIC_GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185BE00
	int STATIC_GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x1859E30
	TArray<int> STATIC_GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185B980
	float STATIC_GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x185A6E0
	TArray<float> STATIC_GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185C160
	struct FLinearColor STATIC_GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x185A0A0
	TArray<struct FLinearColor> STATIC_GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185BBC0
	bool STATIC_GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index);//Offset:Discovery.exe+0x1859D00
	TArray<bool> STATIC_GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);//Offset:Discovery.exe+0x185B860
};


// Class Niagara.NiagaraDataInterfaceArrayInt32
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int>                                        IntData;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayInt32"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayBool
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                       BoolData;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayBool"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
// 0x0010 (0x0058 - 0x0048)
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraID>                          IntData;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceArrayNiagaraID"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
public:
	int                                                MaxTracesPerParticle;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRetraces;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceAsyncGpuTrace"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioSubmix
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceAudioSubmix"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Resolution;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScopeInMilliseconds;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceAudioOscilloscope"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioPlayer
// 0x0038 (0x0070 - 0x0038)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                                  SoundToPlay;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           Concurrency;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ParameterNames;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)
	bool                                               bLimitPlaysPerTick;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                MaxPlaysPerTick;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenComponentIsDestroyed;                            // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceAudioPlayer"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// 0x0010 (0x0050 - 0x0040)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int                                                Resolution;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseFloorDb;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceAudioSpectrum"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCamera
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int                                                PlayerControllerIndex;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireCurrentFrameData;                                 // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceCamera"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceCollisionQuery"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0038 (0x0070 - 0x0038)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                // 0x0038(0x0010) (ZeroConstructor)
	float                                              LUTMinTime;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTNumSamplesMinusOne;                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET
	unsigned char                                      bUseLUT : 1;                                              // 0x005C(0x0001) (Edit)
	unsigned char                                      bExposeCurve : 1;                                         // 0x005C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FName                                       ExposedName;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ExposedTexture;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceCurveBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (0x0270 - 0x0070)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x00F0(0x0080) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0170(0x0080) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01F0(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceColorCurve"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCubeTexture
// 0x0028 (0x0060 - 0x0038)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
	class UTextureCube*                                Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                TextureUserParameter;                                     // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceCubeTexture"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0020 (0x0058 - 0x0038)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x003C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceCurlNoise"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (0x00F0 - 0x0070)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0070(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceCurve"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceDebugDraw
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
public:
	uint32_t                                           OverrideMaxLineInstances;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceDebugDraw"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceEmitterProperties
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataInterfaceEmitterBinding         EmitterBinding;                                           // 0x0038(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceEmitterProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (0x0028 - 0x0028)
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraParticleCallbackHandler"));
		return ptr;
	}


	void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);//Offset:Discovery.exe+0x18600A0
};


// Class Niagara.NiagaraDataInterfaceExport
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                 // 0x0038(0x0020) (Edit)
	enum class ENDIExport_GPUAllocationMode            GPUAllocationMode;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                GPUAllocationFixedSize;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GPUAllocationPerParticleSize;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceExport"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGBuffer
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGBuffer"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0028 (0x0060 - 0x0038)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsY;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsMaxAxis;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumAttributes;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetGridFromMaxAxis;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FVector2D                                   WorldBBoxSize;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGrid2D"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x00C8 (0x0128 - 0x0060)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0060(0x0020) (Edit)
	enum class ENiagaraGpuBufferFormat                 OverrideBufferFormat;                                     // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideFormat : 1;                                      // 0x0081(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x56];                                      // 0x0082(0x0056) MISSED OFFSET
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                     // 0x00D8(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGrid2DCollection"));
		return ptr;
	}


	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);//Offset:Discovery.exe+0x18608D0
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);//Offset:Discovery.exe+0x1860A20
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex);//Offset:Discovery.exe+0x1860D20
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY);//Offset:Discovery.exe+0x1860B70
};


// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// 0x0020 (0x0148 - 0x0128)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
public:
	struct FString                                     EmitterName;                                              // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DIName;                                                   // 0x0138(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumCells;                                                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsMaxAxis;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESetResolutionMethod                    SetResolutionMethod;                                      // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     WorldBBoxSize;                                            // 0x0050(0x0018) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGrid3D"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// 0x0080 (0x00E8 - 0x0068)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int                                                NumAttributes;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0070(0x0020) (Edit)
	enum class ENiagaraGpuBufferFormat                 OverrideBufferFormat;                                     // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideFormat : 1;                                      // 0x0091(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x56];                                      // 0x0092(0x0056) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGrid3DCollection"));
		return ptr;
	}


	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ);//Offset:Discovery.exe+0x18613C0
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ);//Offset:Discovery.exe+0x1861570
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int AttributeIndex);//Offset:Discovery.exe+0x1860D20
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int* TilesX, int* TilesY, int* TileZ);//Offset:Discovery.exe+0x1861720
};


// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
// 0x0020 (0x0108 - 0x00E8)
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
public:
	struct FString                                     EmitterName;                                              // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DIName;                                                   // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// 0x0078 (0x00B0 - 0x0038)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                                   Size;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0040(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                     // 0x0060(0x0050) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceIntRenderTarget2D"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceLandscape
// 0x0020 (0x0058 - 0x0038)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                      SourceLandscape;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENDILandscape_SourceMode                SourceMode;                                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   PhysicalMaterials;                                        // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceLandscape"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// 0x0018 (0x0050 - 0x0038)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*              MeshRenderer;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceMeshRendererInfo"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (0x0070 - 0x0068)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerCell;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceNeighborGrid3D"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceOcclusion
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceOcclusion"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	struct FString                                     EmitterName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceParticleRead"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfacePlatformSet
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0038(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfacePlatformSet"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
// 0x0010 (0x0078 - 0x0068)
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	int                                                NumAttributes;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Precision;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ResetValue;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRasterizationGrid3D"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// 0x00D0 (0x0108 - 0x0038)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                                   Size;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraMipMapGeneration                MipMapGeneration;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraMipMapGenerationType            MipMapGenerationType;                                     // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritUserParameterSettings : 1;                        // 0x0043(0x0001) (Edit)
	unsigned char                                      bOverrideFormat : 1;                                      // 0x0043(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0048(0x0020) (Edit)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                     // 0x00B8(0x0050) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRenderTarget2D"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// 0x0080 (0x00B8 - 0x0038)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  Size;                                                     // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritUserParameterSettings : 1;                        // 0x0045(0x0001) (Edit)
	unsigned char                                      bOverrideFormat : 1;                                      // 0x0045(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0048(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                     // 0x0068(0x0050) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRenderTarget2DArray"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// 0x0078 (0x00B0 - 0x0038)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                Size;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritUserParameterSettings : 1;                        // 0x003D(0x0001) (Edit)
	unsigned char                                      bOverrideFormat : 1;                                      // 0x003D(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0040(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTargetCube*>    ManagedRenderTargets;                                     // 0x0060(0x0050) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRenderTargetCube"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// 0x0080 (0x00B8 - 0x0038)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  Size;                                                     // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritUserParameterSettings : 1;                        // 0x0045(0x0001) (Edit)
	unsigned char                                      bOverrideFormat : 1;                                      // 0x0045(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0048(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTargetVolume*>  ManagedRenderTargets;                                     // 0x0068(0x0050) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRenderTargetVolume"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// 0x0018 (0x0050 - 0x0038)
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
public:
	struct FString                                     Tag;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	bool                                               OnlyUseMoveable;                                          // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                MaxNumPrimitives;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:
	enum class ENiagaraGpuSyncMode                     GpuSyncMode;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0038(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                InitialValue;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceSimpleCounter"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0090 (0x00C8 - 0x0038)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	enum class ENDISkeletalMesh_SourceMode             SourceMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                        // 0x0048(0x0020) (Edit)
	class USkeletalMeshComponent*                      SourceComponent;                                          // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	enum class ENDISkeletalMesh_SkinningMode           SkinningMode;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0078(0x0010) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FName>                               FilteredBones;                                            // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               FilteredSockets;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ExcludeBoneName;                                          // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bExcludeBone : 1;                                         // 0x00B8(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                UvSetIndex;                                               // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireCurrentFrameData;                                 // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceSkeletalMesh"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0080 (0x00B8 - 0x0038)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                SplineUserParameter;                                      // 0x0040(0x0020) (Edit)
	bool                                               bUseLUT;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                NumLUTSteps;                                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceSpline"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0050 (0x0088 - 0x0038)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	enum class ENDIStaticMesh_SourceMode               SourceMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SourceComponent;                                          // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0058(0x0010) (Edit)
	bool                                               bUsePhysicsBodyVelocity;                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FName>                               FilteredSockets;                                          // 0x0070(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceStaticMesh"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0028 (0x0060 - 0x0038)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                TextureUserParameter;                                     // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceTexture"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
// 0x0060 (0x0098 - 0x0038)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                UObjectParameterBinding;                                  // 0x0038(0x0020) (Edit)
	TArray<struct FNiagaraUObjectPropertyReaderRemap>  PropertyRemap;                                            // 0x0058(0x0010) (Edit, ZeroConstructor)
	TLazyObjectPtr<class AActor>                       SourceActor;                                              // 0x0068(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UClass*                                      SourceActorComponentClass;                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceUObjectPropertyReader"));
		return ptr;
	}


	void STATIC_SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, const struct FName& UserParameterName, const struct FName& GraphName, const struct FName& RemapName);//Offset:Discovery.exe+0x1864040
};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (0x0170 - 0x0070)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00F0(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceVector2DCurve"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (0x0270 - 0x0070)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00F0(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0170(0x0080) (Edit)
	struct FRichCurve                                  WCurve;                                                   // 0x01F0(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceVector4Curve"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (0x01F0 - 0x0070)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00F0(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0170(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceVectorCurve"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileX;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileY;                                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileZ;                                                   // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceVectorField"));
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVolumeTexture
// 0x0028 (0x0060 - 0x0038)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UVolumeTexture*                              Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                TextureUserParameter;                                     // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDataInterfaceVolumeTexture"));
		return ptr;
	}

};


// Class Niagara.NiagaraDebugHUDSettings
// 0x0240 (0x0268 - 0x0028)
class UNiagaraDebugHUDSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	struct FNiagaraDebugHUDSettingsData                Data;                                                     // 0x0048(0x0220) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraDebugHUDSettings"));
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraEditorDataBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraEditorParametersAdapterBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEditorParametersAdapterBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraEditorParametersAdapterBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraSignificanceHandler
// 0x0000 (0x0028 - 0x0028)
class UNiagaraSignificanceHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSignificanceHandler"));
		return ptr;
	}

};


// Class Niagara.NiagaraSignificanceHandlerDistance
// 0x0000 (0x0028 - 0x0028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSignificanceHandlerDistance"));
		return ptr;
	}

};


// Class Niagara.NiagaraSignificanceHandlerAge
// 0x0000 (0x0028 - 0x0028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSignificanceHandlerAge"));
		return ptr;
	}

};


// Class Niagara.NiagaraEffectType
// 0x0078 (0x00A0 - 0x0028)
class UNiagaraEffectType : public UObject
{
public:
	bool                                               bAllowCullingForLocalPlayers;                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	enum class ENiagaraScalabilityUpdateFrequency      UpdateFrequency;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class ENiagaraCullReaction                    CullReaction;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0030(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                      // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FNiagaraSystemScalabilitySettings>   DetailLevelScalabilitySettings;                           // 0x0040(0x0010) (ZeroConstructor, Deprecated)
	struct FNiagaraSystemScalabilitySettingsArray      SystemScalabilitySettings;                                // 0x0050(0x0010) (Edit)
	struct FNiagaraEmitterScalabilitySettingsArray     EmitterScalabilitySettings;                               // 0x0060(0x0010) (Edit)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	class UNiagaraBaselineController*                  PerformanceBaselineController;                            // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FNiagaraPerfBaselineStats                   PerfBaselineStats;                                        // 0x0080(0x0010) (Config)
	struct FGuid                                       PerfBaselineVersion;                                      // 0x0090(0x0010) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraEffectType"));
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x02E8 (0x0310 - 0x0028)
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EParticleAllocationMode                 AllocationMode;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                PreAllocationCount;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0038(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0060(0x0028)
	enum class ENiagaraSimTarget                       SimTarget;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x0090(0x0038) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingBoundsDuration;                                   // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                           // 0x00D4(0x0014) (Deprecated)
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x00E8(0x0030) (Edit)
	struct FNiagaraEmitterScalabilityOverrides         ScalabilityOverrides;                                     // 0x0118(0x0010) (Edit)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0128(0x0001) (Edit)
	unsigned char                                      bFixedBounds : 1;                                         // 0x0128(0x0001) (Edit)
	unsigned char                                      bTrailingBounds : 1;                                      // 0x0128(0x0001) (Edit)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x0128(0x0001) (Deprecated)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x0128(0x0001) (Deprecated)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                       // 0x0128(0x0001) (Deprecated)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0128(0x0001) (Edit)
	unsigned char                                      bCombineEventSpawn : 1;                                   // 0x0128(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x0130(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                MaxGPUParticlesSpawnPerFrame;                             // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraParameterStore                      RendererBindings;                                         // 0x0138(0x0088)
	unsigned char                                      UnknownData05[0x18];                                      // 0x01C0(0x0018) MISSED OFFSET
	struct FString                                     UniqueEmitterName;                                        // 0x01D8(0x0010) (ZeroConstructor)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x01E8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x01F8(0x0010) (Edit, ZeroConstructor)
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                         // 0x0208(0x0010) (ZeroConstructor)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x0220(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0xE0];                                      // 0x0230(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraEmitter"));
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraEventReceiverEmitterAction"));
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles"));
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraFunctionLibrary"));
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams);//Offset:Discovery.exe+0x186AE20
	class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);//Offset:Discovery.exe+0x186A660
	class UNiagaraComponent* STATIC_SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams);//Offset:Discovery.exe+0x186AF40
	class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);//Offset:Discovery.exe+0x186AA60
	void STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture);//Offset:Discovery.exe+0x1869ED0
	void STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture);//Offset:Discovery.exe+0x186A010
	void STATIC_SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture2DArray* Texture);//Offset:Discovery.exe+0x1869ED0
	void STATIC_SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, TArray<struct FName> SamplingRegions);//Offset:Discovery.exe+0x186A150
	void STATIC_SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int CollisionGroup);//Offset:Discovery.exe+0x1869CC0
	void STATIC_SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int CollisionGroup);//Offset:Discovery.exe+0x1869B90
	void STATIC_ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int CollisionGroup);//Offset:Discovery.exe+0x1869A10
	void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);//Offset:Discovery.exe+0x186A520
	void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);//Offset:Discovery.exe+0x186A3E0
	void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);//Offset:Discovery.exe+0x186A2A0
	class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);//Offset:Discovery.exe+0x1869DF0
	int STATIC_AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1869AF0
};


// Class Niagara.NiagaraLensEffectBase
// 0x0088 (0x0360 - 0x02D8)
class ANiagaraLensEffectBase : public ANiagaraActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
	struct FTransform                                  DesiredRelativeTransform;                                 // 0x02E0(0x0060) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseAuthoredFOV;                                          // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAllowMultipleInstances : 1;                              // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bResetWhenRetriggered : 1;                                // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	TArray<class UClass*>                              EmittersToTreatAsSame;                                    // 0x0348(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class APlayerCameraManager*                        OwningCameraManager;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraLensEffectBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x02C8 (0x0398 - 0x00D0)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                            // 0x00D0(0x0001) (Edit)
	unsigned char                                      bAffectsTranslucency : 1;                                 // 0x00D0(0x0001) (Edit)
	unsigned char                                      bAlphaScalesBrightness : 1;                               // 0x00D0(0x0001) (Edit)
	unsigned char                                      bOverrideInverseExposureBlend : 1;                        // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultExponent;                                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FVector                                     ColorAdd;                                                 // 0x00E0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InverseExposureBlend;                                     // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RendererVisibility;                                       // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0100(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x0158(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x01B0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0208(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x0260(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x02B8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x0310(0x0058) (Edit)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0368(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraLightRendererProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0840 (0x0910 - 0x00D0)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraMeshRendererMeshProperties>  Meshes;                                                   // 0x00D0(0x0010) (Edit, ZeroConstructor)
	enum class ENiagaraRendererSourceDataMode          SourceMode;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraSortMode                        SortMode;                                                 // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x00E4(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x00E4(0x0001) (Edit)
	unsigned char                                      bGpuLowLatencyTranslucency : 1;                           // 0x00E4(0x0001) (Edit)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x00E4(0x0001) (Edit)
	unsigned char                                      bEnableFrustumCulling : 1;                                // 0x00E4(0x0001) (Edit)
	unsigned char                                      bEnableCameraDistanceCulling : 1;                         // 0x00E4(0x0001) (Edit)
	unsigned char                                      bEnableMeshFlipbook : 1;                                  // 0x00E4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                        // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   SubImageSize;                                             // 0x00F8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraMeshFacingMode                  FacingMode;                                               // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	unsigned char                                      bLockedAxisEnable : 1;                                    // 0x010C(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FVector                                     LockedAxis;                                               // 0x0110(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraMeshLockedAxisSpace             LockedAxisSpace;                                          // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              MinCameraDistance;                                        // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RendererVisibility;                                       // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0138(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0190(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x01E8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x0240(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0298(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x02F0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0348(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x03A0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x03F8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0450(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x04A8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x0500(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0558(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x05B0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x0608(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshIndexBinding;                                         // 0x0660(0x0058) (Edit)
	TArray<struct FNiagaraMaterialAttributeBinding>    MaterialParameterBindings;                                // 0x06B8(0x0010) (Edit, ZeroConstructor)
	struct FNiagaraVariableAttributeBinding            PrevPositionBinding;                                      // 0x06C8(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevScaleBinding;                                         // 0x0720(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevMeshOrientationBinding;                               // 0x0778(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevCameraOffsetBinding;                                  // 0x07D0(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevVelocityBinding;                                      // 0x0828(0x0058) (Transient)
	unsigned char                                      UnknownData05[0x68];                                      // 0x0880(0x0068) MISSED OFFSET
	class UStaticMesh*                                 ParticleMesh;                                             // 0x08E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     PivotOffset;                                              // 0x08F0(0x0018) (ZeroConstructor, Deprecated, IsPlainOldData)
	enum class ENiagaraMeshPivotOffsetSpace            PivotOffsetSpace;                                         // 0x0908(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0909(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraMeshRendererProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraMessageDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraMessageDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraMessageDataBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x00C8 (0x00F0 - 0x0028)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x0040(0x0088)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraParameterCollectionInstance"));
		return ptr;
	}


	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);//Offset:Discovery.exe+0x186E340
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);//Offset:Discovery.exe+0x186E220
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);//Offset:Discovery.exe+0x186E440
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);//Offset:Discovery.exe+0x186E030
	void SetIntParameter(const struct FString& InVariableName, int InValue);//Offset:Discovery.exe+0x186E530
	void SetFloatParameter(const struct FString& InVariableName, float InValue);//Offset:Discovery.exe+0x186E620
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);//Offset:Discovery.exe+0x186E130
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);//Offset:Discovery.exe+0x186E710
	struct FVector GetVectorParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186EA50
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186E990
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186EB10
	struct FQuat GetQuatParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186E8D0
	int GetIntParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186EBD0
	float GetFloatParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186EC80
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186E810
	bool GetBoolParameter(const struct FString& InVariableName);//Offset:Discovery.exe+0x186ED30
};


// Class Niagara.NiagaraParameterCollection
// 0x0038 (0x0060 - 0x0028)
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UMaterialParameterCollection*                SourceMaterialCollection;                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraParameterCollection"));
		return ptr;
	}

};


// Class Niagara.NiagaraParameterDefinitionsBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraParameterDefinitionsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraParameterDefinitionsBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraBaselineController
// 0x0040 (0x0068 - 0x0028)
class UNiagaraBaselineController : public UObject
{
public:
	float                                              TestDuration;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UNiagaraEffectType*                          EffectType;                                               // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ANiagaraPerfBaselineActor*                   Owner;                                                    // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: System

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraBaselineController"));
		return ptr;
	}


	bool OnTickTest();//Offset:Discovery.exe+0x1461900
	void OnOwnerTick(float DeltaTime);//Offset:Discovery.exe+0x186FE50
	void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);//Offset:Discovery.exe+0x186FEF0
	void OnBeginTest();//Offset:Discovery.exe+0x11BA100
	class UNiagaraSystem* GetSystem();//Offset:Discovery.exe+0x186FE20
};


// Class Niagara.NiagaraBaselineController_Basic
// 0x0018 (0x0080 - 0x0068)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
public:
	int                                                NumInstances;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UNiagaraComponent*>                   SpawnedComponents;                                        // 0x0070(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraBaselineController_Basic"));
		return ptr;
	}

};


// Class Niagara.NiagaraPerfBaselineActor
// 0x0010 (0x02D8 - 0x02C8)
class ANiagaraPerfBaselineActor : public AActor
{
public:
	class UNiagaraBaselineController*                  Controller;                                               // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        Label;                                                    // 0x02D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPerfBaselineActor"));
		return ptr;
	}

};


// Class Niagara.NiagaraPrecompileContainer
// 0x0018 (0x0040 - 0x0028)
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                  // 0x0028(0x0010) (ZeroConstructor)
	class UNiagaraSystem*                              System;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPrecompileContainer"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0x0000 (0x02C8 - 0x02C8)
class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewBase"));
		return ptr;
	}


	void SetSystem(class UNiagaraSystem* InSystem);//Offset:Discovery.exe+0x327F8B0
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);//Offset:Discovery.exe+0x327F8B0
};


// Class Niagara.NiagaraPreviewAxis
// 0x0000 (0x0028 - 0x0028)
class UNiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis"));
		return ptr;
	}


	int Num();//Offset:Discovery.exe+0x1872090
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);//Offset:Discovery.exe+0x1871EE0
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (0x0038 - 0x0028)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamInt32"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamFloat"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0020 (0x0058 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0030 (0x0068 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                      // 0x0038(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x0050(0x0018) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamVector"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0048 (0x0080 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector4                                    Min;                                                      // 0x0040(0x0020) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Max;                                                      // 0x0060(0x0020) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamVector4"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (0x0058 - 0x0038)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor"));
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x0050 (0x0318 - 0x02C8)
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                   // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraPreviewGridResetMode            ResetMode;                                                // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             // 0x02D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PreviewClass;                                             // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingX;                                                 // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingY;                                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumX;                                                     // 0x02F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumY;                                                     // 0x02FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UChildActorComponent*>                PreviewComponents;                                        // 0x0300(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraPreviewGrid"));
		return ptr;
	}


	void SetPaused(bool bPaused);//Offset:Discovery.exe+0x1872DD0
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);//Offset:Discovery.exe+0x1872D20
	void DeactivatePreviews();//Offset:Discovery.exe+0x1872E70
	void ActivatePreviews(bool bReset);//Offset:Discovery.exe+0x1872E90
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0970 (0x0A40 - 0x00D0)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                 // 0x00D8(0x0020) (Edit)
	enum class ENiagaraRibbonFacingMode                FacingMode;                                               // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FNiagaraRibbonUVSettings                    UV0Settings;                                              // 0x0100(0x0038) (Edit)
	struct FNiagaraRibbonUVSettings                    UV1Settings;                                              // 0x0138(0x0038) (Edit)
	enum class ENiagaraRibbonDrawDirection             DrawDirection;                                            // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraRibbonShapeMode                 Shape;                                                    // 0x0171(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAccurateGeometry;                                  // 0x0172(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0173(0x0001) MISSED OFFSET
	int                                                WidthSegmentationCount;                                   // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MultiPlaneCount;                                          // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TubeSubdivisions;                                         // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraRibbonShapeCustomVertex>     CustomVertices;                                           // 0x0180(0x0010) (Edit, ZeroConstructor)
	float                                              CurveTension;                                             // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraRibbonTessellationMode          TessellationMode;                                         // 0x0194(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantFactor;                                       // 0x019C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	float                                              TessellationAngle;                                        // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenSpaceTessellation;                                 // 0x01A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x01A8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0200(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0258(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x02B0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x0308(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x0360(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x03B8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0410(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x0468(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x04C0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0518(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0570(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x05C8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0620(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonUVDistance;                                         // 0x0678(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            U0OverrideBinding;                                        // 0x06D0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            V0RangeOverrideBinding;                                   // 0x0728(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            U1OverrideBinding;                                        // 0x0780(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            V1RangeOverrideBinding;                                   // 0x07D8(0x0058) (Edit)
	TArray<struct FNiagaraMaterialAttributeBinding>    MaterialParameterBindings;                                // 0x0830(0x0010) (Edit, ZeroConstructor)
	struct FNiagaraVariableAttributeBinding            PrevPositionBinding;                                      // 0x0840(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevRibbonWidthBinding;                                   // 0x0898(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevRibbonFacingBinding;                                  // 0x08F0(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevRibbonTwistBinding;                                   // 0x0948(0x0058) (Transient)
	unsigned char                                      UnknownData05[0xA0];                                      // 0x09A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraRibbonRendererProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x0320 (0x0348 - 0x0028)
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	enum class ENiagaraScriptUsage                     Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FGuid                                       UsageId;                                                  // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0040(0x0088)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                // 0x00C8(0x00A8)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                           // 0x0170(0x0010) (ZeroConstructor)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x0180(0x0058)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x01E8(0x0138)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x0320(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x0330(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraScript"));
		return ptr;
	}


	void RaiseOnGPUCompilationComplete();//Offset:Discovery.exe+0x155C060
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraScriptSourceBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x00B8 (0x00F0 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	bool                                               bSystemsSupportLargeWorldCoordinates;                     // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnforceStrictStackTypes;                                 // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FSoftObjectPath                             DefaultEffectType;                                        // 0x0040(0x0018) (Edit, ZeroConstructor, Config)
	struct FLinearColor                                PositionPinTypeColor;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FText>                               QualityLevels;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	TMap<struct FString, struct FText>                 ComponentRendererWarningsPerClass;                        // 0x0078(0x0050) (Edit, Config)
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ENiagaraGpuBufferFormat                 DefaultGridFormat;                                        // 0x00C9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;                       // 0x00CC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CA(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;                                 // 0x00D0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              DefaultLightInverseExposureBlend;                         // 0x00D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>         NDISkelMesh_GpuMaxInfluences;                             // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;                     // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;                 // 0x00DA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               NDIStaticMesh_AllowDistanceFields;                        // 0x00DB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>> NDICollisionQuery_AsyncGpuTraceProviderOrder;             // 0x00E0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSettings"));
		return ptr;
	}

};


// Class Niagara.NiagaraSimulationStageBase
// 0x0018 (0x0040 - 0x0028)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                              Script;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SimulationStageName;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSimulationStageBase"));
		return ptr;
	}

};


// Class Niagara.NiagaraSimulationStageGeneric
// 0x0160 (0x01A0 - 0x0040)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	struct FNiagaraVariableAttributeBinding            EnabledBinding;                                           // 0x0040(0x0058) (Edit)
	enum class ENiagaraIterationSource                 IterationSource;                                          // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Iterations;                                               // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            NumIterationsBinding;                                     // 0x00A0(0x0058) (Edit)
	unsigned char                                      bSpawnOnly : 1;                                           // 0x00F8(0x0001) (Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	enum class ENiagaraSimStageExecuteBehavior         ExecuteBehavior;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	unsigned char                                      bDisablePartialParticleUpdate : 1;                        // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FNiagaraVariableDataInterfaceBinding        DataInterface;                                            // 0x0108(0x0020) (Edit)
	unsigned char                                      bParticleIterationStateEnabled : 1;                       // 0x0128(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            ParticleIterationStateBinding;                            // 0x0130(0x0058) (Edit)
	struct FIntPoint                                   ParticleIterationStateRange;                              // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGpuDispatchForceLinear : 1;                              // 0x0190(0x0001) (Edit)
	unsigned char                                      bOverrideGpuDispatchNumThreads : 1;                       // 0x0190(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	struct FIntVector                                  OverrideGpuDispatchNumThreads;                            // 0x0194(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSimulationStageGeneric"));
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0A58 (0x0B28 - 0x00D0)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraRendererSourceDataMode          SourceMode;                                               // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                 // 0x00E0(0x0020) (Edit)
	enum class ENiagaraSpriteAlignment                 Alignment;                                                // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraSpriteFacingMode                FacingMode;                                               // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0108(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MacroUVRadius;                                            // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ENiagaraSortMode                        SortMode;                                                 // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x0120(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x0130(0x0001) (Edit)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x0130(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x0130(0x0001) (Edit)
	unsigned char                                      bGpuLowLatencyTranslucency : 1;                           // 0x0130(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	enum class ENiagaraRendererPixelCoverageMode       PixelCoverageMode;                                        // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              PixelCoverageBlend;                                       // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinFacingCameraBlendDistance;                             // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableCameraDistanceCulling : 1;                         // 0x0144(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	float                                              MinCameraDistance;                                        // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RendererVisibility;                                       // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0158(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x01B0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0208(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x0260(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x02B8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x0310(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x0368(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x03C0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0418(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0470(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x04C8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0520(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0578(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x05D0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            PivotOffsetBinding;                                       // 0x0628(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0680(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x06D8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0730(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x0788(0x0058) (Edit)
	TArray<struct FNiagaraMaterialAttributeBinding>    MaterialParameterBindings;                                // 0x07E0(0x0010) (Edit, ZeroConstructor)
	struct FNiagaraVariableAttributeBinding            PrevPositionBinding;                                      // 0x07F0(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevVelocityBinding;                                      // 0x0848(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevSpriteRotationBinding;                                // 0x08A0(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevSpriteSizeBinding;                                    // 0x08F8(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevSpriteFacingBinding;                                  // 0x0950(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevSpriteAlignmentBinding;                               // 0x09A8(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevCameraOffsetBinding;                                  // 0x0A00(0x0058) (Transient)
	struct FNiagaraVariableAttributeBinding            PrevPivotOffsetBinding;                                   // 0x0A58(0x0058) (Transient)
	unsigned char                                      UnknownData07[0x78];                                      // 0x0AB0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSpriteRendererProperties"));
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x0510 (0x0540 - 0x0030)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	unsigned char                                      bSupportLargeWorldCoordinates : 1;                        // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideCastShadow : 1;                                  // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideReceivesDecals : 1;                              // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideRenderCustomDepth : 1;                           // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideCustomDepthStencilValue : 1;                     // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideCustomDepthStencilWriteMask : 1;                 // 0x0030(0x0001) (Edit)
	unsigned char                                      bCastShadow : 1;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	enum class ERendererStencilMask                    CustomDepthStencilWriteMask;                              // 0x0032(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDumpDebugSystemInfo;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDumpDebugEmitterInfo;                                    // 0x0039(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003A(0x0001) MISSED OFFSET
	bool                                               bRequireCurrentFrameData;                                 // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFixedBounds : 1;                                         // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UNiagaraEffectType*                          EffectType;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideScalabilitySettings;                             // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideAllowCullingForLocalPlayers : 1;                 // 0x004C(0x0001) (Edit)
	unsigned char                                      bAllowCullingForLocalPlayersOverride : 1;                 // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	TArray<struct FNiagaraSystemScalabilityOverride>   ScalabilityOverrides;                                     // 0x0050(0x0010) (ZeroConstructor, Deprecated)
	struct FNiagaraSystemScalabilityOverrides          SystemScalabilityOverrides;                               // 0x0060(0x0010) (Edit)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0070(0x0010) (ZeroConstructor)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0080(0x0010) (Edit, ZeroConstructor)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                       // 0x00B0(0x0228)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x02D8(0x00D8)
	struct FBox                                        FixedBounds;                                              // 0x03B0(0x0038) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDeactivate;                                          // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeterminism;                                             // 0x03E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFixedTickDelta;                                          // 0x03FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              FixedTickDeltaTime;                                       // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNeedsGPUContextInitForDataInterfaces;                    // 0x0405(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0406(0x0002) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x0408(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x128];                                     // 0x0418(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Niagara.NiagaraSystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
