#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMoveBehaviours_TypeDefinitionIndex = 69341;

	enum class EMoveBehaviours : ::System::Int32
	{
		None = 0,
		FollowQueue = 1,
		WaitingSlot = 2,
	};
}
