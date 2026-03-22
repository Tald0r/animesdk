#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EBehaviorStatus_TypeDefinitionIndex = 9085;

	enum class EBehaviorStatus : ::System::Int32
	{
		Active = 2,
		ReadyToDestroy = 4,
		Uninitialized = 0,
		BlendOut = 3,
		BlendIn = 1,
	};
}
