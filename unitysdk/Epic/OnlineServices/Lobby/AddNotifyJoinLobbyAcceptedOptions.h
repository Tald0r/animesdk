#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A070AC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyJoinLobbyAcceptedOptions_TypeDefinitionIndex = 33494;

	class AddNotifyJoinLobbyAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
