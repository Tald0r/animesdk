#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionType_TypeDefinitionIndex = 74092;

	enum class PathGraphSplineConfig_PathGraphPointRegionType : ::System::Int32
	{
		Stair = 1,
		Slope = 2,
		FlatGround = 0,
		StairTransition = 3,
	};
}
