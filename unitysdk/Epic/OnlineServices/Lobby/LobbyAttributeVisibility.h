#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyAttributeVisibility_TypeDefinitionIndex = 33552;

	enum class LobbyAttributeVisibility : ::System::Int32
	{
		Public = 0,
		Private = 1,
	};
}
