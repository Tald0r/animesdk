#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 37822;

	enum class UIFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		WaitFish = 1,
		LongPress = 5,
		ContinueClick = 4,
		QTE = 2,
		WaitBattle = 3,
		None = 0,
	};
}
