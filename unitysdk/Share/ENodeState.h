#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeState_TypeDefinitionIndex = 9684;

	enum class ENodeState : ::System::Int16
	{
		All = 0,
		Target = 8,
		Locked = 1,
		Unstable = 10,
		Finished = 3,
		Door = 5,
		ShowEvent = 4,
		EnumCount = 12,
		Empty = 11,
		Brighten = 6,
		Unlocked = 2,
		BrightenOnlyVisible = 9,
		Guide = 7,
	};
}
