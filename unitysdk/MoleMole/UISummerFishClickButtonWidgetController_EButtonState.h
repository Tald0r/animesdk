#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 38939;

	enum class UISummerFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		QTE = 2,
		WaitBattle = 3,
		Normal = 6,
		ContinueClick = 4,
		LongPress = 5,
		None = 0,
		WaitFish = 1,
	};
}
