#pragma once
#include "unitysdk/unitysdk.h"

namespace RichTap::Types
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 34928;

	enum class State : ::System::Int32
	{
		Idle = 0,
		Stop = 1,
		Play = 2,
		Update = 3,
	};
}
