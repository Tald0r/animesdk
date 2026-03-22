#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_ECloseReason_TypeDefinitionIndex = 62774;

	enum class UISummerFishPlayPageController_ECloseReason : ::System::Int32
	{
		FinishFish = 1,
		ManualClose = 0,
		AutoFishEnd = 4,
		Timeout = 2,
		AutoFishBack = 3,
	};
}
