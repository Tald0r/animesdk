#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_LogMode_TypeDefinitionIndex = 25981;

	enum class DebugLogText_LogMode : ::System::Int32
	{
		Warning = 1,
		Error = 2,
		Log = 0,
	};
}
