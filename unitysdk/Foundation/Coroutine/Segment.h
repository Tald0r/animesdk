#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 7879;

	enum class Segment : ::System::Int32
	{
		LateUpdate = 2,
		Update = 0,
		SlowUpdate = 3,
		FixedUpdate = 1,
		Invalid = -1,
	};
}
