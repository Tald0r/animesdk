#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAliveState_TypeDefinitionIndex = 46896;

	enum class CharacterAliveState : ::System::Int32
	{
		Alive = 0,
		Dead = 3,
		ExecuteCore = 2,
		DeadForHit = 1,
		Unknown = -1,
		MPDying = 5,
		Dying = 4,
	};
}
