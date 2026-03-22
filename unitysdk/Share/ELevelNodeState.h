#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ELevelNodeState_TypeDefinitionIndex = 11034;

	enum class ELevelNodeState : ::System::Int16
	{
		EnumCount = 6,
		RunningAndNotUnlockByServer = 4,
		Finish = 1,
		WaitingServer = 5,
		Running = 2,
		GiveUp = 3,
	};
}
