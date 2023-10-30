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

// ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
// 0x0098 (0x0160 - 0x00C8)
struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	float                                              OrientationAngle;                                         // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionAngle;                                          // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionAngleDeltaThreshold;                            // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      SpineBones;                                               // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FBoneReference                              IKFootRootBone;                                           // 0x00E8(0x0010) (Edit)
	TArray<struct FBoneReference>                      IKFootBones;                                              // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EAxis>                                 RotationAxis;                                             // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              DistributedBoneOrientationAlpha;                          // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4C];                                      // 0x0114(0x004C) MISSED OFFSET
};

// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
// 0x0028
struct FSlopeWarpingFootDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootSize;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
// 0x00B0
struct FSlopeWarpingFootData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
// 0x0218 (0x02E0 - 0x00C8)
struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	struct FBoneReference                              IKFootRootBone;                                           // 0x00E0(0x0010) (Edit)
	struct FBoneReference                              PelvisBone;                                               // 0x00F0(0x0010) (Edit)
	TArray<struct FSlopeWarpingFootDefinition>         FeetDefinitions;                                          // 0x0100(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSlopeWarpingFootData>               FeetData;                                                 // 0x0110(0x0010) (ZeroConstructor, Transient)
	struct FVectorRK4SpringInterpolator                PelvisOffsetInterpolator;                                 // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0128(0x0058) MISSED OFFSET
	struct FVector                                     GravityDir;                                               // 0x0180(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomFloorOffset;                                        // 0x0198(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CachedDeltaTime;                                          // 0x01B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FVector                                     TargetFloorNormalWorldSpace;                              // 0x01B8(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVectorRK4SpringInterpolator                FloorNormalInterpolator;                                  // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x01D8(0x0058) MISSED OFFSET
	struct FVector                                     TargetFloorOffsetLocalSpace;                              // 0x0230(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVectorRK4SpringInterpolator                FloorOffsetInterpolator;                                  // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0250(0x0058) MISSED OFFSET
	float                                              MaxStepHeight;                                            // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bKeepMeshInsideOfCapsule : 1;                             // 0x02AC(0x0001) (Edit)
	unsigned char                                      bPullPelvisDown : 1;                                      // 0x02AC(0x0001) (Edit)
	unsigned char                                      bUseCustomFloorOffset : 1;                                // 0x02AC(0x0001) (Edit)
	unsigned char                                      bWasOnGround : 1;                                         // 0x02AC(0x0001) (Transient)
	unsigned char                                      bShowDebug : 1;                                           // 0x02AC(0x0001) (Transient)
	unsigned char                                      bFloorSmoothingInitialized : 1;                           // 0x02AC(0x0001) (Transient)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FVector                                     ActorLocation;                                            // 0x02B0(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     GravityDirCompSpace;                                      // 0x02C8(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
// 0x0030
struct FStrideWarpingFootDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	struct FBoneReference                              ThighBone;                                                // 0x0020(0x0010) (Edit)
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
// 0x0170 (0x0238 - 0x00C8)
struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FVector                                     StrideDirection;                                          // 0x00D0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrideScale;                                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionSpeed;                                          // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLocomotionSpeedThreshold;                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              PelvisBone;                                               // 0x00F4(0x0010) (Edit)
	struct FBoneReference                              IKFootRootBone;                                           // 0x0104(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FStrideWarpingFootDefinition>        FootDefinitions;                                          // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FInputClampConstants                        StrideScaleModifier;                                      // 0x0128(0x0014) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FWarpingVectorValue                         FloorNormalDirection;                                     // 0x0140(0x0020) (Edit, BlueprintVisible)
	struct FWarpingVectorValue                         GravityDirection;                                         // 0x0160(0x0020) (Edit, BlueprintVisible)
	struct FIKFootPelvisPullDownSolver                 PelvisIKFootSolver;                                       // 0x0180(0x0070) (Edit)
	bool                                               bOrientStrideDirectionUsingFloorNormal;                   // 0x01F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCompensateIKUsingFKThighRotation;                        // 0x01F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClampIKUsingFKLimits;                                    // 0x01F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x45];                                      // 0x01F3(0x0045) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
