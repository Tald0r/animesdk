#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIActionState_TypeDefinitionIndex = 80908;

	enum class NPCAIActionState : ::System::Int32
	{
		InProgress = 1,
		Aborted = 3,
		Failed = 4,
		None = 0,
		Completed = 2,
	};
}
