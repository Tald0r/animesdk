#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__BonusTimeState_TypeDefinitionIndex = 60652;

	enum class UIGeneralNewsBubbleRowWidgetController__BonusTimeState : ::System::Int32
	{
		IsShowing = 1,
		BlinkWait = 5,
		IsDoFadeOut = 2,
		BlinkRestart = 3,
		Blinking = 4,
		Ready = 0,
	};
}
