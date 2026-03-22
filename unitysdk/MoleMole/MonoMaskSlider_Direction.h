#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaskSlider_Direction_TypeDefinitionIndex = 68721;

	enum class MonoMaskSlider_Direction : ::System::Int32
	{
		BottomToTop = 2,
		TopToBottom = 3,
		HorizontalSideToCenter = 4,
		LeftToRight = 0,
		RightToLeft = 1,
	};
}
