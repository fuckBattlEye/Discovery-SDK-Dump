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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0020 (0x0370 - 0x0350)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                               AnimationToPlay;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PermutationTimeOffset;                                    // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class UAnimSharingInstance*                        Instance;                                                 // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimSharingStateInstance"));
		return ptr;
	}


	void GetInstancedActors(TArray<class AActor*>* Actors);//Offset:Discovery.exe+0x2CDF4D0
};


// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0020 (0x0370 - 0x0350)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       FromComponent;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlendBool;                                               // 0x0364(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0365(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimSharingTransitionInstance"));
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0020 (0x0370 - 0x0350)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       BaseComponent;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x0364(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0365(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimSharingAdditiveInstance"));
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingInstance
// 0x00F8 (0x0120 - 0x0028)
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	class UAnimationSharingStateProcessor*             StateProcessor;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0090(0x0038) MISSED OFFSET
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                   // 0x00C8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	class UEnum*                                       StateEnum;                                                // 0x00E8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class AActor*                                      SharingActor;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x00F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimSharingInstance"));
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingManager
// 0x0060 (0x0088 - 0x0028)
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                           Skeletons;                                                // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimationSharingManager"));
		return ptr;
	}


	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);//Offset:Discovery.exe+0x2CDFCD0
	class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);//Offset:Discovery.exe+0x2CDFE90
	bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);//Offset:Discovery.exe+0x2CDFDB0
	bool STATIC_AnimationSharingEnabled();//Offset:Discovery.exe+0x2CDFCA0
};


// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0048 - 0x0028)
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FAnimationSharingScalability                ScalabilitySettings;                                      // 0x0038(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimationSharingSetup"));
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (0x0050 - 0x0028)
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: AnimationStateEnum

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationSharing.AnimationSharingStateProcessor"));
		return ptr;
	}


	void ProcessActorState(class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess);//Offset:Discovery.exe+0x2CE0630
	class UEnum* GetAnimationStateEnum();//Offset:Discovery.exe+0x1DB6520
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
