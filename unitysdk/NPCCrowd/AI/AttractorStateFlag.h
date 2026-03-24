#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorStateFlag_TypeDefinitionIndex = 64178;

	enum class AttractorStateFlag : ::System::Int32
	{
		Occupied = 8,
		InValid = 1,
		Valid = 2,
		Claimed = 4,
	};
}
