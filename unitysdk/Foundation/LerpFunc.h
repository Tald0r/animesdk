#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LerpFunc_TypeDefinitionIndex = 9086;

	enum class LerpFunc : ::System::Int32
	{
		SinOut = 3,
		CircularInOut = 13,
		Linear = 0,
		ExpoIn = 8,
		EaseOut = 6,
		SmoothDeparture = 15,
		EaseIn = 5,
		Step = 1,
		CircularIn = 11,
		SmoothArrival = 14,
		ExpoInOut = 10,
		SinIn = 2,
		ExpoOut = 9,
		SinInOut = 4,
		CircularOut = 12,
		EaseInOut = 7,
		SmoothStep = 16,
	};
}
