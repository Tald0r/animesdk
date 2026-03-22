#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionEvaluationMode_TypeDefinitionIndex = 26942;

	enum class StateTreeConditionEvaluationMode : ::System::Int32
	{
		Evaluated = 0,
		ForcedTrue = 1,
		ForcedFalse = 2,
	};
}
