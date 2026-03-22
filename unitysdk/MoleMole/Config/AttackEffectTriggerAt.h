#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackEffectTriggerAt_TypeDefinitionIndex = 73465;

	enum class AttackEffectTriggerAt : ::System::Int32
	{
		TriggerAtHitPointRandom = 2,
		TriggerAtHitPoint = 1,
		TriggerAtSelfCoordinate = 3,
		TriggerAtEntity = 0,
	};
}
