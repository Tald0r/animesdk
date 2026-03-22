#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int TimeZoneInfoOptions_TypeDefinitionIndex = 330;

	enum class TimeZoneInfoOptions : ::System::Int32
	{
		None = 1,
		NoThrowOnInvalidTime = 2,
	};
}
