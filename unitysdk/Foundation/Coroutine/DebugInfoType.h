#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DebugInfoType_TypeDefinitionIndex = 8244;

	enum class DebugInfoType : ::System::Int32
	{
		None = 0,
		SeperateTags = 2,
		SeperateCoroutines = 1,
	};
}
