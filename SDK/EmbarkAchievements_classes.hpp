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

// Class EmbarkAchievements.AchievementAsset
// 0x0038 (0x0068 - 0x0030)
class UAchievementAsset : public UPrimaryDataAsset
{
public:
	struct FString                                     AchievementId;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTag                                TriggerEvent;                                             // 0x0040(0x0008) (Edit, DisableEditOnInstance)
	int                                                RequiredValueToUnlock;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SteamStatName;                                            // 0x004C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       IdEmbark;                                                 // 0x0054(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAchievements.AchievementAsset"));
		return ptr;
	}

};


// Class EmbarkAchievements.AchievementTaskManager
// 0x0008 (0x0030 - 0x0028)
class UAchievementTaskManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAchievements.AchievementTaskManager"));
		return ptr;
	}

};


// Class EmbarkAchievements.SteamAchievementTaskManager
// 0x0010 (0x0040 - 0x0030)
class USteamAchievementTaskManager : public UAchievementTaskManager
{
public:
	TArray<class USteamAchievementsHelperTask*>        SteamAchievementsHelperTasks;                             // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAchievements.SteamAchievementTaskManager"));
		return ptr;
	}

};


// Class EmbarkAchievements.SteamAchievementsHelperTask
// 0x0040 (0x0068 - 0x0028)
class USteamAchievementsHelperTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UAchievementAsset*                           AchievementAsset;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAchievements.SteamAchievementsHelperTask"));
		return ptr;
	}

};


// Class EmbarkAchievements.AchievementSubsystem
// 0x0038 (0x0068 - 0x0030)
class UAchievementSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TArray<class UAchievementAsset*>                   AchievementsList;                                         // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UAchievementTaskManager*                     AchievementManager;                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAchievements.AchievementSubsystem"));
		return ptr;
	}


	void SetAchievementProgress(const struct FGameplayTag& TriggerEvent, int ProgressToWrite);//Offset:Discovery.exe+0x1E4FB90
	float GetAchievementProgress(const struct FGameplayTag& TriggerEvent);//Offset:Discovery.exe+0x1E4FAE0
	void AddAchievementProgress(const struct FGameplayTag& TriggerEvent, int TimesToTrigger);//Offset:Discovery.exe+0x1E4FC90
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
