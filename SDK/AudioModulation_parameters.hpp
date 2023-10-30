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

// Function AudioModulation.AudioModulationStatics.UpdateModulator
struct UAudioModulationStatics_UpdateModulator_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundModulatorBase*                         Modulator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.UpdateMixFromObject
struct UAudioModulationStatics_UpdateMixFromObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.UpdateMixByFilter
struct UAudioModulationStatics_UpdateMixByFilter_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AddressFilter;                                            // (Parm, ZeroConstructor)
	class UClass*                                      ParamClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundModulationParameter*                   ParamFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.UpdateMix
struct UAudioModulationStatics_UpdateMix_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundControlBusMixStage>            Stages;                                                   // (Parm, ZeroConstructor)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
struct UAudioModulationStatics_SetGlobalBusMixValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBus*                            Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.SaveMixToProfile
struct UAudioModulationStatics_SaveMixToProfile_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ProfileIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.LoadMixFromProfile
struct UAudioModulationStatics_LoadMixFromProfile_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ProfileIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundControlBusMixStage>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioModulation.AudioModulationStatics.DeactivateGenerator
struct UAudioModulationStatics_DeactivateGenerator_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundModulationGenerator*                   Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.DeactivateBusMix
struct UAudioModulationStatics_DeactivateBusMix_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.DeactivateBus
struct UAudioModulationStatics_DeactivateBus_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBus*                            Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.CreateBusMixStage
struct UAudioModulationStatics_CreateBusMixStage_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBus*                            Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AttackTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSoundControlBusMixStage                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AudioModulation.AudioModulationStatics.CreateBusMix
struct UAudioModulationStatics_CreateBusMix_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundControlBusMixStage>            Stages;                                                   // (Parm, ZeroConstructor)
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.CreateBus
struct UAudioModulationStatics_CreateBus_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundModulationParameter*                   Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBus*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
struct UAudioModulationStatics_ClearGlobalBusMixValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBus*                            Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
struct UAudioModulationStatics_ClearAllGlobalBusMixValues_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.ActivateGenerator
struct UAudioModulationStatics_ActivateGenerator_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundModulationGenerator*                   Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.ActivateBusMix
struct UAudioModulationStatics_ActivateBusMix_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBusMix*                         Mix;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStatics.ActivateBus
struct UAudioModulationStatics_ActivateBus_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundControlBus*                            Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStyle.GetPatchColor
struct UAudioModulationStyle_GetPatchColor_Params
{
	struct FColor                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStyle.GetParameterColor
struct UAudioModulationStyle_GetParameterColor_Params
{
	struct FColor                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
struct UAudioModulationStyle_GetModulationGeneratorColor_Params
{
	struct FColor                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStyle.GetControlBusMixColor
struct UAudioModulationStyle_GetControlBusMixColor_Params
{
	struct FColor                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.AudioModulationStyle.GetControlBusColor
struct UAudioModulationStyle_GetControlBusColor_Params
{
	struct FColor                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioModulation.SoundControlBusMix.SoloMix
struct USoundControlBusMix_SoloMix_Params
{
};

// Function AudioModulation.SoundControlBusMix.SaveMixToProfile
struct USoundControlBusMix_SaveMixToProfile_Params
{
};

// Function AudioModulation.SoundControlBusMix.LoadMixFromProfile
struct USoundControlBusMix_LoadMixFromProfile_Params
{
};

// Function AudioModulation.SoundControlBusMix.DeactivateMix
struct USoundControlBusMix_DeactivateMix_Params
{
};

// Function AudioModulation.SoundControlBusMix.DeactivateAllMixes
struct USoundControlBusMix_DeactivateAllMixes_Params
{
};

// Function AudioModulation.SoundControlBusMix.ActivateMix
struct USoundControlBusMix_ActivateMix_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
