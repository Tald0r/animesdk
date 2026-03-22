#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TimePartType_TypeDefinitionIndex = 42163;

	enum class MonoUITimerCounter_TimePartType : ::System::Int32
	{
		MILLI_SECOND_2 = 8,
		HOUR_HIGT = 512,
		MINITE_LOW = 64,
		HOUR = 768,
		SECOND = 48,
		MILLI_SECOND_1 = 4,
		MINITE_HIGT = 128,
		ALL = 2147483647,
		SECOND_LOW = 16,
		HOUR_LOW = 256,
		MINITE = 192,
		MILLI_SECOND_0 = 2,
		SECOND_HIGH = 32,
	};
}
