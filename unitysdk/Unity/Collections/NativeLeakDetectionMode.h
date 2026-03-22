#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeLeakDetectionMode_TypeDefinitionIndex = 5086;

	enum class NativeLeakDetectionMode : ::System::Int32
	{
		EnabledWithStackTrace = 3,
		Enabled = 2,
		Disabled = 1,
	};
}
