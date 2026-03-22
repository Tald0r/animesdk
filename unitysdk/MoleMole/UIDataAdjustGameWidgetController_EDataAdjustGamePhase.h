#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController_EDataAdjustGamePhase_TypeDefinitionIndex = 44362;

	enum class UIDataAdjustGameWidgetController_EDataAdjustGamePhase : ::System::Int32
	{
		Winning = 4,
		Start = 1,
		None = 0,
		InGame = 3,
		Countdown = 2,
	};
}
