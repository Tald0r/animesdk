#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionType_TypeDefinitionIndex = 62032;

	enum class PathGraphSplineConfig_PathGraphPointRegionType : ::System::Int32
	{
		Slope = 2,
		StairTransition = 3,
		Stair = 1,
		FlatGround = 0,
	};
}
