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

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};


// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};


// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};


// Enum Niagara.ENiagaraBakerViewMode
enum class ENiagaraBakerViewMode : uint8_t
{
	Perspective                    = 0,
	OrthoFront                     = 1,
	OrthoBack                      = 2,
	OrthoLeft                      = 3,
	OrthoRight                     = 4,
	OrthoTop                       = 5,
	OrthoBottom                    = 6,
	Num                            = 7,
	ENiagaraBakerViewMode_MAX      = 8
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4
};


// Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
	Float                          = 0,
	HalfFloat                      = 1,
	UnsignedNormalizedByte         = 2,
	Max                            = 3
};


// Enum Niagara.ENiagaraGpuSyncMode
enum class ENiagaraGpuSyncMode : uint8_t
{
	None                           = 0,
	SyncCpuToGpu                   = 1,
	SyncGpuToCpu                   = 2,
	SyncBoth                       = 3,
	ENiagaraGpuSyncMode_MAX        = 4
};


// Enum Niagara.ENiagaraMipMapGeneration
enum class ENiagaraMipMapGeneration : uint8_t
{
	Disabled                       = 0,
	PostStage                      = 1,
	PostSimulate                   = 2,
	ENiagaraMipMapGeneration_MAX   = 3
};


// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	FailIfPreviouslyNotSet         = 3,
	ENiagaraDefaultMode_MAX        = 4
};


// Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t
{
	Precise                        = 0,
	Approximate                    = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};


// Enum Niagara.ENiagaraRendererMotionVectorSetting
enum class ENiagaraRendererMotionVectorSetting : uint8_t
{
	AutoDetect                     = 0,
	Precise                        = 1,
	Approximate                    = 2,
	Disable                        = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3
};


// Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
	Average                        = 0,
	Maximum                        = 1,
	ENiagaraStatEvaluationType_MAX = 2
};


// Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
	Percent                        = 0,
	Absolute                       = 1,
	ENiagaraStatDisplayMode_MAX    = 2
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13
};


// Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	Spawn                          = 0,
	Update                         = 1,
	Event                          = 2,
	SimulationStage                = 3,
	Default                        = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};


// Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	System                         = 0,
	Emitter                        = 1,
	Particle                       = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3
};


// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	Particles                      = 0,
	DataInterface                  = 1,
	ENiagaraIterationSource_MAX    = 2
};


// Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6
};


// Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	Particles                      = 0,
	Emitter                        = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};


// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};


// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5
};


// Enum Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8_t
{
	None                           = 0,
	PendingSpawn                   = 1,
	PendingSpawnPaused             = 2,
	Spawning                       = 3,
	Running                        = 4,
	Paused                         = 5,
	Num                            = 6,
	ENiagaraSystemInstanceState_MAX = 7
};


// Enum Niagara.ENiagaraFunctionDebugState
enum class ENiagaraFunctionDebugState : uint8_t
{
	NoDebug                        = 0,
	Basic                          = 1,
	ENiagaraFunctionDebugState_MAX = 2
};


// Enum Niagara.ENiagaraDataInterfaceEmitterBindingMode
enum class ENiagaraDataInterfaceEmitterBindingMode : uint8_t
{
	Self                           = 0,
	Other                          = 1,
	ENiagaraDataInterfaceEmitterBindingMode_MAX = 2
};


// Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	FixedSize                      = 0,
	PerParticle                    = 1,
	ENDIExport_MAX                 = 2
};


// Enum Niagara.ENDILandscape_SourceMode
enum class ENDILandscape_SourceMode : uint8_t
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDILandscape_MAX              = 3
};


// Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
	Independent                    = 0,
	MaxAxis                        = 1,
	CellSize                       = 2,
	ESetResolutionMethod_MAX       = 3
};


// Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDISkeletalMesh_MAX           = 3
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	Invalid                        = 0,
	None                           = 1,
	SkinOnTheFly                   = 2,
	PreSkin                        = 3,
	ENDISkeletalMesh_MAX           = 4
};


// Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	DefaultMeshOnly                = 3,
	ENDIStaticMesh_MAX             = 4
};


// Enum Niagara.ENiagaraDebugPlaybackMode
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	Play                           = 0,
	Loop                           = 1,
	Paused                         = 2,
	Step                           = 3,
	ENiagaraDebugPlaybackMode_MAX  = 4
};


// Enum Niagara.ENiagaraDebugHudHAlign
enum class ENiagaraDebugHudHAlign : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ENiagaraDebugHudHAlign_MAX     = 3
};


// Enum Niagara.ENiagaraDebugHudVAlign
enum class ENiagaraDebugHudVAlign : uint8_t
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	ENiagaraDebugHudVAlign_MAX     = 3
};


// Enum Niagara.ENiagaraDebugHudFont
enum class ENiagaraDebugHudFont : uint8_t
{
	Small                          = 0,
	Normal                         = 1,
	ENiagaraDebugHudFont_MAX       = 2
};


// Enum Niagara.ENiagaraDebugHudVerbosity
enum class ENiagaraDebugHudVerbosity : uint8_t
{
	None                           = 0,
	Basic                          = 1,
	Verbose                        = 2,
	ENiagaraDebugHudVerbosity_MAX  = 3
};


// Enum Niagara.ENiagaraDebugHUDOverviewMode
enum class ENiagaraDebugHUDOverviewMode : uint8_t
{
	Overview                       = 0,
	Scalability                    = 1,
	Performance                    = 2,
	GpuComputePerformance          = 3,
	ENiagaraDebugHUDOverviewMode_MAX = 4
};


// Enum Niagara.ENiagaraDebugHUDPerfGraphMode
enum class ENiagaraDebugHUDPerfGraphMode : uint8_t
{
	None                           = 0,
	GameThread                     = 1,
	RenderThread                   = 2,
	GPU                            = 3,
	ENiagaraDebugHUDPerfGraphMode_MAX = 4
};


// Enum Niagara.ENiagaraDebugHUDPerfSampleMode
enum class ENiagaraDebugHUDPerfSampleMode : uint8_t
{
	FrameTotal                     = 0,
	PerInstanceAverage             = 1,
	ENiagaraDebugHUDPerfSampleMode_MAX = 2
};


// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	ENiagaraCullReaction_MAX       = 4
};


// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};


// Enum Niagara.ENiagaraCullProxyMode
enum class ENiagaraCullProxyMode : uint8_t
{
	None                           = 0,
	Instanced_Rendered             = 1,
	ENiagaraCullProxyMode_MAX      = 2
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3
};


// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	FixedCount                     = 2,
	EParticleAllocationMode_MAX    = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4
};


// Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	Mesh                           = 0,
	Simulation                     = 1,
	World                          = 2,
	Local                          = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4
};


// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};


// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};


// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4
};


// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonShapeMode
enum class ENiagaraRibbonShapeMode : uint8_t
{
	Plane                          = 0,
	MultiPlane                     = 1,
	Tube                           = 2,
	Custom                         = 3,
	ENiagaraRibbonShapeMode_MAX    = 4
};


// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	SmoothTransition               = 0,
	Locked                         = 1,
	ENiagaraRibbonUVEdgeMode_MAX   = 2
};


// Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ScaledUniformly                = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength          = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	Invalid                        = 0,
	Unexposed                      = 1,
	Library                        = 2,
	Hidden                         = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};


// Enum Niagara.ENiagaraScriptTemplateSpecification
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	None                           = 0,
	Template                       = 1,
	Behavior                       = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3
};


// Enum Niagara.ENDISkelMesh_GpuMaxInfluences
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	AllowMax4                      = 0,
	AllowMax8                      = 1,
	Unlimited                      = 2,
	ENDISkelMesh_MAX               = 3
};


// Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	Full                           = 0,
	Limited_24_8                   = 1,
	Limited_23_9                   = 2,
	ENDISkelMesh_MAX               = 3
};


// Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	Full                           = 0,
	Half                           = 1,
	ENDISkelMesh_MAX               = 2
};


// Enum Niagara.ENiagaraDefaultRendererPixelCoverageMode
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	ENiagaraDefaultRendererPixelCoverageMode_MAX = 2
};


// Enum Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	Default                        = 0,
	HWRT                           = 1,
	GSDF                           = 2,
	None                           = 3,
	ENDICollisionQuery_MAX         = 4
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5
};


// Enum Niagara.ENiagaraRendererPixelCoverageMode
enum class ENiagaraRendererPixelCoverageMode : uint8_t
{
	Automatic                      = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	Enabled_RGBA                   = 3,
	Enabled_RGB                    = 4,
	Enabled_A                      = 5,
	ENiagaraRendererPixelCoverageMode_MAX = 6
};


// Enum Niagara.ENiagaraCompilationState
enum class ENiagaraCompilationState : uint8_t
{
	CheckDDC                       = 0,
	Precompile                     = 1,
	StartCompileJob                = 2,
	AwaitResult                    = 3,
	ProcessResult                  = 4,
	PutToDDC                       = 5,
	Finished                       = 6,
	Aborted                        = 7,
	ENiagaraCompilationState_MAX   = 8
};


// Enum Niagara.ENiagaraStructConversionType
enum class ENiagaraStructConversionType : uint8_t
{
	CopyOnly                       = 0,
	DoubleToFloat                  = 1,
	Vector2                        = 2,
	Vector3                        = 3,
	Vector4                        = 4,
	Quat                           = 5,
	ENiagaraStructConversionType_MAX = 6
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	Custom                         = 4,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 5
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6
};


// Enum Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8_t
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraCoordinateSpace_MAX    = 3
};


// Enum Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	None                           = 0,
	ScriptAsset                    = 1,
	DirectTextEntry                = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3
};


// Enum Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8_t
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	ENiagaraOrientationAxis_MAX    = 3
};


// Enum Niagara.ENiagaraBoolDisplayMode
enum class ENiagaraBoolDisplayMode : uint8_t
{
	DisplayAlways                  = 0,
	DisplayIfTrue                  = 1,
	DisplayIfFalse                 = 2,
	ENiagaraBoolDisplayMode_MAX    = 3
};


// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
// 0x0004
struct FNiagaraTypeDefinitionHandle
{
	int                                                RegisteredTypeIndex;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableBase
// 0x000C
struct FNiagaraVariableBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinitionHandle                TypeDefHandle;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0014 (0x0020 - 0x000C)
struct FNiagaraVariable : public FNiagaraVariableBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              VarData;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraBakerTextureSource
// 0x0008
struct FNiagaraBakerTextureSource
{
	struct FName                                       SourceName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraBakerTextureSettings
// 0x0028
struct FNiagaraBakerTextureSettings
{
	struct FNiagaraBakerTextureSource                  SourceBinding;                                            // 0x0000(0x0008) (Edit)
	unsigned char                                      bUseFrameSize : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FIntPoint                                   FrameSize;                                                // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   TextureSize;                                              // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UTexture2D*                                  GeneratedTexture;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraStructConversionStep
// 0x0014
struct FNiagaraStructConversionStep
{
	int                                                SourceBytes;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SourceOffset;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimulationBytes;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimulationOffset;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraLwcStructConverter
// 0x0010
struct FNiagaraLwcStructConverter
{
	TArray<struct FNiagaraStructConversionStep>        ConversionSteps;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// 0x0014 (0x0020 - 0x000C)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
	int                                                Offset;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraLwcStructConverter                  StructConverter;                                          // 0x0010(0x0010)
};

// ScriptStruct Niagara.NiagaraPositionSource
// 0x0020
struct FNiagaraPositionSource
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterStore
// 0x0088
struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FNiagaraVariableWithOffset>          SortedParameterOffsets;                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ParameterData;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             UObjects;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraPositionSource>              OriginalPositionData;                                     // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// 0x0050 (0x00D8 - 0x0088)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                                   // 0x0088(0x0050)
};

// ScriptStruct Niagara.NCPoolElement
// 0x0010
struct FNCPoolElement
{
	class UNiagaraComponent*                           Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NCPool
// 0x0010
struct FNCPool
{
	TArray<struct FNCPoolElement>                      FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// 0x0010
struct FNiagaraDeviceProfileStateEntry
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           QualityLevelMask;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SetQualityLevelMask;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
// 0x0028
struct FNiagaraPlatformSetCVarCondition
{
	struct FName                                       CVarName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MinInt;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxInt;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinFloat;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFloat;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMinInt : 1;                                           // 0x001C(0x0001) (Edit)
	unsigned char                                      bUseMaxInt : 1;                                           // 0x001C(0x0001) (Edit)
	unsigned char                                      bUseMinFloat : 1;                                         // 0x001C(0x0001) (Edit)
	unsigned char                                      bUseMaxFloat : 1;                                         // 0x001C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xB];                                       // 0x001D(0x000B) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraPlatformSet
// 0x0030
struct FNiagaraPlatformSet
{
	int                                                QualityLevelMask;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FNiagaraDeviceProfileStateEntry>     DeviceProfileStates;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagaraPlatformSetCVarCondition>    CVarConditions;                                           // 0x0018(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// 0x0058
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase                        ParamMapVariable;                                         // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraVariable                            DataSetVariable;                                          // 0x0010(0x0020)
	struct FNiagaraVariable                            RootVariable;                                             // 0x0030(0x0020)
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                        // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	unsigned char                                      bBindingExistsOnSource : 1;                               // 0x0054(0x0001)
	unsigned char                                      bIsCachedParticleValue : 1;                               // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0010
struct FNiagaraTypeDefinition
{
	class UObject*                                     ClassStructOrEnum;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           UnderlyingType;                                           // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraComponentPropertyBinding
// 0x00E8
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding            AttributeBinding;                                         // 0x0000(0x0058)
	struct FName                                       PropertyName;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      PropertyType;                                             // 0x0060(0x0010)
	struct FName                                       MetadataSetterName;                                       // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                          // 0x0078(0x0050)
	struct FNiagaraVariable                            WritableValue;                                            // 0x00C8(0x0020) (Transient)
};

// ScriptStruct Niagara.NiagaraCulledComponentInfo
// 0x0008
struct FNiagaraCulledComponentInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// 0x0020
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0000(0x0020) (Edit)
};

// ScriptStruct Niagara.NiagaraPosition
// 0x0000 (0x000C - 0x000C)
struct FNiagaraPosition : public FVector3f
{

};

// ScriptStruct Niagara.NiagaraID
// 0x0008
struct FNiagaraID
{
	int                                                Index;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AcquireTag;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
// 0x000C
struct FNiagaraDataInterfaceEmitterBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       EmitterName;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.BasicParticleData
// 0x0038
struct FBasicParticleData
{
	struct FVector                                     Position;                                                 // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Velocity;                                                 // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0010
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
// 0x0010
struct FNiagaraUObjectPropertyReaderRemap
{
	struct FName                                       GraphName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RemapName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDebugHUDVariable
// 0x0018
struct FNiagaraDebugHUDVariable
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDebugHudTextOptions
// 0x0018
struct FNiagaraDebugHudTextOptions
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   ScreenOffset;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
// 0x0220
struct FNiagaraDebugHUDSettingsData
{
	bool                                               bHudEnabled;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValidateSystemSimulationDataBuffers;                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValidateParticleDataBuffers;                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverviewEnabled;                                         // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FVector2D                                   OverviewLocation;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActorFilter;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bComponentFilterEnabled;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     ComponentFilter;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSystemFilterEnabled;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     SystemFilter;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEmitterFilterEnabled;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     EmitterFilter;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bActorFilterEnabled;                                      // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x0079(0x000B) MISSED OFFSET
	bool                                               bSystemShowBounds;                                        // 0x0084(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSystemShowActiveOnlyInWorld;                             // 0x0085(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowSystemVariables;                                     // 0x0086(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0087(0x0001) MISSED OFFSET
	TArray<struct FNiagaraDebugHUDVariable>            SystemVariables;                                          // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	struct FNiagaraDebugHudTextOptions                 SystemTextOptions;                                        // 0x0098(0x0018) (Edit, Config)
	bool                                               bShowParticleVariables;                                   // 0x00B0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableGpuParticleReadback;                               // 0x00B1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowParticleIndex;                                       // 0x00B2(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x00B3(0x0005) MISSED OFFSET
	TArray<struct FNiagaraDebugHUDVariable>            ParticlesVariables;                                       // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FNiagaraDebugHudTextOptions                 ParticleTextOptions;                                      // 0x00C8(0x0018) (Edit, Config)
	bool                                               bShowParticlesVariablesWithSystem;                        // 0x00E0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowParticleVariablesVertical;                           // 0x00E1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseMaxParticlesToDisplay;                                // 0x00E2(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseParticleDisplayClip;                                  // 0x00E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FVector2D                                   ParticleDisplayClip;                                      // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseParticleDisplayCenterRadius;                          // 0x00F8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              ParticleDisplayCenterRadius;                              // 0x00FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxParticlesToDisplay;                                    // 0x0100(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PerfReportFrames;                                         // 0x0104(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	int                                                PerfHistoryFrames;                                        // 0x0110(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PerfGraphTimeRange;                                       // 0x0114(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   PerfGraphSize;                                            // 0x0118(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                PerfGraphAxisColor;                                       // 0x0128(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableSmoothing;                                         // 0x0138(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                SmoothingWidth;                                           // 0x013C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                DefaultBackgroundColor;                                   // 0x0140(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OverviewHeadingColor;                                     // 0x0150(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OverviewDetailColor;                                      // 0x0160(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OverviewDetailHighlightColor;                             // 0x0170(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InWorldErrorTextColor;                                    // 0x0180(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InWorldTextColor;                                         // 0x0190(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MessageInfoTextColor;                                     // 0x01A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MessageWarningTextColor;                                  // 0x01B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MessageErrorTextColor;                                    // 0x01C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SystemColorTableOpacity;                                  // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           SystemColorSeed;                                          // 0x01D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     SystemColorHSVMin;                                        // 0x01D8(0x0018) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     SystemColorHSVMax;                                        // 0x01F0(0x0018) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0208(0x0001) MISSED OFFSET
	bool                                               bPlaybackRateEnabled;                                     // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x020A(0x0002) MISSED OFFSET
	float                                              PlaybackRate;                                             // 0x020C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLoopTimeEnabled;                                         // 0x0210(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              LoopTime;                                                 // 0x0214(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowGlobalBudgetInfo;                                    // 0x0218(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraLinearRamp
// 0x0010
struct FNiagaraLinearRamp
{
	float                                              StartX;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartY;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndX;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndY;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraGlobalBudgetScaling
// 0x0038
struct FNiagaraGlobalBudgetScaling
{
	unsigned char                                      bCullByGlobalBudget : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bScaleMaxDistanceByGlobalBudgetUse : 1;                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bScaleMaxInstanceCountByGlobalBudgetUse : 1;              // 0x0000(0x0001) (Edit)
	unsigned char                                      bScaleSystemInstanceCountByGlobalBudgetUse : 1;           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxGlobalBudgetUsage;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraLinearRamp                          MaxDistanceScaleByGlobalBudgetUse;                        // 0x0008(0x0010) (Edit)
	struct FNiagaraLinearRamp                          MaxInstanceCountScaleByGlobalBudgetUse;                   // 0x0018(0x0010) (Edit)
	struct FNiagaraLinearRamp                          MaxSystemInstanceCountScaleByGlobalBudgetUse;             // 0x0028(0x0010) (Edit)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// 0x0088
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0000(0x0030) (Edit)
	unsigned char                                      bCullByDistance : 1;                                      // 0x0030(0x0001) (Edit)
	unsigned char                                      bCullMaxInstanceCount : 1;                                // 0x0030(0x0001) (Edit)
	unsigned char                                      bCullPerSystemMaxInstanceCount : 1;                       // 0x0030(0x0001) (Edit)
	unsigned char                                      bCullByMaxTimeWithoutRender : 1;                          // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSystemInstances;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeWithoutRender;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	int                                                MaxSystemProxies;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraGlobalBudgetScaling                 BudgetScaling;                                            // 0x004C(0x0038) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{
	TArray<struct FNiagaraSystemScalabilitySettings>   Settings;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// 0x0038
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0000(0x0030) (Edit)
	unsigned char                                      bScaleSpawnCount : 1;                                     // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              SpawnCountScale;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{
	TArray<struct FNiagaraEmitterScalabilitySettings>  Settings;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraPerfBaselineStats
// 0x0010
struct FNiagaraPerfBaselineStats
{
	float                                              PerInstanceAvg_GT;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              PerInstanceAvg_RT;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              PerInstanceMax_GT;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              PerInstanceMax_RT;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0018
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// 0x0060
struct FNiagaraTypeLayoutInfo
{
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                             // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// 0x0070
struct FNiagaraVariableLayoutInfo
{
	uint32_t                                           FloatComponentStart;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Int32ComponentStart;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HalfComponentStart;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraTypeLayoutInfo                      LayoutInfo;                                               // 0x0010(0x0060)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x000C
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// 0x0040
struct FNiagaraDataSetCompiledData
{
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariableLayoutInfo>          VariableLayouts;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FNiagaraDataSetID                           ID;                                                       // 0x0020(0x000C)
	uint32_t                                           TotalFloatComponents;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalInt32Components;                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalHalfComponents;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0050
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x0010(0x0040)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{
	float                                              Low;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Medium;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              High;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Epic;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Cine;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// 0x0008 (0x0040 - 0x0038)
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
	unsigned char                                      bOverrideSpawnCountScale : 1;                             // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// 0x0010
struct FNiagaraEmitterScalabilityOverrides
{
	TArray<struct FNiagaraEmitterScalabilityOverride>  Overrides;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0030 (0x0058 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventName;                                          // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomSpawnNumber;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	uint32_t                                           MinSpawnNumber;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
// 0x0078
struct FNiagaraMeshRendererMeshProperties
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                UserParamBinding;                                         // 0x0008(0x0020) (Edit)
	struct FVector                                     Scale;                                                    // 0x0028(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0040(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotOffset;                                              // 0x0058(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// 0x0028
struct FNiagaraMeshMaterialOverride
{
	class UMaterialInterface*                          ExplicitMat;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                UserParamBinding;                                         // 0x0008(0x0020) (Edit)
};

// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
// 0x002C
struct FNiagaraMaterialAttributeBinding
{
	struct FName                                       MaterialParameterName;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableBase                        NiagaraVariable;                                          // 0x0008(0x000C) (Edit)
	struct FNiagaraVariableBase                        ResolvedNiagaraVariable;                                  // 0x0014(0x000C)
	struct FNiagaraVariableBase                        NiagaraChildVariable;                                     // 0x0020(0x000C) (Edit)
};

// ScriptStruct Niagara.NiagaraRibbonUVSettings
// 0x0038
struct FNiagaraRibbonUVSettings
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	float                                              TilingLength;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePerParticleUOverride;                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePerParticleVRangeOverride;                         // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
// 0x0028
struct FNiagaraRibbonShapeCustomVertex
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Normal;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TextureV;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t                                           SrcOffset;                                                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DestOffset;                                               // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SrcSize;                                                  // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DestSize;                                                 // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// 0x0020 (0x00A8 - 0x0088)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int                                                ParameterSize;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PaddedParameterSize;                                      // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraScriptExecutionPaddingInfo>  PaddingInfo;                                              // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bInitialized : 1;                                         // 0x00A0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBoundParameter
// 0x0028
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0000(0x0020)
	int                                                SrcOffset;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestOffset;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// 0x0058
struct FNiagaraVMExecutableDataId
{
	struct FGuid                                       CompilerVersionID;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	struct FGuid                                       ScriptUsageTypeID;                                        // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsesRapidIterationParams : 1;                            // 0x0024(0x0001)
	unsigned char                                      bDisableDebugSwitches : 1;                                // 0x0024(0x0001)
	unsigned char                                      bInterpolatedSpawn : 1;                                   // 0x0024(0x0001)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0024(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGuid                                       BaseScriptID;                                             // 0x0028(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FNiagaraCompileHash                         BaseScriptCompileHash;                                    // 0x0038(0x0010)
	struct FGuid                                       ScriptVersionID;                                          // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableByteCode
// 0x0018
struct FNiagaraVMExecutableByteCode
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                UncompressedSize;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraCompilerTag
// 0x0030
struct FNiagaraCompilerTag
{
	struct FNiagaraVariable                            Variable;                                                 // 0x0000(0x0020)
	struct FString                                     StringValue;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	bool                                               bReadsAttributeData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// 0x0038
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0010(0x0010)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaceholder;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.VMFunctionSpecifier
// 0x0010
struct FVMFunctionSpecifier
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0038
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OwnerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       InputParamLocations;                                      // 0x0010(0x0010) (ZeroConstructor)
	int                                                NumOutputs;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FVMFunctionSpecifier>                FunctionSpecifiers;                                       // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x000C) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0010
struct FNiagaraStatScope
{
	struct FName                                       FullName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FriendlyName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// 0x0138
struct FNiagaraVMExecutableData
{
	struct FNiagaraVMExecutableByteCode                ByteCode;                                                 // 0x0000(0x0018)
	struct FNiagaraVMExecutableByteCode                OptimizedByteCode;                                        // 0x0018(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
	int                                                NumTempRegisters;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumUserPtrs;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraCompilerTag>                 CompileTags;                                              // 0x0070(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ScriptLiterals;                                           // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0090(0x0010) (ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x00A0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                        // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x00B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	TArray<struct FNiagaraDataSetID>                   ReadDataSets;                                             // 0x00D8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           WriteDataSets;                                            // 0x00E8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataInterfaceGPUParamInfo>   DIParamInfo;                                              // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	TArray<struct FSimulationStageMetaData>            SimulationStageMetaData;                                  // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      bReadsSignificanceIndex : 1;                              // 0x0130(0x0001)
	unsigned char                                      bNeedsGPUContextInit : 1;                                 // 0x0130(0x0001)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0038
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0018(0x0010)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// 0x0020
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            // 0x0000(0x0020)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// 0x0008 (0x0090 - 0x0088)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
	unsigned char                                      bOverrideDistanceSettings : 1;                            // 0x0088(0x0001) (Edit)
	unsigned char                                      bOverrideInstanceCountSettings : 1;                       // 0x0088(0x0001) (Edit)
	unsigned char                                      bOverridePerSystemInstanceCountSettings : 1;              // 0x0088(0x0001) (Edit)
	unsigned char                                      bOverrideTimeSinceRendererSettings : 1;                   // 0x0088(0x0001) (Edit)
	unsigned char                                      bOverrideGlobalBudgetScalingSettings : 1;                 // 0x0088(0x0001) (Edit)
	unsigned char                                      bOverrideCullProxySettings : 1;                           // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// 0x0010
struct FNiagaraSystemScalabilityOverrides
{
	TArray<struct FNiagaraSystemScalabilityOverride>   Overrides;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0030
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UNiagaraEmitter*                             Instance;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// 0x0008
struct FNiagaraParameterDataSetBinding
{
	int                                                ParameterOffset;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DataSetComponentOffset;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// 0x0020
struct FNiagaraParameterDataSetBindingCollection
{
	TArray<struct FNiagaraParameterDataSetBinding>     FloatOffsets;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraParameterDataSetBinding>     Int32Offsets;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// 0x0228
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore                      InstanceParamStore;                                       // 0x0000(0x0088)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x0088(0x0040)
	struct FNiagaraDataSetCompiledData                 SpawnInstanceParamsDataSetCompiledData;                   // 0x00C8(0x0040)
	struct FNiagaraDataSetCompiledData                 UpdateInstanceParamsDataSetCompiledData;                  // 0x0108(0x0040)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceGlobalBinding;                               // 0x0148(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceSystemBinding;                               // 0x0168(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceOwnerBinding;                                // 0x0188(0x0020)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                             // 0x01A8(0x0010) (ZeroConstructor)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceGlobalBinding;                              // 0x01B8(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceSystemBinding;                              // 0x01D8(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceOwnerBinding;                               // 0x01F8(0x0020)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                            // 0x0218(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0020(0x0020)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// 0x00D8 (0x0118 - 0x0040)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolChannel;                                              // 0x0040(0x00D8)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// 0x03A0 (0x03E0 - 0x0040)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     RedChannel;                                               // 0x0040(0x00E8)
	struct FMovieSceneFloatChannel                     GreenChannel;                                             // 0x0128(0x00E8)
	struct FMovieSceneFloatChannel                     BlueChannel;                                              // 0x0210(0x00E8)
	struct FMovieSceneFloatChannel                     AlphaChannel;                                             // 0x02F8(0x00E8)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// 0x00E8 (0x0128 - 0x0040)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     FloatChannel;                                             // 0x0040(0x00E8)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// 0x00D8 (0x0118 - 0x0040)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel                   IntegerChannel;                                           // 0x0040(0x00D8)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// 0x0018 (0x0028 - 0x0010)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	struct FFrameNumber                                SpawnSectionStartFrame;                                   // 0x0010(0x0004)
	struct FFrameNumber                                SpawnSectionEndFrame;                                     // 0x0014(0x0004)
	unsigned char                                      UnknownData00[0xD];                                       // 0x0018(0x000D) MISSED OFFSET
	bool                                               bAllowScalability;                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// 0x03A8 (0x03E8 - 0x0040)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     VectorChannels[0x4];                                      // 0x0040(0x00E8)
	int                                                ChannelsUsed;                                             // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0090
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FName                                       OwnerName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresContext : 1;                                     // 0x0030(0x0001)
	unsigned char                                      bRequiresExecPin : 1;                                     // 0x0030(0x0001)
	unsigned char                                      bMemberFunction : 1;                                      // 0x0030(0x0001)
	unsigned char                                      bExperimental : 1;                                        // 0x0030(0x0001)
	unsigned char                                      bSupportsCPU : 1;                                         // 0x0030(0x0001)
	unsigned char                                      bSupportsGPU : 1;                                         // 0x0030(0x0001)
	unsigned char                                      bWriteFunction : 1;                                       // 0x0030(0x0001)
	unsigned char                                      bSoftDeprecatedFunction : 1;                              // 0x0030(0x0001)
	unsigned char                                      bIsCompileTagGenerator : 1;                               // 0x0031(0x0001)
	unsigned char                                      bHidden : 1;                                              // 0x0031(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                ModuleUsageBitmask;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ContextStageIndex;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FName>                   FunctionSpecifiers;                                       // 0x0040(0x0050)
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// 0x0068
struct FNiagaraSystemUpdateContext
{
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                       // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                             // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                      // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0040
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable                            Variable;                                                 // 0x0000(0x0020)
	struct FText                                       Definition;                                               // 0x0020(0x0018)
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// 0x0008
struct FNiagaraScriptVariableBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCompileDependency
// 0x0050
struct FNiagaraCompileDependency
{
	struct FString                                     LinkerErrorMessage;                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       NodeGuid;                                                 // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinGuid;                                                  // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               StackGuids;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagaraVariableBase                        DependentVariable;                                        // 0x0040(0x000C)
	bool                                               bDependentVariableFromCustomIterationNamespace;           // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScalabilityState
// 0x0008
struct FNiagaraScalabilityState
{
	float                                              Significance;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0004(0x0002) MISSED OFFSET
	unsigned char                                      bCulled : 1;                                              // 0x0006(0x0001) (Edit, EditConst)
	unsigned char                                      bPreviousCulled : 1;                                      // 0x0006(0x0001) (Edit, EditConst)
	unsigned char                                      bCulledByDistance : 1;                                    // 0x0006(0x0001) (Edit, EditConst)
	unsigned char                                      bCulledByInstanceCount : 1;                               // 0x0006(0x0001) (Edit, EditConst)
	unsigned char                                      bCulledByVisibility : 1;                                  // 0x0006(0x0001) (Edit, EditConst)
	unsigned char                                      bCulledByGlobalBudget : 1;                                // 0x0006(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
// 0x0018
struct FNiagaraEmitterNameSettingsRef
{
	struct FName                                       SystemName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EmitterName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   BaryCoord;                                                // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
// 0x0040
struct FNiagaraDataInterfaceSplineLUT
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             Scales;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               Rotations;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              SplineLength;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SplineDistanceStep;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InvSplineDistanceStep;                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxIndex;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraOutlinerTimingData
// 0x0008
struct FNiagaraOutlinerTimingData
{
	float                                              GameThread;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RenderThread;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
// 0x0020
struct FNiagaraOutlinerEmitterInstanceData
{
	struct FString                                     EmitterName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	int                                                NumParticles;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x001C(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
// 0x0050
struct FNiagaraOutlinerSystemInstanceData
{
	struct FString                                     ComponentName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FNiagaraScalabilityState                    ScalabilityState;                                         // 0x0028(0x0008) (Edit, EditConst)
	unsigned char                                      bPendingKill : 1;                                         // 0x0030(0x0001) (Edit, EditConst)
	unsigned char                                      bUsingCullProxy : 1;                                      // 0x0030(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FNiagaraOutlinerTimingData                  AverageTime;                                              // 0x0038(0x0008) (Edit, EditConst)
	struct FNiagaraOutlinerTimingData                  MaxTime;                                                  // 0x0040(0x0008) (Edit, EditConst)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	unsigned char                                      bIsSolo : 1;                                              // 0x004C(0x0001) (Edit, EditConst)
	unsigned char                                      bRequiresDistanceFieldData : 1;                           // 0x004C(0x0001) (Edit, EditConst)
	unsigned char                                      bRequiresDepthBuffer : 1;                                 // 0x004C(0x0001) (Edit, EditConst)
	unsigned char                                      bRequiresEarlyViewData : 1;                               // 0x004C(0x0001) (Edit, EditConst)
	unsigned char                                      bRequiresViewUniformBuffer : 1;                           // 0x004C(0x0001) (Edit, EditConst)
	unsigned char                                      bRequiresRayTracingScene : 1;                             // 0x004C(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData03[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraOutlinerSystemData
// 0x0030
struct FNiagaraOutlinerSystemData
{
	TArray<struct FNiagaraOutlinerSystemInstanceData>  SystemInstances;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FNiagaraOutlinerTimingData                  AveragePerFrameTime;                                      // 0x0010(0x0008) (Edit, EditConst)
	struct FNiagaraOutlinerTimingData                  MaxPerFrameTime;                                          // 0x0018(0x0008) (Edit, EditConst)
	struct FNiagaraOutlinerTimingData                  AveragePerInstanceTime;                                   // 0x0020(0x0008) (Edit, EditConst)
	struct FNiagaraOutlinerTimingData                  MaxPerInstanceTime;                                       // 0x0028(0x0008) (Edit, EditConst)
};

// ScriptStruct Niagara.NiagaraOutlinerWorldData
// 0x0068
struct FNiagaraOutlinerWorldData
{
	TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems;                                                  // 0x0000(0x0050) (Edit, EditConst)
	bool                                               bHasBegunPlay;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      WorldType;                                                // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      NetMode;                                                  // 0x0052(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	struct FNiagaraOutlinerTimingData                  AveragePerFrameTime;                                      // 0x0054(0x0008) (Edit, EditConst)
	struct FNiagaraOutlinerTimingData                  MaxPerFrameTime;                                          // 0x005C(0x0008) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraOutlinerData
// 0x0050
struct FNiagaraOutlinerData
{
	TMap<struct FString, struct FNiagaraOutlinerWorldData> WorldData;                                                // 0x0000(0x0050) (Edit, EditConst)
};

// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
// 0x0020
struct FNiagaraDebuggerRequestConnection
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
// 0x0020
struct FNiagaraDebuggerAcceptConnection
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
// 0x0020
struct FNiagaraDebuggerConnectionClosed
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
// 0x0018
struct FNiagaraDebuggerExecuteConsoleCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bRequiresWorld;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
// 0x0050
struct FNiagaraDebuggerOutlinerUpdate
{
	struct FNiagaraOutlinerData                        OutlinerData;                                             // 0x0000(0x0050) (Edit)
};

// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
// 0x0001
struct FNiagaraRequestSimpleClientInfoMessage
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
// 0x000C
struct FNiagaraOutlinerCaptureSettings
{
	bool                                               bTriggerCapture;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           CaptureDelayFrames;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bGatherPerfData;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSimpleClientInfo
// 0x0040
struct FNiagaraSimpleClientInfo
{
	TArray<struct FString>                             Systems;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             Actors;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             Components;                                               // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             Emitters;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// 0x0018
struct FNiagaraGraphViewSettings
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Zoom;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x0050
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionNormal;                                          // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionVelocity;                                        // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.ParameterDefinitionsSubscription
// 0x0001
struct FParameterDefinitionsSubscription
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// 0x000C
struct FNiagaraPlatformSetConflictEntry
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                QualityLevelMask;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// 0x0018
struct FNiagaraPlatformSetConflictInfo
{
	int                                                SetAIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SetBIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraPlatformSetConflictEntry>    Conflicts;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScalabilityManager
// 0x00D8
struct FNiagaraScalabilityManager
{
	class UNiagaraEffectType*                          EffectType;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                        // 0x0008(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0018(0x00C0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraModuleDependency
// 0x0028
struct FNiagaraModuleDependency
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct Niagara.VersionedNiagaraScriptData
// 0x0001
struct FVersionedNiagaraScriptData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// 0x0010 (0x0098 - 0x0088)
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptHighlight
// 0x0028
struct FNiagaraScriptHighlight
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct Niagara.NiagaraStackSection
// 0x0038
struct FNiagaraStackSection
{
	struct FName                                       SectionIdentifier;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       SectionDisplayName;                                       // 0x0008(0x0018) (Edit)
	TArray<struct FText>                               Categories;                                               // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// 0x0130
struct FNiagaraEmitterCompiledData
{
	TArray<struct FName>                               SpawnAttributes;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FNiagaraVariable                            EmitterSpawnIntervalVar;                                  // 0x0010(0x0020)
	struct FNiagaraVariable                            EmitterInterpSpawnStartDTVar;                             // 0x0030(0x0020)
	struct FNiagaraVariable                            EmitterSpawnGroupVar;                                     // 0x0050(0x0020)
	struct FNiagaraVariable                            EmitterAgeVar;                                            // 0x0070(0x0020)
	struct FNiagaraVariable                            EmitterRandomSeedVar;                                     // 0x0090(0x0020)
	struct FNiagaraVariable                            EmitterInstanceSeedVar;                                   // 0x00B0(0x0020)
	struct FNiagaraVariable                            EmitterTotalSpawnedParticlesVar;                          // 0x00D0(0x0020)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x00F0(0x0040)
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// 0x0088
struct FEmitterCompiledScriptPair
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// 0x0030
struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UObject*>                             RootObjects;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraWildcard
// 0x0001
struct FNiagaraWildcard
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalf
// 0x0002
struct FNiagaraHalf
{
	uint16_t                                           Value;                                                    // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalfVector2
// 0x0004
struct FNiagaraHalfVector2
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalfVector3
// 0x0006
struct FNiagaraHalfVector3
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalfVector4
// 0x0008
struct FNiagaraHalfVector4
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           W;                                                        // 0x0006(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterMap
// 0x0001
struct FNiagaraParameterMap
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4f                                   Row0;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4f                                   Row1;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4f                                   Row2;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4f                                   Row3;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraAssetVersion
// 0x001C
struct FNiagaraAssetVersion
{
	int                                                MajorVersion;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MinorVersion;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       VersionGuid;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsVisibleInVersionSelector;                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// 0x0010
struct FNiagaraSpawnInfo
{
	int                                                Count;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpStartDt;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntervalDt;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnGroup;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraRandInfo
// 0x000C
struct FNiagaraRandInfo
{
	int                                                Seed1;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed2;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed3;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString                                     Object;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PropertyKeys;                                             // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PropertyValues;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// 0x0018
struct FNiagaraInputConditionMetadata
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             TargetValues;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEnumParameterMetaData
// 0x0028
struct FNiagaraEnumParameterMetaData
{
	struct FName                                       OverrideName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOverride;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseColorOverride;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorOverride;                                            // 0x0014(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBoolParameterMetaData
// 0x0028
struct FNiagaraBoolParameterMetaData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       OverrideNameTrue;                                         // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideNameFalse;                                        // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UTexture2D*                                  IconOverrideTrue;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOverrideFalse;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// 0x0138
struct FNiagaraVariableMetaData
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       CategoryName;                                             // 0x0018(0x0018) (Edit)
	bool                                               bAdvancedDisplay;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayInOverviewStack;                                  // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                InlineParameterSortPriority;                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideColor;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FLinearColor                                InlineParameterColorOverride;                             // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FNiagaraEnumParameterMetaData>       InlineParameterEnumOverrides;                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableBoolOverride;                                      // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FNiagaraBoolParameterMetaData               InlineParameterBoolOverride;                              // 0x0068(0x0028) (Edit)
	int                                                EditorSortPriority;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInlineEditConditionToggle;                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FNiagaraInputConditionMetadata              EditCondition;                                            // 0x0098(0x0018) (Edit)
	struct FNiagaraInputConditionMetadata              VisibleCondition;                                         // 0x00B0(0x0018) (Edit)
	TMap<struct FName, struct FString>                 PropertyMetaData;                                         // 0x00C8(0x0050) (Edit)
	struct FName                                       ParentAttribute;                                          // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VariableGuid;                                             // 0x0120(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsStaticSwitch;                                          // 0x0130(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                StaticSwitchDefaultValue;                                 // 0x0134(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariant
// 0x0028
struct FNiagaraVariant
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<unsigned char>                              Bytes;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
