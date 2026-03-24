#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_RepeaterMode_TypeDefinitionIndex = 26038;

	enum class Repeater_RepeaterMode : ::System::Int32
	{
		RepeatTimes = 0,
		RepeatForever = 2,
		RepeatUntil = 1,
	};
}
