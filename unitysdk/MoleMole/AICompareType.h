#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICompareType_TypeDefinitionIndex = 64847;

	enum class AICompareType : ::System::Int32
	{
		Less = 3,
		NotEqual = 5,
		Greater = 0,
		LessEqual = 4,
		Equal = 2,
		GreaterEqual = 1,
	};
}
