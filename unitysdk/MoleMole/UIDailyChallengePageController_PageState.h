#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController_PageState_TypeDefinitionIndex = 56118;

	enum class UIDailyChallengePageController_PageState : ::System::Int32
	{
		TurningToLineup = 1,
		SelectLevel = 0,
		TuringToLevel = 3,
		SelectLineup = 2,
	};
}
