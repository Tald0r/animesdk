#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OpCode_TypeDefinitionIndex = 59663;

	enum class AnimationSubManager_AnimationScheduler_OpCode : ::System::Byte
	{
		Process = 0x0,
		Dispatch = 0x1,
		Complete = 0x2,
	};
}
