#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateSelectionBehavior_TypeDefinitionIndex = 26976;

	enum class StateTreeStateSelectionBehavior : ::System::Int32
	{
		None = 0,
		TryEnterState = 1,
		TrySelectChildrenInOrder = 2,
		TryFollowTransitions = 3,
	};
}
