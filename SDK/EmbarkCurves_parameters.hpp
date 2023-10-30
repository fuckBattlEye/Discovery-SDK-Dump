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

// Function EmbarkCurves.CurveFloatMixin.GetKeys
struct UCurveFloatMixin_GetKeys_Params
{
	class UCurveFloat*                                 Curve;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRichCurveKey>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
