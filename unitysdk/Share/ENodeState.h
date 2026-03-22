#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeState_TypeDefinitionIndex = 11780;

	enum class ENodeState : ::System::Int16
	{
		EnumCount = 12,
		All = 0,
		Guide = 7,
		Door = 5,
		Unlocked = 2,
		Finished = 3,
		Target = 8,
		Locked = 1,
		BrightenOnlyVisible = 9,
		Unstable = 10,
		Empty = 11,
		ShowEvent = 4,
		Brighten = 6,
	};
}
