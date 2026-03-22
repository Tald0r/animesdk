#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 20853;

	enum class TimePeriodType : ::System::Int32
	{
		NOW = 99,
		AFTERNOON = 2,
		MORNING = 1,
		EVENING = 3,
		TIME_PERIOD_TYPE_NONE = 0,
		NIGHT = 4,
	};
}
