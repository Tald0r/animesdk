#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorControllerType_TypeDefinitionIndex = 76307;

	enum class ENPCCPUAnimatorControllerType : ::System::Byte
	{
		StateMachine = 0x1,
		Bits = 0x1,
		Mask = 0x1,
		PathFollow = 0x0,
	};
}
