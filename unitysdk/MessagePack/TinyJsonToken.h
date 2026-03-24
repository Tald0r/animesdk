#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 27147;

	enum class TinyJsonToken : ::System::Int32
	{
		Number = 5,
		EndObject = 2,
		Null = 9,
		String = 6,
		None = 0,
		True = 7,
		StartObject = 1,
		False = 8,
		StartArray = 3,
		EndArray = 4,
	};
}
