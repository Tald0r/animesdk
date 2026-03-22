#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimePeriodTypeFlag_TypeDefinitionIndex = 45189;

	enum class TimePeriodTypeFlag : ::System::Int32
	{
		MORNING = 2,
		AFTERNOON = 4,
		NIGHT = 16,
		EVENING = 8,
	};
}
