#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseButtonTrigger_TypeDefinitionIndex = 46848;

	enum class ConfigLevelResultPerforms_LoseButtonTrigger : ::System::Int32
	{
		Init = 4,
		Retreat = 0,
		CountDown_Tick = 6,
		Replay = 2,
		StartCount = 5,
		Analyze = 3,
		CountDown_TimeOut = 7,
		Rewind = 1,
	};
}
