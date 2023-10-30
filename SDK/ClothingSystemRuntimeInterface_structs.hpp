#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// 0x004C
struct FClothVertBoneData
{
	int                                                NumInfluences;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           BoneIndices[0xC];                                         // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              BoneWeights[0xC];                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0020
struct FClothCollisionPrim_Sphere
{
	int                                                BoneIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalPosition;                                            // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008
struct FClothCollisionPrim_SphereConnection
{
	int                                                SphereIndices[0x2];                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
// 0x0030
struct FClothCollisionPrim_ConvexFace
{
	struct FPlane                                      Plane;                                                    // 0x0000(0x0020) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Indices;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0028
struct FClothCollisionPrim_Convex
{
	TArray<struct FClothCollisionPrim_ConvexFace>      Faces;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             SurfacePoints;                                            // 0x0010(0x0010) (ZeroConstructor)
	int                                                BoneIndex;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// 0x0060
struct FClothCollisionPrim_Box
{
	struct FVector                                     LocalPosition;                                            // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       LocalRotation;                                            // 0x0020(0x0020) (IsPlainOldData)
	struct FVector                                     HalfExtents;                                              // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0040
struct FClothCollisionData
{
	TArray<struct FClothCollisionPrim_Sphere>          Spheres;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_Convex>          Convexes;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothCollisionPrim_Box>             Boxes;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
