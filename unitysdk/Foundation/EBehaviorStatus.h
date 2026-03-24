#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EBehaviorStatus_TypeDefinitionIndex = 8999;

	enum class EBehaviorStatus : ::System::Int32
	{
		ReadyToDestroy = 4,
		BlendOut = 3,
		Active = 2,
		Uninitialized = 0,
		BlendIn = 1,
	};
}
