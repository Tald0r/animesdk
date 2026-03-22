#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationSpace_TypeDefinitionIndex = 71214;

	enum class AnimationSubManager_PoseInertializationSpace : ::System::Int32
	{
		LocalSpace = 0,
		WorldSpace = 1,
		WorldRotation = 2,
	};
}
