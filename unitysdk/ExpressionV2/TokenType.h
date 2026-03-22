#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 60352;

	enum class TokenType : ::System::Int32
	{
		Variable = 2,
		Number = 0,
		Comma = 7,
		Operator = 4,
		Function = 3,
		RightParen = 6,
		String = 1,
		LeftParen = 5,
	};
}
