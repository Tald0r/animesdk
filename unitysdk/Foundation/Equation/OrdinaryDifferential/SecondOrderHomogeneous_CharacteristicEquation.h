#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderHomogeneous_CharacteristicEquation_TypeDefinitionIndex = 8987;

	enum class SecondOrderHomogeneous_CharacteristicEquation : ::System::Int32
	{
		SingleRealRoot = 1,
		TwoRealRoots = 0,
		TwoVirtualRoots = 2,
	};
}
