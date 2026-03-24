#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 68409;

	enum class BubbleType : ::System::Int32
	{
		SwitchTeamLevel = -9,
		Fairy = 0,
		LevelQuest = 1,
		CountUp = -6,
		ScoreUI = -7,
		NPCDomain = -1,
		ScoreUI2 = -8,
		Gold2 = -5,
		CountDown = -3,
		Task = -4,
		Gold = -2,
	};
}
