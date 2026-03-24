#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseButtonTrigger_TypeDefinitionIndex = 46269;

	enum class ConfigLevelResultPerforms_LoseButtonTrigger : ::System::Int32
	{
		Rewind = 1,
		CountDown_TimeOut = 7,
		Retreat = 0,
		StartCount = 5,
		Replay = 2,
		Analyze = 3,
		CountDown_Tick = 6,
		Init = 4,
	};
}
