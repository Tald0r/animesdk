#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_DevelopRightState_TypeDefinitionIndex = 68101;

	enum class UISuibianDevelopRightWidgetController_DevelopRightState : ::System::Int32
	{
		UpgradeNotEnough = 4,
		AlreadyResearch = 6,
		GoDispatch = 0,
		None = -1,
		UpgradeEnough = 5,
		UpgradePreUnResearch = 3,
		ResearchEnough = 2,
		AlreadyResearchLevelUp = 7,
		ResearchNotEnough = 1,
	};
}
