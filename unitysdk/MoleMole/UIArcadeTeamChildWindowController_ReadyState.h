#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController_ReadyState_TypeDefinitionIndex = 50935;

	enum class UIArcadeTeamChildWindowController_ReadyState : ::System::Int32
	{
		MatchReady = 2,
		Matching = 1,
		WaitMatch = 0,
	};
}
