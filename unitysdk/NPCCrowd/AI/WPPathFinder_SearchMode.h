#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPPathFinder_SearchMode_TypeDefinitionIndex = 74366;

	enum class WPPathFinder_SearchMode : ::System::Int32
	{
		Complex = 2,
		Simple = 0,
		Intermediate = 1,
	};
}
