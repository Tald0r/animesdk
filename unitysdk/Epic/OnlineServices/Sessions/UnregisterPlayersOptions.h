#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_GET_PLAYERSTOUNREGISTER_OFFSET UNITYSDK_OFFSET(0x18F322E0)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x18F322C0)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_SET_PLAYERSTOUNREGISTER_OFFSET UNITYSDK_OFFSET(0x18F322F0)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x18F322D0)
#define EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18F32300)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UnregisterPlayersOptions_TypeDefinitionIndex = 32117;

	class UnregisterPlayersOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _PlayersToUnregister_k__BackingField; // 0x10
		::System::String* _SessionName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_PlayersToUnregister()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_GET_PLAYERSTOUNREGISTER_OFFSET))(this);
		}

		::System::Void set_PlayersToUnregister(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UNREGISTERPLAYERSOPTIONS_SET_PLAYERSTOUNREGISTER_OFFSET))(this, value);
		}
	};
}
