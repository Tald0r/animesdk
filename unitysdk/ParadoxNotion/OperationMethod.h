#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int OperationMethod_TypeDefinitionIndex = 26623;

	enum class OperationMethod : ::System::Int32
	{
		Subtract = 2,
		Set = 0,
		Multiply = 3,
		Add = 1,
		Divide = 4,
	};
}
