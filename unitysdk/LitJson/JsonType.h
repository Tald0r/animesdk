#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 8188;

	enum class JsonType : ::System::Int32
	{
		Boolean = 7,
		Object = 1,
		String = 3,
		Array = 2,
		Int = 4,
		Long = 5,
		None = 0,
		Double = 6,
	};
}
