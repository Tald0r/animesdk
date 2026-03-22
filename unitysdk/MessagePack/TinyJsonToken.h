#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 25698;

	enum class TinyJsonToken : ::System::Int32
	{
		False = 8,
		EndArray = 4,
		Null = 9,
		Number = 5,
		StartArray = 3,
		None = 0,
		True = 7,
		String = 6,
		StartObject = 1,
		EndObject = 2,
	};
}
