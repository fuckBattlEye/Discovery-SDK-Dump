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

// Class CableComponent.CableActor
// 0x0008 (0x02D0 - 0x02C8)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CableComponent.CableActor"));
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0x00B0 (0x0670 - 0x05C0)
class UCableComponent : public UMeshComponent
{
public:
	struct FComponentReference                         AttachEndTo;                                              // 0x05C0(0x0028) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x05E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x05F0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableLength;                                              // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x060C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x0610(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSubstepping;                                          // 0x0619(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipCableUpdateWhenNotVisible;                           // 0x061A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;             // 0x061B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	struct FVector                                     CableForce;                                               // 0x0628(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x0648(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0650(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CableComponent.CableComponent"));
		return ptr;
	}


	void SetAttachEndToComponent(class USceneComponent* Component, const struct FName& SocketName);//Offset:Discovery.exe+0x18E8830
	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);//Offset:Discovery.exe+0x18E8700
	void GetCableParticleLocations(TArray<struct FVector>* Locations);//Offset:Discovery.exe+0x18E85F0
	class USceneComponent* GetAttachedComponent();//Offset:Discovery.exe+0x18E86A0
	class AActor* GetAttachedActor();//Offset:Discovery.exe+0x18E86D0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
