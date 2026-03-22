#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int OperationMethod_TypeDefinitionIndex = 25511;

	enum class OperationMethod : ::System::Int32
	{
		Subtract = 2,
		Divide = 4,
		Multiply = 3,
		Add = 1,
		Set = 0,
	};
}
