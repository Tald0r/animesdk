#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InlevelCameraState_TypeDefinitionIndex = 59999;

	enum class InlevelCameraState : ::System::Int32
	{
		Normal = 0,
		MainCityIndoor = 7,
		FightingLevel2 = 3,
		Custom = 2,
		FightingLevel3 = 4,
		Observe = 5,
		Fighting = 1,
		MainCityNormal = 6,
	};
}
