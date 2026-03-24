#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateInterpolateType_TypeDefinitionIndex = 75235;

	enum class FrameRateInterpolateType : ::System::Int32
	{
		None = 0,
		High = 3,
		Low = 1,
		Middle = 2,
	};
}
