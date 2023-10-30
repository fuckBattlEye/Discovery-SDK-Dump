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

// Class EmbarkFXDirector.EmbarkFXDirectorDecalComponent
// 0x0000 (0x0320 - 0x0320)
class UEmbarkFXDirectorDecalComponent : public UDecalComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFXDirector.EmbarkFXDirectorDecalComponent"));
		return ptr;
	}

};


// Class EmbarkFXDirector.EmbarkFXDirector
// 0x0290 (0x02C0 - 0x0030)
class UEmbarkFXDirector : public UWorldSubsystem
{
public:
	int                                                MaxCost_PrimaryTick;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxCost_SecondaryTick;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxCostPerTask;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxCuesPerInstance;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultRelevantTimeSeconds;                               // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27C];                                     // 0x0044(0x027C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFXDirector.EmbarkFXDirector"));
		return ptr;
	}

};


// Class EmbarkFXDirector.EmbarkFXDirectorStatics
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFXDirectorStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFXDirector.EmbarkFXDirectorStatics"));
		return ptr;
	}


	struct FEmbarkFXCue STATIC_UpdateCue_GetRef(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1986E70
	void STATIC_StopFX(class UObject* ContextObject, float FadeOutSeconds, bool bImmediate, struct FEmbarkFXHandle* Handle);//Offset:Discovery.exe+0x1989170
	void STATIC_SetInstanceTag(class UObject* ContextObject, class UObject* Instantiator, unsigned char Specifier, int MinCondition, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1986010
	void STATIC_SetForegroundFlags(class UObject* ContextObject, enum class EEmbarkFXForegroundFlags Flags, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19858A0
	void STATIC_SetFieldOfView(class UObject* ContextObject, float FieldOfView, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1985B00
	void STATIC_SetBinding(class UObject* ContextObject, enum class EEmbarkFXBinding Binding, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1983D40
	void STATIC_SetAutoRemove(class UObject* ContextObject, bool bAutoRemove, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19868D0
	void STATIC_SetAutoPosition(class UObject* ContextObject, enum class EEmbarkFXAutoPosition AutoPosition, enum class EEmbarkFXAutoPositionFunc AutoPositionFunc, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1985D60
	void STATIC_RemoveTickPrerequisiteComponent(class UObject* ContextObject, class UActorComponent* PrerequisiteComponent);//Offset:Discovery.exe+0x1987700
	void STATIC_RemoveTickPrerequisiteActor(class UObject* ContextObject, class AActor* PrerequisiteActor);//Offset:Discovery.exe+0x19878C0
	void STATIC_RemoveCue(class UObject* ContextObject, float FadeOutSeconds, bool bImmediate, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXHandle* Handle);//Offset:Discovery.exe+0x1986B40
	void STATIC_PoolDynamicMaterialInstance(class UObject* ContextObject, class UMaterialInstanceDynamic* DynamicMaterialInstance);//Offset:Discovery.exe+0x1987540
	class UMaterialInstanceDynamic* STATIC_NextOrCreateDynamicMaterialInstance(class UObject* ContextObject, class UMaterialInterface* Material);//Offset:Discovery.exe+0x1987620
	bool STATIC_IsValidHandle(const struct FEmbarkFXHandle& Handle);//Offset:Discovery.exe+0x1986550
	bool STATIC_IsEnabled(class UObject* WorldContextObject);//Offset:Discovery.exe+0x198A520
	bool STATIC_IsCuePendingOrActive(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1986780
	bool STATIC_IsAudible(class UObject* ContextObject, const struct FVector& Location, float MaxDistance);//Offset:Discovery.exe+0x198A3E0
	void STATIC_InvalidateHandle(struct FEmbarkFXHandle* Handle);//Offset:Discovery.exe+0x19864B0
	class UActorComponent* STATIC_GetComponent(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, class UClass* Class, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1986310
	bool STATIC_EqualHandles(const struct FEmbarkFXHandle& Handle1, const struct FEmbarkFXHandle& Handle2);//Offset:Discovery.exe+0x18E0430
	void STATIC_EndContext(class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1987300
	void STATIC_DetachFX(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle);//Offset:Discovery.exe+0x1989300
	void STATIC_DetachCue(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1986D30
	struct FEmbarkFXHandle STATIC_CueUISound(class UObject* ContextObject, class USoundBase* Sound, float VolumeMultiplier, float FadeInSeconds);//Offset:Discovery.exe+0x198A260
	void STATIC_CueFXVector(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FVector& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x19882D0
	void STATIC_CueFXTrigger(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988B70
	void STATIC_CueFXTransform(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FTransform& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1987B60
	void STATIC_CueFXQuat(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FQuat& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988080
	void STATIC_CueFXPosition(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FVector& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988510
	void STATIC_CueFXInt(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, int Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988960
	void STATIC_CueFXFloat(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, float Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988750
	void STATIC_CueFXColor(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FLinearColor& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1987E60
	struct FEmbarkFXHandle STATIC_CueFXCallbackAsync(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, float DelaySeconds, int64_t UserData);//Offset:Discovery.exe+0x19893E0
	struct FEmbarkFXHandle STATIC_CueFXCallback(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, float DelaySeconds, int64_t UserData);//Offset:Discovery.exe+0x19895B0
	void STATIC_CueFXBool(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, bool bValue, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988D30
	void STATIC_CueFXAutoPosition(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FVector& Location, enum class EEmbarkFXAutoPosition AutoPosition, enum class EEmbarkFXAutoPositionFunc AutoPositionFunc, bool bSetInstanceTag);//Offset:Discovery.exe+0x1988F50
	struct FEmbarkFXHandle STATIC_CueFXAttached(class UObject* ContextObject, class UNiagaraSystem* System, class USoundBase* Sound, class UMaterialInterface* DecalMaterial, class USceneComponent* AttachToComponent, const struct FName& AttachToName, TEnumAsByte<EAttachLocation> AttachLocation, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float FadeInSeconds, const struct FVector& DecalSize, float DecalLifeTimeSeconds, bool bRandomDecalRotation, bool bSetInstanceTag);//Offset:Discovery.exe+0x1989780
	struct FEmbarkFXHandle STATIC_CueFXAtLocation(class UObject* ContextObject, class UNiagaraSystem* System, class USoundBase* Sound, class UMaterialInterface* DecalMaterial, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float FadeInSeconds, const struct FVector& DecalSize, float DecalLifeTimeSeconds, bool bRandomDecalRotation, bool bSetInstanceTag);//Offset:Discovery.exe+0x1989D80
	struct FString STATIC_CheckCueInvariants(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19865F0
	void STATIC_BeginContext(class UObject* ContextObject, const struct FName& Name, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1987400
	TArray<struct FVector> STATIC_AddVectorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197F660
	void STATIC_AddVectorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19812B0
	void STATIC_AddVector(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1982D10
	void STATIC_AddTrigger(class UObject* ContextObject, const struct FName& Name, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1983830
	TArray<struct FTransform> STATIC_AddTransformArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197EC40
	void STATIC_AddTransformArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FTransform> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1980A10
	void STATIC_AddTransform(class UObject* ContextObject, const struct FName& Name, const struct FTransform& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19823C0
	void STATIC_AddTickPrerequisiteComponent(class UObject* ContextObject, class UActorComponent* PrerequisiteComponent);//Offset:Discovery.exe+0x19877E0
	void STATIC_AddTickPrerequisiteActor(class UObject* ContextObject, class AActor* PrerequisiteActor);//Offset:Discovery.exe+0x19879A0
	TArray<struct FQuat> STATIC_AddQuatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197F300
	void STATIC_AddQuatArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FQuat> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1980FD0
	void STATIC_AddQuat(class UObject* ContextObject, const struct FName& Name, const struct FQuat& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1982A20
	TArray<struct FVector> STATIC_AddPositionArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197F9C0
	void STATIC_AddPositionArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1981590
	void STATIC_AddPosition(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1982FF0
	struct FEmbarkFXParticleParams STATIC_AddParticleParams_GetRef(class UObject* ContextObject, class UNiagaraSystem* NiagaraSystem, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19850F0
	void STATIC_AddParticleParams(class UObject* ContextObject, const struct FEmbarkFXParticleParams& ParticleParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1984E70
	TArray<class UObject*> STATIC_AddObjectArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197E8E0
	void STATIC_AddObjectArray(class UObject* ContextObject, const struct FName& Name, TArray<class UObject*> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1980730
	void STATIC_AddObject(class UObject* ContextObject, const struct FName& Name, class UObject* Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1982110
	TArray<int> STATIC_AddIntArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x1980080
	void STATIC_AddIntArray(class UObject* ContextObject, const struct FName& Name, TArray<int> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1981870
	void STATIC_AddInt(class UObject* ContextObject, const struct FName& Name, int Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1983580
	TArray<float> STATIC_AddFloatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197FD20
	void STATIC_AddFloatArray(class UObject* ContextObject, const struct FName& Name, TArray<float> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1981B50
	void STATIC_AddFloat(class UObject* ContextObject, const struct FName& Name, float Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19832D0
	void STATIC_AddExternalFXCost(class UObject* ContextObject, int Cost);//Offset:Discovery.exe+0x1987A80
	struct FEmbarkFXDecalParams STATIC_AddDecalParams_GetRef(class UObject* ContextObject, class UMaterialInterface* Material, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19846A0
	void STATIC_AddDecalParams(class UObject* ContextObject, const struct FEmbarkFXDecalParams& DecalParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19843D0
	struct FEmbarkFXCue STATIC_AddCue_GetRef(class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19871F0
	TArray<struct FLinearColor> STATIC_AddColorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x197EFA0
	void STATIC_AddColorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FLinearColor> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1980CF0
	void STATIC_AddColor(class UObject* ContextObject, const struct FName& Name, const struct FLinearColor& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1982750
	struct FEmbarkFXCallbackParams STATIC_AddCallbackParams_GetRef(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19840F0
	void STATIC_AddCallbackParams(class UObject* ContextObject, const struct FEmbarkFXCallbackParams& CallbackParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1983E80
	TArray<bool> STATIC_AddBoolArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex);//Offset:Discovery.exe+0x19803E0
	void STATIC_AddBoolArray(class UObject* ContextObject, const struct FName& Name, TArray<bool> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1981E30
	void STATIC_AddBool(class UObject* ContextObject, const struct FName& Name, bool bValue, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1983A90
	struct FEmbarkFXAudioParams STATIC_AddAudioParams_GetRef(class UObject* ContextObject, class USoundBase* Sound, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1984BE0
	void STATIC_AddAudioParams(class UObject* ContextObject, const struct FEmbarkFXAudioParams& AudioParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1984930
	struct FEmbarkFXAttachmentParams STATIC_AddAttachmentParams_GetRef(class UObject* ContextObject, class USceneComponent* AttachToComponent, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x19855F0
	void STATIC_AddAttachmentParams(class UObject* ContextObject, const struct FEmbarkFXAttachmentParams& AttachmentParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1985360
};


// Class EmbarkFXDirector.EmbarkFXDirectorContextMixins
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFXDirectorContextMixins : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFXDirector.EmbarkFXDirectorContextMixins"));
		return ptr;
	}


	struct FEmbarkFXCue STATIC_UpdateCue_GetRef(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x198D4A0
	void STATIC_SetBinding(class UObject* ContextObject, enum class EEmbarkFXBinding Binding, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x198D350
	struct FEmbarkFXCue STATIC_AddCue_GetRef(class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x198D600
};


// Class EmbarkFXDirector.EmbarkFXHandleMixins
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFXHandleMixins : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFXDirector.EmbarkFXHandleMixins"));
		return ptr;
	}


	void STATIC_Unpack(int64_t Value, struct FEmbarkFXHandle* Handle);//Offset:Discovery.exe+0x198DE20
	void STATIC_RemoveCue(class UObject* ContextObject, float FadeOutSeconds, bool bImmediate, struct FEmbarkFXHandle* Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x198DAA0
	int64_t STATIC_Pack(const struct FEmbarkFXHandle& Handle);//Offset:Discovery.exe+0x198DF10
	bool STATIC_IsValidHandle(const struct FEmbarkFXHandle& Handle);//Offset:Discovery.exe+0x198DFC0
	bool STATIC_IsCuePendingOrActive(const struct FEmbarkFXHandle& Handle, class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x198E0A0
	void STATIC_InvalidateHandle(struct FEmbarkFXHandle* Handle);//Offset:Discovery.exe+0x19864B0
	void STATIC_DetachCue(const struct FEmbarkFXHandle& Handle, class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x198DCB0
	struct FString STATIC_CheckCueInvariants(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19865F0
};


// Class EmbarkFXDirector.EmbarkFXCueMixins
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFXCueMixins : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFXDirector.EmbarkFXCueMixins"));
		return ptr;
	}


	void STATIC_SetInstanceTag(class UObject* ContextObject, class UObject* Instantiator, unsigned char Specifier, int MinCondition, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1996490
	void STATIC_SetForegroundFlags(class UObject* ContextObject, enum class EEmbarkFXForegroundFlags Flags, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1995A30
	void STATIC_SetFieldOfView(class UObject* ContextObject, float FieldOfView, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1995CB0
	void STATIC_SetAutoRemove(class UObject* ContextObject, bool bAutoRemove, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1996200
	void STATIC_SetAutoPosition(class UObject* ContextObject, enum class EEmbarkFXAutoPosition AutoPosition, enum class EEmbarkFXAutoPositionFunc AutoPositionFunc, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1995F30
	TArray<struct FVector> STATIC_AddVectorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198F640
	void STATIC_AddVectorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19913B0
	void STATIC_AddVector(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1992FE0
	void STATIC_AddTrigger(class UObject* ContextObject, const struct FName& Name, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1993C00
	TArray<struct FTransform> STATIC_AddTransformArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198EBC0
	void STATIC_AddTransformArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FTransform> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1990AB0
	void STATIC_AddTransform(class UObject* ContextObject, const struct FName& Name, const struct FTransform& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1992580
	TArray<struct FQuat> STATIC_AddQuatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198F2C0
	void STATIC_AddQuatArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FQuat> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19910B0
	void STATIC_AddQuat(class UObject* ContextObject, const struct FName& Name, const struct FQuat& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1992CA0
	TArray<struct FVector> STATIC_AddPositionArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198F9C0
	void STATIC_AddPositionArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19916B0
	void STATIC_AddPosition(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1993320
	struct FEmbarkFXParticleParams STATIC_AddParticleParams_GetRef(class UObject* ContextObject, class UNiagaraSystem* NiagaraSystem, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1995220
	void STATIC_AddParticleParams(class UObject* ContextObject, const struct FEmbarkFXParticleParams& ParticleParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1994F80
	TArray<class UObject*> STATIC_AddObjectArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198E840
	void STATIC_AddObjectArray(class UObject* ContextObject, const struct FName& Name, TArray<class UObject*> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19907B0
	void STATIC_AddObject(class UObject* ContextObject, const struct FName& Name, class UObject* Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19922B0
	TArray<int> STATIC_AddIntArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x19900C0
	void STATIC_AddIntArray(class UObject* ContextObject, const struct FName& Name, TArray<int> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19919B0
	void STATIC_AddInt(class UObject* ContextObject, const struct FName& Name, int Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1993930
	TArray<float> STATIC_AddFloatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198FD40
	void STATIC_AddFloatArray(class UObject* ContextObject, const struct FName& Name, TArray<float> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1991CB0
	void STATIC_AddFloat(class UObject* ContextObject, const struct FName& Name, float Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1993660
	struct FEmbarkFXDecalParams STATIC_AddDecalParams_GetRef(class UObject* ContextObject, class UMaterialInterface* Material, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1994750
	void STATIC_AddDecalParams(class UObject* ContextObject, const struct FEmbarkFXDecalParams& DecalParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1994460
	TArray<struct FLinearColor> STATIC_AddColorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x198EF40
	void STATIC_AddColorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FLinearColor> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1990DB0
	void STATIC_AddColor(class UObject* ContextObject, const struct FName& Name, const struct FLinearColor& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1992990
	struct FEmbarkFXCallbackParams STATIC_AddCallbackParams_GetRef(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1994160
	void STATIC_AddCallbackParams(class UObject* ContextObject, const struct FEmbarkFXCallbackParams& CallbackParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue);//Offset:Discovery.exe+0x1983E80
	TArray<bool> STATIC_AddBoolArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex);//Offset:Discovery.exe+0x1990440
	void STATIC_AddBoolArray(class UObject* ContextObject, const struct FName& Name, TArray<bool> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1991FB0
	void STATIC_AddBool(class UObject* ContextObject, const struct FName& Name, bool bValue, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1993E80
	struct FEmbarkFXAudioParams STATIC_AddAudioParams_GetRef(class UObject* ContextObject, class USoundBase* Sound, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1994CD0
	void STATIC_AddAudioParams(class UObject* ContextObject, const struct FEmbarkFXAudioParams& AudioParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1994A00
	struct FEmbarkFXAttachmentParams STATIC_AddAttachmentParams_GetRef(class UObject* ContextObject, class USceneComponent* AttachToComponent, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x1995760
	void STATIC_AddAttachmentParams(class UObject* ContextObject, const struct FEmbarkFXAttachmentParams& AttachmentParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context);//Offset:Discovery.exe+0x19954B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
