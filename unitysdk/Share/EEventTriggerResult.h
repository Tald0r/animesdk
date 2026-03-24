#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventTriggerResult_TypeDefinitionIndex = 14759;

	enum class EEventTriggerResult : ::System::Int16
	{
		All = 3,
		Finish = 2,
		NotTrigger = 0,
		NotFinish = -1,
		Trigger = 1,
	};
}
