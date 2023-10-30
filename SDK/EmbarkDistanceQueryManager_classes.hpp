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

// Class EmbarkDistanceQueryManager.EmbarkDistanceQueryManager
// 0x01E8 (0x0218 - 0x0030)
class UEmbarkDistanceQueryManager : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0030(0x01A0) MISSED OFFSET
	struct FEmbarkDistanceQueryTickFunction            TickFunction;                                             // 0x01D0(0x0030) (Transient)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0200(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDistanceQueryManager.EmbarkDistanceQueryManager"));
		return ptr;
	}


	void UpdateTimers(float DeltaTime);//Offset:Discovery.exe+0x19595E0
	void UpdateQueries();//Offset:Discovery.exe+0x1959680
	void SetQueryStickiness(int QueryID, float Stickiness);//Offset:Discovery.exe+0x195FF70
	void SetQueryResultsCapacity(int Capacity);//Offset:Discovery.exe+0x1960650
	void SetQueryEnabled(int QueryID, bool bEnabled);//Offset:Discovery.exe+0x195FE80
	void SetQueryDistance(int QueryID, float DistanceToCheck);//Offset:Discovery.exe+0x1960050
	void SetQueryCallbackFlags(int QueryID, enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags);//Offset:Discovery.exe+0x195FCB0
	void SetQueryAtomic(int QueryID, bool bAtomic);//Offset:Discovery.exe+0x195FD90
	void SetLocationDataEx(class UClass* GroupClass, const struct FVector& Location, const struct FVector& NewLocation, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195B330
	void SetLocationData(class UClass* GroupClass, const struct FVector& Location, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195B670
	void SetComponentData(class UClass* GroupClass, class USceneComponent* Component, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195B930
	void SetCapsuleLocationDataEx(class UClass* GroupClass, const struct FVector& Location, const struct FVector& NewLocation, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x1959A20
	void SetCapsuleLocationData(class UClass* GroupClass, const struct FVector& Location, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195A0D0
	void SetCapsuleComponentData(class UClass* GroupClass, class USceneComponent* Component, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195A6F0
	void SetCapsuleActorData(class UClass* GroupClass, class AActor* Actor, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195AD10
	void SetActorData(class UClass* GroupClass, class AActor* Actor, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195BBD0
	void RemoveLocation(class UClass* GroupClass, const struct FVector& Location, int Specifier);//Offset:Discovery.exe+0x195BE70
	void RemoveComponent(class UClass* GroupClass, class USceneComponent* Component, int Specifier);//Offset:Discovery.exe+0x195BFB0
	void RemoveActor(class UClass* GroupClass, class AActor* Actor, int Specifier);//Offset:Discovery.exe+0x195C0E0
	int MakeQuery(class UClass* SourceGroupClass, class UClass* TargetGroupClass, float DistanceToCheck, float Stickiness, bool bEnabled, bool bAtomic, enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags);//Offset:Discovery.exe+0x19603D0
	void MakeQueries(class UClass* SourceGroupClass, TArray<class UClass*> TargetGroupClasses, float DistanceToCheck, float Stickiness, bool bEnabled, bool bAtomic, enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags);//Offset:Discovery.exe+0x1960130
	int STATIC_GetQueryKeySpecifier(const struct FEmbarkDistanceQueryKey& Key);//Offset:Discovery.exe+0x1959790
	struct FString STATIC_GetQueryKeyName(const struct FEmbarkDistanceQueryKey& Key);//Offset:Discovery.exe+0x19596C0
	struct FVector STATIC_GetQueryKeyLocation(const struct FEmbarkDistanceQueryKey& Key);//Offset:Discovery.exe+0x1959830
	class USceneComponent* STATIC_GetQueryKeyComponent(const struct FEmbarkDistanceQueryKey& Key);//Offset:Discovery.exe+0x19598E0
	class AActor* STATIC_GetQueryKeyActor(const struct FEmbarkDistanceQueryKey& Key);//Offset:Discovery.exe+0x1959980
	class UEmbarkDistanceQueryManager* STATIC_GetDistanceQueryManagerWithContext(class UObject* WorldContextObject);//Offset:Discovery.exe+0x19606F0
	class UEmbarkDistanceQueryManager* STATIC_GetDistanceQueryManager(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1960790
	void Dump();//Offset:Discovery.exe+0x19596A0
	void AddLocationWithCallback(class UClass* GroupClass, const struct FVector& Location, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector, float TimeToLive);//Offset:Discovery.exe+0x195D6F0
	void AddLocation(class UClass* GroupClass, const struct FVector& Location, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector, float TimeToLive);//Offset:Discovery.exe+0x195F440
	void AddComponentWithCallback(class UClass* GroupClass, class USceneComponent* Component, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195DAA0
	void AddComponent(class UClass* GroupClass, class USceneComponent* Component, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195F770
	void AddCapsuleLocationWithCallback(class UClass* GroupClass, const struct FVector& Location, float HalfHeight, const struct FQuat& Rotation, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, float TimeToLive);//Offset:Discovery.exe+0x195C210
	void AddCapsuleLocation(class UClass* GroupClass, const struct FVector& Location, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius, float TimeToLive);//Offset:Discovery.exe+0x195E140
	void AddCapsuleComponentWithCallback(class UClass* GroupClass, class USceneComponent* Component, float HalfHeight, const struct FQuat& Rotation, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195C970
	void AddCapsuleComponent(class UClass* GroupClass, class USceneComponent* Component, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195E800
	void AddCapsuleActorWithCallback(class UClass* GroupClass, class AActor* Actor, float HalfHeight, const struct FQuat& Rotation, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195D030
	void AddCapsuleActor(class UClass* GroupClass, class AActor* Actor, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius);//Offset:Discovery.exe+0x195EE20
	void AddActorWithCallback(class UClass* GroupClass, class AActor* Actor, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195DDF0
	void AddActor(class UClass* GroupClass, class AActor* Actor, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector);//Offset:Discovery.exe+0x195FA10
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
