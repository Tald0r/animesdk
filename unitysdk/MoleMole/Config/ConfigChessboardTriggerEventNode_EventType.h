#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_EventType_TypeDefinitionIndex = 74931;

	enum class ConfigChessboardTriggerEventNode_EventType : ::System::Int32
	{
		CustomEvent = 2,
		SwitchEvent = 1,
		PerformEvent = 0,
	};
}
