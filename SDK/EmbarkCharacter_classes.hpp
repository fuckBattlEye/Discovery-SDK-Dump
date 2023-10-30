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

// Class EmbarkCharacter.EmbarkCharacterBase
// 0x0090 (0x06E0 - 0x0650)
class AEmbarkCharacterBase : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0650(0x0028) MISSED OFFSET
	class UEmbarkAbilitySystemComponent*               AbilitySystem;                                            // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStateInterpolatorComponent*                 StateInterpolatorComponent;                               // 0x0680(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UEmbarkPawnComponent*                        PossessionEventComponent;                                 // 0x0688(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UEmbarkSkeletalMeshComponent*                EmbarkMesh;                                               // 0x0690(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UEmbarkCharacterMovementComponent*           EmbarkCharacterMovement;                                  // 0x0698(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bInfiniteAmmo;                                            // 0x06A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerStateReplicated;                                  // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x06B8(0x0010) MISSED OFFSET
	class AController*                                 CachedController;                                         // 0x06C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCharacter.EmbarkCharacterBase"));
		return ptr;
	}


	void StopStandingOnCurrentMovementBase();//Offset:Discovery.exe+0x1D2F640
	void SetUseMixedGASReplication();//Offset:Discovery.exe+0x1D2F580
	void SetTeam(enum class EEmbarkTeamId NewTeam);//Offset:Discovery.exe+0x1D2F790
	void SetDefaultNetDormancy(TEnumAsByte<ENetDormancy> DefaultNetDormancy);//Offset:Discovery.exe+0x19BFBD0
	float ReceiveTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);//Offset:Discovery.exe+0x327F8B0
	void ReceiveSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);//Offset:Discovery.exe+0x327F8B0
	void ReceivePostInitializeComponents();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnRep_PlayerState();//Offset:Discovery.exe+0x327F8B0
	void ReceiveOnRep_Controller();//Offset:Discovery.exe+0x327F8B0
	void ReceiveEmbarkOnUnPossessed(class AController* InController);//Offset:Discovery.exe+0x327F8B0
	void ReceiveEmbarkOnPossessed(class AController* InController);//Offset:Discovery.exe+0x327F8B0
	void OverrideWith(class AEmbarkCharacterBase* OldCharacter);//Offset:Discovery.exe+0x327F8B0
	bool IsStandingOn(class UPrimitiveComponent* Component, const struct FName& BoneName);//Offset:Discovery.exe+0x1D2F660
	enum class EEmbarkTeamId GetTeam();//Offset:Discovery.exe+0x1D2F760
	struct FVector GetShootLocation();//Offset:Discovery.exe+0x1D2F5E0
	enum class EGameplayEffectReplicationMode GetReplicationMode();//Offset:Discovery.exe+0x1D2F5A0
	struct FVector GetPawnViewLocation();//Offset:Discovery.exe+0x1D2F360
	struct FBasedMovementInfoBP GetBasedMovementBP();//Offset:Discovery.exe+0x1D2F3C0
	void EmbarkOnUnPossessed_Internal(class AController* InController);//Offset:Discovery.exe+0x1D2F1C0
	void EmbarkOnPossessed_Internal(class AController* InController);//Offset:Discovery.exe+0x1D2F290
	void BlueprintSimulateRootMotion(const struct FCharacterMovementRootWarpContext& RootWarpContext, struct FVector* OutNewDeltaMove, struct FTransform* OutRootWarpTransformDeltaMove);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
