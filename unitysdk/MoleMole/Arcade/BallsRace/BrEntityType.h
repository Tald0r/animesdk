#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrEntityType_TypeDefinitionIndex = 79370;

	enum class BrEntityType : ::System::Int32
	{
		Arrow = 54,
		Tile = 3,
		Accelerate = 6,
		FakeGeneral = 55,
		BestScore = 8,
		World = 1,
		Spike = 4,
		Pillar = 51,
		Player = 2,
		None = 0,
		FakePlayer = 52,
		Decelerate = 7,
		StartLine = 53,
		WelcomeGuy = 56,
		TimePoint = 5,
	};
}
