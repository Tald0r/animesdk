#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionSourceType_TypeDefinitionIndex = 26939;

	enum class StateTreeTransitionSourceType : ::System::Int32
	{
		Unset = 0,
		Asset = 1,
		ExternalRequest = 2,
		Internal = 3,
	};
}
