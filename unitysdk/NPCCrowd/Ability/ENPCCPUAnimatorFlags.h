#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorFlags_TypeDefinitionIndex = 67893;

	enum class ENPCCPUAnimatorFlags : ::System::Byte
	{
		None = 0x0,
		HasAnimation = 0x2,
		ControllerMask = 0x1,
		IsTurning = 0x8,
		IsMoving = 0x4,
	};
}
