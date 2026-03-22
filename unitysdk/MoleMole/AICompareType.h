#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICompareType_TypeDefinitionIndex = 37006;

	enum class AICompareType : ::System::Int32
	{
		Greater = 0,
		Less = 3,
		Equal = 2,
		LessEqual = 4,
		GreaterEqual = 1,
		NotEqual = 5,
	};
}
