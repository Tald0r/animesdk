#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_VerboseMode_TypeDefinitionIndex = 26751;

	enum class DebugLogText_VerboseMode : ::System::Int32
	{
		LogOnly = 1,
		DisplayLabelOnly = 2,
		LogAndDisplayLabel = 0,
	};
}
