#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestState_TypeDefinitionIndex = 14291;

	enum class EQuestState : ::System::Int16
	{
		Finished = 3,
		Ready = 10,
		Unlocked = 0,
		ToFinish = 2,
		InProgress = 1,
	};
}
