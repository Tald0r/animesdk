#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FootLockStatus_TypeDefinitionIndex = 50657;

	enum class FootLockStatus : ::System::Int32
	{
		RightToLeft = 5,
		None = 0,
		LeftToRight = 4,
		RightFoot = 2,
		Both = 3,
		LeftFoot = 1,
	};
}
