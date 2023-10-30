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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary"));
		return ptr;
	}


	void STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);//Offset:Discovery.exe+0x44EAE30
	void STATIC_SetXRTimedInputActionDelegate(const struct FName& ActionName, const struct FScriptDelegate& InDelegate);//Offset:Discovery.exe+0x44E9C50
	void STATIC_SetXRDisconnectDelegate(const struct FScriptDelegate& InDisconnectedDelegate);//Offset:Discovery.exe+0x44E9D60
	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);//Offset:Discovery.exe+0x44EB260
	void STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);//Offset:Discovery.exe+0x44EB130
	void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);//Offset:Discovery.exe+0x44EABF0
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);//Offset:Discovery.exe+0x44EA930
	void STATIC_SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);//Offset:Discovery.exe+0x44EAC80
	void STATIC_SetClippingPlanes(float Near, float Far);//Offset:Discovery.exe+0x44EB3A0
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);//Offset:Discovery.exe+0x44EB480
	bool STATIC_IsSpectatorScreenModeControllable();//Offset:Discovery.exe+0x44EAD10
	bool STATIC_IsInLowPersistenceMode();//Offset:Discovery.exe+0x44EB5F0
	bool STATIC_IsHeadMountedDisplayEnabled();//Offset:Discovery.exe+0x44EC100
	bool STATIC_IsHeadMountedDisplayConnected();//Offset:Discovery.exe+0x44EC0D0
	bool STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);//Offset:Discovery.exe+0x44EA2E0
	bool STATIC_HasValidTrackingPosition();//Offset:Discovery.exe+0x44EBDE0
	int STATIC_GetXRSystemFlags();//Offset:Discovery.exe+0x44EBFB0
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);//Offset:Discovery.exe+0x44EB1C0
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);//Offset:Discovery.exe+0x44EAD40
	struct FString STATIC_GetVersionString();//Offset:Discovery.exe+0x44EBF30
	struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);//Offset:Discovery.exe+0x44EAFF0
	void STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);//Offset:Discovery.exe+0x44EB8E0
	TEnumAsByte<EHMDTrackingOrigin> STATIC_GetTrackingOrigin();//Offset:Discovery.exe+0x44EB0E0
	float STATIC_GetScreenPercentage();//Offset:Discovery.exe+0x44EB370
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);//Offset:Discovery.exe+0x44EB610
	struct FVector2D STATIC_GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin> Origin);//Offset:Discovery.exe+0x44E95C0
	float STATIC_GetPixelDensity();//Offset:Discovery.exe+0x44EB340
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);//Offset:Discovery.exe+0x44EBE10
	int STATIC_GetNumOfTrackingSensors();//Offset:Discovery.exe+0x44EBDB0
	void STATIC_GetMotionControllerData(class UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);//Offset:Discovery.exe+0x44E9FE0
	TEnumAsByte<EHMDWornState> STATIC_GetHMDWornState();//Offset:Discovery.exe+0x44EBF00
	struct FName STATIC_GetHMDDeviceName();//Offset:Discovery.exe+0x44EBFE0
	void STATIC_GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);//Offset:Discovery.exe+0x44EA1C0
	void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);//Offset:Discovery.exe+0x44EA390
	void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);//Offset:Discovery.exe+0x44EA600
	bool STATIC_GetControllerTransformForTime(class UObject* WorldContext, int ControllerIndex, const struct FName& MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);//Offset:Discovery.exe+0x44E9660
	TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(const struct FName& SystemId, enum class EXRTrackedDeviceType DeviceType);//Offset:Discovery.exe+0x44EA810
	void STATIC_EnableLowPersistenceMode(bool bEnable);//Offset:Discovery.exe+0x44EB560
	bool STATIC_EnableHMD(bool bEnable);//Offset:Discovery.exe+0x44EC030
	void STATIC_DisconnectRemoteXRDevice();//Offset:Discovery.exe+0x44E9E20
	TEnumAsByte<EXRDeviceConnectionResult> STATIC_ConnectRemoteXRDevice(const struct FString& IpAddress, int BitRate);//Offset:Discovery.exe+0x44E9E40
	bool STATIC_ConfigureGestures(const struct FXRGestureConfig& GestureConfig);//Offset:Discovery.exe+0x44E9F30
	void STATIC_ClearXRTimedInputActionDelegate(const struct FName& ActionPath);//Offset:Discovery.exe+0x44E9BB0
	void STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);//Offset:Discovery.exe+0x44EAF10
	void STATIC_BreakKey(const struct FKey& InKey, struct FString* InteractionProfile, enum class EControllerHand* Hand, struct FName* MotionSource, struct FString* Indentifier, struct FString* Component);//Offset:Discovery.exe+0x44E92A0
};


// Class HeadMountedDisplay.HandKeypointConversion
// 0x0000 (0x0028 - 0x0028)
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.HandKeypointConversion"));
		return ptr;
	}


	int STATIC_Conv_HandKeypointToInt32(enum class EHandKeypoint Input);//Offset:Discovery.exe+0x44EDEF0
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x00F0 (0x0680 - 0x0590)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EControllerHand                         Hand;                                                     // 0x0594(0x0001) (BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	struct FName                                       MotionSource;                                             // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x05A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	enum class ETrackingStatus                         CurrentTrackingStatus;                                    // 0x05A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayDeviceModel;                                      // 0x05A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05A6(0x0002) MISSED OFFSET
	struct FName                                       DisplayModelSource;                                       // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 CustomDisplayMesh;                                        // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                             // 0x05B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x05C8(0x00A0) MISSED OFFSET
	class UPrimitiveComponent*                         DisplayComponent;                                         // 0x0668(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.MotionControllerComponent"));
		return ptr;
	}


	void SetTrackingSource(enum class EControllerHand NewSource);//Offset:Discovery.exe+0x44EE7C0
	void SetTrackingMotionSource(const struct FName& NewSource);//Offset:Discovery.exe+0x44EE6F0
	void SetShowDeviceModel(bool bShowControllerModel);//Offset:Discovery.exe+0x44EE990
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);//Offset:Discovery.exe+0x44EE8F0
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);//Offset:Discovery.exe+0x44EE850
	void SetAssociatedPlayerIndex(int NewPlayer);//Offset:Discovery.exe+0x44EE650
	void OnMotionControllerUpdated();//Offset:Discovery.exe+0x327F8B0
	bool IsTracked();//Offset:Discovery.exe+0x44EEA30
	enum class EControllerHand GetTrackingSource();//Offset:Discovery.exe+0x44EE790
	float GetParameterValue(const struct FName& InName, bool* bValueFound);//Offset:Discovery.exe+0x44EE550
	struct FVector GetHandJointPosition(int jointIndex, bool* bValueFound);//Offset:Discovery.exe+0x44EE440
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary"));
		return ptr;
	}


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);//Offset:Discovery.exe+0x44EFBF0
	bool STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);//Offset:Discovery.exe+0x44EF9D0
	bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, enum class EControllerHand Hand);//Offset:Discovery.exe+0x44EFAB0
	bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);//Offset:Discovery.exe+0x44EF930
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();//Offset:Discovery.exe+0x44EFC80
	bool STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);//Offset:Discovery.exe+0x44EF220
	int STATIC_GetMotionTrackingEnabledControllerCount();//Offset:Discovery.exe+0x44EFB90
	int STATIC_GetMaximumMotionTrackedControllerCount();//Offset:Discovery.exe+0x44EFBC0
	struct FName STATIC_GetActiveTrackingSystemName();//Offset:Discovery.exe+0x44EF300
	TArray<struct FName> STATIC_EnumerateMotionSources();//Offset:Discovery.exe+0x44EF350
	bool STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);//Offset:Discovery.exe+0x44EF770
	bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, enum class EControllerHand Hand);//Offset:Discovery.exe+0x44EF850
	bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);//Offset:Discovery.exe+0x44EF6D0
	void STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);//Offset:Discovery.exe+0x44EF510
	void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, enum class EControllerHand Hand);//Offset:Discovery.exe+0x44EF5F0
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);//Offset:Discovery.exe+0x44EF3D0
	void STATIC_DisableMotionTrackingOfAllControllers();//Offset:Discovery.exe+0x44EF460
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);//Offset:Discovery.exe+0x44EF480
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0148 - 0x00B8)
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                           // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                    // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                          // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                   // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                               // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                               // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                           // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.VRNotificationsComponent"));
		return ptr;
	}

};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.XRAssetFunctionLibrary"));
		return ptr;
	}


	class UPrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);//Offset:Discovery.exe+0x44F08F0
	class UPrimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);//Offset:Discovery.exe+0x44F0BB0
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         SpawnedComponent;                                         // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent"));
		return ptr;
	}


	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);//Offset:Discovery.exe+0x44F1320
	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);//Offset:Discovery.exe+0x44F10B0
};


// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary"));
		return ptr;
	}


	void STATIC_ShowLoadingScreen();//Offset:Discovery.exe+0x44F1A50
	void STATIC_SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);//Offset:Discovery.exe+0x44F1D20
	void STATIC_HideLoadingScreen();//Offset:Discovery.exe+0x44F1A30
	void STATIC_ClearLoadingScreenSplashes();//Offset:Discovery.exe+0x44F1D00
	void STATIC_AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);//Offset:Discovery.exe+0x44F1A70
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
