#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_ExitStyle_TypeDefinitionIndex = 72747;

	enum class PathGraphExitPointComponent_ExitStyle : ::System::Int32
	{
		MoveFromSplineEndPoint = 4,
		MoveFromSplineNearestPoint = 5,
		MoveFromSplineStartPoint = 3,
		ExitAtSplineEndPoint = 1,
		ExitAtSplineNearestPoint = 2,
		ExitAtSplineStartPoint = 0,
		MoveBlendWithSplinePoints = 6,
	};
}
