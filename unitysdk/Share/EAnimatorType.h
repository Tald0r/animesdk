#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAnimatorType_TypeDefinitionIndex = 15455;

	enum class EAnimatorType : ::System::Int16
	{
		Int = 0,
		Bool = 1,
		Float = 3,
		Trigger = 2,
	};
}
