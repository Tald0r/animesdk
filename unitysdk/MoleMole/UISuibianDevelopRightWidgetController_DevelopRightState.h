#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_DevelopRightState_TypeDefinitionIndex = 72040;

	enum class UISuibianDevelopRightWidgetController_DevelopRightState : ::System::Int32
	{
		GoDispatch = 0,
		None = -1,
		UpgradePreUnResearch = 3,
		AlreadyResearch = 6,
		UpgradeEnough = 5,
		UpgradeNotEnough = 4,
		ResearchEnough = 2,
		ResearchNotEnough = 1,
		AlreadyResearchLevelUp = 7,
	};
}
