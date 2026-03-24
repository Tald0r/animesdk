#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph_UpdateMode_TypeDefinitionIndex = 27304;

	enum class Graph_UpdateMode : ::System::Int32
	{
		NormalUpdate = 0,
		FixedUpdate = 2,
		LateUpdate = 1,
		Manual = 3,
	};
}
