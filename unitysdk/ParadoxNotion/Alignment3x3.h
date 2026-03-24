#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int Alignment3x3_TypeDefinitionIndex = 26738;

	enum class Alignment3x3 : ::System::Int32
	{
		TopCenter = 1,
		BottomRight = 8,
		BottomCenter = 7,
		BottomLeft = 6,
		MiddleRight = 5,
		MiddleCenter = 4,
		MiddleLeft = 3,
		TopLeft = 0,
		TopRight = 2,
	};
}
