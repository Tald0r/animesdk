#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_ExitStyle_TypeDefinitionIndex = 39092;

	enum class PathGraphExitPointComponent_ExitStyle : ::System::Int32
	{
		MoveFromSplineEndPoint = 4,
		MoveFromSplineStartPoint = 3,
		ExitAtSplineEndPoint = 1,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineNearestPoint = 2,
		ExitAtSplineStartPoint = 0,
	};
}
