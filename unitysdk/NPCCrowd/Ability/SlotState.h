#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 45117;

	enum class SlotState : ::System::Int32
	{
		Occupied = 2,
		Releasing = 3,
		Released = 0,
		Occupying = 1,
	};
}
