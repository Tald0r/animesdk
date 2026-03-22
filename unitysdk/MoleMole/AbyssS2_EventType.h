#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_EventType_TypeDefinitionIndex = 61892;

	enum class AbyssS2_EventType : ::System::Int32
	{
		OnArea_OnSelected = 3,
		OnArea_Finish = 1,
		None = 0,
		OnMap_ReGen = 10,
		OnArea_RoomReady = 2,
	};
}
