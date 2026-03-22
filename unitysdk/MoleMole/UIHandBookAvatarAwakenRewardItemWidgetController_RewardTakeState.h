#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState_TypeDefinitionIndex = 63013;

	enum class UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState : ::System::Int32
	{
		CanTake = 1,
		CanNotTake = 0,
		AlreadyTaken = 2,
	};
}
