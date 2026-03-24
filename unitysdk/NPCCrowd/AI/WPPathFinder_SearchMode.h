#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPPathFinder_SearchMode_TypeDefinitionIndex = 57864;

	enum class WPPathFinder_SearchMode : ::System::Int32
	{
		Simple = 0,
		Intermediate = 1,
		Complex = 2,
	};
}
