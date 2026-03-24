#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_Step_TypeDefinitionIndex = 56575;

	enum class ParallelFileVerifier_Step : ::System::Int32
	{
		Pre = 1,
		Finish = 4,
		FileHash = 2,
		CheckResult = 3,
		Init = 0,
	};
}
