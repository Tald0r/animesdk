#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestState_TypeDefinitionIndex = 15723;

	enum class EQuestState : ::System::Int16
	{
		Ready = 10,
		InProgress = 1,
		ToFinish = 2,
		Finished = 3,
		Unlocked = 0,
	};
}
