#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorControllerType_TypeDefinitionIndex = 78550;

	enum class ENPCCPUAnimatorControllerType : ::System::Byte
	{
		Mask = 0x1,
		PathFollow = 0x0,
		Bits = 0x1,
		StateMachine = 0x1,
	};
}
