#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionTrigger_TypeDefinitionIndex = 26978;

	enum class StateTreeTransitionTrigger : ::System::Int32
	{
		None = 0,
		OnStateCompleted = 3,
		OnStateSucceeded = 1,
		OnStateFailed = 2,
		OnTick = 4,
		OnEvent = 8,
	};
}
