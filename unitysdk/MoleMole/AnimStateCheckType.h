#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStateCheckType_TypeDefinitionIndex = 73881;

	enum class AnimStateCheckType : ::System::Int32
	{
		LoopCheckAlways = 2,
		LoopCheckOnce = 1,
		Normal = 0,
	};
}
