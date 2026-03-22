#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EAbilityActionTaskState_TypeDefinitionIndex = 45851;

	enum class EAbilityActionTaskState : ::System::Int32
	{
		Active = 3,
		AwaitingActivation = 1,
		Paused = 2,
		Uninitialized = 0,
		Finished = 4,
	};
}
