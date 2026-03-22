#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneUnitType_TypeDefinitionIndex = 11356;

	enum class ESceneUnitType : ::System::Int16
	{
		Buddy = 3,
		Npc = 0,
		Player = 1,
		Avatar = 2,
	};
}
