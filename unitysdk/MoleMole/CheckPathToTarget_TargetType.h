#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CheckPathToTarget_TargetType_TypeDefinitionIndex = 70256;

	enum class CheckPathToTarget_TargetType : ::System::Int32
	{
		LocalAvatar = 1,
		LockTarget = 0,
	};
}
