#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionCompiler_ExpressionMode_TypeDefinitionIndex = 38612;

	enum class ExpressionCompiler_ExpressionMode : ::System::Int32
	{
		DoubleCheck = 2,
		V2 = 1,
		V1 = 0,
	};
}
