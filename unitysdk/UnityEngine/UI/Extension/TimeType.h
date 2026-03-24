#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TimeType_TypeDefinitionIndex = 74618;

	enum class TimeType : ::System::Int32
	{
		Seconds = 3,
		Minutes = 2,
		Day = 0,
		Hour = 1,
	};
}
