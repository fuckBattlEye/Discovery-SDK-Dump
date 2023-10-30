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

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// 0x0000 (0x0028 - 0x0028)
class UClothConfigBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothConfigBase"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingInteractor
// 0x0008 (0x0030 - 0x0028)
class UClothingInteractor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothingInteractor"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0068 (0x0090 - 0x0028)
class UClothingSimulationInteractor : public UObject
{
public:
	TMap<struct FName, class UClothingInteractor*>     ClothingInteractors;                                      // 0x0028(0x0050)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor"));
		return ptr;
	}


	void SetNumSubsteps(int NumSubsteps);//Offset:Discovery.exe+0x4D020E0
	void SetNumIterations(int NumIterations);//Offset:Discovery.exe+0x1EE88C0
	void SetMaxNumIterations(int MaxNumIterations);//Offset:Discovery.exe+0x4D02180
	void SetAnimDriveSpringStiffness(float InStiffness);//Offset:Discovery.exe+0x4D022C0
	void PhysicsAssetUpdated();//Offset:Discovery.exe+0x1DB5730
	float GetSimulationTime();//Offset:Discovery.exe+0x4D02000
	int GetNumSubsteps();//Offset:Discovery.exe+0x4D02030
	int GetNumKinematicParticles();//Offset:Discovery.exe+0x4D020A0
	int GetNumIterations();//Offset:Discovery.exe+0x4D02050
	int GetNumDynamicParticles();//Offset:Discovery.exe+0x4D02080
	int GetNumCloths();//Offset:Discovery.exe+0x4D020C0
	class UClothingInteractor* GetClothingInteractor(const struct FString& ClothingAssetName);//Offset:Discovery.exe+0x4D01F50
	void EnableGravityOverride(const struct FVector& InVector);//Offset:Discovery.exe+0x4D02220
	void DisableGravityOverride();//Offset:Discovery.exe+0x1DC09C0
	void ClothConfigUpdated();//Offset:Discovery.exe+0x11BA100
};


// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// 0x0000 (0x0028 - 0x0028)
class UClothSharedSimConfigBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0030 (0x0058 - 0x0028)
class UClothingAssetBase : public UObject
{
public:
	struct FString                                     ImportedFilePath;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FGuid                                       AssetGuid;                                                // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OriginalAssetGuid;                                        // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothingAssetBase"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// 0x00B8 (0x00E0 - 0x0028)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector3f>                           Vertices;                                                 // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FVector3f>                           Normals;                                                  // 0x0038(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0048(0x0010) (ZeroConstructor)
	TArray<float>                                      InverseMasses;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x0068(0x0010) (ZeroConstructor)
	int                                                NumFixedVerts;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBoneWeights;                                           // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
