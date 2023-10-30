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

// Class PhysicsCore.BodySetupCore
// 0x0020 (0x0048 - 0x0028)
class UBodySetupCore : public UObject
{
public:
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPhysicsType>                          PhysicsType;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                       // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBodyCollisionResponse>                CollisionReponse;                                         // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x0033(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PhysicsCore.BodySetupCore"));
		return ptr;
	}

};


// Class PhysicsCore.ChaosPhysicalMaterial
// 0x0020 (0x0048 - 0x0028)
class UChaosPhysicalMaterial : public UObject
{
public:
	float                                              Friction;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StaticFriction;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Restitution;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearEtherDrag;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularEtherDrag;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SleepingLinearVelocityThreshold;                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SleepingAngularVelocityThreshold;                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PhysicsCore.ChaosPhysicalMaterial"));
		return ptr;
	}

};


// Class PhysicsCore.PhysicalMaterial
// 0x0058 (0x0080 - 0x0028)
class UPhysicalMaterial : public UObject
{
public:
	float                                              Friction;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StaticFriction;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideFrictionCombineMode;                             // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              Restitution;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                   // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideRestitutionCombineMode;                          // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              Density;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SleepLinearVelocityThreshold;                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SleepAngularVelocityThreshold;                            // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SleepCounterThreshold;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaiseMassToPower;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DestructibleDamageThresholdScale;                         // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UPhysicalMaterialPropertyBase*               PhysicalMaterialProperty;                                 // 0x0058(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F];                                      // 0x0061(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PhysicsCore.PhysicalMaterial"));
		return ptr;
	}

};


// Class PhysicsCore.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PhysicsCore.PhysicalMaterialPropertyBase"));
		return ptr;
	}

};


// Class PhysicsCore.PhysicsSettingsCore
// 0x00B0 (0x00E8 - 0x0038)
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                              DefaultGravityZ;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultTerminalVelocity;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultFluidFriction;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SimulateScratchMemorySize;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                RagdollAggregateThreshold;                                // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TriangleMeshTriangleMinAreaThreshold;                     // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableShapeSharing;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePCM;                                               // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableStabilization;                                     // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bWarnMissingLocks;                                        // 0x0053(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnable2DPhysics;                                         // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDefaultHasComplexCollision;                              // 0x0055(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	float                                              BounceThresholdVelocity;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                   // 0x005D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	float                                              MaxAngularVelocity;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxDepenetrationVelocity;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ContactOffsetMultiplier;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinContactOffset;                                         // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxContactOffset;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                   // 0x0074(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   DefaultShapeComplexity;                                   // 0x0075(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	struct FChaosSolverConfiguration                   SolverOptions;                                            // 0x0078(0x006C) (Edit, Config)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PhysicsCore.PhysicsSettingsCore"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
