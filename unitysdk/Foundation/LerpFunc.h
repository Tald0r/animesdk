#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LerpFunc_TypeDefinitionIndex = 8779;

	enum class LerpFunc : ::System::Int32
	{
		SmoothArrival = 14,
		CircularIn = 11,
		CircularOut = 12,
		Step = 1,
		ExpoIn = 8,
		SinInOut = 4,
		SmoothStep = 16,
		ExpoOut = 9,
		EaseIn = 5,
		EaseInOut = 7,
		EaseOut = 6,
		CircularInOut = 13,
		SmoothDeparture = 15,
		Linear = 0,
		SinIn = 2,
		SinOut = 3,
		ExpoInOut = 10,
	};
}
