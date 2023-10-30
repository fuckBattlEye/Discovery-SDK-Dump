#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EmbarkMovement.EEmbarkCustomMovementMode
enum class EEmbarkCustomMovementMode : uint8_t
{
	CUSTOM_Default                 = 0,
	CUSTOM_AnimSequenceRootWarp    = 1,
	CUSTOM_Max                     = 2
};


// Enum EmbarkMovement.ERootMotionDefaultCurveType
enum class ERootMotionDefaultCurveType : uint8_t
{
	UprightLinearIn                = 0,
	UprightLinearOut               = 1,
	UprightConstantOn              = 2,
	LinearIn                       = 3,
	LinearOut                      = 4,
	ConstantOn                     = 5,
	ERootMotionDefaultCurveType_MAX = 6
};


// Enum EmbarkMovement.ERootMotionParseRetVal
enum class ERootMotionParseRetVal : uint8_t
{
	INVALID                        = 0,
	VALID                          = 1,
	TIMEOUT                        = 2,
	ERootMotionParseRetVal_MAX     = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkMovement.EmbarkCustomMovementFlags
// 0x0001
struct FEmbarkCustomMovementFlags
{
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x0000(0x0001) (BlueprintVisible)
};

// ScriptStruct EmbarkMovement.EmbarkRootWarpSpaceTransformData
// 0x0068
struct FEmbarkRootWarpSpaceTransformData
{
	unsigned char                                      bIsWorldSpace : 1;                                        // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FVector                                     WarpStartLocation;                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WarpStartRotation;                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WarpEndLocation;                                          // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WarpEndRotation;                                          // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.EmbarkRootWarpSpace
// 0x0140
struct FEmbarkRootWarpSpace
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FEmbarkRootWarpSpaceTransformData           TransformData;                                            // 0x0008(0x0068)
	struct FName                                       AttachedToBone;                                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachedToComponent;                                      // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0080(0x00C0) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.EmbarkRootMotionInputScale
// 0x000C
struct FEmbarkRootMotionInputScale
{
	float                                              InputScale;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InputScaleSides;                                          // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InputScaleFwdBwd;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.EmbarkGroundNormal
// 0x0020
struct FEmbarkGroundNormal
{
	struct FVector                                     Vec;                                                      // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              GroundNormalPitch;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GroundNormalYaw;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.EmbarkCharacterMovementBaseState
// 0x0068
struct FEmbarkCharacterMovementBaseState
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEmbarkGroundNormal                         GroundNormal;                                             // 0x0030(0x0020) (BlueprintVisible)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsInJump;                                                // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              JumpStamina;                                              // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceGrounded;                                        // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInCrouch;                                              // 0x005C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInSlide;                                               // 0x005D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	float                                              FootToGroundHeight;                                       // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.EmbarkMovementParamsDynamic
// 0x0158
struct FEmbarkMovementParamsDynamic
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // 0x0030(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInJump;                                                // 0x0049(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              JumpStamina;                                              // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInCrouch;                                              // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInSlide;                                               // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              FootToGroundHeight;                                       // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // 0x0058(0x00F8) (BlueprintVisible)
	float                                              TimeSinceGrounded;                                        // 0x0150(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0154(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.EmbarkMovementDirectionSpeed
// 0x000C
struct FEmbarkMovementDirectionSpeed
{
	float                                              Forward;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strafing;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackPedaling;                                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.EmbarkMovementBlockedFloorsContainer
// 0x0028
struct FEmbarkMovementBlockedFloorsContainer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.EmbarkMovementParamsStatic
// 0x0170
struct FEmbarkMovementParamsStatic
{
	struct FVector                                     InputVector;                                              // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToJump;                                             // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToCrouch;                                           // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToSlide;                                            // 0x001A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              SimulateTime;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x0020(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeightCrouching;                               // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeightStanding;                                // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UEmbarkCharacterMovementStaticCallerBase*    StaticCaller;                                             // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CapsuleIgnoreActors;                                      // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              CapsuleRadius;                                            // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FVector                                     CachedSlideJumpVelocity;                                  // 0x0068(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFrictionFactor;                                    // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnalogSpeed;                                           // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSeparateBrakingFriction;                              // 0x00A4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainHorizontalGroundVelocity;                        // 0x00A5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnimRootMotion;                                       // 0x00A6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootMotionHasOverrideVelocity;                           // 0x00A7(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsVolumeTerminalVelocity;                            // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsVolumeFluidFriction;                               // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityZ;                                                 // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheatFlying;                                             // 0x00B4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              JumpMaxHoldTime;                                          // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FVector                                     FloorVelocity;                                            // 0x00C0(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCrouched;                                              // 0x00D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x00D9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWalking;                                               // 0x00DA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementModeAtPostPhysics;                                // 0x00DB(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEmbarkMovementDirectionSpeed               RunSpeed;                                                 // 0x00DC(0x000C) (BlueprintVisible)
	struct FEmbarkMovementDirectionSpeed               SprintSpeed;                                              // 0x00E8(0x000C) (BlueprintVisible)
	struct FEmbarkMovementDirectionSpeed               CrouchSpeed;                                              // 0x00F4(0x000C) (BlueprintVisible)
	float                                              AimWalkSpeed;                                             // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingSpeed;                                              // 0x0104(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedModifier;                                            // 0x0108(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAcceleration;                                   // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAccelerationForward;                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAccelerationSideways;                           // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkingAccelerationBackwards;                          // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDirectionalWalkingAccelerationModel;               // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	float                                              MaxFallingAcceleration;                                   // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingAcceleration;                                    // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallingSpeedHorizontal;                                // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaConsumptionPerJump;                            // 0x0130(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaGainSpeed;                                     // 0x0134(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaHorizontalVelMinScale;                         // 0x0138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinJumpStaminaZVelocity;                                  // 0x013C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHorizontalDragCoefficient;                         // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHorizontalDragThresholdSpeed;                      // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEmbarkMovementBlockedFloorsContainer       BlockedFloorsContainer;                                   // 0x0148(0x0028) (BlueprintVisible)
};

// ScriptStruct EmbarkMovement.EmbarkServersideReplicatedInput
// 0x0078
struct FEmbarkServersideReplicatedInput
{
	float                                              ClientGeneratedInputTimestamp;                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     InputVector;                                              // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RawInputVector;                                           // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRotator                                    ControlRotation;                                          // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
	unsigned char                                      InputFrame;                                               // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.EmbarkMoveModifiers
// 0x0008
struct FEmbarkMoveModifiers
{
	float                                              Forward;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.EmbarkMoveOverrides
// 0x0008
struct FEmbarkMoveOverrides
{
	float                                              Forward;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.RootMotionInputScale
// 0x000C
struct FRootMotionInputScale
{
	float                                              InputScale;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InputScaleSides;                                          // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InputScaleFwdBwd;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.RootMotionVisualMeshCorrectionData
// 0x0004
struct FRootMotionVisualMeshCorrectionData
{
	float                                              CharacterScale;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkMovement.RootMotionAnimData
// 0x00E0
struct FRootMotionAnimData
{
	struct FGameplayTag                                GameplayTags;                                             // 0x0000(0x0008) (BlueprintVisible, Transient)
	struct FGameplayTagContainer                       AbilityGameplayTags;                                      // 0x0008(0x0020) (BlueprintVisible, Transient)
	TArray<class UAnimSequence*>                       Sequences;                                                // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	float                                              StartTimeStamp;                                           // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpeedScale;                                               // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartTimeOffset;                                          // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          WarpCurve;                                                // 0x0048(0x0088) (BlueprintVisible, Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              WarpedDuration;                                           // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRootMotionVisualMeshCorrectionData         VisualMeshCorrectionData;                                 // 0x00D4(0x0004) (BlueprintVisible, Transient)
	unsigned char                                      RepIndex;                                                 // 0x00D8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.CharacterMovementRootWarpContext
// 0x00B0
struct FCharacterMovementRootWarpContext
{
	struct FTransform                                  WarpEndTransform;                                         // 0x0000(0x0060) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     WarpDeltaMove;                                            // 0x0060(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputVector;                                              // 0x0078(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSweepMove;                                               // 0x0090(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              DeltaSeconds;                                             // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputScaleSides;                                          // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputScaleFwdBwd;                                         // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstSimFrame;                                         // 0x00A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.Embark_RootMotionSource_AnimSequenceBase
// 0x0150 (0x0230 - 0x00E0)
struct FEmbark_RootMotionSource_AnimSequenceBase : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x00E0(0x0150) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.Embark_RootMotionSource_AnimSequenceRootMotion
// 0x0060 (0x0290 - 0x0230)
struct FEmbark_RootMotionSource_AnimSequenceRootMotion : public FEmbark_RootMotionSource_AnimSequenceBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0230(0x0060) MISSED OFFSET
};

// ScriptStruct EmbarkMovement.Embark_RootMotionSource_AnimSequenceRootWarp
// 0x0120 (0x0350 - 0x0230)
struct FEmbark_RootMotionSource_AnimSequenceRootWarp : public FEmbark_RootMotionSource_AnimSequenceBase
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0230(0x0120) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
