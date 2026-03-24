#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestSchedulePlanRowWidgetController_State_TypeDefinitionIndex = 54066;

	enum class UIDailyQuestSchedulePlanRowWidgetController_State : ::System::Int32
	{
		Finished = 4,
		ToPlan = 1,
		ToTakeReward = 3,
		Invalid = 0,
		InProgress = 2,
	};
}
