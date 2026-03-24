#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 8313;

	enum class JsonType : ::System::Int32
	{
		Long = 5,
		Double = 6,
		String = 3,
		Object = 1,
		Int = 4,
		Boolean = 7,
		None = 0,
		Array = 2,
	};
}
