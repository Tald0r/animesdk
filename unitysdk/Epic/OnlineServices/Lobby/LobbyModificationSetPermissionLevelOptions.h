#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x18F28810)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x18F28820)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18F28830)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetPermissionLevelOptions_TypeDefinitionIndex = 32647;

	class LobbyModificationSetPermissionLevelOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel _PermissionLevel_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}
	};
}
