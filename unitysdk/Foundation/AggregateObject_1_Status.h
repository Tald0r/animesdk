#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_Status_TypeDefinitionIndex = 9190;

	enum class AggregateObject_1_Status : ::System::Int32
	{
		None = 0,
		OnRegistered = 2,
		Initialized = 3,
		IsRegistering = 1,
	};
}
