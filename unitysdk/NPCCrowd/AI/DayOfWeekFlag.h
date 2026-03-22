#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int DayOfWeekFlag_TypeDefinitionIndex = 60196;

	enum class DayOfWeekFlag : ::System::Int32
	{
		Monday = 2,
		Thursday = 16,
		Saturday = 64,
		Friday = 32,
		Sunday = 1,
		Wednesday = 8,
		Tuesday = 4,
	};
}
