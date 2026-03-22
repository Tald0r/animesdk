#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestSchedulePlanRowWidgetController_State_TypeDefinitionIndex = 42032;

	enum class UIDailyQuestSchedulePlanRowWidgetController_State : ::System::Int32
	{
		InProgress = 2,
		Invalid = 0,
		ToPlan = 1,
		Finished = 4,
		ToTakeReward = 3,
	};
}
