#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Parallel_ParallelPolicy_TypeDefinitionIndex = 25559;

	enum class Parallel_ParallelPolicy : ::System::Int32
	{
		FirstSuccess = 1,
		FirstFailure = 0,
		FirstSuccessOrFailure = 2,
	};
}
