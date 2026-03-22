#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TimeType_TypeDefinitionIndex = 55913;

	enum class TimeType : ::System::Int32
	{
		Day = 0,
		Minutes = 2,
		Hour = 1,
		Seconds = 3,
	};
}
