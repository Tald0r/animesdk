#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EWPPathDirection_TypeDefinitionIndex = 68871;

	enum class EWPPathDirection : ::System::Int32
	{
		Backward = 1,
		HugeRight = 3,
		HugeLeft = 2,
		Forward = 0,
	};
}
