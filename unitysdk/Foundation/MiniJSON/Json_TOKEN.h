#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TOKEN_TypeDefinitionIndex = 7724;

	enum class Json_TOKEN : ::System::Int32
	{
		COMMA = 6,
		CURLY_OPEN = 1,
		CURLY_CLOSE = 2,
		FALSE = 10,
		SQUARED_CLOSE = 4,
		NONE = 0,
		TRUE = 9,
		SQUARED_OPEN = 3,
		COLON = 5,
		NUMBER = 8,
		NULL = 11,
		STRING = 7,
	};
}
