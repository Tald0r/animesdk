#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAttractorSlotState_TypeDefinitionIndex = 79698;

	enum class EAttractorSlotState : ::System::Int32
	{
		Occupied = 3,
		InValid = 0,
		Claimed = 2,
		Valid = 1,
	};
}
