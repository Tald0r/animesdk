#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 74749;

	enum class UISummerFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		LongPress = 5,
		WaitFish = 1,
		WaitBattle = 3,
		QTE = 2,
		None = 0,
		ContinueClick = 4,
		Normal = 6,
	};
}
