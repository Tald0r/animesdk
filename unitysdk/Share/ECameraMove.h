#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECameraMove_TypeDefinitionIndex = 15663;

	enum class ECameraMove : ::System::Int16
	{
		Player = 1,
		CustomBound = 3,
		EnumCount = 5,
		Center = 2,
		Back = 4,
		TriggerPosition = 0,
	};
}
