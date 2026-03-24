#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp_TypeDefinitionIndex = 41961;

	enum class ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp : ::System::Int32
	{
		GreaterThan = 1,
		GreaterThanOrEqual = 4,
		Equal = 2,
		NotEqual = 6,
		LessThan = 3,
		LessThanOrEqual = 5,
	};
}
