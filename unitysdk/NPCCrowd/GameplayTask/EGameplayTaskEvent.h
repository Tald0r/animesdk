#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EGameplayTaskEvent_TypeDefinitionIndex = 68505;

	enum class EGameplayTaskEvent : ::System::Int32
	{
		Remove = 1,
		Add = 0,
	};
}
