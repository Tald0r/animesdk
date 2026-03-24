#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EWPPathDirection_TypeDefinitionIndex = 73120;

	enum class EWPPathDirection : ::System::Int32
	{
		HugeRight = 3,
		Forward = 0,
		HugeLeft = 2,
		Backward = 1,
	};
}
