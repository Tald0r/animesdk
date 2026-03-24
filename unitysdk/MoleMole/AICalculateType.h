#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICalculateType_TypeDefinitionIndex = 45744;

	enum class AICalculateType : ::System::Int32
	{
		Sub = 1,
		Add = 0,
		Mul = 2,
		Div = 3,
	};
}
