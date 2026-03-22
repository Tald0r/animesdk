#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCAbilityMovementAction_TypeDefinitionIndex = 78022;

	enum class ENPCAbilityMovementAction : ::System::Int32
	{
		Turn = 3,
		Stand = 0,
		MotionMove = 5,
		Move = 1,
		Freeze = 2,
		Animate = 4,
	};
}
