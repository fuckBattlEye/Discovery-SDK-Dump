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

// Function EmbarkCurves.CurveFloatMixin.GetKeys
// (Final, Native, Static, Public)
// Parameters:
// class UCurveFloat*             Curve                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRichCurveKey>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRichCurveKey> UCurveFloatMixin::STATIC_GetKeys(class UCurveFloat* Curve)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCurves.CurveFloatMixin.GetKeys"));

	UCurveFloatMixin_GetKeys_Params params;
	params.Curve = Curve;

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
