#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationProcessPhase_TypeDefinitionIndex = 71108;

	enum class AnimationSubManager_AnimationProcessPhase : ::System::Int32
	{
		Count = 4,
		PostUpdate = 2,
		PreUpdate = 0,
		Update = 1,
		LateUpdate = 3,
	};
}
