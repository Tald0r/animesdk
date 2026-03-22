#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsType_TypeDefinitionIndex = 38546;

	enum class ParamsType : ::System::Int32
	{
		Bool = 0,
		Float = 1,
		Int = 2,
		Trigger = 3,
		NULL = 5,
		OnceTrigger = 4,
	};
}
