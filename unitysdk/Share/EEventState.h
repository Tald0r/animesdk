#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventState_TypeDefinitionIndex = 11432;

	enum class EEventState : ::System::Int16
	{
		Initing = 0,
		EnumCount = 7,
		WaitingClient = 4,
		Pause = 2,
		WaitingMsg = 3,
		Running = 1,
		Error = 6,
		Finished = 5,
	};
}
