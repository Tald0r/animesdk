#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateInterpolateType_TypeDefinitionIndex = 62782;

	enum class FrameRateInterpolateType : ::System::Int32
	{
		High = 3,
		Middle = 2,
		Low = 1,
		None = 0,
	};
}
