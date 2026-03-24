#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionState_TypeDefinitionIndex = 10862;

	enum class EActionState : ::System::Int16
	{
		Finished = 2,
		Error = 3,
		Init = 0,
		EnumCount = 4,
		Running = 1,
	};
}
