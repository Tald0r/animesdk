#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionPriority_TypeDefinitionIndex = 26979;

	enum class StateTreeTransitionPriority : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Medium = 2,
		High = 3,
		Critical = 4,
	};
}
