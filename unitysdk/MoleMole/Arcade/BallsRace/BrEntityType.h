#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrEntityType_TypeDefinitionIndex = 81321;

	enum class BrEntityType : ::System::Int32
	{
		Accelerate = 6,
		World = 1,
		StartLine = 53,
		BestScore = 8,
		WelcomeGuy = 56,
		TimePoint = 5,
		Arrow = 54,
		FakeGeneral = 55,
		Pillar = 51,
		Tile = 3,
		Decelerate = 7,
		None = 0,
		Spike = 4,
		Player = 2,
		FakePlayer = 52,
	};
}
