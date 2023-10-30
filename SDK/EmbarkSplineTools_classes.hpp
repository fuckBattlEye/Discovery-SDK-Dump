#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EmbarkSplineTools.SplineDistributionActor
// 0x0008 (0x02D0 - 0x02C8)
class ASplineDistributionActor : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x02C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSplineTools.SplineDistributionActor"));
		return ptr;
	}

};


// Class EmbarkSplineTools.SplineLayerStyleDataAsset
// 0x0000 (0x0030 - 0x0030)
class USplineLayerStyleDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSplineTools.SplineLayerStyleDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
