#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RewardTakeState_TypeDefinitionIndex = 76321;

	enum class UIBossChallengeRewardItemWidgetController_RewardTakeState : ::System::Int32
	{
		CanNotTake = 0,
		CanTake = 1,
		AlreadyTaken = 2,
	};
}
