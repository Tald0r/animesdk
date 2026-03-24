#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayType_TypeDefinitionIndex = 40280;

	enum class BangbooPlayType : ::System::Int32
	{
		None = 0,
		Platformer2_0 = 6,
		AbyssS2Interact = 4,
		MechBoo = 7,
		PlatformerIntro = 1,
		PartyGame = 5,
		Platformer = 3,
		SearchTarget = 2,
	};
}
