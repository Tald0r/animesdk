#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeRunStatus_TypeDefinitionIndex = 26930;

	enum class StateTreeRunStatus : ::System::Int32
	{
		Unset = 0,
		Running = 1,
		Failed = 2,
		Succeeded = 3,
		Stopped = 4,
	};
}
