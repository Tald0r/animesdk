#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionOperand_TypeDefinitionIndex = 26981;

	enum class StateTreeConditionOperand : ::System::Int32
	{
		Copy = 0,
		And = 1,
		Or = 2,
	};
}
