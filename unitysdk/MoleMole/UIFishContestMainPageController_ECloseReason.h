#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_ECloseReason_TypeDefinitionIndex = 37507;

	enum class UIFishContestMainPageController_ECloseReason : ::System::Int32
	{
		Timeout = 2,
		FinishFish = 1,
		ManualClose = 0,
	};
}
