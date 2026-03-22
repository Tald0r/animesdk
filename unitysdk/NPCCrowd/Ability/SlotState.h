#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 51845;

	enum class SlotState : ::System::Int32
	{
		Occupying = 1,
		Occupied = 2,
		Released = 0,
		Releasing = 3,
	};
}
