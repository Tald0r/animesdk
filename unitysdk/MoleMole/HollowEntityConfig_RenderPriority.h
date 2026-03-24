#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_RenderPriority_TypeDefinitionIndex = 78254;

	enum class HollowEntityConfig_RenderPriority : ::System::Int32
	{
		Alert = 5,
		Npc = 1,
		Default = 0,
		Player = 2,
		MiniGameBG = 4,
		GridEvent = 3,
	};
}
