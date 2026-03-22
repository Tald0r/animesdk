#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAutoPopWindowController_AutoState_TypeDefinitionIndex = 44741;

	enum class UIYorozuyaAutoPopWindowController_AutoState : ::System::Int32
	{
		CannotStart = 1,
		CanStart = 3,
		Lock = 0,
		Complete = 5,
		GotAllReward = 2,
		Progress = 4,
	};
}
