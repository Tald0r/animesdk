#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Iterator_TerminationConditions_TypeDefinitionIndex = 26120;

	enum class Iterator_TerminationConditions : ::System::Int32
	{
		None = 0,
		FirstSuccess = 1,
		FirstFailure = 2,
	};
}
