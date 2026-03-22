#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventTriggerResult_TypeDefinitionIndex = 16153;

	enum class EEventTriggerResult : ::System::Int16
	{
		NotFinish = -1,
		Finish = 2,
		NotTrigger = 0,
		All = 3,
		Trigger = 1,
	};
}
