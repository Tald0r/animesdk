#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineNodeRuntime_BlockState_EBlockState_TypeDefinitionIndex = 46463;

	enum class PathGraphSplineNodeRuntime_BlockState_EBlockState : ::System::Int32
	{
		BlockAtExit = 2,
		BlockImmediately = 3,
		BlockAtEnter = 1,
		None = 0,
	};
}
