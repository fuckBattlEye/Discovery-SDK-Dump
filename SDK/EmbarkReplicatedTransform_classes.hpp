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

// Class EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UReplicatedTransformMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsTransformDormant(const struct FReplicatedTransform& Transform, bool bOnlyIfReplicated);//Offset:Discovery.exe+0x1BBD970
	bool STATIC_IsLinearVelocityDormant(const struct FReplicatedTransform& Transform);//Offset:Discovery.exe+0x1BBDC20
	bool STATIC_IsAngularVelocityDormant(const struct FReplicatedTransform& Transform);//Offset:Discovery.exe+0x1BBDB10
	void STATIC_FillFromRigidBodyState(const struct FRigidBodyState& RBState, struct FReplicatedTransform* Transform);//Offset:Discovery.exe+0x1BBD310
	void STATIC_FillFromActor(class AActor* Actor, const struct FVector& SetAngularVelocity, bool bSetTeleported, struct FReplicatedTransform* Transform);//Offset:Discovery.exe+0x1BBD770
	void STATIC_CopyToRigidBodyState(const struct FReplicatedTransform& Transform, struct FRigidBodyState* OutRBState);//Offset:Discovery.exe+0x1BBCD10
	void STATIC_CopyToActor(const struct FReplicatedTransform& Transform, class AActor* Actor, struct FVector* OutAngularVelocity);//Offset:Discovery.exe+0x1BBD000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
