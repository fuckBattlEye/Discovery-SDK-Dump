//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkDynamics.EmbarkDynamicsDebugDraw.DrawSpringGraph
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSpringPlot             LastPlot                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 GraphOrigin                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            FirstColor                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            LastColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FirstLineThickness             (Parm, ZeroConstructor, IsPlainOldData)
// float                          LastLineThickness              (Parm, ZeroConstructor, IsPlainOldData)
// float                          GraphSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDynamicsDebugDraw::STATIC_DrawSpringGraph(class UWorld* World, const struct FSpringPlot& LastPlot, const struct FVector& GraphOrigin, const struct FLinearColor& FirstColor, const struct FLinearColor& LastColor, float FirstLineThickness, float LastLineThickness, float GraphSize)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkDynamicsDebugDraw.DrawSpringGraph"));

	UEmbarkDynamicsDebugDraw_DrawSpringGraph_Params params;
	params.World = World;
	params.LastPlot = LastPlot;
	params.GraphOrigin = GraphOrigin;
	params.FirstColor = FirstColor;
	params.LastColor = LastColor;
	params.FirstLineThickness = FirstLineThickness;
	params.LastLineThickness = LastLineThickness;
	params.GraphSize = GraphSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDynamics.EmbarkDynamicsDebugDraw.DrawOverlappingCones
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FConeParameters> ConeConstraints                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSegments                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDynamicsDebugDraw::STATIC_DrawOverlappingCones(class UWorld* World, const struct FTransform& Origin, TArray<struct FConeParameters> ConeConstraints, float Length, int NumSegments)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkDynamicsDebugDraw.DrawOverlappingCones"));

	UEmbarkDynamicsDebugDraw_DrawOverlappingCones_Params params;
	params.World = World;
	params.Origin = Origin;
	params.ConeConstraints = ConeConstraints;
	params.Length = Length;
	params.NumSegments = NumSegments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (Parm, OutParm)
// struct FTransform              Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ExternalForces                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkPendulumMixinLibrary::STATIC_Update(const struct FTransform& Origin, float DeltaSeconds, const struct FVector& ExternalForces, struct FEmbarkPendulum* Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.Update"));

	UEmbarkPendulumMixinLibrary_Update_Params params;
	params.Origin = Origin;
	params.DeltaSeconds = DeltaSeconds;
	params.ExternalForces = ExternalForces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pend != nullptr)
		*Pend = params.Pend;

	return params.ReturnValue;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.SetVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (Parm, OutParm)
// struct FVector                 InVelocity                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkPendulumMixinLibrary::STATIC_SetVelocity(const struct FVector& InVelocity, struct FEmbarkPendulum* Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.SetVelocity"));

	UEmbarkPendulumMixinLibrary_SetVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pend != nullptr)
		*Pend = params.Pend;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (Parm, OutParm)
// struct FTransform              Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEmbarkPendulumMixinLibrary::STATIC_Reset(const struct FTransform& Origin, struct FEmbarkPendulum* Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.Reset"));

	UEmbarkPendulumMixinLibrary_Reset_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pend != nullptr)
		*Pend = params.Pend;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.PushParticle
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (Parm, OutParm)
// struct FVector                 PushVector                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkPendulumMixinLibrary::STATIC_PushParticle(const struct FVector& PushVector, struct FEmbarkPendulum* Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.PushParticle"));

	UEmbarkPendulumMixinLibrary_PushParticle_Params params;
	params.PushVector = PushVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pend != nullptr)
		*Pend = params.Pend;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.GetVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkPendulumMixinLibrary::STATIC_GetVelocity(const struct FEmbarkPendulum& Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.GetVelocity"));

	UEmbarkPendulumMixinLibrary_GetVelocity_Params params;
	params.Pend = Pend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.GetResult
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkPendulumMixinLibrary::STATIC_GetResult(const struct FEmbarkPendulum& Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.GetResult"));

	UEmbarkPendulumMixinLibrary_GetResult_Params params;
	params.Pend = Pend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.DebugDraw
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkPendulum         Pend                           (Parm, OutParm)
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              WorldOffset                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEmbarkPendulumMixinLibrary::STATIC_DebugDraw(class UWorld* World, const struct FTransform& Origin, const struct FTransform& WorldOffset, struct FEmbarkPendulum* Pend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.EmbarkPendulumMixinLibrary.DebugDraw"));

	UEmbarkPendulumMixinLibrary_DebugDraw_Params params;
	params.World = World;
	params.Origin = Origin;
	params.WorldOffset = WorldOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pend != nullptr)
		*Pend = params.Pend;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.UpdateWithTarget
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)
// float                          NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USimpleExactDamperMixinLibrary::STATIC_UpdateWithTarget(float NewTarget, float DeltaSeconds, struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.UpdateWithTarget"));

	USimpleExactDamperMixinLibrary_UpdateWithTarget_Params params;
	params.NewTarget = NewTarget;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USimpleExactDamperMixinLibrary::STATIC_Update(float DeltaSeconds, struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Update"));

	USimpleExactDamperMixinLibrary_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetVelocity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)
// float                          InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleExactDamperMixinLibrary::STATIC_SetVelocity(float InVelocity, struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetVelocity"));

	USimpleExactDamperMixinLibrary_SetVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USimpleExactDamperMixinLibrary::STATIC_SetValue(float InValue, struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetValue"));

	USimpleExactDamperMixinLibrary_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetHalfLife
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)
// float                          InHalfLife                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleExactDamperMixinLibrary::STATIC_SetHalfLife(float InHalfLife, struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetHalfLife"));

	USimpleExactDamperMixinLibrary_SetHalfLife_Params params;
	params.InHalfLife = InHalfLife;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)

void USimpleExactDamperMixinLibrary::STATIC_Reset(struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Reset"));

	USimpleExactDamperMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (Parm, OutParm)
// float                          InitValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InitVelocity                   (Parm, ZeroConstructor, IsPlainOldData)

void USimpleExactDamperMixinLibrary::STATIC_Init(float InitValue, float InitVelocity, struct FSimpleExactDamper* SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Init"));

	USimpleExactDamperMixinLibrary_Init_Params params;
	params.InitValue = InitValue;
	params.InitVelocity = InitVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SED != nullptr)
		*SED = params.SED;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetVelocity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USimpleExactDamperMixinLibrary::STATIC_GetVelocity(const struct FSimpleExactDamper& SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetVelocity"));

	USimpleExactDamperMixinLibrary_GetVelocity_Params params;
	params.SED = SED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USimpleExactDamperMixinLibrary::STATIC_GetValue(const struct FSimpleExactDamper& SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetValue"));

	USimpleExactDamperMixinLibrary_GetValue_Params params;
	params.SED = SED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetHalfLife
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSimpleExactDamper      SED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USimpleExactDamperMixinLibrary::STATIC_GetHalfLife(const struct FSimpleExactDamper& SED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetHalfLife"));

	USimpleExactDamperMixinLibrary_GetHalfLife_Params params;
	params.SED = SED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.UpdateWithTarget
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)
// float                          NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDoubleExactDamperMixinLibrary::STATIC_UpdateWithTarget(float NewTarget, float DeltaSeconds, struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.UpdateWithTarget"));

	UDoubleExactDamperMixinLibrary_UpdateWithTarget_Params params;
	params.NewTarget = NewTarget;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDoubleExactDamperMixinLibrary::STATIC_Update(float DeltaSeconds, struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Update"));

	UDoubleExactDamperMixinLibrary_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Teleport
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UDoubleExactDamperMixinLibrary::STATIC_Teleport(float InValue, struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Teleport"));

	UDoubleExactDamperMixinLibrary_Teleport_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.SetTarget
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)
// float                          Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UDoubleExactDamperMixinLibrary::STATIC_SetTarget(float Target, struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.SetTarget"));

	UDoubleExactDamperMixinLibrary_SetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.SetSmoothness
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)
// float                          InSmoothness                   (Parm, ZeroConstructor, IsPlainOldData)

void UDoubleExactDamperMixinLibrary::STATIC_SetSmoothness(float InSmoothness, struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.SetSmoothness"));

	UDoubleExactDamperMixinLibrary_SetSmoothness_Params params;
	params.InSmoothness = InSmoothness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)

void UDoubleExactDamperMixinLibrary::STATIC_Reset(struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Reset"));

	UDoubleExactDamperMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (Parm, OutParm)
// float                          InitValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InitVelocity                   (Parm, ZeroConstructor, IsPlainOldData)

void UDoubleExactDamperMixinLibrary::STATIC_Init(float InitValue, float InitVelocity, struct FDoubleExactDamper* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Init"));

	UDoubleExactDamperMixinLibrary_Init_Params params;
	params.InitValue = InitValue;
	params.InitVelocity = InitVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetVelocity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDoubleExactDamperMixinLibrary::STATIC_GetVelocity(const struct FDoubleExactDamper& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetVelocity"));

	UDoubleExactDamperMixinLibrary_GetVelocity_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDoubleExactDamperMixinLibrary::STATIC_GetValue(const struct FDoubleExactDamper& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetValue"));

	UDoubleExactDamperMixinLibrary_GetValue_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetTarget
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDoubleExactDamperMixinLibrary::STATIC_GetTarget(const struct FDoubleExactDamper& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetTarget"));

	UDoubleExactDamperMixinLibrary_GetTarget_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetSmoothness
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamper      DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDoubleExactDamperMixinLibrary::STATIC_GetSmoothness(const struct FDoubleExactDamper& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetSmoothness"));

	UDoubleExactDamperMixinLibrary_GetSmoothness_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.UpdateWithTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (Parm, OutParm)
// struct FVector                 NewTarget                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDoubleExactDamperVecMixinLibrary::STATIC_UpdateWithTarget(const struct FVector& NewTarget, float DeltaSeconds, struct FDoubleExactDamperVec* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.UpdateWithTarget"));

	UDoubleExactDamperVecMixinLibrary_UpdateWithTarget_Params params;
	params.NewTarget = NewTarget;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (Parm, OutParm)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDoubleExactDamperVecMixinLibrary::STATIC_Update(float DeltaSeconds, struct FDoubleExactDamperVec* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Update"));

	UDoubleExactDamperVecMixinLibrary_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.SetTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (Parm, OutParm)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDoubleExactDamperVecMixinLibrary::STATIC_SetTarget(const struct FVector& Target, struct FDoubleExactDamperVec* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.SetTarget"));

	UDoubleExactDamperVecMixinLibrary_SetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.SetSmoothness
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (Parm, OutParm)
// struct FVector                 InSmoothness                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDoubleExactDamperVecMixinLibrary::STATIC_SetSmoothness(const struct FVector& InSmoothness, struct FDoubleExactDamperVec* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.SetSmoothness"));

	UDoubleExactDamperVecMixinLibrary_SetSmoothness_Params params;
	params.InSmoothness = InSmoothness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (Parm, OutParm)

void UDoubleExactDamperVecMixinLibrary::STATIC_Reset(struct FDoubleExactDamperVec* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Reset"));

	UDoubleExactDamperVecMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (Parm, OutParm)
// struct FVector                 InitValue                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 InitVelocity                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDoubleExactDamperVecMixinLibrary::STATIC_Init(const struct FVector& InitValue, const struct FVector& InitVelocity, struct FDoubleExactDamperVec* DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Init"));

	UDoubleExactDamperVecMixinLibrary_Init_Params params;
	params.InitValue = InitValue;
	params.InitVelocity = InitVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DED != nullptr)
		*DED = params.DED;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDoubleExactDamperVecMixinLibrary::STATIC_GetVelocity(const struct FDoubleExactDamperVec& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetVelocity"));

	UDoubleExactDamperVecMixinLibrary_GetVelocity_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDoubleExactDamperVecMixinLibrary::STATIC_GetValue(const struct FDoubleExactDamperVec& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetValue"));

	UDoubleExactDamperVecMixinLibrary_GetValue_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDoubleExactDamperVecMixinLibrary::STATIC_GetTarget(const struct FDoubleExactDamperVec& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetTarget"));

	UDoubleExactDamperVecMixinLibrary_GetTarget_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetSmoothness
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDoubleExactDamperVec   DED                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDoubleExactDamperVecMixinLibrary::STATIC_GetSmoothness(const struct FDoubleExactDamperVec& DED)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetSmoothness"));

	UDoubleExactDamperVecMixinLibrary_GetSmoothness_Params params;
	params.DED = DED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (Parm, OutParm)
// float                          NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringFloatMixinLibrary::STATIC_Update(float NewTarget, float DeltaSeconds, struct FSODSpringFloat* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.Update"));

	USODSpringFloatMixinLibrary_Update_Params params;
	params.NewTarget = NewTarget;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.TeleportTo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (Parm, OutParm)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringFloatMixinLibrary::STATIC_TeleportTo(float NewValue, struct FSODSpringFloat* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.TeleportTo"));

	USODSpringFloatMixinLibrary_TeleportTo_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.SetVelocity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (Parm, OutParm)
// float                          InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringFloatMixinLibrary::STATIC_SetVelocity(float InVelocity, struct FSODSpringFloat* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.SetVelocity"));

	USODSpringFloatMixinLibrary_SetVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.SetValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (Parm, OutParm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringFloatMixinLibrary::STATIC_SetValue(float InValue, struct FSODSpringFloat* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.SetValue"));

	USODSpringFloatMixinLibrary_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (Parm, OutParm)

void USODSpringFloatMixinLibrary::STATIC_Reset(struct FSODSpringFloat* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.Reset"));

	USODSpringFloatMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetVelocity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USODSpringFloatMixinLibrary::STATIC_GetVelocity(const struct FSODSpringFloat& SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetVelocity"));

	USODSpringFloatMixinLibrary_GetVelocity_Params params;
	params.SOD = SOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USODSpringFloatMixinLibrary::STATIC_GetValue(const struct FSODSpringFloat& SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetValue"));

	USODSpringFloatMixinLibrary_GetValue_Params params;
	params.SOD = SOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetAcceleration
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USODSpringFloatMixinLibrary::STATIC_GetAcceleration(const struct FSODSpringFloat& SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetAcceleration"));

	USODSpringFloatMixinLibrary_GetAcceleration_Params params;
	params.SOD = SOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringFloatMixinLibrary.Compute
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringFloat         SOD                            (Parm, OutParm)
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damping                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Response                       (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringFloatMixinLibrary::STATIC_Compute(float Frequency, float Damping, float Response, struct FSODSpringFloat* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringFloatMixinLibrary.Compute"));

	USODSpringFloatMixinLibrary_Compute_Params params;
	params.Frequency = Frequency;
	params.Damping = Damping;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (Parm, OutParm)
// struct FVector                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringVectorMixinLibrary::STATIC_Update(const struct FVector& NewTarget, float DeltaSeconds, struct FSODSpringVector* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.Update"));

	USODSpringVectorMixinLibrary_Update_Params params;
	params.NewTarget = NewTarget;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.TeleportTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (Parm, OutParm)
// struct FVector                 NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringVectorMixinLibrary::STATIC_TeleportTo(const struct FVector& NewValue, struct FSODSpringVector* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.TeleportTo"));

	USODSpringVectorMixinLibrary_TeleportTo_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.SetVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (Parm, OutParm)
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringVectorMixinLibrary::STATIC_SetVelocity(const struct FVector& InVelocity, struct FSODSpringVector* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.SetVelocity"));

	USODSpringVectorMixinLibrary_SetVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.SetValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (Parm, OutParm)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringVectorMixinLibrary::STATIC_SetValue(const struct FVector& InValue, struct FSODSpringVector* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.SetValue"));

	USODSpringVectorMixinLibrary_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringVector        SOD                            (Parm, OutParm)

void USODSpringVectorMixinLibrary::STATIC_Reset(struct FSODSpringVector* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.Reset"));

	USODSpringVectorMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector USODSpringVectorMixinLibrary::STATIC_GetVelocity(const struct FSODSpringVector& SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetVelocity"));

	USODSpringVectorMixinLibrary_GetVelocity_Params params;
	params.SOD = SOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector USODSpringVectorMixinLibrary::STATIC_GetValue(const struct FSODSpringVector& SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetValue"));

	USODSpringVectorMixinLibrary_GetValue_Params params;
	params.SOD = SOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetAcceleration
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSODSpringVector        SOD                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector USODSpringVectorMixinLibrary::STATIC_GetAcceleration(const struct FSODSpringVector& SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetAcceleration"));

	USODSpringVectorMixinLibrary_GetAcceleration_Params params;
	params.SOD = SOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.SODSpringVectorMixinLibrary.Compute
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FSODSpringVector        SOD                            (Parm, OutParm)
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damping                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Response                       (Parm, ZeroConstructor, IsPlainOldData)

void USODSpringVectorMixinLibrary::STATIC_Compute(float Frequency, float Damping, float Response, struct FSODSpringVector* SOD)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.SODSpringVectorMixinLibrary.Compute"));

	USODSpringVectorMixinLibrary_Compute_Params params;
	params.Frequency = Frequency;
	params.Damping = Damping;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SOD != nullptr)
		*SOD = params.SOD;
}


// Function EmbarkDynamics.MinJerkMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerk                MinJerk                        (Parm, OutParm)
// double                         Target                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         TimeHorizon                    (Parm, ZeroConstructor, IsPlainOldData)
// double                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UMinJerkMixinLibrary::STATIC_Update(double Target, double TimeHorizon, double DeltaSeconds, struct FMinJerk* MinJerk)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkMixinLibrary.Update"));

	UMinJerkMixinLibrary_Update_Params params;
	params.Target = Target;
	params.TimeHorizon = TimeHorizon;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerk != nullptr)
		*MinJerk = params.MinJerk;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerk                MinJerk                        (Parm, OutParm)

void UMinJerkMixinLibrary::STATIC_Reset(struct FMinJerk* MinJerk)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkMixinLibrary.Reset"));

	UMinJerkMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerk != nullptr)
		*MinJerk = params.MinJerk;
}


// Function EmbarkDynamics.MinJerkMixinLibrary.IsSleeping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerk                MinJerk                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMinJerkMixinLibrary::STATIC_IsSleeping(const struct FMinJerk& MinJerk)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkMixinLibrary.IsSleeping"));

	UMinJerkMixinLibrary_IsSleeping_Params params;
	params.MinJerk = MinJerk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerk                MinJerk                        (Parm, OutParm)
// double                         ResetValue                     (Parm, ZeroConstructor, IsPlainOldData)
// double                         ResetSpeed                     (Parm, ZeroConstructor, IsPlainOldData)
// double                         ResetAccel                     (Parm, ZeroConstructor, IsPlainOldData)

void UMinJerkMixinLibrary::STATIC_Init(double ResetValue, double ResetSpeed, double ResetAccel, struct FMinJerk* MinJerk)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkMixinLibrary.Init"));

	UMinJerkMixinLibrary_Init_Params params;
	params.ResetValue = ResetValue;
	params.ResetSpeed = ResetSpeed;
	params.ResetAccel = ResetAccel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerk != nullptr)
		*MinJerk = params.MinJerk;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (Parm, OutParm)
// struct FVector                 TargetVec                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          TimeHorizon                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMinJerkVecMixinLibrary::STATIC_Update(const struct FVector& TargetVec, float TimeHorizon, float DeltaSeconds, struct FMinJerkVec* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.Update"));

	UMinJerkVecMixinLibrary_Update_Params params;
	params.TargetVec = TargetVec;
	params.TimeHorizon = TimeHorizon;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.SetTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (Parm, OutParm)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMinJerkVecMixinLibrary::STATIC_SetTarget(const struct FVector& Target, struct FMinJerkVec* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.SetTarget"));

	UMinJerkVecMixinLibrary_SetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (Parm, OutParm)

void UMinJerkVecMixinLibrary::STATIC_Reset(struct FMinJerkVec* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.Reset"));

	UMinJerkVecMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.IsSleeping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMinJerkVecMixinLibrary::STATIC_IsSleeping(const struct FMinJerkVec& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.IsSleeping"));

	UMinJerkVecMixinLibrary_IsSleeping_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.InitFromRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (Parm, OutParm)
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Acceleration                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMinJerkVecMixinLibrary::STATIC_InitFromRotator(const struct FRotator& Rotation, const struct FRotator& Velocity, const struct FRotator& Acceleration, struct FMinJerkVec* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.InitFromRotator"));

	UMinJerkVecMixinLibrary_InitFromRotator_Params params;
	params.Rotation = Rotation;
	params.Velocity = Velocity;
	params.Acceleration = Acceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (Parm, OutParm)
// struct FVector                 CurrentVector                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Acceleration                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMinJerkVecMixinLibrary::STATIC_Init(const struct FVector& CurrentVector, const struct FVector& Velocity, const struct FVector& Acceleration, struct FMinJerkVec* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.Init"));

	UMinJerkVecMixinLibrary_Init_Params params;
	params.CurrentVector = CurrentVector;
	params.Velocity = Velocity;
	params.Acceleration = Acceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetVelocityAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMinJerkVecMixinLibrary::STATIC_GetVelocityAsVector(const struct FMinJerkVec& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.GetVelocityAsVector"));

	UMinJerkVecMixinLibrary_GetVelocityAsVector_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMinJerkVecMixinLibrary::STATIC_GetAsVector(const struct FMinJerkVec& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAsVector"));

	UMinJerkVecMixinLibrary_GetAsVector_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UMinJerkVecMixinLibrary::STATIC_GetAsRotator(const struct FMinJerkVec& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAsRotator"));

	UMinJerkVecMixinLibrary_GetAsRotator_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAccelerationAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec             MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMinJerkVecMixinLibrary::STATIC_GetAccelerationAsVector(const struct FMinJerkVec& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAccelerationAsVector"));

	UMinJerkVecMixinLibrary_GetAccelerationAsVector_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Update
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (Parm, OutParm)
// struct FVector2D               TargetVec                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          TimeHorizon                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UMinJerkVec2DMixinLibrary::STATIC_Update(const struct FVector2D& TargetVec, float TimeHorizon, float DeltaSeconds, struct FMinJerkVec2D* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Update"));

	UMinJerkVec2DMixinLibrary_Update_Params params;
	params.TargetVec = TargetVec;
	params.TimeHorizon = TimeHorizon;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Reset
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (Parm, OutParm)

void UMinJerkVec2DMixinLibrary::STATIC_Reset(struct FMinJerkVec2D* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Reset"));

	UMinJerkVec2DMixinLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.IsSleeping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMinJerkVec2DMixinLibrary::STATIC_IsSleeping(const struct FMinJerkVec2D& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.IsSleeping"));

	UMinJerkVec2DMixinLibrary_IsSleeping_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.InitFromRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (Parm, OutParm)
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Acceleration                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMinJerkVec2DMixinLibrary::STATIC_InitFromRotator(const struct FRotator& Rotation, const struct FRotator& Velocity, const struct FRotator& Acceleration, struct FMinJerkVec2D* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.InitFromRotator"));

	UMinJerkVec2DMixinLibrary_InitFromRotator_Params params;
	params.Rotation = Rotation;
	params.Velocity = Velocity;
	params.Acceleration = Acceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (Parm, OutParm)
// struct FVector2D               CurrentVector                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               Acceleration                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMinJerkVec2DMixinLibrary::STATIC_Init(const struct FVector2D& CurrentVector, const struct FVector2D& Velocity, const struct FVector2D& Acceleration, struct FMinJerkVec2D* MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Init"));

	UMinJerkVec2DMixinLibrary_Init_Params params;
	params.CurrentVector = CurrentVector;
	params.Velocity = Velocity;
	params.Acceleration = Acceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinJerkVec != nullptr)
		*MinJerkVec = params.MinJerkVec;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetVelocityAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UMinJerkVec2DMixinLibrary::STATIC_GetVelocityAsVector(const struct FMinJerkVec2D& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetVelocityAsVector"));

	UMinJerkVec2DMixinLibrary_GetVelocityAsVector_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAsVector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UMinJerkVec2DMixinLibrary::STATIC_GetAsVector2D(const struct FMinJerkVec2D& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAsVector2D"));

	UMinJerkVec2DMixinLibrary_GetAsVector2D_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UMinJerkVec2DMixinLibrary::STATIC_GetAsRotator(const struct FMinJerkVec2D& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAsRotator"));

	UMinJerkVec2DMixinLibrary_GetAsRotator_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAccelerationAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FMinJerkVec2D           MinJerkVec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UMinJerkVec2DMixinLibrary::STATIC_GetAccelerationAsVector(const struct FMinJerkVec2D& MinJerkVec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAccelerationAsVector"));

	UMinJerkVec2DMixinLibrary_GetAccelerationAsVector_Params params;
	params.MinJerkVec = MinJerkVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
