#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_RenderPriority_TypeDefinitionIndex = 66526;

	enum class HollowEntityConfig_RenderPriority : ::System::Int32
	{
		GridEvent = 3,
		Default = 0,
		MiniGameBG = 4,
		Npc = 1,
		Alert = 5,
		Player = 2,
	};
}
