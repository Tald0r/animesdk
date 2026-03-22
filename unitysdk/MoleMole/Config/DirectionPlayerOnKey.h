#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionPlayerOnKey_TypeDefinitionIndex = 67151;

	enum class DirectionPlayerOnKey : ::System::Int32
	{
		ConveyerBeltPushArrive = 8,
		PushBackArrive = 3,
		OneStepBlocked = 4,
		StringPushStart = 6,
		Move = 1,
		PushDistanceArrive = 10,
		ContinousMoveBlocked = 5,
		StringPushArrive = 7,
		BeforePushBack = 2,
		None = 0,
		PushDistanceStart = 9,
	};
}
