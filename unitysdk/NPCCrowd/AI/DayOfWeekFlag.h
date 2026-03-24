#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int DayOfWeekFlag_TypeDefinitionIndex = 61753;

	enum class DayOfWeekFlag : ::System::Int32
	{
		Tuesday = 4,
		Monday = 2,
		Thursday = 16,
		Friday = 32,
		Saturday = 64,
		Sunday = 1,
		Wednesday = 8,
	};
}
