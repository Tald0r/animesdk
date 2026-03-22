#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class SetRoomSettingOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x857CC0)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x857C50)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x857970)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x857C40)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x857A30)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x857AE0)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0x857B90)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int SetRoomSettingOptionsInternal_TypeDefinitionIndex = 32283;

	struct alignas(8) SetRoomSettingOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_SettingName; // 0x28
		::System::IntPtr m_SettingValue; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_SettingName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_SETTINGNAME_OFFSET))(this, value);
		}

		::System::Void set_SettingValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_SETTINGVALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::SetRoomSettingOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::SetRoomSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
