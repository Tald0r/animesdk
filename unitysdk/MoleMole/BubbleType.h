#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 40230;

	enum class BubbleType : ::System::Int32
	{
		CountUp = -6,
		LevelQuest = 1,
		ScoreUI2 = -8,
		Fairy = 0,
		Task = -4,
		CountDown = -3,
		ScoreUI = -7,
		Gold = -2,
		NPCDomain = -1,
		Gold2 = -5,
	};
}
