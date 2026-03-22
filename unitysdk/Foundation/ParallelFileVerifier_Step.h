#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_Step_TypeDefinitionIndex = 73082;

	enum class ParallelFileVerifier_Step : ::System::Int32
	{
		Pre = 1,
		Init = 0,
		FileHash = 2,
		CheckResult = 3,
		Finish = 4,
	};
}
