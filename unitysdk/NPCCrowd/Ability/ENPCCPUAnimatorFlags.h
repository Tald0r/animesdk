#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorFlags_TypeDefinitionIndex = 62957;

	enum class ENPCCPUAnimatorFlags : ::System::Byte
	{
		IsTurning = 0x8,
		HasAnimation = 0x2,
		ControllerMask = 0x1,
		IsMoving = 0x4,
		None = 0x0,
	};
}
