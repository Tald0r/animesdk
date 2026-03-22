#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAttractorSlotState_TypeDefinitionIndex = 51387;

	enum class EAttractorSlotState : ::System::Int32
	{
		Occupied = 3,
		Claimed = 2,
		InValid = 0,
		Valid = 1,
	};
}
