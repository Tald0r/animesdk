#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InlevelCameraState_TypeDefinitionIndex = 59981;

	enum class InlevelCameraState : ::System::Int32
	{
		Normal = 0,
		Fighting = 1,
		MainCityIndoor = 7,
		Observe = 5,
		Custom = 2,
		MainCityNormal = 6,
		FightingLevel2 = 3,
		FightingLevel3 = 4,
	};
}
