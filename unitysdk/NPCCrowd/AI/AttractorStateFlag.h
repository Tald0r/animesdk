#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorStateFlag_TypeDefinitionIndex = 78215;

	enum class AttractorStateFlag : ::System::Int32
	{
		InValid = 1,
		Valid = 2,
		Claimed = 4,
		Occupied = 8,
	};
}
