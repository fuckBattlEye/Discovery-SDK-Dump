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

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// 0x0310 (0x0348 - 0x0038)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: ChaosSolverActorSet
	enum class EDataSourceTypeEnum                     DataSourceType;                                           // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                DataProcessFrequency;                                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfDataEntriesToSpawn;                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoSpawn;                                                  // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FVector2D                                   SpawnMultiplierMinMax;                                    // 0x0098(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnChance;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FVector2D                                   ImpulseToSpawnMinMax;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpeedToSpawnMinMax;                                       // 0x00C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MassToSpawnMinMax;                                        // 0x00D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMinToSpawnMinMax;                                   // 0x00E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMaxToSpawnMinMax;                                   // 0x00F0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VolumeToSpawnMinMax;                                      // 0x0100(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SolverTimeToSpawnMinMax;                                  // 0x0110(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SurfaceTypeToSpawn;                                       // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ELocationFilteringModeEnum              LocationFilteringMode;                                    // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ELocationXToSpawnEnum                   LocationXToSpawn;                                         // 0x0125(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	struct FVector2D                                   LocationXToSpawnMinMax;                                   // 0x0128(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ELocationYToSpawnEnum                   LocationYToSpawn;                                         // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FVector2D                                   LocationYToSpawnMinMax;                                   // 0x0140(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ELocationZToSpawnEnum                   LocationZToSpawn;                                         // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FVector2D                                   LocationZToSpawnMinMax;                                   // 0x0158(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailMinSpeedToSpawn;                                     // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EDataSortTypeEnum                       DataSortingType;                                          // 0x016C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGetExternalCollisionData;                                // 0x016D(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               DoSpatialHash;                                            // 0x016E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	struct FVector                                     SpatialHashVolumeMin;                                     // 0x0170(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpatialHashVolumeMax;                                     // 0x0188(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpatialHashVolumeCellSize;                                // 0x01A0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDataPerCell;                                           // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyMaterialsFilter;                                    // 0x01BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData09[0x50];                                      // 0x01BD(0x0050) UNKNOWN PROPERTY: ChaosBreakingMaterialSet
	bool                                               bGetExternalBreakingData;                                 // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGetExternalTrailingData;                                 // 0x0211(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0212(0x0006) MISSED OFFSET
	struct FVector2D                                   RandomPositionMagnitudeMinMax;                            // 0x0218(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InheritedVelocityMultiplier;                              // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ERandomVelocityGenerationTypeEnum       RandomVelocityGenerationType;                             // 0x022C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	struct FVector2D                                   RandomVelocityMagnitudeMinMax;                            // 0x0230(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngleMax;                                           // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	struct FVector                                     VelocityOffsetMin;                                        // 0x0248(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityOffsetMax;                                        // 0x0260(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FinalVelocityMagnitudeMinMax;                             // 0x0278(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLatency;                                               // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EDebugTypeEnum                          DebugType;                                                // 0x028C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	int                                                LastSpawnedPointID;                                       // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSpawnTime;                                            // 0x0294(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x10];                                      // 0x0298(0x0010) MISSED OFFSET
	float                                              SolverTime;                                               // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeStampOfLastProcessedData;                             // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x98];                                      // 0x02B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction"));
		return ptr;
	}

};


// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{
public:
	class AGeometryCollectionActor*                    GeometryCollectionActor;                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection"));
		return ptr;
	}

};


// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ChaosNiagara.NiagaraDataInterfacePhysicsField"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
