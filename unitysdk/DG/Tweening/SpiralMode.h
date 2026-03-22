#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int SpiralMode_TypeDefinitionIndex = 31449;

	enum class SpiralMode : ::System::Int32
	{
		Expand = 0,
		ExpandThenContract = 1,
	};
}
