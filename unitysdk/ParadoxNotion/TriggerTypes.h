#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int TriggerTypes_TypeDefinitionIndex = 25462;

	enum class TriggerTypes : ::System::Int32
	{
		TriggerStay = 2,
		TriggerEnter = 0,
		TriggerExit = 1,
	};
}
