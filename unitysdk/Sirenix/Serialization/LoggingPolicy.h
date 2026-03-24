#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int LoggingPolicy_TypeDefinitionIndex = 6499;

	enum class LoggingPolicy : ::System::Int32
	{
		LogErrors = 0,
		LogWarningsAndErrors = 1,
		Silent = 2,
	};
}
