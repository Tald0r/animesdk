#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController_UnableReason_TypeDefinitionIndex = 38592;

	enum class UISuibianProductionRightWidgetController_UnableReason : ::System::Int32
	{
		None = 0,
		BuddyEnergyNotEnough = 2,
		MaterialNotEnough = 3,
		UnResearch = 4,
		NeedBuddy = 1,
	};
}
