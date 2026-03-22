#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AITargetType_TypeDefinitionIndex = 51857;

	enum class AITargetType : ::System::Int32
	{
		LockTarget = 1,
		Self = 0,
		LocalAvatar = 2,
		Custom = 3,
	};
}
