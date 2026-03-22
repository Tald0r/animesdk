#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateChangeType_TypeDefinitionIndex = 26937;

	enum class StateTreeStateChangeType : ::System::Int32
	{
		None = 0,
		Changed = 1,
		Sustained = 2,
	};
}
