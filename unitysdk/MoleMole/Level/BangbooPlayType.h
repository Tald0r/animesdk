#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayType_TypeDefinitionIndex = 61812;

	enum class BangbooPlayType : ::System::Int32
	{
		Platformer2_0 = 6,
		PartyGame = 5,
		MechBoo = 7,
		PlatformerIntro = 1,
		SearchTarget = 2,
		AbyssS2Interact = 4,
		None = 0,
		Platformer = 3,
	};
}
