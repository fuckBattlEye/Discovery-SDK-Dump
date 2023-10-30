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

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// 0x0048 (0x0078 - 0x0030)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                              Template;                                                 // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x0018) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0058(0x0018) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyAtEnd;                                            // 0x0070(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect"));
		return ptr;
	}


	class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);//Offset:Discovery.exe+0x18A17C0
};


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// 0x0070 (0x00E8 - 0x0078)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	bool                                               bEnableNormalizedNotifyProgress;                          // 0x0078(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FName                                       NotifyProgressUserParameter;                              // 0x007C(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FCurveParameterPair>                 AnimCurves;                                               // 0x0088(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0098(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced"));
		return ptr;
	}


	float GetNotifyProgress(class UMeshComponent* MeshComp);//Offset:Discovery.exe+0x18A1B90
};


// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// 0x0098 (0x00D0 - 0x0038)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                              Template;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0070(0x0018) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsoluteScale;                                           // 0x0088(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0089(0x0037) MISSED OFFSET
	unsigned char                                      Attached : 1;                                             // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x00C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect"));
		return ptr;
	}


	class UFXSystemComponent* GetSpawnedEffect();//Offset:Discovery.exe+0x18A1EC0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
