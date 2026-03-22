#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TOKEN_TypeDefinitionIndex = 8187;

	enum class Json_TOKEN : ::System::Int32
	{
		NONE = 0,
		COLON = 5,
		NULL = 11,
		SQUARED_CLOSE = 4,
		STRING = 7,
		FALSE = 10,
		SQUARED_OPEN = 3,
		CURLY_CLOSE = 2,
		COMMA = 6,
		TRUE = 9,
		NUMBER = 8,
		CURLY_OPEN = 1,
	};
}
