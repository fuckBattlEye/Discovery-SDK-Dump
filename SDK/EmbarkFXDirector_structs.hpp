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

// Enum EmbarkFXDirector.EEmbarkFXSignificance
enum class EEmbarkFXSignificance : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Critical                       = 4,
	EEmbarkFXSignificance_MAX      = 5
};


// Enum EmbarkFXDirector.EEmbarkFXAutoPosition
enum class EEmbarkFXAutoPosition : uint8_t
{
	None                           = 0,
	Snap                           = 1,
	Interpolate                    = 2,
	EEmbarkFXAutoPosition_MAX      = 3
};


// Enum EmbarkFXDirector.EEmbarkFXAutoPositionFunc
enum class EEmbarkFXAutoPositionFunc : uint8_t
{
	Point                          = 0,
	Average                        = 1,
	Nearest                        = 2,
	NearestOnLine                  = 3,
	NearestOnLineTowardsListenerOrDiscard = 4,
	EEmbarkFXAutoPositionFunc_MAX  = 5
};


// Enum EmbarkFXDirector.EEmbarkFXForegroundFlags
enum class EEmbarkFXForegroundFlags : uint8_t
{
	None                           = 0,
	FieldOfView                    = 1,
	Stencil                        = 2,
	EEmbarkFXForegroundFlags_MAX   = 3
};


// Enum EmbarkFXDirector.EEmbarkFXBinding
enum class EEmbarkFXBinding : uint8_t
{
	None                           = 0,
	Particle                       = 1,
	Audio                          = 2,
	All                            = 3,
	EEmbarkFXBinding_MAX           = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkFXDirector.EmbarkFXHandle
// 0x0008
struct FEmbarkFXHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXDirectorContext
// 0x0020
struct FEmbarkFXDirectorContext
{
	class UEmbarkFXDirector*                           FXDirector;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXCue
// 0x0240
struct FEmbarkFXCue
{
	struct FEmbarkFXHandle                             Handle;                                                   // 0x0000(0x0008) (Edit)
	class UObject*                                     TickPrerequisite;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0038(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0050(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeSeconds;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelevantTimeSeconds;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0070(0x0004) MISSED OFFSET
	float                                              SignificanceDecayDistance;                                // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	bool                                               bReactivate;                                              // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1BF];                                     // 0x0081(0x01BF) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXAttachmentParams
// 0x0038
struct FEmbarkFXAttachmentParams
{
	class USceneComponent*                             AttachToComponent;                                        // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachToName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocation;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0011(0x0027) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXParticleParams
// 0x0010
struct FEmbarkFXParticleParams
{
	class UNiagaraSystem*                              NiagaraSystem;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Cost;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int8_t                                             TranslucentSortPriority;                                  // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreCullCheck;                                            // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttach;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickLast;                                           // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXAudioParams
// 0x0048
struct FEmbarkFXAudioParams
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocationOffset;                                      // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInSeconds;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenOwnerDestroyed;                                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttach;                                               // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSpatialization;                                     // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUISound;                                               // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXDecalParams
// 0x0050
struct FEmbarkFXDecalParams
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeTimeSeconds;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomScaleFactor;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DecalRotation;                                            // 0x0030(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkFXDirector.EmbarkFXCallbackParams
// 0x0020
struct FEmbarkFXCallbackParams
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            UserData;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAsyncTask;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
