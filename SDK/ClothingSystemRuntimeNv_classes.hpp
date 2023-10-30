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

// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x0178 (0x01A0 - 0x0028)
class UClothConfigNv : public UClothConfigCommon
{
public:
	enum class EClothingWindMethodNv                   ClothingWindMethod;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FClothConstraintSetupNv                     VerticalConstraint;                                       // 0x002C(0x0010) (Edit)
	struct FClothConstraintSetupNv                     HorizontalConstraint;                                     // 0x003C(0x0010) (Edit)
	struct FClothConstraintSetupNv                     BendConstraint;                                           // 0x004C(0x0010) (Edit)
	struct FClothConstraintSetupNv                     ShearConstraint;                                          // 0x005C(0x0010) (Edit)
	float                                              SelfCollisionRadius;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0078(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FVector                                     LinearDrag;                                               // 0x00A0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x00B8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x00D0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x00E8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x0100(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FVector                                     GravityOverride;                                          // 0x0128(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EClothingWindMethod_Legacy              WindMethod;                                               // 0x0158(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	struct FClothConstraintSetup_Legacy                VerticalConstraintConfig;                                 // 0x015C(0x0010) (Deprecated)
	struct FClothConstraintSetup_Legacy                HorizontalConstraintConfig;                               // 0x016C(0x0010) (Deprecated)
	struct FClothConstraintSetup_Legacy                BendConstraintConfig;                                     // 0x017C(0x0010) (Deprecated)
	struct FClothConstraintSetup_Legacy                ShearConstraintConfig;                                    // 0x018C(0x0010) (Deprecated)
	unsigned char                                      UnknownData05[0x4];                                       // 0x019C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeNv.ClothConfigNv"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0010 (0x00A0 - 0x0090)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv"));
		return ptr;
	}


	void SetAnimDriveDamperStiffness(float InStiffness);//Offset:Discovery.exe+0x5B58790
};


// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// 0x0040 (0x0120 - 0x00E0)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                      MaxDistances;                                             // 0x00E0(0x0010) (ZeroConstructor)
	TArray<float>                                      BackstopDistances;                                        // 0x00F0(0x0010) (ZeroConstructor)
	TArray<float>                                      BackstopRadiuses;                                         // 0x0100(0x0010) (ZeroConstructor)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x0110(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
