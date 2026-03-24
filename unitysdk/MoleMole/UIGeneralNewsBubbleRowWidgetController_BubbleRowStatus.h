#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus_TypeDefinitionIndex = 73184;

	enum class UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus : ::System::Int32
	{
		Moving = 6,
		MovingWaitForFadein = 7,
		Normal = 1,
		FadeOutFinish = 4,
		FadeOut = 9,
		MovingWaitForFadeOut = 8,
		WaitForFadeIn = 0,
		WaitForMove = 3,
		FadeIn = 2,
		FadeInWaitMoving = 5,
	};
}
