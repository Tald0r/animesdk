#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 7833;

	enum class JSONBinaryTag : ::System::Int32
	{
		LongValue = 8,
		Array = 1,
		FloatValue = 7,
		Value = 3,
		Class = 2,
		BoolValue = 6,
		IntValue = 4,
		DoubleValue = 5,
	};
}
