#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.StopListeningForAudioDeviceDestroyed
struct UEmbarkAudioFunctionLibrary_StopListeningForAudioDeviceDestroyed_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.StopListeningForAudioDeviceCreated
struct UEmbarkAudioFunctionLibrary_StopListeningForAudioDeviceCreated_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.SetSubmixOutputVolumeForAudioDevice
struct UEmbarkAudioFunctionLibrary_SetSubmixOutputVolumeForAudioDevice_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                InSoundSubmix;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InOutputVolume;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.SetSoundMixClassOverrideForAudioDevice
struct UEmbarkAudioFunctionLibrary_SetSoundMixClassOverrideForAudioDevice_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundMix*                                   InSoundMixModifier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 InSoundClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyToChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.PushSoundMixModifierForAudioDevice
struct UEmbarkAudioFunctionLibrary_PushSoundMixModifierForAudioDevice_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundMix*                                   InSoundMixModifier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.PopSoundMixModifierForAudioDevice
struct UEmbarkAudioFunctionLibrary_PopSoundMixModifierForAudioDevice_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundMix*                                   InSoundMixModifier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.ListenForAudioDeviceDestroyed
struct UEmbarkAudioFunctionLibrary_ListenForAudioDeviceDestroyed_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFunctionName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.ListenForAudioDeviceCreated
struct UEmbarkAudioFunctionLibrary_ListenForAudioDeviceCreated_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFunctionName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.IsWorldAudioMuted
struct UEmbarkAudioFunctionLibrary_IsWorldAudioMuted_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMaxDistance
struct UEmbarkAudioFunctionLibrary_GetMaxDistance_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMaxChannelsForAudioDvice
struct UEmbarkAudioFunctionLibrary_GetMaxChannelsForAudioDvice_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetMappedRangeClampedCurve
struct UEmbarkAudioFunctionLibrary_GetMappedRangeClampedCurve_Params
{
	struct FVector2D                                   InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMapRangeCurve                          Curve;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertCurve;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetFirstListenerTransform
struct UEmbarkAudioFunctionLibrary_GetFirstListenerTransform_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetFirstListenerPosition
struct UEmbarkAudioFunctionLibrary_GetFirstListenerPosition_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetDistanceToNearestListener
struct UEmbarkAudioFunctionLibrary_GetDistanceToNearestListener_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetAudioVolume
struct UEmbarkAudioFunctionLibrary_GetAudioVolume_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AAudioVolume*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetAudioDeviceIDs
struct UEmbarkAudioFunctionLibrary_GetAudioDeviceIDs_Params
{
	TArray<uint32_t>                                   OutAudioDeviceIDs;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.GetActorDistanceToNearestListener
struct UEmbarkAudioFunctionLibrary_GetActorDistanceToNearestListener_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.ClearSoundMix
struct UEmbarkAudioFunctionLibrary_ClearSoundMix_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundMix*                                   SoundMix;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioFunctionLibrary.BindToOnQueueSubtitles
struct UEmbarkAudioFunctionLibrary_BindToOnQueueSubtitles_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddTrigger
struct UFEmbarkAudioParametersMixinLibrary_AddTrigger_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddStringArray
struct UFEmbarkAudioParametersMixinLibrary_AddStringArray_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddString
struct UFEmbarkAudioParametersMixinLibrary_AddString_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddObjectArray
struct UFEmbarkAudioParametersMixinLibrary_AddObjectArray_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddObject
struct UFEmbarkAudioParametersMixinLibrary_AddObject_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddIntArray
struct UFEmbarkAudioParametersMixinLibrary_AddIntArray_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddInt
struct UFEmbarkAudioParametersMixinLibrary_AddInt_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddFloatArray
struct UFEmbarkAudioParametersMixinLibrary_AddFloatArray_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddFloat
struct UFEmbarkAudioParametersMixinLibrary_AddFloat_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddBoolArray
struct UFEmbarkAudioParametersMixinLibrary_AddBoolArray_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.FEmbarkAudioParametersMixinLibrary.AddBool
struct UFEmbarkAudioParametersMixinLibrary_AddBool_Params
{
	struct FEmbarkAudioParameters                      Parameters;                                               // (Parm, OutParm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetTriggerParameter
struct UEmbarkAudioComponentMixinLibrary_SetTriggerParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetStringParameter
struct UEmbarkAudioComponentMixinLibrary_SetStringParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetStringArrayParameter
struct UEmbarkAudioComponentMixinLibrary_SetStringArrayParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetParameters
struct UEmbarkAudioComponentMixinLibrary_SetParameters_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEmbarkAudioParameters                      InParameters;                                             // (Parm, OutParm)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetObjectParameter
struct UEmbarkAudioComponentMixinLibrary_SetObjectParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetObjectArrayParameter
struct UEmbarkAudioComponentMixinLibrary_SetObjectArrayParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetIntArrayParameter
struct UEmbarkAudioComponentMixinLibrary_SetIntArrayParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetFloatArrayParameter
struct UEmbarkAudioComponentMixinLibrary_SetFloatArrayParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.EmbarkAudioComponentMixinLibrary.SetBoolArrayParameter
struct UEmbarkAudioComponentMixinLibrary_SetBoolArrayParameter_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkAudio.EmbarkAudioTickableObject.OnTick
struct UEmbarkAudioTickableObject_OnTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWaveCollection.RegisterCallback
struct USoundWaveCollection_RegisterCallback_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FuncName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWaveCollection.GetSoundWave
struct USoundWaveCollection_GetSoundWave_Params
{
	int                                                RequestedIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.StopFiring
struct USoundWeaponSynthComponent_StopFiring_Params
{
};

// Function EmbarkAudio.SoundWeaponSynthComponent.StartFiring
struct USoundWeaponSynthComponent_StartFiring_Params
{
};

// Function EmbarkAudio.SoundWeaponSynthComponent.SetStayActive
struct USoundWeaponSynthComponent_SetStayActive_Params
{
	bool                                               bSetStayActive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerSounds
struct USoundWeaponSynthComponent_SetSoundLayerSounds_Params
{
	int                                                SoundLayerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWaveCollection*                        Sounds;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerParameters
struct USoundWeaponSynthComponent_SetSoundLayerParameters_Params
{
	int                                                SoundLayerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EWeaponSynthSoundLayerType              LayerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignWithEndOfShot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.SetSoundLayerBurstEnvelope
struct USoundWeaponSynthComponent_SetSoundLayerBurstEnvelope_Params
{
	int                                                SoundLayerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AttackGain;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.PrepareSoundLayers
struct USoundWeaponSynthComponent_PrepareSoundLayers_Params
{
	int                                                NumSoundLayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AssetDebugName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.IsSilent
struct USoundWeaponSynthComponent_IsSilent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAudio.SoundWeaponSynthComponent.IncrementShotsFiredExternal
struct USoundWeaponSynthComponent_IncrementShotsFiredExternal_Params
{
};

// Function EmbarkAudio.SoundWeaponSynthComponent.GetDistanceToListener
struct USoundWeaponSynthComponent_GetDistanceToListener_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
