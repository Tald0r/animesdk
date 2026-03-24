#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPopWindowController_EHandBookTab_TypeDefinitionIndex = 65011;

	enum class UIHandBookPopWindowController_EHandBookTab : ::System::Int32
	{
		Tactics = 4,
		NormalQuest = 2,
		None = -1,
		MAX = 5,
		ProxyQuest = 0,
		HardQuest = 3,
		DailyQuest = 1,
	};
}
