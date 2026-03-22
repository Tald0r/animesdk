#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 7737;

	enum class JsonToken : ::System::Int32
	{
		None = 0,
		ArrayStart = 4,
		Comment = 11,
		Long = 7,
		PropertyName = 2,
		ObjectStart = 1,
		Double = 8,
		Null = 12,
		ArrayEnd = 5,
		Boolean = 10,
		String = 9,
		Int = 6,
		ObjectEnd = 3,
	};
}
