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

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (0x0028 - 0x0028)
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LocationServicesBPLibrary.LocationServices"));
		return ptr;
	}


	bool STATIC_StopLocationServices();//Offset:Discovery.exe+0x2F21DE0
	bool STATIC_StartLocationServices();//Offset:Discovery.exe+0x2F21E10
	bool STATIC_IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy);//Offset:Discovery.exe+0x2F21CC0
	bool STATIC_InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);//Offset:Discovery.exe+0x2F21E40
	class ULocationServicesImpl* STATIC_GetLocationServicesImpl();//Offset:Discovery.exe+0x2F21C90
	struct FLocationServicesData STATIC_GetLastKnownLocation();//Offset:Discovery.exe+0x2F21D80
	bool STATIC_AreLocationServicesEnabled();//Offset:Discovery.exe+0x2F21D50
};


// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (0x0038 - 0x0028)
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class LocationServicesBPLibrary.LocationServicesImpl"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
