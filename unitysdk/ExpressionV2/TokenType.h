#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 74589;

	enum class TokenType : ::System::Int32
	{
		RightParen = 6,
		LeftParen = 5,
		Function = 3,
		Variable = 2,
		Number = 0,
		Operator = 4,
		String = 1,
		Comma = 7,
	};
}
