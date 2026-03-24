#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_ProgressAnimType_TypeDefinitionIndex = 42188;

	enum class UIMainCityClockWidgetController_ProgressAnimType : ::System::Int32
	{
		CrossDayReverse = 3,
		None = 0,
		CrossDay = 2,
		Advance = 1,
		CrossDayFadeOut = 4,
	};
}
