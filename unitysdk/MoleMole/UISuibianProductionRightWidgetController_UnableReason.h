#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController_UnableReason_TypeDefinitionIndex = 39145;

	enum class UISuibianProductionRightWidgetController_UnableReason : ::System::Int32
	{
		MaterialNotEnough = 3,
		UnResearch = 4,
		BuddyEnergyNotEnough = 2,
		NeedBuddy = 1,
		None = 0,
	};
}
