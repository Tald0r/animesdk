#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECameraMove_TypeDefinitionIndex = 10096;

	enum class ECameraMove : ::System::Int16
	{
		Player = 1,
		Back = 4,
		TriggerPosition = 0,
		CustomBound = 3,
		EnumCount = 5,
		Center = 2,
	};
}
