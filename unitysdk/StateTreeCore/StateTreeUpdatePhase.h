#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeUpdatePhase_TypeDefinitionIndex = 26931;

	enum class StateTreeUpdatePhase : ::System::Int32
	{
		Unset = 0,
		StartTree = 1,
		StopTree = 2,
		StartGlobalTasks = 3,
		StopGlobalTasks = 4,
		TickStateTree = 5,
		ApplyTransitions = 6,
		TriggerTransitions = 7,
		TickingGlobalTasks = 8,
		TickingTasks = 9,
		TransitionConditions = 10,
		StateSelection = 11,
		TrySelectBehavior = 12,
		EnterConditions = 13,
		EnterStates = 14,
		ExitStates = 15,
		StateCompleted = 16,
	};
}
