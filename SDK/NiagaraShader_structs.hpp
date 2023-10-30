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

// Enum NiagaraShader.ENiagaraMipMapGenerationType
enum class ENiagaraMipMapGenerationType : uint8_t
{
	Unfiltered                     = 0,
	Linear                         = 1,
	Blur1                          = 2,
	Blur2                          = 3,
	Blur3                          = 4,
	Blur4                          = 5,
	ENiagaraMipMapGenerationType_MAX = 6
};


// Enum NiagaraShader.ENiagaraGpuDispatchType
enum class ENiagaraGpuDispatchType : uint8_t
{
	OneD                           = 0,
	TwoD                           = 1,
	ThreeD                         = 2,
	Custom                         = 3,
	ENiagaraGpuDispatchType_MAX    = 4
};


// Enum NiagaraShader.ENiagaraSimStageExecuteBehavior
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
	Always                         = 0,
	OnSimulationReset              = 1,
	NotOnSimulationReset           = 2,
	ENiagaraSimStageExecuteBehavior_MAX = 3
};


// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	Log                            = 0,
	Display                        = 1,
	Warning                        = 2,
	Error                          = 3,
	FNiagaraCompileEventSeverity_MAX = 4
};


// Enum NiagaraShader.FNiagaraCompileEventSource
enum class EFNiagaraCompileEventSource : uint8_t
{
	Unset                          = 0,
	ScriptDependency               = 1,
	FNiagaraCompileEventSource_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraShader.SimulationStageMetaData
// 0x0068
struct FSimulationStageMetaData
{
	struct FName                                       SimulationStageName;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EnabledBinding;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IterationSource;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	unsigned char                                      bWritesParticles : 1;                                     // 0x001C(0x0001)
	unsigned char                                      bPartialParticleUpdate : 1;                               // 0x001C(0x0001)
	unsigned char                                      bParticleIterationStateEnabled : 1;                       // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FName                                       ParticleIterationStateBinding;                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	struct FIntPoint                                   ParticleIterationStateRange;                              // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FName>                               OutputDestinations;                                       // 0x0038(0x0010) (ZeroConstructor)
	int                                                NumIterations;                                            // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NumIterationsBinding;                                     // 0x004C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FIntVector                                  GpuDispatchNumThreads;                                    // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0028
struct FNiagaraDataInterfaceGeneratedFunction
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0030
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString                                     DataInterfaceHLSLSymbol;                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DIClassName;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0068
struct FNiagaraCompileEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ShortDescription;                                         // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bDismissable;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FGuid                                       NodeGuid;                                                 // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinGuid;                                                  // 0x003C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FGuid>                               StackGuids;                                               // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
