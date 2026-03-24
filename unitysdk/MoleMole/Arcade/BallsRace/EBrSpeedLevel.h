#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int EBrSpeedLevel_TypeDefinitionIndex = 81574;

	enum class EBrSpeedLevel : ::System::Int32
	{
		Level0 = 0,
		Level2 = 2,
		Level1 = 1,
		LevelMax = 3,
		None = -1,
		Idle = 4,
	};
}
