#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_MissionRowType_TypeDefinitionIndex = 61279;

	enum class UIHollowResultPageController_MissionRowType : ::System::Int32
	{
		Mission = 0,
		Challenge = 4,
		CompleteItem = 5,
		Statistics = 1,
		Empty = 2,
		TheGun = 7,
		AbyssPeriod = 3,
		Custom = 6,
	};
}
