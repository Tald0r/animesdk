#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DebugInfoType_TypeDefinitionIndex = 8293;

	enum class DebugInfoType : ::System::Int32
	{
		SeperateCoroutines = 1,
		None = 0,
		SeperateTags = 2,
	};
}
