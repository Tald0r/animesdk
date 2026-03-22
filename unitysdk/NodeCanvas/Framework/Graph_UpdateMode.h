#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph_UpdateMode_TypeDefinitionIndex = 26026;

	enum class Graph_UpdateMode : ::System::Int32
	{
		FixedUpdate = 2,
		NormalUpdate = 0,
		Manual = 3,
		LateUpdate = 1,
	};
}
