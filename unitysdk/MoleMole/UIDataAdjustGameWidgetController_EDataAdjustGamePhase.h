#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController_EDataAdjustGamePhase_TypeDefinitionIndex = 65770;

	enum class UIDataAdjustGameWidgetController_EDataAdjustGamePhase : ::System::Int32
	{
		None = 0,
		Winning = 4,
		Countdown = 2,
		Start = 1,
		InGame = 3,
	};
}
