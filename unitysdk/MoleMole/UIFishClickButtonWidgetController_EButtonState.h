#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 40115;

	enum class UIFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		WaitFish = 1,
		QTE = 2,
		None = 0,
		ContinueClick = 4,
		WaitBattle = 3,
		LongPress = 5,
	};
}
