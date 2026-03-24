#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 7938;

	enum class JSONBinaryTag : ::System::Int32
	{
		BoolValue = 6,
		Value = 3,
		DoubleValue = 5,
		Array = 1,
		LongValue = 8,
		Class = 2,
		FloatValue = 7,
		IntValue = 4,
	};
}
