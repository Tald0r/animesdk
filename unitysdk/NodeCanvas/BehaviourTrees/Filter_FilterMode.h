#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_FilterMode_TypeDefinitionIndex = 26744;

	enum class Filter_FilterMode : ::System::Int32
	{
		LimitNumberOfTimes = 0,
		CoolDown = 1,
	};
}
