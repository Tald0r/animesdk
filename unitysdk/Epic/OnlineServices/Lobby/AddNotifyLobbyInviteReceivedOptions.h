#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4A1F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyInviteReceivedOptions_TypeDefinitionIndex = 33498;

	class AddNotifyLobbyInviteReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
