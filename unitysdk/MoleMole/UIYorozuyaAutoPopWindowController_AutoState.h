#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAutoPopWindowController_AutoState_TypeDefinitionIndex = 79052;

	enum class UIYorozuyaAutoPopWindowController_AutoState : ::System::Int32
	{
		CanStart = 3,
		CannotStart = 1,
		Complete = 5,
		Progress = 4,
		GotAllReward = 2,
		Lock = 0,
	};
}
