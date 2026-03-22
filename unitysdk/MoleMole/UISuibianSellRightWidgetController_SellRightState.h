#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianSellRightWidgetController_SellRightState_TypeDefinitionIndex = 37286;

	enum class UISuibianSellRightWidgetController_SellRightState : ::System::Int32
	{
		None = -1,
		HasSameProductTypeInOtherShelve = 1,
		UpShelveNotEnough = 2,
		DownShelve = 4,
		UpShelveEnough = 3,
		GoResearch = 0,
	};
}
