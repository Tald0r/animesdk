#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformInterruptType_TypeDefinitionIndex = 13663;

	enum class EPerformInterruptType : ::System::Int16
	{
		Continue = 0,
		Pause = 1,
		Reset = 2,
	};
}
