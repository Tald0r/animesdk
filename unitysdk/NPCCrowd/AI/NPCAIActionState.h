#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIActionState_TypeDefinitionIndex = 40270;

	enum class NPCAIActionState : ::System::Int32
	{
		Completed = 2,
		InProgress = 1,
		Aborted = 3,
		Failed = 4,
		None = 0,
	};
}
