#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AITargetType_TypeDefinitionIndex = 73301;

	enum class AITargetType : ::System::Int32
	{
		LockTarget = 1,
		Custom = 3,
		Self = 0,
		LocalAvatar = 2,
	};
}
