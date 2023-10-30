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

// Class EmbarkFastReplicator.EmbarkFastReplicatorBucket
// 0x0010 (0x02D8 - 0x02C8)
class AEmbarkFastReplicatorBucket : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorBucket"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.EmbarkFastReplicatorBucketFastArray
// 0x0060 (0x0338 - 0x02D8)
class AEmbarkFastReplicatorBucketFastArray : public AEmbarkFastReplicatorBucket
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02D8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorBucketFastArray"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.EmbarkFastReplicatorInterface
// 0x0000 (0x02D0 - 0x02D0)
class AEmbarkFastReplicatorInterface : public AEmbarkGlobalActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorInterface"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.EmbarkFastReplicator
// 0x0180 (0x0450 - 0x02D0)
class AEmbarkFastReplicator : public AEmbarkFastReplicatorInterface
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x02D0(0x0168) MISSED OFFSET
	TArray<class AEmbarkFastReplicatorBucket*>         Buckets;                                                  // 0x0438(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicator"));
		return ptr;
	}


	bool UnregisterInstance(const struct FEmbarkFastReplicatorActorOrComponent& Ref, struct FEmbarkFastReplicatorRegisterToken* Token);//Offset:Discovery.exe+0x1D372F0
	bool RegisterInstanceComponent(class UActorComponent* Component, struct FEmbarkFastReplicatorRegisterToken* Token);//Offset:Discovery.exe+0x1D37670
	bool RegisterInstanceActor(class AActor* Actor, struct FEmbarkFastReplicatorRegisterToken* Token);//Offset:Discovery.exe+0x1D37510
	bool RegisterInstance(const struct FEmbarkFastReplicatorActorOrComponent& Ref, struct FEmbarkFastReplicatorRegisterToken* Token);//Offset:Discovery.exe+0x1D37400
	void OnRep_Buckets();//Offset:Discovery.exe+0x1D372D0
};


// Class EmbarkFastReplicator.EmbarkFastReplicatorCallback
// 0x00A0 (0x04F0 - 0x0450)
class AEmbarkFastReplicatorCallback : public AEmbarkFastReplicator
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0450(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorCallback"));
		return ptr;
	}


	void UnregisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref);//Offset:Discovery.exe+0x1D37CE0
};


// Class EmbarkFastReplicator.EmbarkFastReplicatorRegisterTokenScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFastReplicatorRegisterTokenScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorRegisterTokenScriptMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(const struct FEmbarkFastReplicatorRegisterToken& Token);//Offset:Discovery.exe+0x1D367C0
};


// Class EmbarkFastReplicator.EmbarkFastReplicatorActorOrComponentScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFastReplicatorActorOrComponentScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorActorOrComponentScriptMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsValid(const struct FEmbarkFastReplicatorActorOrComponent& Ref);//Offset:Discovery.exe+0x1D36B70
};


// Class EmbarkFastReplicator.TestEmbarkFastReplicatorBucketMockup
// 0x0018 (0x02F0 - 0x02D8)
class ATestEmbarkFastReplicatorBucketMockup : public AEmbarkFastReplicatorBucket
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.TestEmbarkFastReplicatorBucketMockup"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.TestEmbarkFastReplicatorMockup
// 0x0018 (0x0508 - 0x04F0)
class ATestEmbarkFastReplicatorMockup : public AEmbarkFastReplicatorCallback
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.TestEmbarkFastReplicatorMockup"));
		return ptr;
	}


	void OnCallback(const struct FEmbarkFastReplicatorActorOrComponent& Ref);//Offset:Discovery.exe+0x1D38220
};


// Class EmbarkFastReplicator.TestEmbarkFastReplicatorBucketFastArrayMockup
// 0x0130 (0x0468 - 0x0338)
class ATestEmbarkFastReplicatorBucketFastArrayMockup : public AEmbarkFastReplicatorBucketFastArray
{
public:
	struct FTestEmbarkFastArrayMockup                  Data;                                                     // 0x0338(0x0130)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.TestEmbarkFastReplicatorBucketFastArrayMockup"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.TestEmbarkFastReplicatorFastArrayMockup
// 0x0000 (0x0450 - 0x0450)
class ATestEmbarkFastReplicatorFastArrayMockup : public AEmbarkFastReplicator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.TestEmbarkFastReplicatorFastArrayMockup"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.EmbarkFastReplicatorBucketTransform
// 0x0130 (0x0468 - 0x0338)
class AEmbarkFastReplicatorBucketTransform : public AEmbarkFastReplicatorBucketFastArray
{
public:
	struct FEmbarkFastArrayTransform                   Transforms;                                               // 0x0338(0x0130) (Net)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorBucketTransform"));
		return ptr;
	}

};


// Class EmbarkFastReplicator.EmbarkFastReplicatorTransform
// 0x0000 (0x04F0 - 0x04F0)
class AEmbarkFastReplicatorTransform : public AEmbarkFastReplicatorCallback
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFastReplicator.EmbarkFastReplicatorTransform"));
		return ptr;
	}


	void UpdateData_Server(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FReplicatedTransform& NewTransform);//Offset:Discovery.exe+0x1D38D70
	void RegisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FScriptDelegate& Callback);//Offset:Discovery.exe+0x31980
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
