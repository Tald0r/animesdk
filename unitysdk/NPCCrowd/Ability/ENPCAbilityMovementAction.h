#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCAbilityMovementAction_TypeDefinitionIndex = 58244;

	enum class ENPCAbilityMovementAction : ::System::Int32
	{
		Stand = 0,
		Freeze = 2,
		MotionMove = 5,
		Move = 1,
		Turn = 3,
		Animate = 4,
	};
}
