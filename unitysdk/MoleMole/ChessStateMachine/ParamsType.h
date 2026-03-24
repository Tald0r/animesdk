#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsType_TypeDefinitionIndex = 37865;

	enum class ParamsType : ::System::Int32
	{
		Int = 2,
		Bool = 0,
		OnceTrigger = 4,
		NULL = 5,
		Trigger = 3,
		Float = 1,
	};
}
