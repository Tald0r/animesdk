#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionState_TypeDefinitionIndex = 12952;

	enum class EActionState : ::System::Int16
	{
		Error = 3,
		Init = 0,
		EnumCount = 4,
		Finished = 2,
		Running = 1,
	};
}
