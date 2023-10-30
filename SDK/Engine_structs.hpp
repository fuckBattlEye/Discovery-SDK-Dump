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

// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6
};


// Enum Engine.EAnimDataModelNotifyType
enum class EAnimDataModelNotifyType : uint8_t
{
	BracketOpened                  = 0,
	BracketClosed                  = 1,
	TrackAdded                     = 2,
	TrackChanged                   = 3,
	TrackRemoved                   = 4,
	SequenceLengthChanged          = 5,
	FrameRateChanged               = 6,
	CurveAdded                     = 7,
	CurveChanged                   = 8,
	CurveRemoved                   = 9,
	CurveFlagsChanged              = 10,
	CurveRenamed                   = 11,
	CurveScaled                    = 12,
	CurveColorChanged              = 13,
	AttributeAdded                 = 14,
	AttributeRemoved               = 15,
	AttributeChanged               = 16,
	Populated                      = 17,
	Reset                          = 18,
	Invalid                        = 19,
	EAnimDataModelNotifyType_MAX   = 20
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	Playing                        = 0,
	Stopped                        = 1,
	Paused                         = 2,
	FadingIn                       = 3,
	FadingOut                      = 4,
	Count                          = 5,
	EAudioComponentPlayState_MAX   = 6
};


// Enum Engine.EDataLayerRuntimeState
enum class EDataLayerRuntimeState : uint8_t
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	EDataLayerRuntimeState_MAX     = 3
};


// Enum Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
	CommandOnFailedToQueue         = 0,
	CommandOnQueued                = 1,
	CommandOnCanceled              = 2,
	CommandOnAboutToStart          = 3,
	CommandOnStarted               = 4,
	Count                          = 5,
	EQuartzCommandDelegateSubType_MAX = 6
};


// Enum Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8_t
{
	Bar                            = 0,
	Beat                           = 1,
	ThirtySecondNote               = 2,
	SixteenthNote                  = 3,
	EighthNote                     = 4,
	QuarterNote                    = 5,
	HalfNote                       = 6,
	WholeNote                      = 7,
	DottedSixteenthNote            = 8,
	DottedEighthNote               = 9,
	DottedQuarterNote              = 10,
	DottedHalfNote                 = 11,
	DottedWholeNote                = 12,
	SixteenthNoteTriplet           = 13,
	EighthNoteTriplet              = 14,
	QuarterNoteTriplet             = 15,
	HalfNoteTriplet                = 16,
	Tick                           = 17,
	Count                          = 18,
	None                           = 19,
	EQuartzCommandQuantization_MAX = 20
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4
};


// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	Unknown                        = 0,
	Good                           = 1,
	Bad                            = 2,
	Serious                        = 3,
	Critical                       = 4,
	NumSeverities                  = 5,
	ETemperatureSeverityType_MAX   = 6
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4
};


// Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	None                           = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	ETeleportType_MAX              = 3
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7
};


// Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	Unknown                        = 0,
	Inactive                       = 1,
	Background                     = 2,
	Active                         = 3,
	EApplicationState_MAX          = 4
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	EVectorQuantization_MAX        = 3
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraShakePlaySpace_MAX      = 3
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_PreBlended             = 5,
	VTBlend_MAX                    = 6
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	LockInFullscreen               = 3,
	EMouseLockMode_MAX             = 4
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	TransitionFollower             = 4,
	EAnimGroupRole_MAX             = 5
};


// Enum Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8_t
{
	Local                          = 0,
	Component                      = 1,
	EAnimSyncGroupScope_MAX        = 2
};


// Enum Engine.EAnimSyncMethod
enum class EAnimSyncMethod : uint8_t
{
	DoNotSync                      = 0,
	SyncGroup                      = 1,
	Graph                          = 2,
	EAnimSyncMethod_MAX            = 3
};


// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	LinkedLayers                   = 0,
	LinkedAnimGraph                = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE                      = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable                  = 3,
	AACF_DriveMaterial_DEPRECATED  = 4,
	AACF_Metadata                  = 5,
	AACF_DriveTrack                = 6,
	AACF_Disabled                  = 7,
	AACF_MAX                       = 8
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float                      = 0,
	RCT_Vector                     = 1,
	RCT_Transform                  = 2,
	RCT_MAX                        = 3
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_LocalAnimFrame            = 4,
	ABPT_MAX                       = 5
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAnimExecutionContextConversionResult
enum class EAnimExecutionContextConversionResult : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EAnimExecutionContextConversionResult_MAX = 2
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	Point                          = 5,
	EDrawDebugItemType_MAX         = 6
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2
};


// Enum Engine.EMontageBlendMode
enum class EMontageBlendMode : uint8_t
{
	Standard                       = 0,
	Inertialization                = 1,
	EMontageBlendMode_MAX          = 2
};


// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	Moved                          = 0,
	NotMoved                       = 1,
	InvalidSection                 = 2,
	InvalidMontage                 = 3,
	EMontageSubStepResult_MAX      = 4
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4
};


// Enum Engine.EAnimNodeDataFlags
enum class EAnimNodeDataFlags : uint8_t
{
	None                           = 0,
	HasInitialUpdateFunction       = 1,
	HasBecomeRelevantFunction      = 2,
	HasUpdateFunction              = 3,
	EAnimNodeDataFlags_MAX         = 4
};


// Enum Engine.EAnimNodeReferenceConversionResult
enum class EAnimNodeReferenceConversionResult : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EAnimNodeReferenceConversionResult_MAX = 2
};


// Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	Inactive                       = 0,
	Pending                        = 1,
	Active                         = 2,
	EInertializationState_MAX      = 3
};


// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	Invalid                        = 0,
	Valid                          = 1,
	Excluded                       = 2,
	EInertializationBoneState_MAX  = 3
};


// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	Default                        = 0,
	WorldSpace                     = 1,
	WorldRotation                  = 2,
	EInertializationSpace_MAX      = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend              = 0,
	TLT_Inertialization            = 1,
	TLT_DynamicCrossfadeDuration   = 2,
	TLT_Custom                     = 3,
	TLT_MAX                        = 4
};


// Enum Engine.EBakedAnimationStateType
enum class EBakedAnimationStateType : uint8_t
{
	Default                        = 0,
	Conduit                        = 1,
	Transparent                    = 2,
	EBakedAnimationStateType_MAX   = 3
};


// Enum Engine.EAnimPropertyAccessCallSite
enum class EAnimPropertyAccessCallSite : uint8_t
{
	WorkerThread_Unbatched         = 0,
	WorkerThread_Batched_PreEventGraph = 1,
	WorkerThread_Batched_PostEventGraph = 2,
	GameThread_Batched_PreEventGraph = 3,
	GameThread_Batched_PostEventGraph = 4,
	EAnimPropertyAccessCallSite_MAX = 5
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	Override                       = 0,
	DoNotOverride                  = 1,
	NormalizeByWeight              = 2,
	BlendByWeight                  = 3,
	UseBasePose                    = 4,
	UseMaxValue                    = 5,
	UseMinValue                    = 6,
	ECurveBlendOption_MAX          = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7
};


// Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	ProductionNeverCook            = 2,
	DevelopmentCook                = 3,
	DevelopmentAlwaysProductionNeverCook = 4,
	DevelopmentAlwaysCook          = 5,
	DevelopmentAlwaysProductionUnknownCook = 6,
	AlwaysCook                     = 7,
	EPrimaryAssetCookRule_MAX      = 8
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4
};


// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
	Continues                      = 0,
	Silent                         = 1,
	Hold                           = 2,
	ENaturalSoundFalloffMode_MAX   = 3
};


// Enum Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	Quad                           = 2,
	FivePointOne                   = 3,
	SevenPointOne                  = 4,
	EAudioBusChannels_MAX          = 5
};


// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	SCurve                         = 2,
	Sin                            = 3,
	Count                          = 4,
	EAudioFaderCurve_MAX           = 5
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
	Low16000Hz                     = 0,
	Normal24000Hz                  = 1,
	EVoiceSampleRate_MAX           = 2
};


// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	Linear                         = 0,
	EqualPower                     = 1,
	EPanningMethod_MAX             = 2
};


// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	Linear                         = 0,
	EqualPower                     = 1,
	FullVolume                     = 2,
	EMonoChannelUpmixMethod_MAX    = 3
};


// Enum Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8_t
{
	InsideTheVolume                = 0,
	OutsideTheVolume               = 1,
	EAudioVolumeLocationState_MAX  = 2
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5
};


// Enum Engine.EBlendProfileMode
enum class EBlendProfileMode : uint8_t
{
	TimeFactor                     = 0,
	WeightFactor                   = 1,
	BlendMask                      = 2,
	EBlendProfileMode_MAX          = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_MAX                        = 3
};


// Enum Engine.EPreferredTriangulationDirection
enum class EPreferredTriangulationDirection : uint8_t
{
	None                           = 0,
	Tangential                     = 1,
	Radial                         = 2,
	EPreferredTriangulationDirection_MAX = 3
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.EInterfaceValidResult
enum class EInterfaceValidResult : uint8_t
{
	Valid                          = 0,
	Invalid                        = 1,
	EInterfaceValidResult_MAX      = 2
};


// Enum Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8_t
{
	ApplyAsAbsolute                = 0,
	SkipAutoScale                  = 1,
	SkipAutoPlaySpace              = 2,
	Default                        = 3,
	ECameraShakeUpdateResultFlags_MAX = 4
};


// Enum Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
	Fixed                          = 0,
	Infinite                       = 1,
	Custom                         = 2,
	ECameraShakeDurationType_MAX   = 3
};


// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
	Linear                         = 0,
	Quadratic                      = 1,
	ECameraShakeAttenuation_MAX    = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2
};


// Enum Engine.ETransformCurveChannel
enum class ETransformCurveChannel : uint8_t
{
	Position                       = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Invalid                        = 3,
	ETransformCurveChannel_MAX     = 4
};


// Enum Engine.EVectorCurveChannel
enum class EVectorCurveChannel : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	Invalid                        = 3,
	EVectorCurveChannel_MAX        = 4
};


// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	Empty                          = 0,
	SimpleCurves                   = 1,
	RichCurves                     = 2,
	ECurveTableMode_MAX            = 3
};


// Enum Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8_t
{
	Override                       = 0,
	Blend                          = 1,
	ECustomAttributeBlendType_MAX  = 2
};


// Enum Engine.FDataDrivenCVarType
enum class EFDataDrivenCVarType : uint8_t
{
	CVarFloat                      = 0,
	CVarInt                        = 1,
	CVarBool                       = 2,
	FDataDrivenCVarType_MAX        = 3
};


// Enum Engine.EDataLayerState
enum class EDataLayerState : uint8_t
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	EDataLayerState_MAX            = 3
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	None                           = 0,
	Array                          = 1,
	Set                            = 2,
	Map                            = 3,
	EPinContainerType_MAX          = 4
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
	CONNECT_RESPONSE_MAX           = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	None                           = 0,
	Paused                         = 1,
	Loading                        = 2,
	Saving                         = 3,
	Connecting                     = 4,
	Precaching                     = 5,
	WaitingToConnect               = 6,
	MAX                            = 7
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2
};


// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	Generic                        = 0,
	DemoNotFound                   = 1,
	Corrupt                        = 2,
	InvalidVersion                 = 3,
	InitBase                       = 4,
	GameSpecificHeader             = 5,
	ReplayStreamerInternal         = 6,
	LoadMap                        = 7,
	Serialization                  = 8,
	EDemoPlayFailure_MAX           = 9
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PathTracing                = 24,
	VMI_RayTracingDebug            = 25,
	VMI_VisualizeNanite            = 26,
	VMI_VirtualTexturePendingMips  = 27,
	VMI_VisualizeLumen             = 28,
	VMI_VisualizeVirtualShadowMap  = 29,
	VMI_Max                        = 30,
	VMI_Unknown                    = 31
};


// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	Default                        = 0,
	ForceSurface                   = 1,
	ForceVolumetric                = 2,
	ELightmapType_MAX              = 3
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_AlphaHoldout             = 6,
	BLEND_ModulateRGBA             = 7,
	BLEND_MAX                      = 8
};


// Enum Engine.EMaterialFloatPrecisionMode
enum class EMaterialFloatPrecisionMode : uint8_t
{
	MFPM_Default                   = 0,
	MFPM_Full_MaterialExpressionOnly = 1,
	MFPM_Full                      = 2,
	MFPM_Half                      = 3,
	MFPM_MAX                       = 4
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3
};


// Enum Engine.EDynamicGlobalIlluminationMethod
enum class EDynamicGlobalIlluminationMethod : uint8_t
{
	None                           = 0,
	Lumen                          = 1,
	ScreenSpace                    = 2,
	RayTraced                      = 3,
	Plugin                         = 4,
	EDynamicGlobalIlluminationMethod_MAX = 5
};


// Enum Engine.EReflectionMethod
enum class EReflectionMethod : uint8_t
{
	None                           = 0,
	Lumen                          = 1,
	ScreenSpace                    = 2,
	RayTraced                      = 3,
	EReflectionMethod_MAX          = 4
};


// Enum Engine.EShadowMapMethod
enum class EShadowMapMethod : uint8_t
{
	ShadowMaps                     = 0,
	VirtualShadowMaps              = 1,
	EShadowMapMethod_MAX           = 2
};


// Enum Engine.ECastRayTracedShadow
enum class ECastRayTracedShadow : uint8_t
{
	Disabled                       = 0,
	UseProjectSetting              = 1,
	Enabled                        = 2,
	ECastRayTracedShadow_MAX       = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_FinalColorHDR              = 8,
	SCS_FinalToneCurveHDR          = 9,
	SCS_MAX                        = 10
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 2,
	Force16BitsPerChannel          = 3,
	EGBufferFormat_MAX             = 4
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	EParticleCollisionMode_MAX     = 2
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_SingleLayerWater           = 10,
	MSM_ThinTranslucent            = 11,
	MSM_Strata                     = 12,
	MSM_NUM                        = 13,
	MSM_FromMaterialExpression     = 14,
	MSM_MAX                        = 15
};


// Enum Engine.EStrataShadingModel
enum class EStrataShadingModel : uint8_t
{
	SSM_Unlit                      = 0,
	SSM_DefaultLit                 = 1,
	SSM_SubsurfaceLit              = 2,
	SSM_VolumetricFogCloud         = 3,
	SSM_Hair                       = 4,
	SSM_SingleLayerWater           = 5,
	SSM_NUM                        = 6
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_Data               = 8,
	SAMPLERTYPE_External           = 9,
	SAMPLERTYPE_VirtualColor       = 10,
	SAMPLERTYPE_VirtualGrayscale   = 11,
	SAMPLERTYPE_VirtualAlpha       = 12,
	SAMPLERTYPE_VirtualNormal      = 13,
	SAMPLERTYPE_VirtualMasks       = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX                = 17
};


// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less                       = 0,
	MSC_LessEqual                  = 1,
	MSC_Greater                    = 2,
	MSC_GreaterEqual               = 3,
	MSC_Equal                      = 4,
	MSC_NotEqual                   = 5,
	MSC_Never                      = 6,
	MSC_Always                     = 7,
	MSC_Count                      = 8,
	MSC_MAX                        = 9
};


// Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
	MSR_1x1                        = 0,
	MSR_2x1                        = 1,
	MSR_1x2                        = 2,
	MSR_2x2                        = 3,
	MSR_4x2                        = 4,
	MSR_2x4                        = 5,
	MSR_4x4                        = 6,
	MSR_Count                      = 7,
	MSR_MAX                        = 8
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	ENetworkSmoothingMode_MAX      = 4
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_EaseInOut                 = 3,
	BSIT_ExponentialDecay          = 4,
	BSIT_SpringDamper              = 5,
	BSIT_MAX                       = 6
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Cyan                           = 3,
	Magenta                        = 4,
	Yellow                         = 5,
	White                          = 6,
	Black                          = 7,
	MAX                            = 8
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	EPostCopyOperation_MAX         = 2
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3
};


// Enum Engine.EHISMViewRelevanceType
enum class EHISMViewRelevanceType : uint8_t
{
	Grass                          = 0,
	Foliage                        = 1,
	HISM                           = 2,
	EHISMViewRelevanceType_MAX     = 3
};


// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
	HPP_World                      = 0,
	HPP_Wireframe                  = 1,
	HPP_Foreground                 = 2,
	HPP_UI                         = 3,
	HPP_MAX                        = 4
};


// Enum Engine.EHLODBatchingPolicy
enum class EHLODBatchingPolicy : uint8_t
{
	None                           = 0,
	MeshSection                    = 1,
	Instancing                     = 2,
	EHLODBatchingPolicy_MAX        = 3
};


// Enum Engine.EHLODLayerType
enum class EHLODLayerType : uint8_t
{
	Instancing                     = 0,
	MeshMerge                      = 1,
	MeshSimplify                   = 2,
	MeshApproximate                = 3,
	Custom                         = 4,
	EHLODLayerType_MAX             = 5
};


// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	Luminance                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Alpha                          = 4,
	EImportanceWeight_MAX          = 5
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	None                           = 0,
	Scroll                         = 1,
	Magnify                        = 2,
	Swipe                          = 3,
	Rotate                         = 4,
	LongPress                      = 5,
	ESlateGesture_MAX              = 6
};


// Enum Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8_t
{
	None                           = 0,
	Transient                      = 1,
	EMIDCreationFlags_MAX          = 2
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3
};


// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	First                          = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	EMatrixColumns_MAX             = 4
};


// Enum Engine.EScreenPercentageMode
enum class EScreenPercentageMode : uint8_t
{
	Manual                         = 0,
	BasedOnDisplayResolution       = 1,
	BasedOnDPIScale                = 2,
	EScreenPercentageMode_MAX      = 3
};


// Enum Engine.ELevelInstanceRuntimeBehavior
enum class ELevelInstanceRuntimeBehavior : uint8_t
{
	None                           = 0,
	Embedded_Deprecated            = 1,
	Partitioned                    = 2,
	LevelStreaming                 = 3,
	ELevelInstanceRuntimeBehavior_MAX = 4
};


// Enum Engine.ELevelInstanceCreationType
enum class ELevelInstanceCreationType : uint8_t
{
	LevelInstance                  = 0,
	PackedLevelActor               = 1,
	ELevelInstanceCreationType_MAX = 2
};


// Enum Engine.ELevelInstancePivotType
enum class ELevelInstancePivotType : uint8_t
{
	CenterMinZ                     = 0,
	Center                         = 1,
	Actor                          = 2,
	WorldOrigin                    = 3,
	ELevelInstancePivotType_MAX    = 4
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.ESyncOption
enum class ESyncOption : uint8_t
{
	Drive                          = 0,
	Passive                        = 1,
	Disabled                       = 2,
	ESyncOption_MAX                = 3
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_MAX                        = 17
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EMaterialTranslucencyPass
enum class EMaterialTranslucencyPass : uint8_t
{
	MTP_BeforeDOF                  = 0,
	MTP_AfterDOF                   = 1,
	MTP_AfterMotionBlur            = 2,
	MTP_MAX                        = 3
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EChannelMaskParameterColor_MAX = 4
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MaterialAttributes        = 4,
	CMOT_MAX                       = 5
};


// Enum Engine.EDBufferTextureId
enum class EDBufferTextureId : uint8_t
{
	DBT_A                          = 0,
	DBT_B                          = 1,
	DBT_C                          = 2,
	DBT_MAX                        = 3
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_VolumeTexture    = 7,
	FunctionInput_StaticBool       = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal  = 10,
	FunctionInput_MAX              = 11
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None                    = 0,
	RVTMVM_MipLevel                = 1,
	RVTMVM_MipBias                 = 2,
	RVTMVM_RecalculateDerivatives  = 3,
	RVTMVM_MAX                     = 4
};


// Enum Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
	RVTTA_Clamp                    = 0,
	RVTTA_Wrap                     = 1,
	RVTTA_MAX                      = 2
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_Instance       = 6,
	TRANSFORMSOURCE_MAX            = 7
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_Instance             = 6,
	TRANSFORM_MAX                  = 7
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_Instance    = 6,
	TRANSFORMPOSSOURCE_MAX         = 7
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_TemporalSampleCount       = 7,
	MEVP_TemporalSampleIndex       = 8,
	MEVP_TemporalSampleOffset      = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure               = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_MAX                       = 14
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4
};


// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	Default                        = 0,
	MaterialLayer                  = 1,
	MaterialLayerBlend             = 2,
	EMaterialFunctionUsage_MAX     = 3
};


// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections   = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_NiagaraSprites        = 10,
	MATUSAGE_NiagaraRibbons        = 11,
	MATUSAGE_NiagaraMeshParticles  = 12,
	MATUSAGE_GeometryCache         = 13,
	MATUSAGE_Water                 = 14,
	MATUSAGE_HairStrands           = 15,
	MATUSAGE_LidarPointCloud       = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_Nanite                = 18,
	MATUSAGE_CompositeMesh         = 19,
	MATUSAGE_MAX                   = 20
};


// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3
};


// Enum Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8_t
{
	Uninitialized                  = 0,
	LinkedToParent                 = 1,
	UnlinkedFromParent             = 2,
	NotFromParent                  = 3,
	EMaterialLayerLinkState_MAX    = 4
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_AutomaticFromTexelDensity = 4,
	TextureSizingType_AutomaticFromMeshScreenSize = 5,
	TextureSizingType_AutomaticFromMeshDrawDistance = 6,
	TextureSizingType_MAX          = 7
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_WorldTangent               = 29,
	PPI_Anisotropy                 = 30,
	PPI_ForegroundStencilMask      = 31,
	PPI_MAX                        = 32
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_RuntimeVirtualTexture       = 6,
	MD_MAX                         = 7
};


// Enum Engine.EBillboardMode
enum class EBillboardMode : uint8_t
{
	None                           = 0,
	RotateAroundUpVector           = 1,
	AlignTowardsCamera             = 2,
	EBillboardMode_MAX             = 3
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted                  = 0,
	AreaWeighted                   = 1,
	EqualWeighted                  = 2,
	EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2
};


// Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	DoNotOutputChannel             = 0,
	OutputChannel                  = 1,
	EUVOutput_MAX                  = 2
};


// Enum Engine.EMeshApproximationType
enum class EMeshApproximationType : uint8_t
{
	MeshAndMaterials               = 0,
	MeshShapeOnly                  = 1,
	EMeshApproximationType_MAX     = 2
};


// Enum Engine.EMeshApproximationBaseCappingType
enum class EMeshApproximationBaseCappingType : uint8_t
{
	NoBaseCapping                  = 0,
	ConvexPolygon                  = 1,
	ConvexSolid                    = 2,
	EMeshApproximationBaseCappingType_MAX = 3
};


// Enum Engine.EOccludedGeometryFilteringPolicy
enum class EOccludedGeometryFilteringPolicy : uint8_t
{
	NoOcclusionFiltering           = 0,
	VisibilityBasedFiltering       = 1,
	EOccludedGeometryFilteringPolicy_MAX = 2
};


// Enum Engine.EMeshApproximationSimplificationPolicy
enum class EMeshApproximationSimplificationPolicy : uint8_t
{
	FixedTriangleCount             = 0,
	TrianglesPerArea               = 1,
	GeometricTolerance             = 2,
	EMeshApproximationSimplificationPolicy_MAX = 3
};


// Enum Engine.EMeshApproximationGroundPlaneClippingPolicy
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8_t
{
	NoGroundClipping               = 0,
	DiscardWithZPlane              = 1,
	CutWithZPlane                  = 2,
	CutAndFillWithZPlane           = 3,
	EMeshApproximationGroundPlaneClippingPolicy_MAX = 4
};


// Enum Engine.EMeshApproximationUVGenerationPolicy
enum class EMeshApproximationUVGenerationPolicy : uint8_t
{
	PreferUVAtlas                  = 0,
	PreferXAtlas                   = 1,
	PreferPatchBuilder             = 2,
	EMeshApproximationUVGenerationPolicy_MAX = 3
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMirrorRowType
enum class EMirrorRowType : uint8_t
{
	Bone                           = 0,
	AnimationNotify                = 1,
	Curve                          = 2,
	SyncMarker                     = 3,
	Custom                         = 4,
	EMirrorRowType_MAX             = 5
};


// Enum Engine.EMirrorFindReplaceMethod
enum class EMirrorFindReplaceMethod : uint8_t
{
	Prefix                         = 0,
	Suffix                         = 1,
	RegularExpression              = 2,
	EMirrorFindReplaceMethod_MAX   = 3
};


// Enum Engine.ETrajectorySampleDomain
enum class ETrajectorySampleDomain : uint8_t
{
	None                           = 0,
	Time                           = 1,
	Distance                       = 2,
	ETrajectorySampleDomain_MAX    = 3
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	InferFromWorldMode             = 5,
	FNavigationSystemRunMode_MAX   = 6
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_VectorUnitRand            = 8,
	PSPT_MAX                       = 9
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8_t
{
	RBAN                           = 0,
	World                          = 1,
	EPhysicsAssetSolverType_MAX    = 2
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5
};


// Enum Engine.EVoiceBlockReasons
enum class EVoiceBlockReasons : uint8_t
{
	None                           = 0,
	Muted                          = 1,
	MutedBy                        = 2,
	Gameplay                       = 3,
	Blocked                        = 4,
	BlockedBy                      = 5,
	EVoiceBlockReasons_MAX         = 6
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default                   = 0,
	ERSM_255                       = 1,
	ERSM_1                         = 2,
	ERSM_2                         = 3,
	ERSM_4                         = 4,
	ERSM_8                         = 5,
	ERSM_16                        = 6,
	ERSM_32                        = 7,
	ERSM_64                        = 8,
	ERSM_128                       = 9,
	ERSM_MAX                       = 10
};


// Enum Engine.ERayTracingGroupCullingPriority
enum class ERayTracingGroupCullingPriority : uint8_t
{
	CP_0_NEVER_CULL                = 0,
	CP_1                           = 1,
	CP_2                           = 2,
	CP_3                           = 3,
	CP_4_DEFAULT                   = 4,
	CP_5                           = 5,
	CP_6                           = 6,
	CP_7                           = 7,
	CP_8_QUICKLY_CULL              = 8,
	CP_MAX                         = 9
};


// Enum Engine.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
	InternalUnbatched              = 0,
	ExternalUnbatched              = 1,
	InternalBatched                = 2,
	ExternalBatched                = 3,
	Count                          = 4,
	EPropertyAccessCopyBatch_MAX   = 5
};


// Enum Engine.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
	Offset                         = 0,
	Object                         = 1,
	Array                          = 2,
	ScriptFunction                 = 3,
	NativeFunction                 = 4,
	EPropertyAccessIndirectionType_MAX = 5
};


// Enum Engine.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
	None                           = 0,
	Object                         = 1,
	WeakObject                     = 2,
	SoftObject                     = 3,
	EPropertyAccessObjectType_MAX  = 4
};


// Enum Engine.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
	None                           = 0,
	Plain                          = 1,
	Complex                        = 2,
	Bool                           = 3,
	Struct                         = 4,
	Object                         = 5,
	Name                           = 6,
	Array                          = 7,
	PromoteBoolToByte              = 8,
	PromoteBoolToInt32             = 9,
	PromoteBoolToInt64             = 10,
	PromoteBoolToFloat             = 11,
	PromoteBoolToDouble            = 12,
	PromoteByteToInt32             = 13,
	PromoteByteToInt64             = 14,
	PromoteByteToFloat             = 15,
	PromoteByteToDouble            = 16,
	PromoteInt32ToInt64            = 17,
	PromoteInt32ToFloat            = 18,
	PromoteInt32ToDouble           = 19,
	PromoteFloatToDouble           = 20,
	DemoteDoubleToFloat            = 21,
	PromoteArrayFloatToDouble      = 22,
	DemoteArrayDoubleToFloat       = 23,
	EPropertyAccessCopyType_MAX    = 24
};


// Enum Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8_t
{
	HalfNote                       = 0,
	QuarterNote                    = 1,
	EighthNote                     = 2,
	SixteenthNote                  = 3,
	ThirtySecondNote               = 4,
	Count                          = 5,
	EQuartzTimeSignatureQuantization_MAX = 6
};


// Enum Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8_t
{
	MetronomeTick                  = 0,
	CommandEvent                   = 1,
	Count                          = 2,
	EQuartzDelegateType_MAX        = 3
};


// Enum Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8_t
{
	BarRelative                    = 0,
	TransportRelative              = 1,
	CurrentTimeRelative            = 2,
	Count                          = 3,
	EQuarztQuantizationReference_MAX = 4
};


// Enum Engine.EQuartzCommandType
enum class EQuartzCommandType : uint8_t
{
	PlaySound                      = 0,
	QueueSoundToPlay               = 1,
	RetriggerSound                 = 2,
	TickRateChange                 = 3,
	TransportReset                 = 4,
	StartOtherClock                = 5,
	EQuartzCommandType_MAX         = 6
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2
};


// Enum Engine.EMobileReflectionCompression
enum class EMobileReflectionCompression : uint8_t
{
	Default                        = 0,
	On                             = 1,
	Off                            = 2,
	EMobileReflectionCompression_MAX = 3
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	ECompositingSampleCount_MAX    = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4
};


// Enum Engine.EVelocityOutputPass
enum class EVelocityOutputPass : uint8_t
{
	DepthPass                      = 0,
	BasePass                       = 1,
	AfterBasePass                  = 2,
	EVelocityOutputPass_MAX        = 3
};


// Enum Engine.EVertexDeformationOutputsVelocity
enum class EVertexDeformationOutputsVelocity : uint8_t
{
	Off                            = 0,
	On                             = 1,
	Auto                           = 2,
	EVertexDeformationOutputsVelocity_MAX = 3
};


// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	Disabled                       = 0,
	LinearColorSpaceOnly           = 1,
	AllowThroughTonemapper         = 2,
	EAlphaChannelMode_MAX          = 3
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	DBBPF_B8G8R8A8                 = 0,
	DBBPF_A16B16G16R16_DEPRECATED  = 1,
	DBBPF_FloatRGB_DEPRECATED      = 2,
	DBBPF_FloatRGBA                = 3,
	DBBPF_A2B10G10R10              = 4,
	DBBPF_MAX                      = 5
};


// Enum Engine.EFixedFoveationLevels
enum class EFixedFoveationLevels : uint8_t
{
	Disabled                       = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	HighTop                        = 4,
	EFixedFoveationLevels_MAX      = 5
};


// Enum Engine.EMobileAntiAliasingMethod
enum class EMobileAntiAliasingMethod : uint8_t
{
	None                           = 0,
	FXAA                           = 1,
	TemporalAA                     = 2,
	MSAA                           = 3,
	EMobileAntiAliasingMethod_MAX  = 4
};


// Enum Engine.EMobileFloatPrecisionMode
enum class EMobileFloatPrecisionMode : uint8_t
{
	Half                           = 0,
	Full_MaterialExpressionOnly    = 1,
	Full                           = 2,
	EMobileFloatPrecisionMode_MAX  = 3
};


// Enum Engine.EShaderCompressionFormat
enum class EShaderCompressionFormat : uint8_t
{
	None                           = 0,
	LZ4                            = 1,
	Oodle                          = 2,
	Zlib                           = 3,
	EShaderCompressionFormat_MAX   = 4
};


// Enum Engine.ELumenSoftwareTracingMode
enum class ELumenSoftwareTracingMode : uint8_t
{
	DetailTracing                  = 0,
	GlobalTracing                  = 1,
	ELumenSoftwareTracingMode_MAX  = 2
};


// Enum Engine.ELumenRayLightingMode
enum class ELumenRayLightingMode : uint8_t
{
	SurfaceCache                   = 0,
	HitLighting                    = 1,
	ELumenRayLightingMode_MAX      = 2
};


// Enum Engine.EWorkingColorSpace
enum class EWorkingColorSpace : uint8_t
{
	sRGB                           = 0,
	Rec2020                        = 1,
	ACESAP0                        = 2,
	ACESAP1                        = 3,
	P3DCI                          = 4,
	P3D65                          = 5,
	Custom                         = 6,
	EWorkingColorSpace_MAX         = 7
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	Reverb_SmallRoom               = 17,
	Reverb_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	Reverb_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,
	ReverbPreset_MAX               = 24
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_Weighted                  = 5,
	RCCF_MAX                       = 6
};


// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	MAX                            = 2
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 0,
	Finished                       = 1,
	MarkedForRemoval               = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck       = 0,
	DisablePartialEndTick          = 1,
	IgnoreZAccumulate              = 2,
	ERootMotionSourceSettingsFlags_MAX = 3
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	BaseColor                      = 0,
	BaseColor_Normal_DEPRECATED    = 1,
	BaseColor_Normal_Roughness     = 2,
	BaseColor_Normal_Specular      = 3,
	BaseColor_Normal_Specular_YCoCg = 4,
	BaseColor_Normal_Specular_Mask_YCoCg = 5,
	WorldHeight                    = 6,
	Count                          = 7,
	ERuntimeVirtualTextureMaterialType_MAX = 8
};


// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	Never                          = 0,
	Exclusive                      = 1,
	Always                         = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.ETemperatureMethod
enum class ETemperatureMethod : uint8_t
{
	TEMP_WhiteBalance              = 0,
	TEMP_ColorTemperature          = 1,
	TEMP_MAX                       = 2
};


// Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	Unitless                       = 0,
	Candelas                       = 1,
	Lumens                         = 2,
	ELightUnits_MAX                = 3
};


// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	ScreenSpace                    = 0,
	RayTracing                     = 1,
	EReflectionsType_MAX           = 2
};


// Enum Engine.ELumenRayLightingModeOverride
enum class ELumenRayLightingModeOverride : uint8_t
{
	Default                        = 0,
	SurfaceCache                   = 1,
	HitLighting                    = 2,
	ELumenRayLightingModeOverride_MAX = 3
};


// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	Raster                         = 0,
	RayTracing                     = 1,
	ETranslucencyType_MAX          = 2
};


// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	Disabled                       = 0,
	BruteForce                     = 1,
	FinalGather                    = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};


// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	Disabled                       = 0,
	Hard_shadows                   = 1,
	Area_shadows                   = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};


// Enum Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8_t
{
	Usual                          = 0,
	MobilePPRExclusive             = 1,
	MobilePPR                      = 2,
	EMobilePlanarReflectionMode_MAX = 3
};


// Enum Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8_t
{
	Disabled                       = 0,
	BestPerformance                = 1,
	BetterQuality                  = 2,
	BestQuality                    = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4
};


// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	PRM_LegacySceneCapture         = 0,
	PRM_RenderScenePrimitives      = 1,
	PRM_UseShowOnlyList            = 2,
	PRM_MAX                        = 3
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Anisotropy                  = 9,
	MP_Normal                      = 10,
	MP_Tangent                     = 11,
	MP_WorldPositionOffset         = 12,
	MP_WorldDisplacement_DEPRECATED = 13,
	MP_TessellationMultiplier_DEPRECATED = 14,
	MP_SubsurfaceColor             = 15,
	MP_CustomData0                 = 16,
	MP_CustomData1                 = 17,
	MP_AmbientOcclusion            = 18,
	MP_Refraction                  = 19,
	MP_CustomizedUVs0              = 20,
	MP_CustomizedUVs1              = 21,
	MP_CustomizedUVs2              = 22,
	MP_CustomizedUVs3              = 23,
	MP_CustomizedUVs4              = 24,
	MP_CustomizedUVs5              = 25,
	MP_CustomizedUVs6              = 26,
	MP_CustomizedUVs7              = 27,
	MP_PixelDepthOffset            = 28,
	MP_ShadingModel                = 29,
	MP_FrontMaterial               = 30,
	MP_MaterialAttributes          = 31,
	MP_CustomOutput                = 32,
	MP_MAX                         = 33
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_TSR                        = 4,
	AAM_MAX                        = 5
};


// Enum Engine.ESkeletalMeshAsyncProperties
enum class ESkeletalMeshAsyncProperties : uint8_t
{
	None                           = 0,
	Materials                      = 1,
	Skeleton                       = 2,
	RefSkeleton                    = 3,
	RetargetBasePose               = 4,
	RefBasesInvMatrix              = 5,
	MeshClothingAssets             = 6,
	UseLegacyMeshDerivedDataKey    = 7,
	HasActiveClothingAssets        = 8,
	LODSettings                    = 9,
	HasVertexColors                = 10,
	VertexColorGuid                = 11,
	MorphTargets                   = 12,
	SkeletalMeshRenderData         = 13,
	MeshEditorDataObject           = 14,
	NeverStream                    = 15,
	OverrideLODStreamingSettings   = 16,
	SupportLODStreaming            = 17,
	MaxNumStreamedLODs             = 18,
	MaxNumOptionalLODs             = 19,
	ImportedModel                  = 20,
	LODInfo                        = 21,
	SkinWeightProfiles             = 22,
	CachedComposedRefPoseMatrices  = 23,
	SamplingInfo                   = 24,
	NodeMappingData                = 25,
	ShadowPhysicsAsset             = 26,
	SkelMirrorTable                = 27,
	MinLod                         = 28,
	DisableBelowMinLodStripping    = 29,
	SkelMirrorAxis                 = 30,
	SkelMirrorFlipAxis             = 31,
	DefaultAnimationRig            = 32,
	NegativeBoundsExtension        = 33,
	PositiveBoundsExtension        = 34,
	ExtendedBounds                 = 35,
	HasBeenSimplified              = 36,
	EnablePerPolyCollision         = 37,
	BodySetup                      = 38,
	MorphTargetIndexMap            = 39,
	FloorOffset                    = 40,
	ImportedBounds                 = 41,
	PhysicsAsset                   = 42,
	AssetImportData                = 43,
	ThumbnailInfo                  = 44,
	HasCustomDefaultEditorCamera   = 45,
	DefaultEditorCameraLocation    = 46,
	DefaultEditorCameraRotation    = 47,
	RequiresLODScreenSizeConversion = 48,
	PostProcessAnimBlueprint       = 49,
	DefaultEditorCameraLookAt      = 50,
	PreviewAttachedAssetContainer  = 51,
	DefaultEditorCameraOrthoZoom   = 52,
	RequiresLODHysteresisConversion = 53,
	bSupportRayTracing             = 54,
	RayTracingMinLOD               = 55,
	ClothLODBiasMode               = 56,
	All                            = 57,
	ESkeletalMeshAsyncProperties_MAX = 58
};


// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
	Auto                           = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	ESkinCacheUsage_MAX            = 3
};


// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	ESkinCacheDefaultBehavior_MAX  = 2
};


// Enum Engine.EClothLODBiasMode
enum class EClothLODBiasMode : uint8_t
{
	MappingsToSameLOD              = 0,
	MappingsToMinLOD               = 1,
	MappingsToAnyLOD               = 2,
	EClothLODBiasMode_MAX          = 3
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4
};


// Enum Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8_t
{
	BoneOnly                       = 0,
	ImmediateParent                = 1,
	ParentHierarchy                = 2,
	ECustomBoneAttributeLookup_MAX = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	Before_Versionning             = 0,
	SkeletalMeshBuildRefactor      = 1,
	VersionPlusOne                 = 2,
	LatestVersion                  = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4
};


// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	Before_Versionning             = 0,
	SkeletalMeshBuildRefactor      = 1,
	VersionPlusOne                 = 2,
	LatestVersion                  = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4
};


// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	Remove                         = 0,
	Keep                           = 1,
	Invalid                        = 2,
	EBoneFilterActionOption_MAX    = 3
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	OrientAndScale                 = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered       = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2
};


// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform  = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	EAirAbsorptionMethod_MAX       = 2
};


// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EReverbSendMethod_MAX          = 3
};


// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESubmixSendMethod_MAX          = 3
};


// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EPriorityAttenuationMethod_MAX = 3
};


// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	Disabled                       = 0,
	PlayWhenSilent                 = 1,
	Restart                        = 2,
	EVirtualizationMode_MAX        = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count                          = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};


// Enum Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8_t
{
	Default                        = 0,
	Distance                       = 1,
	Priority                       = 2,
	EConcurrencyVolumeScaleMode_MAX = 3
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.EModulationRouting
enum class EModulationRouting : uint8_t
{
	Disable                        = 0,
	Inherit                        = 1,
	Override                       = 2,
	EModulationRouting_MAX         = 3
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	ESourceBusChannels_MAX         = 2
};


// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};


// Enum Engine.EFFTSize
enum class EFFTSize : uint8_t
{
	DefaultSize                    = 0,
	Min                            = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	Max                            = 6
};


// Enum Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	NearestNeighbor                = 0,
	Linear                         = 1,
	Quadratic                      = 2,
	ConstantQ                      = 3,
	EFFTPeakInterpolationMethod_MAX = 4
};


// Enum Engine.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	None                           = 0,
	Hamming                        = 1,
	Hann                           = 2,
	Blackman                       = 3,
	EFFTWindowType_MAX             = 4
};


// Enum Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	MagnitudeSpectrum              = 0,
	PowerSpectrum                  = 1,
	Decibel                        = 2,
	EAudioSpectrumType_MAX         = 3
};


// Enum Engine.EGainParamMode
enum class EGainParamMode : uint8_t
{
	Linear                         = 0,
	Decibels                       = 1,
	EGainParamMode_MAX             = 2
};


// Enum Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8_t
{
	KickDrum                       = 0,
	SnareDrum                      = 1,
	Voice                          = 2,
	Cymbals                        = 3,
	EAudioSpectrumBandPresetType_MAX = 4
};


// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	SoundWave                      = 0,
	WavFile                        = 1,
	EAudioRecordingExportType_MAX  = 2
};


// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESendLevelControlMethod_MAX    = 3
};


// Enum Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8_t
{
	PostDistanceAttenuation        = 0,
	PreDistanceAttenuation         = 1,
	ESubmixSendStage_MAX           = 2
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	VerySmall_64                   = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	VeryLarge_2048                 = 4,
	ESoundWaveFFTSize_MAX          = 5
};


// Enum Engine.ESoundAssetCompressionType
enum class ESoundAssetCompressionType : uint8_t
{
	BinkAudio                      = 0,
	ADPCM                          = 1,
	PCM                            = 2,
	PlatformSpecific               = 3,
	ESoundAssetCompressionType_MAX = 4
};


// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
	Inherited                      = 0,
	RetainOnLoad                   = 1,
	PrimeOnLoad                    = 2,
	LoadOnDemand                   = 3,
	ForceInline                    = 4,
	Uninitialized                  = 5,
	ESoundWaveLoadingBehavior_MAX  = 6
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_EquirectLayer             = 3,
	SLSH_MAX                       = 4
};


// Enum Engine.EChunkSeekTableMode
enum class EChunkSeekTableMode : uint8_t
{
	ConstantSamplesPerEntry        = 0,
	VariableSamplesPerEntry        = 1,
	EChunkSeekTableMode_MAX        = 2
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData          = 32,
	TEXTUREGROUP_16BitData         = 33,
	TEXTUREGROUP_Project01         = 34,
	TEXTUREGROUP_Project02         = 35,
	TEXTUREGROUP_Project03         = 36,
	TEXTUREGROUP_Project04         = 37,
	TEXTUREGROUP_Project05         = 38,
	TEXTUREGROUP_Project06         = 39,
	TEXTUREGROUP_Project07         = 40,
	TEXTUREGROUP_Project08         = 41,
	TEXTUREGROUP_Project09         = 42,
	TEXTUREGROUP_Project10         = 43,
	TEXTUREGROUP_Project11         = 44,
	TEXTUREGROUP_Project12         = 45,
	TEXTUREGROUP_Project13         = 46,
	TEXTUREGROUP_Project14         = 47,
	TEXTUREGROUP_Project15         = 48,
	TEXTUREGROUP_Project16         = 49,
	TEXTUREGROUP_MAX               = 50
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_Unfiltered                = 20,
	TMGS_Angular                   = 21,
	TMGS_MAX                       = 22
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5
};


// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	Default                        = 0,
	AllMips                        = 1,
	OnlyFirstMip                   = 2,
	ETextureMipLoadOptions_MAX     = 3
};


// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
	Default                        = 0,
	Unfiltered                     = 1,
	SimpleAverage                  = 2,
	Sharpen0                       = 3,
	Sharpen1                       = 4,
	Sharpen2                       = 5,
	Sharpen3                       = 6,
	Sharpen4                       = 7,
	Sharpen5                       = 8,
	Sharpen6                       = 9,
	Sharpen7                       = 10,
	Sharpen8                       = 11,
	Sharpen9                       = 12,
	Sharpen10                      = 13,
	ETextureDownscaleOptions_MAX   = 14
};


// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default                   = 0,
	TLCA_None                      = 1,
	TLCA_Lowest                    = 2,
	TLCA_Low                       = 3,
	TLCA_Medium                    = 4,
	TLCA_High                      = 5,
	TLCA_Highest                   = 6,
	TLCA_MAX                       = 7
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.ETextureSourceCompressionFormat
enum class ETextureSourceCompressionFormat : uint8_t
{
	TSCF_None                      = 0,
	TSCF_PNG                       = 1,
	TSCF_JPEG                      = 2,
	TSCF_MAX                       = 3
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_G16                        = 8,
	TSF_MAX                        = 9
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_HalfFloat                   = 12,
	TC_LQ                          = 13,
	TC_EncodedReflectionCapture    = 14,
	TC_MAX                         = 15
};


// Enum Engine.ETextureSourceEncoding
enum class ETextureSourceEncoding : uint8_t
{
	TSE_None                       = 0,
	TSE_Linear                     = 1,
	TSE_sRGB                       = 2,
	TSE_ST2084                     = 3,
	TSE_Gamma22                    = 4,
	TSE_BT1886                     = 5,
	TSE_Gamma26                    = 6,
	TSE_Cineon                     = 7,
	TSE_REDLog                     = 8,
	TSE_REDLog3G10                 = 9,
	TSE_SLog1                      = 10,
	TSE_SLog2                      = 11,
	TSE_SLog3                      = 12,
	TSE_AlexaV3LogC                = 13,
	TSE_CanonLog                   = 14,
	TSE_ProTune                    = 15,
	TSE_VLog                       = 16,
	TSE_MAX                        = 17
};


// Enum Engine.ETextureColorSpace
enum class ETextureColorSpace : uint8_t
{
	TCS_None                       = 0,
	TCS_sRGB                       = 1,
	TCS_Rec2020                    = 2,
	TCS_ACESAP0                    = 3,
	TCS_ACESAP1                    = 4,
	TCS_P3DCI                      = 5,
	TCS_P3D65                      = 6,
	TCS_REDWideGamut               = 7,
	TCS_SonySGamut3                = 8,
	TCS_SonySGamut3Cine            = 9,
	TCS_AlexaWideGamut             = 10,
	TCS_CanonCinemaGamut           = 11,
	TCS_GoProProtuneNative         = 12,
	TCS_PanasonicVGamut            = 13,
	TCS_Custom                     = 14,
	TCS_MAX                        = 15
};


// Enum Engine.ETextureChromaticAdaptationMethod
enum class ETextureChromaticAdaptationMethod : uint8_t
{
	TCAM_None                      = 0,
	TCAM_Bradford                  = 1,
	TCAM_CAT02                     = 2,
	TCAM_MAX                       = 3
};


// Enum Engine.ETextureEncodeEffort
enum class ETextureEncodeEffort : uint8_t
{
	Default                        = 0,
	Low                            = 1,
	Normal                         = 2,
	High                           = 3,
	ETextureEncodeEffort_MAX       = 4
};


// Enum Engine.ETextureUniversalTiling
enum class ETextureUniversalTiling : uint8_t
{
	Disabled                       = 0,
	Enabled_256KB                  = 1,
	Enabled_64KB                   = 2,
	ETextureUniversalTiling_MAX    = 3
};


// Enum Engine.ETextureEncodeSpeed
enum class ETextureEncodeSpeed : uint8_t
{
	Final                          = 0,
	FinalIfAvailable               = 1,
	Fast                           = 2,
	ETextureEncodeSpeed_MAX        = 3
};


// Enum Engine.ETextureEncodeSpeedOverride
enum class ETextureEncodeSpeedOverride : uint8_t
{
	Disabled                       = 0,
	Final                          = 1,
	FinalIfAvailable               = 2,
	Fast                           = 3,
	ETextureEncodeSpeedOverride_MAX = 4
};


// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_RGBA8_SRGB                 = 3,
	RTF_R16f                       = 4,
	RTF_RG16f                      = 5,
	RTF_RGBA16f                    = 6,
	RTF_R32f                       = 7,
	RTF_RG32f                      = 8,
	RTF_RGBA32f                    = 9,
	RTF_RGB10A2                    = 10,
	RTF_MAX                        = 11
};


// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2
};


// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	T_Original                     = 0,
	T_TargetMin                    = 1,
	T_TargetMax                    = 2,
	MAX                            = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETypedElementWorldType
enum class ETypedElementWorldType : uint8_t
{
	Game                           = 0,
	Editor                         = 1,
	ETypedElementWorldType_MAX     = 2
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	ScaleToFit                     = 4,
	Custom                         = 5,
	EUIScalingRule_MAX             = 6
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2
};


// Enum Engine.EWorldPartitionRuntimeCellState
enum class EWorldPartitionRuntimeCellState : uint8_t
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	EWorldPartitionRuntimeCellState_MAX = 3
};


// Enum Engine.EWorldPartitionStreamingPerformance
enum class EWorldPartitionStreamingPerformance : uint8_t
{
	Good                           = 0,
	Slow                           = 1,
	Critical                       = 2,
	EWorldPartitionStreamingPerformance_MAX = 3
};


// Enum Engine.EStreamingSourceTargetState
enum class EStreamingSourceTargetState : uint8_t
{
	Loaded                         = 0,
	Activated                      = 1,
	EStreamingSourceTargetState_MAX = 2
};


// Enum Engine.EStreamingSourcePriority
enum class EStreamingSourcePriority : uint8_t
{
	Highest                        = 0,
	High                           = 1,
	Normal                         = 2,
	Low                            = 3,
	Lowest                         = 4,
	Default                        = 5,
	EStreamingSourcePriority_MAX   = 6
};


// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	EPSCPoolMethod_MAX             = 5
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0028
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0068
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0018(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0030(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0048(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0060(0x0001) (Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0060(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x0018 - 0x0018)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0060
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0008(0x0018)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x0020(0x0018)
	struct FRotator                                    RotationOffset;                                           // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0048
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x0018)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x0018 - 0x0018)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x0048
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	unsigned char                                      bHasAdditiveSources : 1;                                  // 0x0028(0x0001)
	unsigned char                                      bHasOverrideSources : 1;                                  // 0x0028(0x0001)
	unsigned char                                      bHasOverrideSourcesWithIgnoreZAccumulate : 1;             // 0x0028(0x0001)
	unsigned char                                      bIsAdditiveVelocityApplied : 1;                           // 0x0028(0x0001)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                  // 0x0029(0x0001)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                                  // 0x0030(0x0018)
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0070
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0060) (IsPlainOldData)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x00D8
struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector_NetQuantize100                      Location;                                                 // 0x0018(0x0018)
	struct FRotator                                    Rotation;                                                 // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                  // 0x0060(0x0048)
	struct FVector_NetQuantize10                       Acceleration;                                             // 0x00A8(0x0018)
	struct FVector_NetQuantize10                       LinearVelocity;                                           // 0x00C0(0x0018)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x00E0
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0008(0x00D8)
};

// ScriptStruct Engine.CharacterNetworkSerializationPackedBits
// 0x0098
struct FCharacterNetworkSerializationPackedBits
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct Engine.CharacterServerMovePackedBits
// 0x0000 (0x0098 - 0x0098)
struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits
{

};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x0018 - 0x0018)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x0018 - 0x0018)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.ActorInstanceHandle
// 0x0018
struct FActorInstanceHandle
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.HitResult
// 0x00E8
struct FHitResult
{
	int                                                FaceIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x0018)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0028(0x0018)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0040(0x0018)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0058(0x0018)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x0070(0x0018)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x0088(0x0018)
	float                                              PenetrationDepth;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MyItem;                                                   // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ElementIndex;                                             // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlockingHit : 1;                                         // 0x00AD(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x00AD(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FActorInstanceHandle                        HitObjectHandle;                                          // 0x00B8(0x0018)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MyBoneName;                                               // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CharacterMoveResponsePackedBits
// 0x0000 (0x0098 - 0x0098)
struct FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits
{

};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MovementProperties
// 0x0001
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.NavAgentProperties
// 0x002F (0x0030 - 0x0001)
struct FNavAgentProperties : public FMovementProperties
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AgentRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FSoftClassPath                              PreferredNavData;                                         // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.FindFloorResult
// 0x00F8
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              LineDist;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0010(0x00E8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0014
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Filename;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x002F (0x0030 - 0x0001)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
	TArray<unsigned char>                              ReplicationBytes;                                         // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0070
struct FUpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBeLoaded;                                       // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBeVisible;                                      // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBlockOnLoad;                                    // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBlockOnUnload;                                  // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LevelTransform;                                           // 0x0010(0x0060) (IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewGameName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClassRedirect
// 0x003C
struct FClassRedirect
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldClassName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldSubobjName;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewSubobjName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassPackage;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InstanceOnly;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewPluginName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewStructName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0040
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ChannelDefinition
// 0x0028
struct FChannelDefinition
{
	struct FName                                       ChannelName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ClassName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ChannelClass;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticChannelIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTickOnCreate;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerOpen;                                              // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientOpen;                                              // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialServer;                                           // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialClient;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0080
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DebugText;                                                // 0x0038(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x0054(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x0054(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x0054(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0058(0x0018) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BPComponentClassOverride
// 0x0010
struct FBPComponentClassOverride
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClass;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightingChannels
// 0x0001
struct FLightingChannels
{
	unsigned char                                      bChannel0 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bChannel1 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bChannel2 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CustomPrimitiveData
// 0x0010
struct FCustomPrimitiveData
{
	TArray<float>                                      Data;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0000(0x0020) (Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0178 (0x0190 - 0x0018)
struct FBodyInstance : public FBodyInstanceCore
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0018(0x0006) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x39];                                      // 0x0021(0x0039) MISSED OFFSET
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseCCD : 1;                                              // 0x005B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIgnoreAnalyticCollisions : 1;                            // 0x005B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x005B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03 : 1;                                        // 0x005B(0x0001)
	unsigned char                                      bSmoothEdgeCollisions : 1;                                // 0x005B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLockTranslation : 1;                                     // 0x005B(0x0001) (Edit)
	unsigned char                                      bLockRotation : 1;                                        // 0x005B(0x0001) (Edit)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x005B(0x0001) (Edit)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x005C(0x0001) (Edit)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x005C(0x0001) (Edit)
	unsigned char                                      bLockXRotation : 1;                                       // 0x005C(0x0001) (Edit)
	unsigned char                                      bLockYRotation : 1;                                       // 0x005C(0x0001) (Edit)
	unsigned char                                      bLockZRotation : 1;                                       // 0x005C(0x0001) (Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x005C(0x0001) (Edit)
	unsigned char                                      UnknownData04 : 2;                                        // 0x005C(0x0001)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x005D(0x0001) (Edit)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x005D(0x0001) (Edit)
	unsigned char                                      bInterpolateWhenSubStepping : 1;                          // 0x005D(0x0001)
	unsigned char                                      UnknownData05[0x1A];                                      // 0x005E(0x001A) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PositionSolverIterationCount;                             // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VelocitySolverIterationCount;                             // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	struct FCollisionResponse                          CollisionResponses;                                       // 0x0088(0x0030) (Edit)
	float                                              MaxDepenetrationVelocity;                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MassInKgOverride;                                         // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	float                                              LinearDamping;                                            // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x00D0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x00E8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FVector                                     InertiaTensorScale;                                       // 0x0108(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StabilizationThresholdMultiplier;                         // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x38];                                      // 0x0158(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0028
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedPlayRate;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FPoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SkeletalMeshName;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SnapshotName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0090
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextureLevelIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0080
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0080) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshRandomSeed
// 0x0008
struct FInstancedStaticMeshRandomSeed
{
	int                                                StartInstanceIndex;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x06C0
struct FPostProcessSettings
{
	unsigned char                                      bOverride_TemperatureType : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainShadows : 1;                           // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMax : 1;               // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BlueCorrection : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ExpandGamut : 1;                                // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ToneCurveAmount : 1;                            // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ChromaticAberrationStartOffset : 1;             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomMethod : 1;                                // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionScatterDispersion : 1;          // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  // 0x0007(0x0001) (Deprecated)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureCalibrationConstant : 1;            // 0x0009(0x0001) (Deprecated)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBiasCurve : 1;                      // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMeterMask : 1;                      // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureApplyPhysicalCameraExposure : 1;    // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LocalExposureContrastScale : 1;                 // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LocalExposureDetailStrength : 1;                // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LocalExposureBlurredLuminanceBlend : 1;         // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LocalExposureBlurredLuminanceKernelSizePercent : 1;// 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LocalExposureMiddleGreyBias : 1;                // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x000B(0x0001) (Deprecated)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x000C(0x0001) (Deprecated)
	unsigned char                                      bOverride_FilmGrainIntensity : 1;                         // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainIntensityShadows : 1;                  // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainIntensityMidtones : 1;                 // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainIntensityHighlights : 1;               // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainShadowsMax : 1;                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainHighlightsMin : 1;                     // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainHighlightsMax : 1;                     // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainTexelSize : 1;                         // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmGrainTexture : 1;                           // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x000D(0x0001) (Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionTemporalBlendWeight : 1;        // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	unsigned char                                      bOverride_RayTracingAO : 1;                               // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingAOSamplesPerPixel : 1;                // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingAOIntensity : 1;                      // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingAORadius : 1;                         // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0014(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVFadeRange : 1;                               // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           // 0x0015(0x0001) (Deprecated)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMinFstop : 1;                       // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBladeCount : 1;                     // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurTargetFPS : 1;                        // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0019(0x0001) (Deprecated)
	unsigned char                                      bOverride_ReflectionMethod : 1;                           // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenReflectionQuality : 1;                     // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	unsigned char                                      bOverride_ReflectionsType : 1;                            // 0x001C(0x0001) (Deprecated)
	unsigned char                                      bOverride_RayTracingReflectionsMaxRoughness : 1;          // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsMaxBounces : 1;            // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsSamplesPerPixel : 1;       // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsShadows : 1;               // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsTranslucency : 1;          // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TranslucencyType : 1;                           // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SeparateTranslucency : 1;                       // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyMaxRoughness : 1;         // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyRefractionRays : 1;       // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencySamplesPerPixel : 1;      // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyShadows : 1;              // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyRefraction : 1;           // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DynamicGlobalIlluminationMethod : 1;            // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenSceneLightingQuality : 1;                  // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenSceneDetail : 1;                           // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenSceneViewDistance : 1;                     // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenSceneLightingUpdateSpeed : 1;              // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenFinalGatherQuality : 1;                    // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenFinalGatherLightingUpdateSpeed : 1;        // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LumenMaxTraceDistance : 1;                      // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	unsigned char                                      bOverride_LumenRayLightingMode : 1;                       // 0x0020(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_RayTracingGI : 1;                               // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGIMaxBounces : 1;                     // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGISamplesPerPixel : 1;                // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingMaxBounces : 1;                      // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingSamplesPerPixel : 1;                 // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingFilterWidth : 1;                     // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingEnableEmissive : 1;                  // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingMaxPathExposure : 1;                 // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingEnableReferenceDOF : 1;              // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingEnableDenoiser : 1;                  // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                                    // 0x0028(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<EBloomMethod>                          BloomMethod;                                              // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETemperatureMethod>                    TemperatureType;                                          // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTemp;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                          // 0x0040(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrast;                                            // 0x0060(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGamma;                                               // 0x0080(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGain;                                                // 0x00A0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffset;                                              // 0x00C0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x00E0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                                     // 0x0100(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                        // 0x0120(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                         // 0x0140(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x0160(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x0180(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x01A0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x01C0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                        // 0x01E0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0200(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0220(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0240(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0260(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0280(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x02A0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionHighlightsMax;                             // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlueCorrection;                                           // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpandGamut;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ToneCurveAmount;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x02EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChromaticAberrationStartOffset;                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionScatterDispersion;                        // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionSize;                                     // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BloomConvolutionTexture;                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMin;                             // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMax;                             // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMult;                            // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionBufferScale;                              // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x03C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDynamicGlobalIlluminationMethod>      DynamicGlobalIlluminationMethod;                          // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FLinearColor                                IndirectLightingColor;                                    // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenSceneLightingQuality;                                // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenSceneDetail;                                         // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenSceneViewDistance;                                   // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenSceneLightingUpdateSpeed;                            // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenFinalGatherQuality;                                  // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenFinalGatherLightingUpdateSpeed;                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LumenMaxTraceDistance;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0408(0x0004) MISSED OFFSET
	int                                                RayTracingGIMaxBounces;                                   // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingGISamplesPerPixel;                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EReflectionMethod>                     ReflectionMethod;                                         // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              LumenReflectionQuality;                                   // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	float                                              ScreenSpaceReflectionIntensity;                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayTracingReflectionsMaxRoughness;                        // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingReflectionsMaxBounces;                          // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingReflectionsSamplesPerPixel;                     // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0438(0x0001) MISSED OFFSET
	unsigned char                                      RayTracingReflectionsTranslucency : 1;                    // 0x0439(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData12[0x2];                                       // 0x043A(0x0002) MISSED OFFSET
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x043C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                           // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraISO;                                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMinFstop;                                     // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DepthOfFieldBladeCount;                                   // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBiasBackup;                                   // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverride_AutoExposureBiasBackup : 1;                     // 0x0474(0x0001)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	unsigned char                                      AutoExposureApplyPhysicalCameraExposure : 1;              // 0x0478(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UCurveFloat*                                 AutoExposureBiasCurve;                                    // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    AutoExposureMeterMask;                                    // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureLowPercent;                                   // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureCalibrationConstant;                          // 0x04B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LocalExposureContrastScale;                               // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocalExposureDetailStrength;                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocalExposureBlurredLuminanceBlend;                       // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocalExposureBlurredLuminanceKernelSizePercent;           // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocalExposureMiddleGreyBias;                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x04CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class UTexture*                                    LensFlareBokehShape;                                      // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x04F0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x0574(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x0578(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FilmGrainIntensity;                                       // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainIntensityShadows;                                // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainIntensityMidtones;                               // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainIntensityHighlights;                             // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainShadowsMax;                                      // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainHighlightsMin;                                   // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainHighlightsMax;                                   // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmGrainTexelSize;                                       // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UTexture2D*                                  FilmGrainTexture;                                         // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x05B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData17[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x05C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionTemporalBlendWeight;                      // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingAO : 1;                                         // 0x05E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData18[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	int                                                RayTracingAOSamplesPerPixel;                              // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayTracingAOIntensity;                                    // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayTracingAORadius;                                       // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class UTexture*                                    ColorGradingLUT;                                          // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSensorWidth;                                  // 0x0600(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                                 // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MotionBlurTargetFPS;                                      // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x0644(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x0648(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x064C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x0650(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x0654(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x0658(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x065C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x0660(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x0664(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x0668(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x066C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x0670(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x0674(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0678(0x0001) MISSED OFFSET
	unsigned char                                      bSeparateTranslucency : 1;                                // 0x0679(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData21[0x2];                                       // 0x067A(0x0002) MISSED OFFSET
	float                                              RayTracingTranslucencyMaxRoughness;                       // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingTranslucencyRefractionRays;                     // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingTranslucencySamplesPerPixel;                    // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x0688(0x0001) MISSED OFFSET
	unsigned char                                      RayTracingTranslucencyRefraction : 1;                     // 0x0689(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData23[0x2];                                       // 0x068A(0x0002) MISSED OFFSET
	int                                                PathTracingMaxBounces;                                    // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PathTracingSamplesPerPixel;                               // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PathTracingFilterWidth;                                   // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PathTracingEnableEmissive : 1;                            // 0x0698(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	float                                              PathTracingMaxPathExposure;                               // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PathTracingEnableReferenceDOF : 1;                        // 0x06A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      PathTracingEnableDenoiser : 1;                            // 0x06A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData25[0x3];                                       // 0x06A1(0x0003) MISSED OFFSET
	float                                              LPVFadeRange;                                             // 0x06A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x06A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x06AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x06B0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.MinimalViewInfo
// 0x07A0
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFOV;                                               // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                                   // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0060(0x06C0) (BlueprintVisible)
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x70];                                      // 0x0730(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x07B0
struct FCameraCacheEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x07A0)
};

// ScriptStruct Engine.TViewTarget
// 0x07C0
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x07A0) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                              // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PerQualityLevelInt
// 0x0068
struct FPerQualityLevelInt
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	int                                                Default;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TMap<int, int>                                     PerQuality;                                               // 0x0018(0x0050) (Edit)
};

// ScriptStruct Engine.PerPlatformFloat
// 0x0004
struct FPerPlatformFloat
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ReverbSettings
// 0x0020
struct FReverbSettings
{
	bool                                               bApplyReverb;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    ReverbPluginEffect;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	bool                                               bIsWorldSettings;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BroadphaseSettings
// 0x0080
struct FBroadphaseSettings
{
	bool                                               bUseMBPOnClient;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMBPOnServer;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMBPOuterBounds;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FBox                                        MBPBounds;                                                // 0x0008(0x0038) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        MBPOuterBounds;                                           // 0x0040(0x0038) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MBPNumSubdivs;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.NetViewer
// 0x0048
struct FNetViewer
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InViewer;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewDir;                                                  // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinkValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0088 (0x00B8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                                  // 0x0060(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnFollower;                                       // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x000C
struct FSmartName
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSmartName                                  Name;                                                     // 0x0008(0x000C)
	int                                                CurveTypeFlags;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0060
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0068
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0060) (Transient)
};

// ScriptStruct Engine.RealCurve
// 0x0008 (0x0070 - 0x0068)
struct FRealCurve : public FIndexedCurve
{
	float                                              DefaultValue;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0010 (0x0080 - 0x0070)
struct FRichCurve : public FRealCurve
{
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.FloatCurve
// 0x0080 (0x0098 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0018(0x0080)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSyncMarker
// 0x000C
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationAttributeIdentifier
// 0x0038
struct FAnimationAttributeIdentifier
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UScriptStruct*                               ScriptStruct;                                             // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             ScriptStructPath;                                         // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Engine.AttributeKey
// 0x0018
struct FAttributeKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AttributeCurve
// 0x0040 (0x00A8 - 0x0068)
struct FAttributeCurve : public FIndexedCurve
{
	TArray<struct FAttributeKey>                       Keys;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FSoftObjectPath                             ScriptStructPath;                                         // 0x0078(0x0018) (Edit, ZeroConstructor, EditConst)
	class UScriptStruct*                               ScriptStruct;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldInterpolate;                                       // 0x0098(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0099(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0030
struct FAnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	class UMirrorDataTable*                            MirrorTable;                                              // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     NotifySource;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyArray
// 0x0010
struct FAnimNotifyArray
{
	TArray<struct FAnimNotifyEventReference>           Notifies;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0070
struct FAnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEventReference>           AnimNotifies;                                             // 0x0010(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, struct FAnimNotifyArray>        UnfilteredMontageAnimNotifies;                            // 0x0020(0x0050) (Transient)
};

// ScriptStruct Engine.AlphaBlendArgs
// 0x0010
struct FAlphaBlendArgs
{
	class UCurveFloat*                                 CustomCurve;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MontageBlendSettings
// 0x0020
struct FMontageBlendSettings
{
	class UBlendProfile*                               BlendProfile;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlendArgs                             Blend;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     PropertyScope;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0048
struct FBlueprintCookedComponentInstancingData
{
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x11];                                      // 0x0010(0x0011) MISSED OFFSET
	bool                                               bHasValidCookedData;                                      // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x0022(0x0026) MISSED OFFSET
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0028
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitToOwner : 1;                                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<EMaxConcurrentResolutionRule>          ResolutionRule;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              RetriggerTime;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeScale;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	float                                              VolumeScaleAttackTime;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVolumeScaleCanRelease : 1;                               // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              VolumeScaleReleaseTime;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceStealReleaseTime;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0088
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          // 0x0000(0x0080)
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x00B0
struct FSoundSubmixSendInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class USoundSubmixBase*                            SoundSubmix;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableManualSendClamp;                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              MinSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendLevel;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendDistance;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x00B8
struct FSoundSourceBusSendInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class USoundSourceBus*                             SoundSourceBus;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioBus*                                   AudioBus;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSendLevel;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendLevel;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSendDistance;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendDistance;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomSendLevelCurve;                                     // 0x0030(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundModulationDestinationSettings
// 0x0010
struct FSoundModulationDestinationSettings
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USoundModulatorBase*                         Modulator;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundModulationDefaultSettings
// 0x0040
struct FSoundModulationDefaultSettings
{
	struct FSoundModulationDestinationSettings         VolumeModulationDestination;                              // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         PitchModulationDestination;                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         HighpassModulationDestination;                            // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         LowpassModulationDestination;                             // 0x0030(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundModulationDefaultRoutingSettings
// 0x0008 (0x0048 - 0x0040)
struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// 0x0008
struct FSoundWaveSpectralDataEntry
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NormalizedMagnitude;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// 0x0018
struct FSoundWaveSpectralTimeData
{
	TArray<struct FSoundWaveSpectralDataEntry>         Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
	float                                              TimeSec;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// 0x0008
struct FSoundWaveEnvelopeTimeData
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveCuePoint
// 0x0020
struct FSoundWaveCuePoint
{
	int                                                CuePointID;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                FramePosition;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                FrameLength;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00C8
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x9];                                       // 0x0000(0x0009) MISSED OFFSET
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeSphereRadius;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeSphereFalloffDistance;                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0040(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// 0x00A8
struct FAttenuationSubmixSendSettings
{
	class USoundSubmixBase*                            Submix;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	float                                              SubmixSendLevelMin;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubmixSendLevelMax;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubmixSendDistanceMin;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubmixSendDistanceMax;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualSubmixSendLevel;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomSubmixSendCurve;                                    // 0x0020(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0040
struct FSoundAttenuationPluginSettings
{
	TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UOcclusionPluginSourceSettingsBase*>  OcclusionPluginSettingsArray;                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UReverbPluginSourceSettingsBase*>     ReverbPluginSettingsArray;                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USourceDataOverridePluginSourceSettingsBase*> SourceDataOverridePluginSettingsArray;                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0300 (0x03C8 - 0x00C8)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableListenerFocus : 1;                                 // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableFocusInterpolation : 1;                            // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableOcclusion : 1;                                     // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableReverbSend : 1;                                    // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnablePriorityAttenuation : 1;                           // 0x00C9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyNormalizationToStereoSounds : 1;                    // 0x00C9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableLogFrequencyScaling : 1;                           // 0x00C9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableSubmixSends : 1;                                   // 0x00C9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableSourceDataOverride : 1;                            // 0x00C9(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	float                                              BinauralRadius;                                           // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00D0(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              OmniRadius;                                               // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoSpread;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMax;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomLowpassAirAbsorptionCurve;                          // 0x00E8(0x0088) (Edit, BlueprintVisible)
	struct FRuntimeFloatCurve                          CustomHighpassAirAbsorptionCurve;                         // 0x0170(0x0088) (Edit, BlueprintVisible)
	float                                              LPFFrequencyAtMin;                                        // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFFrequencyAtMax;                                        // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPFFrequencyAtMin;                                        // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPFFrequencyAtMax;                                        // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAzimuth;                                             // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusAzimuth;                                          // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistanceScale;                                       // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusDistanceScale;                                    // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusPriorityScale;                                       // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusPriorityScale;                                    // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusVolumeAttenuation;                                   // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusVolumeAttenuation;                                // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAttackInterpSpeed;                                   // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusReleaseInterpSpeed;                                  // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMin;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMax;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMin;                                        // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMax;                                        // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualReverbSendLevel;                                    // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomReverbSendCurve;                                    // 0x0250(0x0088) (Edit, BlueprintVisible)
	TArray<struct FAttenuationSubmixSendSettings>      SubmixSendSettings;                                       // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PriorityAttenuationMin;                                   // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PriorityAttenuationMax;                                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PriorityAttenuationDistanceMin;                           // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PriorityAttenuationDistanceMax;                           // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualPriorityAttenuation;                                // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomPriorityAttenuationCurve;                           // 0x0300(0x0088) (Edit, BlueprintVisible)
	struct FSoundAttenuationPluginSettings             PluginSettings;                                           // 0x0388(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundWaveSpectralData
// 0x000C
struct FSoundWaveSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedMagnitude;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// 0x0020
struct FSoundWaveSpectralDataPerSound
{
	TArray<struct FSoundWaveSpectralData>              SpectralData;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PlaybackTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// 0x0010
struct FSoundWaveEnvelopeDataPerSound
{
	float                                              Envelope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SoundWave;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0010
struct FLightmassMaterialInterfaceSettings
{
	float                                              EmissiveBoost;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x000C(0x0001) (Edit)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x000C(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x000C(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x000C(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UVChannelIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0010
struct FMaterialParameterInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0024
struct FScalarParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0030
struct FVectorParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DoubleVectorParameterValue
// 0x0040
struct FDoubleVectorParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FVector4d                                   ParameterValue;                                           // 0x0010(0x0020) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0028
struct FTextureParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UTexture*                                    ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// 0x0028
struct FRuntimeVirtualTextureParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class URuntimeVirtualTexture*                      ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0030
struct FFontParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UFont*                                       FontValue;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0008
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char                                      bOverride_OpacityMaskClipValue : 1;                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_BlendMode : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_ShadingModel : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DitheredLODTransition : 1;                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CastDynamicShadowAsMasked : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_TwoSided : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_OutputTranslucentVelocity : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      TwoSided : 1;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0001(0x0001) (Edit)
	unsigned char                                      bCastDynamicShadowAsMasked : 1;                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bOutputTranslucentVelocity : 1;                           // 0x0001(0x0001) (Edit)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskClipValue;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticParameterBase
// 0x0024
struct FStaticParameterBase
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010)
	bool                                               bOverride;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGuid;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0004 (0x0028 - 0x0024)
struct FStaticSwitchParameter : public FStaticParameterBase
{
	bool                                               Value;                                                    // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0004 (0x0028 - 0x0024)
struct FStaticComponentMaskParameter : public FStaticParameterBase
{
	bool                                               R;                                                        // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               G;                                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               A;                                                        // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x0010
struct FStaticTerrainLayerWeightParameter
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                WeightmapIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bWeightBasedBlend;                                        // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0020
struct FMaterialLayersFunctions
{
	TArray<class UMaterialFunctionInterface*>          Layers;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialFunctionInterface*>          Blends;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.StaticParameterSet
// 0x0058
struct FStaticParameterSet
{
	TArray<struct FStaticSwitchParameter>              StaticSwitchParameters;                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FStaticComponentMaskParameter>       StaticComponentMaskParameters;                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FStaticTerrainLayerWeightParameter>  TerrainLayerWeightParameters;                             // 0x0020(0x0010) (ZeroConstructor)
	struct FMaterialLayersFunctions                    MaterialLayers;                                           // 0x0030(0x0020)
	unsigned char                                      bHasMaterialLayers : 1;                                   // 0x0050(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0040
struct FReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
	class UClass*                                      ObjClass;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpolationParameter
// 0x0010
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRatio;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoneReference
// 0x0010
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0014
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0010) (Edit)
	float                                              InterpolationSpeedPerSec;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSample
// 0x0028
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SampleValue;                                              // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSpaceSegment
// 0x0010
struct FBlendSpaceSegment
{
	int                                                SampleIndices[0x2];                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Vertices[0x2];                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSpaceTriangleEdgeInfo
// 0x0028
struct FBlendSpaceTriangleEdgeInfo
{
	struct FVector2D                                   Normal;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                NeighbourTriangleIndex;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AdjacentPerimeterTriangleIndices[0x2];                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AdjacentPerimeterVertexIndices[0x2];                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlendSpaceTriangle
// 0x00B8
struct FBlendSpaceTriangle
{
	int                                                SampleIndices[0x3];                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector2D                                   Vertices[0x3];                                            // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlendSpaceTriangleEdgeInfo                 EdgeInfo[0x3];                                            // 0x0040(0x0028) (Edit)
};

// ScriptStruct Engine.BlendSpaceData
// 0x0020
struct FBlendSpaceData
{
	TArray<struct FBlendSpaceSegment>                  Segments;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FBlendSpaceTriangle>                 Triangles;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GridNum;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToGrid;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapInput;                                               // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TimecodeCustomAttributeNameSettings
// 0x0038
struct FTimecodeCustomAttributeNameSettings
{
	struct FName                                       HourAttributeName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MinuteAttributeName;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondAttributeName;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FrameAttributeName;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SubframeAttributeName;                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RateAttributeName;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TakenameAttributeName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomAttributeSetting
// 0x0020
struct FCustomAttributeSetting
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Meaning;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.MirrorFindReplaceExpression
// 0x0014
struct FMirrorFindReplaceExpression
{
	struct FName                                       FindExpression;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReplaceExpression;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMirrorFindReplaceMethod>              FindReplaceMethod;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0028
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticRemainingTimeRule;                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FName                                       SyncGroupNameToRequireValidMarkersRule;                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0058
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0030(0x0010) (ZeroConstructor)
	TArray<int>                                        LayerNodeIndices;                                         // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bAlwaysResetOnEntry;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NextState;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DynamicCrossfadeDurationInputIndexToUse;                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InitialState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CachedPoseIndices
// 0x0010
struct FCachedPoseIndices
{
	TArray<int>                                        OrderedSavedPoseNodeIndices;                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// 0x0010
struct FGraphAssetPlayerInformation
{
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// 0x0008
struct FAnimGraphBlendOptions
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNodeData
// 0x0028
struct FAnimNodeData
{
	TScriptInterface<class UAnimClassInterface>        AnimClassInterface;                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   Entries;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                NodeIndex;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeStructData
// 0x0058
struct FAnimNodeStructData
{
	TMap<struct FName, int>                            NameToIndexMap;                                           // 0x0000(0x0050)
	int                                                NumProperties;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintFunction
// 0x0078
struct FAnimBlueprintFunction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputPoseNodeIndex;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FName>                               InputPoseNames;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        InputPoseNodeIndices;                                     // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0038(0x0038) MISSED OFFSET
	bool                                               bImplemented;                                             // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintFunctionData
// 0x0040
struct FAnimBlueprintFunctionData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: OutputPoseNodeProperty
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) UNKNOWN PROPERTY: InputPoseNodeProperties
	unsigned char                                      UnknownData02[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: InputProperties
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector3f>                           PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat4f>                             RotKeys;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector3f>                           ScaleKeys;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BoneAnimationTrack
// 0x0040
struct FBoneAnimationTrack
{
	struct FRawAnimSequenceTrack                       InternalTrackData;                                        // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	int                                                BoneTreeIndex;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x0180 (0x0198 - 0x0018)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x0018(0x0080)
};

// ScriptStruct Engine.TransformCurve
// 0x04C8 (0x04E0 - 0x0018)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         // 0x0018(0x0198)
	struct FVectorCurve                                RotationCurve;                                            // 0x01B0(0x0198)
	struct FVectorCurve                                ScaleCurve;                                               // 0x0348(0x0198)
};

// ScriptStruct Engine.AnimationCurveData
// 0x0020
struct FAnimationCurveData
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FTransformCurve>                     TransformCurves;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct Engine.AnimatedBoneAttribute
// 0x00E0
struct FAnimatedBoneAttribute
{
	struct FAnimationAttributeIdentifier               Identifier;                                               // 0x0000(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FAttributeCurve                             Curve;                                                    // 0x0038(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FAlphaBlend
{
	class UCurveFloat*                                 CustomCurve;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // 0x003C(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimTrack                                  AnimTrack;                                                // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0010
struct FTimeStretchCurveMarker
{
	float                                              Time[0x3];                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Alpha;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.TimeStretchCurve
// 0x0028
struct FTimeStretchCurve
{
	float                                              SamplingRate;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurveValueMinPrecision;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTimeStretchCurveMarker>             Markers;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Sum_dT_i_by_C_i[0x3];                                     // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x000C
struct FPrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChunkId;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyRecursively;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0088
struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: AssetBaseClass
	class UClass*                                      AssetBaseClassLoaded;                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEditorOnly;                                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FDirectoryPath>                      Directories;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSoftObjectPath>                     SpecificAssets;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0060(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0070(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsDynamicAsset;                                          // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                NumberOfAssets;                                           // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x001C
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0010(0x000C) (Edit)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// 0x0038
struct FPrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor)
	struct FDirectoryPath                              FilterDirectory;                                          // 0x0008(0x0010) (Edit)
	struct FString                                     FilterString;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FAssetManagerRedirect
{
	struct FString                                     Old;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     New;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             TargetAsset;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TentDistribution
// 0x000C
struct FTentDistribution
{
	float                                              TipAltitude;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TipValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit)
	int                                                MaxChannels;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundDebugEntry
// 0x0020
struct FSoundDebugEntry
{
	struct FName                                       DebugName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FSoftObjectPath                             Sound;                                                    // 0x0008(0x0018) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.DefaultAudioBusSettings
// 0x0018
struct FDefaultAudioBusSettings
{
	struct FSoftObjectPath                             AudioBus;                                                 // 0x0000(0x0018) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.AudioVolumeSubmixSendSettings
// 0x0018
struct FAudioVolumeSubmixSendSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FSoundSubmixSendInfo>                SubmixSends;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.AudioVolumeSubmixOverrideSettings
// 0x0020
struct FAudioVolumeSubmixOverrideSettings
{
	class USoundSubmix*                                Submix;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USoundEffectSubmixPreset*>            SubmixEffectChain;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              CrossfadeTime;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0020
struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath                             PerformanceTestmap;                                       // 0x0000(0x0018) (Edit, ZeroConstructor, Config)
	int                                                TestTimer;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x0000(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x0020(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x0040(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x0060(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x0080(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x00A0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x00C0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x00E0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x0100(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0140(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   MaterialAsset;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   TextureAsset;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x0000(0x0010) (Edit)
	struct FString                                     NewProjectNameOverride;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x0010(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x0160(0x0060) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01C0(0x0020) (Edit)
	struct FFilePath                                   SourceControlMaterial;                                    // 0x01E0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FFilePath                                   SecondMeshPath;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ExecutablePath;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CommandLineOptions;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x0030(0x0010) (Edit, Config)
	struct FString                                     ScriptExtension;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ExportFileExtension;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BandwidthTestItem
// 0x0010
struct FBandwidthTestItem
{
	TArray<unsigned char>                              Kilobyte;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BandwidthTestGenerator
// 0x0020
struct FBandwidthTestGenerator
{
	TArray<struct FBandwidthTestItem>                  ReplicatedBuffers;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VirtualBoneName;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0014
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0010) (Edit)
	float                                              BlendScale;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KShapeElem
// 0x0030
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              RestOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      bContributeToMass : 1;                                    // 0x0018(0x0001) (Edit)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x001A(0x0016) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0020 (0x0050 - 0x0030)
struct FKSphereElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KBoxElem
// 0x0040 (0x0070 - 0x0030)
struct FKBoxElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0048(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0038 (0x0068 - 0x0030)
struct FKSphylElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0048(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KConvexElem
// 0x00D0 (0x0100 - 0x0030)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<int>                                        IndexData;                                                // 0x0040(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x0050(0x0038) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0090(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0040 (0x0070 - 0x0030)
struct FKTaperedCapsuleElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0048(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius0;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius1;                                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0058
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKTaperedCapsuleElem>                TaperedCapsuleElems;                                      // 0x0040(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PolyFlags;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraLensInterfaceClassSupport
// 0x0008
struct FCameraLensInterfaceClassSupport
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// 0x0018
struct FActiveCameraShakeInfo
{
	class UCameraShakeBase*                            ShakeInstance;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UCameraShakeSourceComponent>  ShakeSource;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCustomInitialized;                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PooledCameraShakes
// 0x0010
struct FPooledCameraShakes
{
	TArray<class UCameraShakeBase*>                    PooledShakes;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0048
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	bool                                               bCanModify;                                               // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x000B(0x0021) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CustomChannelSetup
// 0x000C
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTraceType;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStaticObject;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintInstanceAccessor
// 0x000C
struct FConstraintInstanceAccessor
{
	TWeakObjectPtr<class UObject>                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Index;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationCurveIdentifier
// 0x0010
struct FAnimationCurveIdentifier
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.NamedCurveValue
// 0x000C
struct FNamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataDrivenConsoleVariable
// 0x0050
struct FDataDrivenConsoleVariable
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ToolTip;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
	float                                              DefaultValueFloat;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DefaultValueInt;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DefaultValueBool;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0031(0x001F) MISSED OFFSET
};

// ScriptStruct Engine.ActorDataLayer
// 0x0008
struct FActorDataLayer
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// 0x0010
struct FDebugCameraControllerSettingsViewModeIndex
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<EViewModeIndex>                        ViewModeIndex;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x00D0
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Archetype;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0010(0x0048) MISSED OFFSET
	class ULevel*                                      Level;                                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
	TArray<class UObject*>                             ObjReferences;                                            // 0x00C0(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MulticastRecordOptions
// 0x0018
struct FMulticastRecordOptions
{
	struct FString                                     FuncPathName;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bServerSkip;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientSkip;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x0064
struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	int                                                LODBias;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias_Smaller;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias_Smallest;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_Smaller;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_Smallest;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_VT;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalLODBias;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalMaxLODSize;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MinMagFilter;                                             // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x004C(0x0001) MISSED OFFSET
	bool                                               HighPriorityLoad;                                         // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DuplicateNonOptionalMips;                                 // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	float                                              Downscale;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	int                                                VirtualTextureTileCountBias;                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VirtualTextureTileSizeBias;                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureLossyCompressionAmount>        LossyCompressionAmount;                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DPMatchingIfCondition
// 0x0028
struct FDPMatchingIfCondition
{
	struct FName                                       Operator;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Arg1;                                                     // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Arg2;                                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DPMatchingRulestructBase
// 0x0048
struct FDPMatchingRulestructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     RuleName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FDPMatchingIfCondition>              IfConditions;                                             // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     AppendFragments;                                          // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     SetUserVar;                                               // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DPMatchingRulestructA
// 0x0020 (0x0068 - 0x0048)
struct FDPMatchingRulestructA : public FDPMatchingRulestructBase
{
	TArray<struct FDPMatchingRulestructBase>           OnTrue;                                                   // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FDPMatchingRulestructBase>           OnFalse;                                                  // 0x0058(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.DPMatchingRulestructB
// 0x0020 (0x0068 - 0x0048)
struct FDPMatchingRulestructB : public FDPMatchingRulestructBase
{
	TArray<struct FDPMatchingRulestructA>              OnTrue;                                                   // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FDPMatchingRulestructA>              OnFalse;                                                  // 0x0058(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.DPMatchingRulestructC
// 0x0020 (0x0068 - 0x0048)
struct FDPMatchingRulestructC : public FDPMatchingRulestructBase
{
	TArray<struct FDPMatchingRulestructB>              OnTrue;                                                   // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FDPMatchingRulestructB>              OnFalse;                                                  // 0x0058(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.DPMatchingRulestructD
// 0x0020 (0x0068 - 0x0048)
struct FDPMatchingRulestructD : public FDPMatchingRulestructBase
{
	TArray<struct FDPMatchingRulestructC>              OnTrue;                                                   // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FDPMatchingRulestructC>              OnFalse;                                                  // 0x0058(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.DPMatchingRulestructE
// 0x0020 (0x0068 - 0x0048)
struct FDPMatchingRulestructE : public FDPMatchingRulestructBase
{
	TArray<struct FDPMatchingRulestructD>              OnTrue;                                                   // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FDPMatchingRulestructD>              OnFalse;                                                  // 0x0058(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.DPMatchingRulestruct
// 0x0020 (0x0068 - 0x0048)
struct FDPMatchingRulestruct : public FDPMatchingRulestructBase
{
	TArray<struct FDPMatchingRulestructE>              OnTrue;                                                   // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FDPMatchingRulestructE>              OnFalse;                                                  // 0x0058(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocalizationKeyFormat;                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x001C
struct FEdGraphTerminalType
{
	struct FName                                       TerminalCategory;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TerminalSubCategory;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsConst;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsWeakPointer;                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsUObjectWrapper;                                // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0058
struct FEdGraphPinType
{
	struct FName                                       PinCategory;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PinSubCategory;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x0018(0x0020)
	struct FEdGraphTerminalType                        PinValueType;                                             // 0x0038(0x001C)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0054(0x0001) MISSED OFFSET
	unsigned char                                      bIsArray : 1;                                             // 0x0055(0x0001) (Deprecated)
	unsigned char                                      bIsReference : 1;                                         // 0x0055(0x0001)
	unsigned char                                      bIsConst : 1;                                             // 0x0055(0x0001)
	unsigned char                                      bIsWeakPointer : 1;                                       // 0x0055(0x0001)
	unsigned char                                      bIsUObjectWrapper : 1;                                    // 0x0055(0x0001)
	unsigned char                                      bSerializeAsSinglePrecisionFloat : 1;                     // 0x0055(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ExponentialHeightFogData
// 0x000C
struct FExponentialHeightFogData
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightOffset;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WorldHeightFogNoiseLayer
// 0x0020
struct FWorldHeightFogNoiseLayer
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Tiling;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WorldHeightFogData
// 0x0028
struct FWorldHeightFogData
{
	class URuntimeVirtualTexture*                      WorldHeightTexture;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogDensity;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogStartDistance;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogEndDistance;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FWorldHeightFogNoiseLayer>           NoiseLayers;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UnicodeRange;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFilePath;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                XPadding;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                YPadding;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00C8 - 0x00C8)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0090
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x0110
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x0000(0x0088) (Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0088(0x0088) (Edit)
};

// ScriptStruct Engine.HLODProxyMesh
// 0x0030
struct FHLODProxyMesh
{
	TLazyObjectPtr<class ALODActor>                    LODActor;                                                 // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ImportanceTexture
// 0x0050
struct FImportanceTexture
{
	struct FIntPoint                                   Size;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumMips;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      MarginalCDF;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<float>                                      ConditionalCDF;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              TextureData;                                              // 0x0030(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EImportanceWeight>                     Weighting;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0078
struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTemplate;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FComponentKey                               ComponentKey;                                             // 0x0010(0x0020)
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                            // 0x0030(0x0048)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0070
struct FCachedKeyToActionInfo
{
	class UPlayerInput*                                PlayerInput;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0020)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvert : 1;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShift : 1;                                               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.InputActionSpeechMapping
// 0x0010
struct FInputActionSpeechMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeechKeyword;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bClamp;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpControlPoint
// 0x0028
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPositionIsRelative;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0019(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.VectorSpringState
// 0x0038
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.QuaternionSpringState
// 0x0040
struct FQuaternionSpringState
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x000C
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x003C
struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0xC];                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Weights[0xC];                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FUserActivity
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StreamingLevelsToConsider
// 0x0028
struct FStreamingLevelsToConsider
{
	TArray<class ULevelStreaming*>                     StreamingLevels;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0078
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULevel*                                      PersistentLevel;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: Levels
};

// ScriptStruct Engine.PSCPoolElem
// 0x0010
struct FPSCPoolElem
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x0010
struct FPSCPool
{
	TArray<struct FPSCPoolElem>                        FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.WorldPSCPool
// 0x0058
struct FWorldPSCPool
{
	TMap<class UParticleSystem*, struct FPSCPool>      WorldParticleSystemPools;                                 // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.HLODInstancingKey
// 0x0010
struct FHLODInstancingKey
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentSync
// 0x000C
struct FComponentSync
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LODMappingData
// 0x0020
struct FLODMappingData
{
	TArray<int>                                        Mapping;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        InverseMapping;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.MaterialInput
// 0x0014
struct FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       InputName;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0000 (0x0014 - 0x0014)
struct FColorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0000 (0x0014 - 0x0014)
struct FScalarMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.VectorMaterialInput
// 0x0000 (0x0014 - 0x0014)
struct FVectorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.MaterialShadingModelField
// 0x0002
struct FMaterialShadingModelField
{
	uint16_t                                           ShadingModelField;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExpressionInput
// 0x0014
struct FExpressionInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       InputName;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0004 (0x0018 - 0x0014)
struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.ShadingModelMaterialInput
// 0x0000 (0x0014 - 0x0014)
struct FShadingModelMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.StrataMaterialInput
// 0x0000 (0x0014 - 0x0014)
struct FStrataMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomInput
// 0x001C
struct FCustomInput
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0008(0x0014)
};

// ScriptStruct Engine.CustomOutput
// 0x000C
struct FCustomOutput
{
	struct FName                                       OutputName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomMaterialOutputType>             OutputType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CustomDefine
// 0x0020
struct FCustomDefine
{
	struct FString                                     DefineName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefineValue;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ExpressionExecOutput
// 0x0008
struct FExpressionExecOutput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompositeReroute
// 0x0010
struct FCompositeReroute
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialExpressionReroute*                  Expression;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StrataMaterialInfo
// 0x0018
struct FStrataMaterialInfo
{
	unsigned char                                      ShadingModelField;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasShadingModelFromExpression;                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class USubsurfaceProfile*>                  SubsurfaceProfiles;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0020
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0030
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapHeight;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0014(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x001D(0x0001) (Edit)
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag4 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag5 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag6 : 1;                                         // 0x001E(0x0001)
	unsigned char                                      bCustomFlag7 : 1;                                         // 0x001E(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0030 (0x0060 - 0x0030)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0048(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0060 (0x0090 - 0x0030)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x0048(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x0060(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x0078(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// 0x0020
struct FNetworkEmulationProfileDescription
{
	struct FString                                     ProfileName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ToolTip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NodeItem
// 0x0070
struct FNodeItem
{
	struct FName                                       ParentName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0020
struct FDistributionLookupTable
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBias;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      Op;                                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LockFlag;                                                 // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0020
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0040 (0x0060 - 0x0020)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinValueVec;                                              // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxValueVec;                                              // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	class UDistributionVector*                         Distribution;                                             // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0030 - 0x0020)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                             // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0020
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0048
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0018(0x0030) (Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x00D0
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x00A0(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x00C0(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x00C0(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x00C0(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x00C0(0x0001)
	unsigned char                                      bUseFixDT : 1;                                            // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00C1(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0020
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x0350
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x0030(0x00D0)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x0100(0x0020) (ZeroConstructor)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x0120(0x0020) (ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x0140(0x0020) (ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                               // 0x0160(0x0020) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                     // 0x0180(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x0198(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FVector                                     OrbitOffsetBase;                                          // 0x01B8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x01D0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x01E8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x01FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0204(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0205(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0206(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x0208(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x020C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0210(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0214(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	struct FRawDistributionVector                      DynamicColor;                                             // 0x0220(0x0060)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x0280(0x0030)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x02B0(0x0060)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x0310(0x0030)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0340(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0240
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0020(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x0030(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x0050(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x0070(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x0090(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x00B0(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x00D0(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x00F0(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x0110(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x0130(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x0148(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0160(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x0178(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x0190(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x01A8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x01C0(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x01D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x01DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x01EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x01F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusBias;                                      // 0x01FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomSpread;                                    // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomDistribution;                              // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x0210(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x0214(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0218(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0219(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x021A(0x0006) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x0220(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0230(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0234(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0238(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSysParam
// 0x00E0
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0060(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsAssetSolverSettings
// 0x0018
struct FPhysicsAssetSolverSettings
{
	int                                                PositionIterations;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VelocityIterations;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ProjectionIterations;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationVelocity;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FixedTimeStep;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SolverIterations
// 0x0018
struct FSolverIterations
{
	int                                                SolverIterations;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                JointIterations;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SolverPushOutIterations;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                JointPushOutIterations;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CollisionPushOutIterations;                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0024
struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearForce;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x002C
struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    // 0x0008(0x0024) (Edit)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintInstanceBase
// 0x0038
struct FConstraintInstanceBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Restitution;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContactDistance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSoftConstraint : 1;                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitDegrees;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing1Motion;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing2Motion;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              TwistMotion;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableVelocityDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x0068
struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityTarget;                                           // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FConstraintDrive                            XDrive;                                                   // 0x0030(0x0010) (Edit)
	struct FConstraintDrive                            YDrive;                                                   // 0x0040(0x0010) (Edit)
	struct FConstraintDrive                            ZDrive;                                                   // 0x0050(0x0010) (Edit)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x0068
struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                               // 0x0000(0x0010) (Edit)
	struct FConstraintDrive                            SwingDrive;                                               // 0x0010(0x0010) (Edit)
	struct FConstraintDrive                            SlerpDrive;                                               // 0x0020(0x0010) (Edit)
	struct FRotator                                    OrientationTarget;                                        // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x0048(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0158
struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ProjectionLinearAlpha;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularAlpha;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShockPropagationAlpha;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearBreakThreshold;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearPlasticityThreshold;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBreakThreshold;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularPlasticityThreshold;                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContactTransferScale;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearConstraint                           LinearLimit;                                              // 0x0028(0x001C) (Edit)
	struct FConeConstraint                             ConeLimit;                                                // 0x0044(0x0020) (Edit)
	struct FTwistConstraint                            TwistLimit;                                               // 0x0064(0x001C) (Edit)
	struct FLinearDriveConstraint                      LinearDrive;                                              // 0x0080(0x0068) (Edit)
	struct FAngularDriveConstraint                     AngularDrive;                                             // 0x00E8(0x0068) (Edit)
	unsigned char                                      bDisableCollision : 1;                                    // 0x0150(0x0001) (Edit)
	unsigned char                                      bParentDominates : 1;                                     // 0x0150(0x0001) (Edit)
	unsigned char                                      bEnableLinearProjection : 1;                              // 0x0150(0x0001) (Edit)
	unsigned char                                      bEnableAngularProjection : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      bEnableShockPropagation : 1;                              // 0x0150(0x0001) (Edit)
	unsigned char                                      bEnableProjection : 1;                                    // 0x0150(0x0001)
	unsigned char                                      bEnableSoftProjection : 1;                                // 0x0150(0x0001)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x0150(0x0001) (Edit)
	unsigned char                                      bAngularPlasticity : 1;                                   // 0x0151(0x0001) (Edit)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x0151(0x0001) (Edit)
	unsigned char                                      bLinearPlasticity : 1;                                    // 0x0151(0x0001) (Edit)
	TEnumAsByte<EConstraintPlasticityType>             LinearPlasticityType;                                     // 0x0152(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0153(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x0238 (0x0270 - 0x0038)
struct FConstraintInstance : public FConstraintInstanceBase
{
	struct FName                                       JointName;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x0050(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x0080(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x0098(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x00B0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x00C8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x00E0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleLinearLimits : 1;                                   // 0x00F8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FConstraintProfileProperties                ProfileInstance;                                          // 0x0100(0x0158) (Edit)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0258(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x0160
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                        // 0x0000(0x0158)
	struct FName                                       ProfileName;                                              // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x0034
struct FRigidBodyErrorCorrection
{
	float                                              PingExtrapolation;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PingLimit;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorPerLinearDifference;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorPerAngularDifference;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRestoredStateError;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearHardSnapDistance;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionLerp;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleLerp;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearVelocityCoefficient;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityCoefficient;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationSeconds;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationDistanceSq;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationSimilarity;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// 0x0003
struct FChaosPhysicsSettings
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Config)
	struct FString                                     Command;                                                  // 0x0018(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                              // 0x0028(0x0001) (Config)
	unsigned char                                      Shift : 1;                                                // 0x0028(0x0001) (Config)
	unsigned char                                      Alt : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      Cmd : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bDisabled : 1;                                            // 0x0029(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.PoseAssetInfluence
// 0x0008
struct FPoseAssetInfluence
{
	int                                                PoseIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoneTransformIndex;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PoseAssetInfluences
// 0x0010
struct FPoseAssetInfluences
{
	TArray<struct FPoseAssetInfluence>                 Influences;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PoseData
// 0x0020
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      CurveData;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0060
struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Tracks;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackBoneIndices;                                         // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPoseAssetInfluences>                TrackPoseInfluenceIndices;                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FPoseData>                           Poses;                                                    // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FAnimCurveBase>                      Curves;                                                   // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0028
struct FPreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SkeletalMesh
};

// ScriptStruct Engine.CollectionReference
// 0x0008
struct FCollectionReference
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerPlatformInt
// 0x0004
struct FPerPlatformInt
{
	int                                                Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerPlatformBool
// 0x0001
struct FPerPlatformBool
{
	bool                                               Default;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.Node
// 0x0090
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x0070(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanced;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0081(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.RPCAnalyticsThreshold
// 0x0018
struct FRPCAnalyticsThreshold
{
	struct FName                                       RPC;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CountPerSec;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             TimePerSec;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDensities;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0028
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0010(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// 0x0014
struct FSkeletalMeshBuildSettings
{
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseBackwardsCompatibleF16TruncUVs : 1;                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ThresholdPosition;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdTangentNormal;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdUV;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MorphThresholdPosition;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x003C
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshTerminationCriterion>     TerminationCriterion;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NumOfVertPercentage;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfTriangles;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfVerts;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemapMorphTargets : 1;                                   // 0x001D(0x0001) (Edit)
	unsigned char                                      bRecalcNormals : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              WeldingThreshold;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalsThreshold;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnforceBoneBoundaries : 1;                               // 0x002C(0x0001) (Edit)
	unsigned char                                      bMergeCoincidentVertBones : 1;                            // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              VolumeImportance;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockEdges : 1;                                           // 0x0034(0x0001) (Edit)
	unsigned char                                      bLockColorBounaries : 1;                                  // 0x0034(0x0001) (Edit)
	unsigned char                                      bMergeCoincidentVertices : 1;                             // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                BaseLOD;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SectionReference
// 0x0004
struct FSectionReference
{
	int                                                SectionIndex;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x00D0
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (ZeroConstructor)
	struct FSkeletalMeshBuildSettings                  BuildSettings;                                            // 0x0018(0x0014) (Edit)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x002C(0x003C) (Edit)
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBoneReference>                      BonesToPrioritize;                                        // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSectionReference>                   SectionsToPrioritize;                                     // 0x0088(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BakePoseOverride;                                         // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceImportFilename;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	float                                              MorphTargetPositionErrorTolerance;                        // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x00C8(0x0001)
	unsigned char                                      bHasPerLODVertexColors : 1;                               // 0x00C8(0x0001)
	unsigned char                                      bAllowCPUAccess : 1;                                      // 0x00C8(0x0001) (Edit)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x00C8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0008
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	struct FName                                       MaterialName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x000C
struct FSkeletalMeshSamplingRegionBoneFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeOrExclude : 1;                                    // 0x0008(0x0001) (Edit)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0030
struct FSkeletalMeshSamplingRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0048
struct FSkeletalMeshSamplingLODBuiltData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0078
struct FSkeletalMeshSamplingRegionBuiltData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0020
struct FSkeletalMeshSamplingBuiltData
{
	TArray<struct FSkeletalMeshSamplingLODBuiltData>   WholeMeshBuiltData;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0030
struct FSkeletalMeshSamplingInfo
{
	TArray<struct FSkeletalMeshSamplingRegion>         Regions;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSkeletalMeshSamplingBuiltData              BuiltData;                                                // 0x0010(0x0020)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// 0x0010
struct FSkinWeightProfileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPerPlatformBool                            DefaultProfile;                                           // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FPerPlatformInt                             DefaultProfileFromLODIndex;                               // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.BoneFilter
// 0x000C
struct FBoneFilter
{
	bool                                               bExcludeSelf;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0090
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<struct FBoneFilter>                         BoneList;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BonesToPrioritize;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        SectionsToPrioritize;                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0050(0x003C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassProperties
// 0x0078
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LowPassFilterFrequency;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationDistanceScale;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsUISound : 1;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsMusic : 1;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReverb : 1;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Default2DReverbSendAmount;                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSoundModulationDefaultSettings             ModulationSettings;                                       // 0x0028(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class USoundSubmix*                                DefaultSubmix;                                            // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FSourceEffectChainEntry
{
	class USoundEffectSourcePreset*                    Preset;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBypass : 1;                                              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Engine.AudioEffectParameters
// 0x0008
struct FAudioEffectParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038 (0x0040 - 0x0008)
struct FAudioEQEffect : public FAudioEffectParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain0;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth0;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter1;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain1;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth1;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter2;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain2;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth2;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter3;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain3;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth3;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0020
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LowPassFilterFrequency;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // 0x0008(0x0018) (Edit)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SplineCurves
// 0x0070
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018) (ZeroConstructor)
	struct FInterpCurveVector                          Scale;                                                    // 0x0030(0x0018) (ZeroConstructor)
	struct FInterpCurveFloat                           ReparamTable;                                             // 0x0048(0x0018) (ZeroConstructor)
	class USplineMetadata*                             MetaData;                                                 // 0x0060(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	uint32_t                                           Version;                                                  // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SplinePoint
// 0x0088
struct FSplinePoint
{
	float                                              InputKey;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0020(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0050(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0068(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplinePointType>                      Type;                                                     // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x00B0
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FVector2D                                   StartOffset;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x0058(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x0070(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0080(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FVector2D                                   EndOffset;                                                // 0x00A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMaterial
// 0x0030
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ImportedMaterialSlotName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PartBounds
// 0x0020
struct FPartBounds
{
	struct FVector3f                                   Origin;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   BoxExtent;                                                // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsValid : 1;                                              // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EquirectProps
// 0x0090
struct FEquirectProps
{
	struct FBox2D                                      LeftUVRect;                                               // 0x0000(0x0028) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      RightUVRect;                                              // 0x0028(0x0028) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeftScale;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RightScale;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeftBias;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RightBias;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x009C
struct FSubsurfaceProfileStruct
{
	struct FLinearColor                                SurfaceAlbedo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeanFreePathColor;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MeanFreePathDistance;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldUnitScale;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableBurley;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLinearColor                                Tint;                                                     // 0x002C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScatterRadius;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BoundaryColorBleed;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtinctionScale;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScatteringDistribution;                                   // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IOR;                                                      // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness0;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness1;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LobeMix;                                                  // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TransmissionTintColor;                                    // 0x008C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             EventFunc;                                                // 0x0004(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0040
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VectorPropertyName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0040
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatPropertyName;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0040
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LinearColorPropertyName;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0001(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0001(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x0010(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x0020(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x0030(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x0040(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x0050(0x0010) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x0060(0x0010) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0080(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TTTrackBase
// 0x0018
struct FTTTrackBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsExternalCurve;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x0010 (0x0028 - 0x0018)
struct FTTEventTrack : public FTTTrackBase
{
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveKeys;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTPropertyTrack
// 0x0008 (0x0020 - 0x0018)
struct FTTPropertyTrack : public FTTTrackBase
{
	struct FName                                       PropertyName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTFloatTrack : public FTTPropertyTrack
{
	class UCurveFloat*                                 CurveFloat;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTVectorTrack : public FTTPropertyTrack
{
	class UCurveVector*                                CurveVector;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTLinearColorTrack : public FTTPropertyTrack
{
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TouchInputControl
// 0x0090
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image2;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        MainInputKey;                                             // 0x0060(0x0018) (Edit)
	struct FKey                                        AltInputKey;                                              // 0x0078(0x0018) (Edit)
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0018
struct FHardwareCursorReference
{
	struct FName                                       CursorPath;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// 0x000C
struct FVirtualTextureBuildSettings
{
	int                                                TileSize;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TileBorderSize;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCompressCrunch;                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCompressZlib;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// 0x0030
struct FVirtualTextureSpacePoolConfig
{
	int                                                MinTileSize;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTileSize;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPixelFormat>>                  Formats;                                                  // 0x0008(0x0010) (ZeroConstructor)
	int                                                SizeInMegabyte;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableResidencyMipMapBias;                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSizeScale;                                          // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	uint32_t                                           ScalabilityGroup;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinScaledSizeInMegabyte;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxScaledSizeInMegabyte;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VoiceSettings
// 0x0018
struct FVoiceSettings
{
	class USceneComponent*                             ComponentToAttachTo;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SpatialHashRuntimeGrid
// 0x0001
struct FSpatialHashRuntimeGrid
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.SpatialHashStreamingGridLayerCell
// 0x0010
struct FSpatialHashStreamingGridLayerCell
{
	TArray<class UWorldPartitionRuntimeSpatialHashCell*> GridCells;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SpatialHashStreamingGridLevel
// 0x0060
struct FSpatialHashStreamingGridLevel
{
	TArray<struct FSpatialHashStreamingGridLayerCell>  LayerCells;                                               // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, int>                                     LayerCellsMapping;                                        // 0x0010(0x0050)
};

// ScriptStruct Engine.SpatialHashStreamingGrid
// 0x00A8
struct FSpatialHashStreamingGrid
{
	struct FName                                       GridName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	int                                                CellSize;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LoadingRange;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bBlockOnSlowStreaming;                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FSpatialHashStreamingGridLevel>      GridLevels;                                               // 0x0040(0x0010) (ZeroConstructor)
	struct FBox                                        WorldBounds;                                              // 0x0050(0x0038) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnlyVisible;                                       // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UHLODLayer*                                  HLODLayer;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.StreamingSourceShape
// 0x0040
struct FStreamingSourceShape
{
	bool                                               bUseGridLoadingRange;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSector;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SectorAngle;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x0094
struct FMaterialProxySettings
{
	TEnumAsByte<ETextureSizingType>                    TextureSizingType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FIntPoint                                   TextureSize;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetTexelDensityPerMeter;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshMaxScreenSizePercent;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshMinDrawDistance;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GutterSpace;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetallicConstant;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessConstant;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnisotropyConstant;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecularConstant;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityConstant;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskConstant;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionConstant;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialMergeType>                    MaterialMergeType;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowTwoSidedMaterial : 1;                               // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNormalMap : 1;                                           // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bTangentMap : 1;                                          // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMetallicMap : 1;                                         // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRoughnessMap : 1;                                        // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAnisotropyMap : 1;                                       // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpecularMap : 1;                                         // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEmissiveMap : 1;                                         // 0x003A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOpacityMap : 1;                                          // 0x003B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOpacityMaskMap : 1;                                      // 0x003B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAmbientOcclusionMap : 1;                                 // 0x003B(0x0001) (Edit, BlueprintVisible)
	struct FIntPoint                                   DiffuseTextureSize;                                       // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   NormalTextureSize;                                        // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   TangentTextureSize;                                       // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   MetallicTextureSize;                                      // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   RoughnessTextureSize;                                     // 0x005C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   AnisotropyTextureSize;                                    // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   SpecularTextureSize;                                      // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   EmissiveTextureSize;                                      // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   OpacityTextureSize;                                       // 0x007C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   OpacityMaskTextureSize;                                   // 0x0084(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              // 0x008C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshProxySettings
// 0x00B8
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoxelSize;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x0008(0x0094) (Edit, BlueprintVisible)
	float                                              MergeDistance;                                            // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      UnresolvedGeometryColor;                                  // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRayCastDist;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProxyNormalComputationMethod>         NormalCalculationMethod;                                  // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCalculateCorrectLODModel : 1;                            // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideVoxelSize : 1;                                   // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideTransferDistance : 1;                            // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseHardAngleThreshold : 1;                               // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputeLightMapResolution : 1;                           // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x00B2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x00B3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroupIdenticalMeshesForBaking : 1;                       // 0x00B3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCreateCollision : 1;                                     // 0x00B3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowVertexColors : 1;                                   // 0x00B3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x00B3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateNaniteEnabledMesh : 1;                           // 0x00B3(0x0001) (Edit, BlueprintVisible)
	float                                              NaniteProxyTrianglePercent;                               // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshMergingSettings
// 0x00B4
struct FMeshMergingSettings
{
	int                                                TargetLightMapResolution;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x000C(0x0094) (Edit, BlueprintVisible)
	int                                                GutterSize;                                               // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpecificLOD;                                              // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00A8(0x0001) MISSED OFFSET
	unsigned char                                      bGenerateLightMapUV : 1;                                  // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputedLightMapResolution : 1;                          // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPivotPointAtZero : 1;                                    // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMergePhysicsData : 1;                                    // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMergeMaterials : 1;                                      // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCreateMergedMaterial : 1;                                // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBakeVertexDataToMesh : 1;                                // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseVertexDataForBakingMaterial : 1;                      // 0x00A9(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseTextureBinning : 1;                                   // 0x00AA(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x00AA(0x0001) (Edit)
	unsigned char                                      bMergeEquivalentMaterials : 1;                            // 0x00AA(0x0001) (Edit)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x00AA(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIncludeImposters : 1;                                    // 0x00AA(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x00AA(0x0001) (Edit)
	unsigned char                                      bGenerateNaniteEnabledMesh : 1;                           // 0x00AA(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00AB(0x0001) MISSED OFFSET
	float                                              NaniteFallbackTrianglePercent;                            // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x0184
struct FHierarchicalSimplification
{
	float                                              TransitionScreenSize;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDrawDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseOverrideDrawDistance : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      bAllowSpecificExclusion : 1;                              // 0x0008(0x0001) (Edit)
	unsigned char                                      bSimplifyMesh : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      bOnlyGenerateClustersForVolumes : 1;                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bReusePreviousLevelClusters : 1;                          // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FMeshProxySettings                          ProxySetting;                                             // 0x000C(0x00B8) (Edit)
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x00C4(0x00B4) (Edit)
	float                                              DesiredBoundRadius;                                       // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0008
struct FExpressionOutput
{
	struct FName                                       OutputName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0008
struct FFloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FormatArgumentData
// 0x0050
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TEnumAsByte<EFormatArgumentType>                   ArgumentValueType;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int64_t                                            ArgumentValueInt;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ArgumentValueFloat;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	double                                             ArgumentValueDouble;                                      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0000 (0x0014 - 0x0014)
struct FVector2MaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.Vector4Distribution
// 0x0020
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.VectorDistribution
// 0x0020
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0008
struct FVectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimDataModelNotifPayload
// 0x0010
struct FAnimDataModelNotifPayload
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                                     // 0x0008(0x0030)
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	int                                                MaxSamples;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UUID;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0028
struct FOverlapResult
{
	struct FActorInstanceHandle                        OverlapObjectHandle;                                      // 0x0000(0x0018)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0024(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ForceFeedbackParameters
// 0x000C
struct FForceFeedbackParameters
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTimeDilation;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayWhilePaused;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0060
struct FKeyHandleLookupTable
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0010
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PoseLinkBase
// 0x0010
struct FPoseLinkBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                LinkID;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0010 - 0x0010)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x0880
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x880];                                     // 0x0000(0x0880) MISSED OFFSET
};

// ScriptStruct Engine.AnimSubsystem
// 0x0008
struct FAnimSubsystem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ComponentReference
// 0x0028
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathToComponent;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0028
struct FRootMotionFinishVelocitySettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     SetVelocity;                                              // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              ClampVelocity;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource
// 0x00E0
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           LocalID;                                                  // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceStatus                     Status;                                                   // 0x0030(0x0001)
	struct FRootMotionSourceSettings                   Settings;                                                 // 0x0031(0x0001)
	bool                                               bInLocalSpace;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0040(0x0070)
	struct FRootMotionFinishVelocitySettings           FinishVelocityParams;                                     // 0x00B0(0x0028)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MemberScope;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_CustomProperty
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_CustomProperty : public FAnimNode_Base
{
	TArray<struct FName>                               SourcePropertyNames;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               DestPropertyNames;                                        // 0x0020(0x0010) (ZeroConstructor)
	class UObject*                                     TargetInstance;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FInputRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0030
struct FInputScaleBiasClamp
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampResult;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FInputRange                                 OutRange;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedIncreasing;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0048
struct FInputAlphaBoolBlend
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) MISSED OFFSET
	bool                                               bInitialized;                                             // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 AlphaBlend;                                               // 0x0018(0x0030) (Transient)
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0010 - 0x0010)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.InputClampConstants
// 0x0014
struct FInputClampConstants
{
	bool                                               bClampResult;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ClampMin;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedIncreasing;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// 0x0010
struct FActorComponentDuplicatedObjectData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentInstanceData
// 0x0068
struct FActorComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     SourceComponentTemplate;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	int                                                SourceComponentTypeSerializedIndex;                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SavedProperties;                                          // 0x0018(0x0010) (ZeroConstructor)
	struct FActorComponentDuplicatedObjectData         UniqueTransientPackage;                                   // 0x0028(0x0010)
	TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects;                                        // 0x0038(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             ReferencedObjects;                                        // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FName>                               ReferencedNames;                                          // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimNodeReference
// 0x0010
struct FAnimNodeReference
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Root
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SocketReference
// 0x0070
struct FSocketReference
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BoneSocketTarget
// 0x0090
struct FBoneSocketTarget
{
	bool                                               bUseSocket;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FBoneReference                              BoneReference;                                            // 0x0004(0x0010) (Edit)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FSocketReference                            SocketReference;                                          // 0x0020(0x0070) (Edit)
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimCurveParam
// 0x000C
struct FAnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SceneComponentInstanceData
// 0x0050 (0x00B8 - 0x0068)
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{
	TMap<class USceneComponent*, struct FTransform>    AttachedInstanceComponents;                               // 0x0068(0x0050)
};

// ScriptStruct Engine.EncounteredStateMachineStack
// 0x0030
struct FEncounteredStateMachineStack
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTexture
// 0x0001
struct FStreamableTexture
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0060
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightRate;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SamplePlayRate;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0024(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0010
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0014
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NextMarkerName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PositionBetweenMarkers;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimTickRecord
// 0x0078
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0070
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AnimationGroupReference
// 0x0010
struct FAnimationGroupReference
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       GroupName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0018
struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveRootAnimation;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSaveAsset;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FFrameRate                                  SampleFrameRate;                                          // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0012(0x0001) MISSED OFFSET
	bool                                               bRecordTransforms;                                        // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecordMorphTargets;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecordAttributeCurves;                                   // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecordMaterialCurves;                                    // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NamedFloat
// 0x000C
struct FNamedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedVector
// 0x0020
struct FNamedVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedColor
// 0x000C
struct FNamedColor
{
	struct FColor                                      Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedTransform
// 0x0070
struct FNamedTransform
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FLocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompiledPinExpressionData
// 0x0020
struct FCompiledPinExpressionData
{
	int                                                CompiledTransitionIndex;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        ParamByteOffsets;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineStateDebugData
// 0x0010
struct FStateMachineStateDebugData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x0150
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x0000(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintMutableData
// 0x0001
struct FAnimBlueprintMutableData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintConstantData
// 0x0001
struct FAnimBlueprintConstantData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndPosition;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationErrorStats
// 0x0010
struct FAnimationErrorStats
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CachedFloatCurve
// 0x0014
struct FCachedFloatCurve
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0008(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.EmptyPayload
// 0x0001
struct FEmptyPayload
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BracketPayload
// 0x000F (0x0010 - 0x0001)
struct FBracketPayload : public FEmptyPayload
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Engine.AnimationTrackPayload
// 0x0007 (0x0008 - 0x0001)
struct FAnimationTrackPayload : public FEmptyPayload
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTrackAddedPayload
// 0x0004 (0x000C - 0x0008)
struct FAnimationTrackAddedPayload : public FAnimationTrackPayload
{
	int                                                TrackIndex;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SequenceLengthChangedPayload
// 0x000B (0x000C - 0x0001)
struct FSequenceLengthChangedPayload : public FEmptyPayload
{
	float                                              PreviousLength;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              T0;                                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              T1;                                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FrameRateChangedPayload
// 0x0007 (0x0008 - 0x0001)
struct FFrameRateChangedPayload : public FEmptyPayload
{
	struct FFrameRate                                  PreviousFrameRate;                                        // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurvePayload
// 0x000F (0x0010 - 0x0001)
struct FCurvePayload : public FEmptyPayload
{
	struct FAnimationCurveIdentifier                   Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CurveScaledPayload
// 0x0008 (0x0018 - 0x0010)
struct FCurveScaledPayload : public FCurvePayload
{
	float                                              Factor;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Origin;                                                   // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveRenamedPayload
// 0x0010 (0x0020 - 0x0010)
struct FCurveRenamedPayload : public FCurvePayload
{
	struct FAnimationCurveIdentifier                   NewIdentifier;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CurveFlagsChangedPayload
// 0x0004 (0x0014 - 0x0010)
struct FCurveFlagsChangedPayload : public FCurvePayload
{
	int                                                OldFlags;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AttributePayload
// 0x0037 (0x0038 - 0x0001)
struct FAttributePayload : public FEmptyPayload
{
	struct FAnimationAttributeIdentifier               Identifier;                                               // 0x0000(0x0038) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.AnimExecutionContext
// 0x0010
struct FAnimExecutionContext
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimInitializationContext
// 0x0000 (0x0010 - 0x0010)
struct FAnimInitializationContext : public FAnimExecutionContext
{

};

// ScriptStruct Engine.AnimUpdateContext
// 0x0000 (0x0010 - 0x0010)
struct FAnimUpdateContext : public FAnimExecutionContext
{

};

// ScriptStruct Engine.AnimPoseContext
// 0x0000 (0x0010 - 0x0010)
struct FAnimPoseContext : public FAnimExecutionContext
{

};

// ScriptStruct Engine.AnimComponentSpacePoseContext
// 0x0000 (0x0010 - 0x0010)
struct FAnimComponentSpacePoseContext : public FAnimExecutionContext
{

};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0090
struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x00B0
struct FQueuedDrawDebugItem
{
	TEnumAsByte<EDrawDebugItemType>                    ItemType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FVector                                     StartLoc;                                                 // 0x0008(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // 0x0020(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0038(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0050(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Size;                                                     // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Segments;                                                 // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0074(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPersistentLines;                                         // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              Lifetime;                                                 // 0x007C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Thickness;                                                // 0x0080(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0088(0x0010) (ZeroConstructor, Transient)
	struct FVector2D                                   TextScale;                                                // 0x0098(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ESceneDepthPriorityGroup>              DepthPriority;                                            // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01C8
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
	bool                                               bPlaying;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                               // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET
	TArray<int>                                        NextSections;                                             // 0x00F8(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x0128(0x0010) (ZeroConstructor, Transient)
	float                                              Position;                                                 // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                                    // 0x0140(0x0030) (Transient)
	unsigned char                                      UnknownData04[0x34];                                      // 0x0170(0x0034) MISSED OFFSET
	int                                                DisableRootMotionCount;                                   // 0x01A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeConstantData
// 0x0018
struct FAnimNodeConstantData
{
	TScriptInterface<class UAnimClassInterface>        AnimClassInterface;                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                NodeIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeFunctionRef
// 0x0020
struct FAnimNodeFunctionRef
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFunction*                                   Function;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x00C0 (0x00D0 - 0x0010)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0090(0x0008) (Edit, BlueprintVisible)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0098(0x0030) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPose
// 0x00D0
struct FInertializationPose
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct Engine.InertializationBoneDiff
// 0x0060
struct FInertializationBoneDiff
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.InertializationCurveDiff
// 0x0008
struct FInertializationCurveDiff
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPoseDiff
// 0x0028
struct FInertializationPoseDiff
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Inertialization
// 0x00C0 (0x00D0 - 0x0010)
struct FAnimNode_Inertialization : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               FilteredCurves;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// 0x0040 (0x0098 - 0x0058)
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty
{
	TArray<struct FPoseLink>                           InputPoses;                                               // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FName>                               InputPoseNames;                                           // 0x0068(0x0010) (ZeroConstructor)
	class UClass*                                      InstanceClass;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0080(0x0014) MISSED OFFSET
	unsigned char                                      bReceiveNotifiesFromLinkedInstances : 1;                  // 0x0094(0x0001) (Edit)
	unsigned char                                      bPropagateNotifiesToLinkedInstances : 1;                  // 0x0094(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// 0x0010 (0x00A8 - 0x0098)
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph
{
	class UClass*                                      Interface;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Layer;                                                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_LinkedInputPose : public FAnimNode_Base
{
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Graph;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   InputPose;                                                // 0x0020(0x0010)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00F8 (0x0108 - 0x0010)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBiasClampState
// 0x0008
struct FInputScaleBiasClampState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayerBase
// 0x0008 (0x0040 - 0x0038)
struct FAnimNode_SequencePlayerBase : public FAnimNode_AssetPlayerBase
{
	struct FInputScaleBiasClampState                   PlayRateScaleBiasClampState;                              // 0x0038(0x0008)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0000 (0x0040 - 0x0040)
struct FAnimNode_SequencePlayer : public FAnimNode_SequencePlayerBase
{

};

// ScriptStruct Engine.InputScaleBiasClampConstants
// 0x002C
struct FInputScaleBiasClampConstants
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampResult;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FInputRange                                 OutRange;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedIncreasing;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_SequencePlayer_Standalone
// 0x0058 (0x0098 - 0x0040)
struct FAnimNode_SequencePlayer_Standalone : public FAnimNode_SequencePlayerBase
{
	struct FName                                       GroupName;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0049(0x0001) MISSED OFFSET
	bool                                               bIgnoreForRelevancyTest;                                  // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateBasis;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClampConstants               PlayRateScaleBiasClampConstants;                          // 0x0060(0x002C) (Edit)
	float                                              StartPosition;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromMatchingPose;                                   // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00C8
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00C0 (0x00D0 - 0x0010)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimultanouslyActiveTransitions;                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAbsolutTransitionDurations;                           // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipFirstUpdateTransition;                               // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReinitializeOnBecomingRelevant;                          // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	TArray<float>                                      DynamicCrossfadeDuration;                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCreateNotifyMetaData;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowConduitEntryStates;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9E];                                      // 0x0032(0x009E) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x00A8 (0x00B8 - 0x0010)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0010(0x0088) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x00A2(0x0016) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
	struct FCompiledPinExpressionData                  CompiledPinExpressionData;                                // 0x0028(0x0020) (Edit, EditConst)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x0010(0x0010)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyContext
// 0x0018
struct FAnimNotifyContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector3f>                           PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat4f>                             RotKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector3f>                           ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0100 (0x0980 - 0x0880)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0880(0x0100) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSubsystemInstance
// 0x0008
struct FAnimSubsystemInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0008
struct FExposedValueCopyRecord
{
	int                                                CopyIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0000(0x0010) (ZeroConstructor)
	class UFunction*                                   Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FName                                       BoundFunction;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSubsystem_Base
// 0x0010 (0x0018 - 0x0008)
struct FAnimSubsystem_Base : public FAnimSubsystem
{
	TArray<struct FExposedValueHandler>                ExposedValueHandlers;                                     // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSubsystem_BlendSpaceGraph
// 0x0010 (0x0018 - 0x0008)
struct FAnimSubsystem_BlendSpaceGraph : public FAnimSubsystem
{
	TArray<class UBlendSpace*>                         BlendSpaces;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSubsystemInstance_NodeRelevancy
// 0x00A0 (0x00A8 - 0x0008)
struct FAnimSubsystemInstance_NodeRelevancy : public FAnimSubsystemInstance
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0008(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.PropertyAccessSegment
// 0x0040
struct FPropertyAccessSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStruct*                                     Struct;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) UNKNOWN PROPERTY: Property
	class UFunction*                                   Function;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Flags;                                                    // 0x003C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PropertyAccessPath
// 0x0008
struct FPropertyAccessPath
{
	int                                                PathSegmentStartIndex;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PathSegmentCount;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PropertyAccessCopy
// 0x0010
struct FPropertyAccessCopy
{
	int                                                AccessIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestAccessStartIndex;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestAccessEndIndex;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PropertyAccessCopyBatch
// 0x0010
struct FPropertyAccessCopyBatch
{
	TArray<struct FPropertyAccessCopy>                 Copies;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PropertyAccessIndirectionChain
// 0x0028
struct FPropertyAccessIndirectionChain
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: Property
	int                                                IndirectionStartIndex;                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IndirectionEndIndex;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PropertyAccessIndirection
// 0x0040
struct FPropertyAccessIndirection
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: Property
	class UFunction*                                   Function;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ReturnBufferSize;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReturnBufferAlignment;                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Offset;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PropertyAccessLibrary
// 0x0078
struct FPropertyAccessLibrary
{
	TArray<struct FPropertyAccessSegment>              PathSegments;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPropertyAccessPath>                 SrcPaths;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPropertyAccessPath>                 DestPaths;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FPropertyAccessCopyBatch>            CopyBatchArray;                                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FPropertyAccessIndirectionChain>     SrcAccesses;                                              // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPropertyAccessIndirectionChain>     DestAccesses;                                             // 0x0050(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPropertyAccessIndirection>          Indirections;                                             // 0x0060(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimSubsystem_PropertyAccess
// 0x0078 (0x0080 - 0x0008)
struct FAnimSubsystem_PropertyAccess : public FAnimSubsystem
{
	struct FPropertyAccessLibrary                      Library;                                                  // 0x0008(0x0078)
};

// ScriptStruct Engine.AnimSubsystem_Tag
// 0x0058 (0x0060 - 0x0008)
struct FAnimSubsystem_Tag : public FAnimSubsystem
{
	TMap<struct FName, int>                            NodeIndices;                                              // 0x0008(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AssetCompileData
// 0x0008
struct FAssetCompileData
{
	TWeakObjectPtr<class UObject>                      Asset;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AssetManagerSearchRules
// 0x0050
struct FAssetManagerSearchRules
{
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             IncludePatterns;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ExcludePatterns;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      AssetBaseClass;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSynchronousScan;                                    // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipVirtualPathExpansion;                                // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipManagerIncludeCheck;                                 // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x003C(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0008 (0x00A8 - 0x00A0)
struct FAudioComponentParam : public FAudioParameter
{
	class USoundWave*                                  SoundWaveParam;                                           // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioReverbEffect
// 0x0040 (0x0048 - 0x0008)
struct FAudioReverbEffect : public FAudioEffectParameters
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x0058
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendSample
// 0x0008
struct FWeightedBlendSample
{
	int                                                SampleIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SampleWeight;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              // 0x0000(0x0018)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FCompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ServerOnlyPlatform;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ClientOnlyPlatform;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExcludeMonolithicHeaders;                                // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FName>                               ExcludedModules;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: ExcludedAssets
	TArray<struct FString>                             ExcludedFolderPaths;                                      // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableDescription
// 0x00D0
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                                  // 0x0018(0x0058) (Edit)
	struct FString                                     FriendlyName;                                             // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Category;                                                 // 0x0080(0x0018) (Edit)
	uint64_t                                           PropertyFlags;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELifetimeCondition>                    ReplicationCondition;                                     // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0038
struct FEditedDocumentInfo
{
	struct FSoftObjectPath                             EditedObjectPath;                                         // 0x0000(0x0018) (ZeroConstructor)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              SavedZoomAmount;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UObject*                                     EditedObject;                                             // 0x0030(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0038
struct FBPEditorBookmarkNode
{
	struct FGuid                                       NodeGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0190
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0001
struct FBookmarkBaseJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000 (0x0001 - 0x0001)
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0001
struct FBookmark2DJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.FloatAnimationAttribute
// 0x0004
struct FFloatAnimationAttribute
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegerAnimationAttribute
// 0x0004
struct FIntegerAnimationAttribute
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StringAnimationAttribute
// 0x0010
struct FStringAnimationAttribute
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TransformAnimationAttribute
// 0x0060
struct FTransformAnimationAttribute
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0060) (IsPlainOldData)
};

// ScriptStruct Engine.NonBlendableTransformAnimationAttribute
// 0x0000 (0x0060 - 0x0060)
struct FNonBlendableTransformAnimationAttribute : public FTransformAnimationAttribute
{

};

// ScriptStruct Engine.NonBlendableFloatAnimationAttribute
// 0x0000 (0x0004 - 0x0004)
struct FNonBlendableFloatAnimationAttribute : public FFloatAnimationAttribute
{

};

// ScriptStruct Engine.NonBlendableIntegerAnimationAttribute
// 0x0000 (0x0004 - 0x0004)
struct FNonBlendableIntegerAnimationAttribute : public FIntegerAnimationAttribute
{

};

// ScriptStruct Engine.CachedAnimStateData
// 0x001C
struct FCachedAnimStateData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0018
struct FCachedAnimStateArray
{
	TArray<struct FCachedAnimStateData>                States;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0018
struct FCachedAnimAssetPlayerData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x001C
struct FCachedAnimRelevancyData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0024
struct FCachedAnimTransitionData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FromStateName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToStateName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CameraShakeStartParams
// 0x0001
struct FCameraShakeStartParams
{
	bool                                               bIsRestarting;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraShakeUpdateParams
// 0x07B0
struct FCameraShakeUpdateParams
{
	float                                              DeltaTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DynamicScale;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendingWeight;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x07A0) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CameraShakeScrubParams
// 0x07B0
struct FCameraShakeScrubParams
{
	float                                              AbsoluteTime;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DynamicScale;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendingWeight;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x07A0) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CameraShakeUpdateResult
// 0x0710
struct FCameraShakeUpdateResult
{
	unsigned char                                      UnknownData00[0x710];                                     // 0x0000(0x0710) MISSED OFFSET
};

// ScriptStruct Engine.CameraShakeStopParams
// 0x0001
struct FCameraShakeStopParams
{
	bool                                               bImmediately;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraShakeDuration
// 0x0008
struct FCameraShakeDuration
{
	float                                              Duration;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CameraShakeInfo
// 0x0010
struct FCameraShakeInfo
{
	struct FCameraShakeDuration                        Duration;                                                 // 0x0000(0x0008)
	float                                              BlendIn;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0038
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       DrawFont;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WrappedStringElement
// 0x0020
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CharacterMovementComponentPrePhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FCharacterMovementComponentPrePhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// 0x0070
struct FChildActorAttachedActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0060) (IsPlainOldData)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// 0x0030 (0x00E8 - 0x00B8)
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{
	class UClass*                                      ChildActorClass;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ChildActorName;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FChildActorAttachedActorInfo>        AttachedActors;                                           // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x0208
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0080)
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveAtlasColorAdjustments
// 0x0024
struct FCurveAtlasColorAdjustments
{
	unsigned char                                      bChromaKeyTexture : 1;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AdjustBrightness;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustBrightnessCurve;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustVibrance;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustSaturation;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustRGBCurve;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustHue;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustMinAlpha;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdjustMaxAlpha;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeVectorCurve
// 0x0188
struct FRuntimeVectorCurve
{
	struct FRichCurve                                  VectorCurves[0x3];                                        // 0x0000(0x0080)
	class UCurveVector*                                ExternalCurve;                                            // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomAttribute
// 0x0001
struct FCustomAttribute
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CustomAttributePerBoneData
// 0x0001
struct FCustomAttributePerBoneData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BakedStringCustomAttribute
// 0x0001
struct FBakedStringCustomAttribute
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BakedIntegerCustomAttribute
// 0x0001
struct FBakedIntegerCustomAttribute
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BakedFloatCustomAttribute
// 0x0001
struct FBakedFloatCustomAttribute
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BakedCustomAttributePerBoneData
// 0x0001
struct FBakedCustomAttributePerBoneData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SelectedFragmentProperties
// 0x0020
struct FSelectedFragmentProperties
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Fragment;                                                 // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0018)
	struct FText                                       TooltipDescription;                                       // 0x0020(0x0018)
	struct FText                                       Category;                                                 // 0x0038(0x0018)
	struct FText                                       Keywords;                                                 // 0x0050(0x0018)
	int                                                Grouping;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionID;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MenuDescriptionArray;                                     // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchTitlesArray;                                    // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchKeywordsArray;                                  // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchCategoryArray;                                  // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     SearchText;                                               // 0x00F0(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0068
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Valid;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Map;                                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     RedirectURL;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Op;                                                       // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     Portal;                                                   // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.WorldContext
// 0x0278
struct FWorldContext
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x00C0(0x0068)
	struct FURL                                        LastRemoteURL;                                            // 0x0128(0x0068)
	class UPendingNetGame*                             PendingNetGame;                                           // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x01B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01C8(0x0018) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x01E0(0x0010) (ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x01F0(0x0010) (ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                             // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                                       // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0210(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0220(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.ScreenMessageString
// 0x0038
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector2D                                   TextScale;                                                // 0x0028(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	float                                              FixedEV100;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyState
// 0x0080
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0020(0x0020) (IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x0040(0x0018)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x0058(0x0018)
	unsigned char                                      Flags;                                                    // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0048
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0048
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsVelocityDeltaUnderThreshold;                           // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0068
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (Edit)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (Edit)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (Edit)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (Edit)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (Edit)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MTDResult
// 0x0020
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumChannels;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
	unsigned char                                      bInterpolateSkippedFrames : 1;                            // 0x0002(0x0001)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bShouldUseMinLod : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bSkipUpdate : 1;                                          // 0x0002(0x0001)
	unsigned char                                      bSkipEvaluation : 1;                                      // 0x0002(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickedPoseOffestTime;                                     // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxEvalRateForInterpolation;                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (ZeroConstructor)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0030(0x0050)
	int                                                SkippedUpdateFrames;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkippedEvalFrames;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x0038
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0048
struct FMeshBuildSettings
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBuildShadowCasterOnlyIndexBuffer : 1;                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseBackwardsCompatibleF16TruncUVs : 1;                   // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;                   // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSupportFaceRemap : 1;                                    // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuildScale;                                               // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector                                     BuildScale3D;                                             // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLumenMeshCards;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MeshNaniteSettings
// 0x001C
struct FMeshNaniteSettings
{
	unsigned char                                      bEnabled : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PositionPrecision;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TargetMinimumResidencyInKB;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KeepPercentTriangles;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrimRelativeError;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallbackPercentTriangles;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallbackRelativeError;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0108 (0x0118 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0018(0x0018)
	struct FHitResult                                  HitInfo;                                                  // 0x0030(0x00E8) (IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0040 (0x0050 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0010(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0038
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0040
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0008(0x0038) (BlueprintVisible)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0090
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0078
struct FPredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithCollision;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithChannel;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SimFrequency;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x0038
struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Time;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x0130
struct FPredictProjectilePathResult
{
	TArray<struct FPredictProjectilePathPointData>     PathData;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FPredictProjectilePathPointData             LastTraceDestination;                                     // 0x0010(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FHitResult                                  HitResult;                                                // 0x0048(0x00E8) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0038
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0028
struct FClusterNode_DEPRECATED
{
	struct FVector3f                                   BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClusterNode
// 0x0040
struct FClusterNode
{
	struct FVector3f                                   BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   MinInstanceScale;                                         // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   MaxInstanceScale;                                         // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HLODISMComponentDesc
// 0x0020
struct FHLODISMComponentDesc
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Instances;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.HLODSubActorDesc
// 0x0001
struct FHLODSubActorDesc
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.HLODSubActor
// 0x0001
struct FHLODSubActor
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.InputClampState
// 0x0008
struct FInputClampState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// 0x0070
struct FInstancedStaticMeshLightMapInstanceData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (IsPlainOldData)
	TArray<struct FGuid>                               MapBuildDataIds;                                          // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// 0x00D8 (0x0190 - 0x00B8)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FInstancedStaticMeshLightMapInstanceData    CachedStaticLighting;                                     // 0x00C0(0x0070)
	TArray<struct FInstancedStaticMeshInstanceData>    PerInstanceSMData;                                        // 0x0130(0x0010) (ZeroConstructor)
	TArray<float>                                      PerInstanceSMCustomData;                                  // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0150(0x0020) MISSED OFFSET
	int                                                InstancingRandomSeed;                                     // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<struct FInstancedStaticMeshRandomSeed>      AdditionalRandomSeeds;                                    // 0x0178(0x0010) (ZeroConstructor)
	bool                                               bHasPerInstanceHitProxies;                                // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0080 - 0x0068)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0048
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x0018) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x0018) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class APawn*                                       PawnInst;                                                 // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ISMComponentInstance
// 0x000C
struct FISMComponentInstance
{
	int                                                ClientIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InstanceSubIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ISMClientInstance
// 0x0010
struct FISMClientInstance
{
	TArray<int>                                        ComponentIndices;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ISMClientData
// 0x0010
struct FISMClientData
{
	TArray<struct FISMClientInstance>                  Instances;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ISMComponentData
// 0x0001
struct FISMComponentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ISMComponentDescriptor
// 0x0001
struct FISMComponentDescriptor
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ISMClientHandle
// 0x0014
struct FISMClientHandle
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ISMClientInstanceManagerData
// 0x0010
struct FISMClientInstanceManagerData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0008
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LatentActionManager
// 0x0060
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0048
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0058 - 0x0048)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttached;                                                // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0144
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                               // 0x0008(0x0094) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                // 0x00A4(0x0094) (Edit)
	bool                                               bBakeFoliageToLandscape;                                  // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x0139(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x013A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x013B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x013C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x013D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x013E(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x013F(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x0140(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0141(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NewLevelInstanceParams
// 0x0030
struct FNewLevelInstanceParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      PivotActor;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      TemplateWorld;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bPromptForSave;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExternalActors;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceExternalActors;                                     // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHideCreationType;                                        // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// 0x0088 (0x0140 - 0x00B8)
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00C0(0x0060) (IsPlainOldData)
	struct FGuid                                       LightGuid;                                                // 0x0120(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                PreviewShadowMapChannel;                                  // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0134(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0050
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0038
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              PointSize;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                            // 0x0018(0x0010) (ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_1;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParameterGroupData
// 0x0018
struct FParameterGroupData
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                GroupSortPriority;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialFunctionInterface*                  Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialCachedParameterEditorInfo
// 0x0030
struct FMaterialCachedParameterEditorInfo
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       Group;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SortPriority;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGuid;                                           // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// 0x0050
struct FMaterialCachedParameterEntry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: ParameterInfoSet
};

// ScriptStruct Engine.MaterialCachedParameters
// 0x0270
struct FMaterialCachedParameters
{
	struct FMaterialCachedParameterEntry               RuntimeEntries[0x6];                                      // 0x0000(0x0050)
	TArray<int>                                        ScalarPrimitiveDataIndexValues;                           // 0x01E0(0x0010) (ZeroConstructor)
	TArray<int>                                        VectorPrimitiveDataIndexValues;                           // 0x01F0(0x0010) (ZeroConstructor)
	TArray<float>                                      ScalarValues;                                             // 0x0200(0x0010) (ZeroConstructor)
	TArray<struct FLinearColor>                        VectorValues;                                             // 0x0210(0x0010) (ZeroConstructor)
	TArray<struct FVector4d>                           DoubleVectorValues;                                       // 0x0220(0x0010) (ZeroConstructor)
	TArray<class UTexture*>                            TextureValues;                                            // 0x0230(0x0010) (ZeroConstructor)
	TArray<class UFont*>                               FontValues;                                               // 0x0240(0x0010) (ZeroConstructor)
	TArray<int>                                        FontPageValues;                                           // 0x0250(0x0010) (ZeroConstructor)
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextureValues;                              // 0x0260(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MaterialCachedExpressionData
// 0x02F8
struct FMaterialCachedExpressionData
{
	struct FMaterialCachedParameters                   Parameters;                                               // 0x0000(0x0270)
	TArray<class UObject*>                             ReferencedTextures;                                       // 0x0270(0x0010) (ZeroConstructor)
	TArray<struct FMaterialFunctionInfo>               FunctionInfos;                                            // 0x0280(0x0010) (ZeroConstructor)
	TArray<struct FMaterialParameterCollectionInfo>    ParameterCollectionInfos;                                 // 0x0290(0x0010) (ZeroConstructor)
	struct FMaterialLayersFunctions                    MaterialLayers;                                           // 0x02A0(0x0020)
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x02C0(0x0010) (ZeroConstructor)
	TArray<struct FName>                               DynamicParameterNames;                                    // 0x02D0(0x0010) (ZeroConstructor)
	TArray<bool>                                       QualityLevelsUsed;                                        // 0x02E0(0x0010) (ZeroConstructor)
	unsigned char                                      bHasMaterialLayers : 1;                                   // 0x02F0(0x0001)
	unsigned char                                      bHasRuntimeVirtualTextureOutput : 1;                      // 0x02F0(0x0001)
	unsigned char                                      bHasSceneColor : 1;                                       // 0x02F0(0x0001)
	unsigned char                                      bHasPerInstanceCustomData : 1;                            // 0x02F0(0x0001)
	unsigned char                                      bHasPerInstanceRandom : 1;                                // 0x02F0(0x0001)
	unsigned char                                      bHasVertexInterpolator : 1;                               // 0x02F0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	uint32_t                                           MaterialAttributesPropertyConnectedBitmask;               // 0x02F4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialInstanceCachedData
// 0x0010
struct FMaterialInstanceCachedData
{
	TArray<int>                                        ParentLayerIndexRemap;                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0030
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0020
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0058
struct FScalarParameterAtlasInstanceData
{
	bool                                               bIsUsedAsAtlasPosition;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: Curve
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: Atlas
};

// ScriptStruct Engine.ParameterChannelNames
// 0x0060
struct FParameterChannelNames
{
	struct FText                                       R;                                                        // 0x0000(0x0018) (Edit)
	struct FText                                       G;                                                        // 0x0018(0x0018) (Edit)
	struct FText                                       B;                                                        // 0x0030(0x0018) (Edit)
	struct FText                                       A;                                                        // 0x0048(0x0018) (Edit)
};

// ScriptStruct Engine.StaticComponentMaskValue
// 0x0004
struct FStaticComponentMaskValue
{
	bool                                               R;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               G;                                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               A;                                                        // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0024
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentVertices;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PixelError;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseLODModel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateUniqueLightmapUVs : 1;                           // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bKeepSymmetry : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bVisibilityAided : 1;                                     // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCullOccluded : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) MISSED OFFSET
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0018
struct FMeshInstancingSettings
{
	class UClass*                                      ActorClassToUse;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	int                                                InstanceReplacementThreshold;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipMeshesWithVertexColors;                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHLODVolumes;                                          // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class UClass*                                      ISMComponentToUse;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshApproximationSettings
// 0x0118
struct FMeshApproximationSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              ApproximationAccuracy;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClampVoxelDimension;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttemptAutoThickening;                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              TargetMinThicknessMultiplier;                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTinyParts;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              TinyPartSizeMultiplier;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              WindingThreshold;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFillGaps;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              GapDistance;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x002C(0x0001) MISSED OFFSET
	bool                                               bOccludeFromBottom;                                       // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                TargetTriCount;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrianglesPerM;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GeometricDeviation;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	float                                              GroundClippingZHeight;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEstimateHardNormals;                                     // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              HardNormalAngle;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int                                                InitialPatchCount;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurvatureAlignment;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MergingThreshold;                                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleDeviation;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateNaniteEnabledMesh;                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              NaniteProxyTrianglePercent;                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportRayTracing;                                       // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDistanceField;                                      // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	int                                                MultiSamplingAA;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RenderCaptureResolution;                                  // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x0074(0x0094) (Edit, BlueprintVisible)
	float                                              CaptureFieldOfView;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearPlaneDist;                                            // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRenderLODMeshes;                                      // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSimplifyPrePass;                                   // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableParallelBaking;                                    // 0x0112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintDebugMessages;                                      // 0x0113(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEmitFullDebugMesh;                                       // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MirrorTableRow
// 0x0018 (0x0020 - 0x0008)
struct FMirrorTableRow : public FTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MirroredName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMirrorRowType>                        MirrorEntryType;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TrajectorySample
// 0x0050
struct FTrajectorySample
{
	float                                              AccumulatedSeconds;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedDistance;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalLinearVelocity;                                      // 0x0020(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalLinearAcceleration;                                  // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TrajectorySampleRange
// 0x0018
struct FTrajectorySampleRange
{
	TArray<struct FTrajectorySample>                   Samples;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SampleRate;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0078 - 0x0068)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.NavDataConfig
// 0x0058 (0x0088 - 0x0030)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FVector                                     DefaultQueryExtent;                                       // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: NavDataClass
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0034
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLossMaxSize;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLossMinSize;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktOrder;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktDup;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLag;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagVariance;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagMin;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagMax;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLagMin;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLagMax;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLoss;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktJitter;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FXSystemSpawnParameters
// 0x0078
struct FFXSystemSpawnParameters
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.FreezablePerPlatformInt
// 0x0004
struct FFreezablePerPlatformInt
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0058
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	bool                                               bHasVoiceHandshakeCompleted;                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0038
struct FPreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: AttachedObject
	class UObject*                                     Object;                                                   // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       AttachedTo;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	struct FText                                       Description;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// 0x0078 (0x0130 - 0x00B8)
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentTransform;                                       // 0x00C0(0x0060) (IsPlainOldData)
	int                                                VisibilityId;                                             // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         LODParent;                                                // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.QuartzPulseOverrideStep
// 0x0008
struct FQuartzPulseOverrideStep
{
	int                                                NumberOfPulses;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.QuartzTimeSignature
// 0x0018
struct FQuartzTimeSignature
{
	int                                                NumBeats;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FQuartzPulseOverrideStep>            OptionalPulseOverride;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.QuartzTransportTimeStamp
// 0x0010
struct FQuartzTransportTimeStamp
{
	int                                                Bars;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Beat;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeatFraction;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.QuartzQuantizationBoundary
// 0x0020
struct FQuartzQuantizationBoundary
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Multiplier;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0008(0x0001) MISSED OFFSET
	bool                                               bFireOnClockStart;                                        // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCancelCommandIfClockIsNotRunning;                        // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetClockOnQueued;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResumeClockOnQueued;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x000D(0x0013) MISSED OFFSET
};

// ScriptStruct Engine.QuartzClockSettings
// 0x0020
struct FQuartzClockSettings
{
	struct FQuartzTimeSignature                        TimeSignature;                                            // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               bIgnoreLevelChange;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FLevelNameAndTime
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           LevelChangeTimeInMS;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CompressedRichCurve
// 0x0018
struct FCompressedRichCurve
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0020 (0x0100 - 0x00E0)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                                    // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0060 (0x0140 - 0x00E0)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LocationActor;                                            // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x0120(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0040 (0x0120 - 0x00E0)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00F0(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0060 (0x0140 - 0x00E0)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialTargetLocation;                                    // 0x00F0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0108(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0050 (0x0130 - 0x00E0)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTimeout;                                          // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0110(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RPCDoSState
// 0x0048
struct FRPCDoSState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               bLogEscalate;                                             // 0x0008(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSendEscalateAnalytics;                                   // 0x0009(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bKickPlayer;                                              // 0x000A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTrackRecentRPCs;                                         // 0x000B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            EscalateQuotaRPCsPerFrame;                                // 0x000C(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            EscalateTimeQuotaMSPerFrame;                              // 0x000E(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            EscalateQuotaRPCsPerPeriod;                               // 0x0010(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            EscalateTimeQuotaMSPerPeriod;                             // 0x0012(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int8_t                                             EscalateQuotaTimePeriod;                                  // 0x0014(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int8_t                                             EscalationCountTolerance;                                 // 0x0015(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            EscalationTimeToleranceMS;                                // 0x0016(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            RPCRepeatLimitPerPeriod;                                  // 0x0018(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            RPCRepeatLimitMSPerPeriod;                                // 0x001A(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int8_t                                             RPCRepeatLimitTimePeriod;                                 // 0x001C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001D(0x0001) MISSED OFFSET
	int16_t                                            CooloffTime;                                              // 0x001E(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	int16_t                                            AutoEscalateTime;                                         // 0x0020(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x26];                                      // 0x0022(0x0026) MISSED OFFSET
};

// ScriptStruct Engine.RPCDoSStateConfig
// 0x0030 (0x0078 - 0x0048)
struct FRPCDoSStateConfig : public FRPCDoSState
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x00A0
struct FColorGradePerRangeSettings
{
	struct FVector4                                    Saturation;                                               // 0x0000(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Contrast;                                                 // 0x0020(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Gamma;                                                    // 0x0040(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Gain;                                                     // 0x0060(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Offset;                                                   // 0x0080(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorGradingSettings
// 0x0290
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings                 Global;                                                   // 0x0000(0x00A0) (Edit, BlueprintVisible)
	struct FColorGradePerRangeSettings                 Shadows;                                                  // 0x00A0(0x00A0) (Edit, BlueprintVisible)
	struct FColorGradePerRangeSettings                 Midtones;                                                 // 0x0140(0x00A0) (Edit, BlueprintVisible)
	struct FColorGradePerRangeSettings                 Highlights;                                               // 0x01E0(0x00A0) (Edit, BlueprintVisible)
	float                                              ShadowsMax;                                               // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighlightsMin;                                            // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighlightsMax;                                            // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x0014
struct FFilmStockSettings
{
	float                                              Slope;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Toe;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shoulder;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlackClip;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteClip;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x0084
struct FGaussianSumBloomSettings
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeScale;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter1Size;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter2Size;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter3Size;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter4Size;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter5Size;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter6Size;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter1Tint;                                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter2Tint;                                              // 0x0034(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter3Tint;                                              // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter4Tint;                                              // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter5Tint;                                              // 0x0064(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter6Tint;                                              // 0x0074(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0030
struct FConvolutionBloomSettings
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScatterDispersion;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CenterUV;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMin;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMax;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMult;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BufferScale;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LensBloomSettings
// 0x00C0
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings                   GaussianSum;                                              // 0x0000(0x0084) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FConvolutionBloomSettings                   Convolution;                                              // 0x0088(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<EBloomMethod>                          Method;                                                   // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0020
struct FLensImperfectionSettings
{
	class UTexture*                                    DirtMask;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirtMaskIntensity;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirtMaskTint;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x00E8
struct FLensSettings
{
	struct FLensBloomSettings                          Bloom;                                                    // 0x0000(0x00C0) (Edit, BlueprintVisible)
	struct FLensImperfectionSettings                   Imperfections;                                            // 0x00C0(0x0020) (Edit, BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CameraExposureSettings
// 0x0040
struct FCameraExposureSettings
{
	TEnumAsByte<EAutoExposureMethod>                   Method;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LowPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighPercent;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBrightness;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrightness;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedUp;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedDown;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BiasCurve;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    MeterMask;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CalibrationConstant;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ApplyPhysicalCameraExposure : 1;                          // 0x003C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
// 0x0050
struct FSceneViewExtensionIsActiveFunctor
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.SimpleCurveKey
// 0x0008
struct FSimpleCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SimpleCurve
// 0x0018 (0x0088 - 0x0070)
struct FSimpleCurve : public FRealCurve
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FSimpleCurveKey>                     Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0058
struct FSkeletalMeshClothBuildParams
{
	TWeakObjectPtr<class UClothingAssetBase>           TargetAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetLod;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemapParameters;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                LODIndex;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SourceSection;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveFromMesh;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: PhysicsAsset
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizontalResistance;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BendResistance;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShearResistance;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherStiffness;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionSquashScale;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberCompression;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberExpansion;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberResistance;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0070
struct FClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ApexFileName;                                             // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties_Legacy              PhysicsProperties;                                        // 0x001C(0x0050)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshMergeSectionMapping
// 0x0010
struct FSkelMeshMergeSectionMapping
{
	TArray<int>                                        SectionIDs;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SkelMeshMergeMeshUVTransforms
// 0x0010
struct FSkelMeshMergeMeshUVTransforms
{
	TArray<struct FTransform>                          UVTransforms;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SkelMeshMergeUVTransformMapping
// 0x0010
struct FSkelMeshMergeUVTransformMapping
{
	TArray<struct FSkelMeshMergeMeshUVTransforms>      UVTransformsPerMesh;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.VertexOffsetUsage
// 0x0004
struct FVertexOffsetUsage
{
	int                                                Usage;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkinWeightProfileManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkinWeightProfileManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// 0x00B8 (0x0170 - 0x00B8)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
	struct FGuid                                       LightGuid;                                                // 0x00B8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              AverageBrightness;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00CC(0x00A4) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0018
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameMapping
// 0x0070
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundSubmixSpectralAnalysisBandSettings
// 0x0010
struct FSoundSubmixSpectralAnalysisBandSettings
{
	float                                              BandFrequency;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttackTimeMsec;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReleaseTimeMsec;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QFactor;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0018
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SplineInstanceData
// 0x00E8 (0x01A0 - 0x00B8)
struct FSplineInstanceData : public FSceneComponentInstanceData
{
	bool                                               bSplineHasBeenEdited;                                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FSplineCurves                               SplineCurves;                                             // 0x00C0(0x0070)
	struct FSplineCurves                               SplineCurvesPreUCS;                                       // 0x0130(0x0070)
};

// ScriptStruct Engine.PaintedVertex
// 0x0040
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector4                                    Normal;                                                   // 0x0020(0x0020) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// 0x0028
struct FStaticMeshVertexColorLODData
{
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              VertexBufferColors;                                       // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           LODIndex;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// 0x0040 (0x0170 - 0x0130)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStaticMeshVertexColorLODData>       VertexColorLODs;                                          // 0x0138(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               CachedStaticLighting;                                     // 0x0148(0x0010) (ZeroConstructor)
	TArray<struct FStreamingTextureBuildInfo>          StreamingTextureData;                                     // 0x0158(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshInstanceData
// 0x0060 (0x01D0 - 0x0170)
struct FSplineMeshInstanceData : public FStaticMeshComponentInstanceData
{
	struct FVector                                     StartPos;                                                 // 0x0168(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x0180(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x0198(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x01B0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0010
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastFarShadow;                                           // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVisibleInRayTracing;                                     // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceOpaque;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                GenerateUpToLodIndex;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	TMap<uint32_t, struct FMeshSectionInfo>            Map;                                                      // 0x0000(0x0050)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0050
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                         // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0088
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x0000(0x0048) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0048(0x0024) (Edit)
	float                                              LODDistance;                                              // 0x006C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     SourceImportFilename;                                     // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0024 (0x0048 - 0x0024)
struct FStaticMaterialLayersParameter : public FStaticParameterBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FMaterialLayersFunctions                    Value;                                                    // 0x0028(0x0020)
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0088 - 0x0068)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringCurveKey>                     Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.TextureSourceBlock
// 0x0018
struct FTextureSourceBlock
{
	int                                                BlockX;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                BlockY;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumSlices;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumMips;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.TextureSource
// 0x0068
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.TexturePlatformData
// 0x0030
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.TextureFormatSettings
// 0x0002
struct FTextureFormatSettings
{
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CompressionNoAlpha : 1;                                   // 0x0001(0x0001)
	unsigned char                                      CompressionForceAlpha : 1;                                // 0x0001(0x0001)
	unsigned char                                      CompressionNone : 1;                                      // 0x0001(0x0001)
	unsigned char                                      CompressionYCoCg : 1;                                     // 0x0001(0x0001)
	unsigned char                                      SRGB : 1;                                                 // 0x0001(0x0001)
};

// ScriptStruct Engine.TextureSourceColorSettings
// 0x0050
struct FTextureSourceColorSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   RedChromaticityCoordinate;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GreenChromaticityCoordinate;                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlueChromaticityCoordinate;                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WhiteChromaticityCoordinate;                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// 0x0050
struct FStreamingRenderAssetPrimitiveInfo
{
	class UStreamableRenderAsset*                      RenderAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x0038) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PackedRelativeBox;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowInvalidTexelFactorWhenUnregistered : 1;             // 0x0048(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTTrackId
// 0x0008
struct FTTTrackId
{
	int                                                TrackType;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0030
struct FTimeStretchCurveInstance
{
	bool                                               bHasValidData;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct Engine.TypedElementDeletionOptions
// 0x0003
struct FTypedElementDeletionOptions
{
	bool                                               bVerifyDeletionCanHappen;                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWarnAboutReferences;                                     // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWarnAboutSoftReferences;                                 // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0038
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CamUpdated;                                               // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LatePhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FLatePhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActorContainerID
// 0x0008
struct FActorContainerID
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WorldPartitionPerWorldSettings
// 0x0001
struct FWorldPartitionPerWorldSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.WorldPartitionRuntimeCellObjectMapping
// 0x0001
struct FWorldPartitionRuntimeCellObjectMapping
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.WorldPartitionRuntimeSpatialHashGridPreviewer
// 0x0001
struct FWorldPartitionRuntimeSpatialHashGridPreviewer
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.WorldPartitionStreamingQuerySource
// 0x0080
struct FWorldPartitionStreamingQuerySource
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGridLoadingRange;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<struct FName>                               DataLayers;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDataLayersOnly;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpatialQuery;                                            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4E];                                      // 0x0032(0x004E) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x004C
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSkyLightingBounces;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVolumeLightingMethod>                 VolumeLightingMethod;                                     // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0025(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              VolumetricLightmapDetailCellSize;                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightmapMaximumBrickMemoryMb;                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightmapSphericalHarmonicSmoothing;             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeLightSamplePlacementScale;                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
