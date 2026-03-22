#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphRuntimeHelper_GraphBinaryMode_TypeDefinitionIndex = 26330;

	enum class GraphRuntimeHelper_GraphBinaryMode : ::System::Int32
	{
		BINARY_NONE = 0,
		BINARY_DESERIALIZE = 8,
		BINARY_SERIALIZE = 4,
	};
}
