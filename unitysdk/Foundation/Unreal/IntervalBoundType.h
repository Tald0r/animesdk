#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int IntervalBoundType_TypeDefinitionIndex = 9019;

	enum class IntervalBoundType : ::System::Byte
	{
		Inclusive = 0x2,
		Exclusive = 0x1,
		Open = 0x0,
	};
}
