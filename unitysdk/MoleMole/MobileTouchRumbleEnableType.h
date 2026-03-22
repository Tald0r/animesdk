#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleEnableType_TypeDefinitionIndex = 61147;

	enum class MobileTouchRumbleEnableType : ::System::Int32
	{
		OnlyEnablePerform = 1,
		AllEnable = 3,
		Disable = 0,
		OnlyEnableBattle = 2,
	};
}
