#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/PlayerAchievementInternal.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Achievements { class PlayerStatInfo; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x19525420)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x195254D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x195254B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x19525510)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ICONURL_OFFSET UNITYSDK_OFFSET(0x195254F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x19525440)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0x19525490)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x19525460)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_1_OFFSET UNITYSDK_OFFSET(0x19525D60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x19525430)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x195254E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x195254C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x19525520)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ICONURL_OFFSET UNITYSDK_OFFSET(0x19525500)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_OFFSET UNITYSDK_OFFSET(0x19525530)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x19525450)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0x195254A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x19525480)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19525ED0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerAchievement_TypeDefinitionIndex = 34316;

	class PlayerAchievement : public ::System::Object
	{
	public:
		::System::String* _FlavorText_k__BackingField; // 0x10
		::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* _StatInfo_k__BackingField; // 0x18
		::System::String* _Description_k__BackingField; // 0x20
		::System::String* _IconURL_k__BackingField; // 0x28
		::System::String* _DisplayName_k__BackingField; // 0x30
		::System::String* _AchievementId_k__BackingField; // 0x38
		::System::Nullable_1<::System::DateTimeOffset> _UnlockTime_k__BackingField; // 0x40
		::System::Double _Progress_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::Double get_Progress()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_UNLOCKTIME_OFFSET))(this);
		}

		::System::Void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_UNLOCKTIME_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* get_StatInfo()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_STATINFO_OFFSET))(this);
		}

		::System::Void set_StatInfo(::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::PlayerStatInfo*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_STATINFO_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_IconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_ICONURL_OFFSET))(this);
		}

		::System::Void set_IconURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_ICONURL_OFFSET))(this, value);
		}

		::System::String* get_FlavorText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_GET_FLAVORTEXT_OFFSET))(this);
		}

		::System::Void set_FlavorText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_FLAVORTEXT_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievementInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievementInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERACHIEVEMENT_SET_1_OFFSET))(this, other);
		}
	};
}
