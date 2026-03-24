#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionPlayerOnKey_TypeDefinitionIndex = 76257;

	enum class DirectionPlayerOnKey : ::System::Int32
	{
		None = 0,
		PushDistanceStart = 9,
		ConveyerBeltPushArrive = 8,
		PushBackArrive = 3,
		PushDistanceArrive = 10,
		OneStepBlocked = 4,
		StringPushArrive = 7,
		StringPushStart = 6,
		Move = 1,
		BeforePushBack = 2,
		ContinousMoveBlocked = 5,
	};
}
