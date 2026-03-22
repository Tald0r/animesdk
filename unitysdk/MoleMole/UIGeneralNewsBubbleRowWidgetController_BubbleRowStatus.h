#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus_TypeDefinitionIndex = 60651;

	enum class UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus : ::System::Int32
	{
		Moving = 6,
		Normal = 1,
		FadeIn = 2,
		FadeOutFinish = 4,
		WaitForFadeIn = 0,
		MovingWaitForFadeOut = 8,
		WaitForMove = 3,
		FadeOut = 9,
		FadeInWaitMoving = 5,
		MovingWaitForFadein = 7,
	};
}
