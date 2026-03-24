#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneUnitType_TypeDefinitionIndex = 10619;

	enum class ESceneUnitType : ::System::Int16
	{
		Npc = 0,
		Avatar = 2,
		Buddy = 3,
		Player = 1,
	};
}
