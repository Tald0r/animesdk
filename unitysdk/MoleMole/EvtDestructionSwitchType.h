#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EvtDestructionSwitchType_TypeDefinitionIndex = 50466;

	enum class EvtDestructionSwitchType : ::System::Int32
	{
		Die = 2,
		ExitStatus = 0,
		EnterStatus = 1,
	};
}
