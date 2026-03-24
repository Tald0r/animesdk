#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventState_TypeDefinitionIndex = 12350;

	enum class EEventState : ::System::Int16
	{
		Initing = 0,
		WaitingMsg = 3,
		Running = 1,
		Error = 6,
		Pause = 2,
		Finished = 5,
		EnumCount = 7,
		WaitingClient = 4,
	};
}
