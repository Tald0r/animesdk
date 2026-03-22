#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCAnimatorRuntimeInstanceDataFlag_TypeDefinitionIndex = 76957;

	enum class ENPCAnimatorRuntimeInstanceDataFlag : ::System::Byte
	{
		IsStarted = 0x2,
		Looping = 0x1,
		DrivenByStateMachine = 0x4,
		None = 0x0,
	};
}
