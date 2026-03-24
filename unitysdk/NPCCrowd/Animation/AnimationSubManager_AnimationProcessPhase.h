#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationProcessPhase_TypeDefinitionIndex = 59639;

	enum class AnimationSubManager_AnimationProcessPhase : ::System::Int32
	{
		Count = 4,
		PreUpdate = 0,
		PostUpdate = 2,
		LateUpdate = 3,
		Update = 1,
	};
}
