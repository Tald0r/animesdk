#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int RotateVectorPolicy_TypeDefinitionIndex = 8909;

	enum class RotateVectorPolicy : ::System::Byte
	{
		ByOrientation = 0x1,
		WithoutTwist = 0x2,
		ByShortestPath = 0x0,
		Default = 0x0,
	};
}
