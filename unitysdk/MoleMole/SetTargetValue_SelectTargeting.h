#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SetTargetValue_SelectTargeting_TypeDefinitionIndex = 67467;

	enum class SetTargetValue_SelectTargeting : ::System::Int32
	{
		LocalAvatar = 4,
		SelectTarget = 3,
		AllAllied = 1,
		AllEnemy = 0,
		AllNeutral = 2,
	};
}
