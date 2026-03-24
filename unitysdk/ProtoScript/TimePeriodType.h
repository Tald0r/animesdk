#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 21792;

	enum class TimePeriodType : ::System::Int32
	{
		NIGHT = 4,
		TIME_PERIOD_TYPE_NONE = 0,
		EVENING = 3,
		MORNING = 1,
		AFTERNOON = 2,
		NOW = 99,
	};
}
