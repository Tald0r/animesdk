#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 8193;

	enum class Segment : ::System::Int32
	{
		LateUpdate = 2,
		SlowUpdate = 3,
		FixedUpdate = 1,
		Invalid = -1,
		Update = 0,
	};
}
