#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Parallel_ParallelPolicy_TypeDefinitionIndex = 27246;

	enum class Parallel_ParallelPolicy : ::System::Int32
	{
		FirstSuccessOrFailure = 2,
		FirstFailure = 0,
		FirstSuccess = 1,
	};
}
