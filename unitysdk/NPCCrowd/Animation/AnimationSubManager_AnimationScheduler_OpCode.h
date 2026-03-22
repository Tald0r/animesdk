#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OpCode_TypeDefinitionIndex = 71186;

	enum class AnimationSubManager_AnimationScheduler_OpCode : ::System::Byte
	{
		Complete = 0x2,
		Dispatch = 0x1,
		Process = 0x0,
	};
}
