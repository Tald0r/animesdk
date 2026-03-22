#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_ObstacleFlags_TypeDefinitionIndex = 78492;

	enum class NPCAbilityMoveAvoidanceProcessors_ObstacleFlags : ::System::Byte
	{
		None = 0x0,
		IsMoving = 0x2,
		CanAvoid = 0x1,
	};
}
