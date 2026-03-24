#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ELevelNodeState_TypeDefinitionIndex = 16029;

	enum class ELevelNodeState : ::System::Int16
	{
		Finish = 1,
		EnumCount = 6,
		RunningAndNotUnlockByServer = 4,
		WaitingServer = 5,
		Running = 2,
		GiveUp = 3,
	};
}
