#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 7737;

	enum class JsonToken : ::System::Int32
	{
		Long = 7,
		Int = 6,
		String = 9,
		None = 0,
		PropertyName = 2,
		Double = 8,
		Null = 12,
		ArrayEnd = 5,
		ObjectEnd = 3,
		Comment = 11,
		ArrayStart = 4,
		ObjectStart = 1,
		Boolean = 10,
	};
}
