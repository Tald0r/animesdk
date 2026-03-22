#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int EBrSpeedLevel_TypeDefinitionIndex = 79262;

	enum class EBrSpeedLevel : ::System::Int32
	{
		Level2 = 2,
		None = -1,
		Level0 = 0,
		Level1 = 1,
		Idle = 4,
		LevelMax = 3,
	};
}
