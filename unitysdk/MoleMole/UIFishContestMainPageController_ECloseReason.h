#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_ECloseReason_TypeDefinitionIndex = 67675;

	enum class UIFishContestMainPageController_ECloseReason : ::System::Int32
	{
		FinishFish = 1,
		Timeout = 2,
		ManualClose = 0,
	};
}
