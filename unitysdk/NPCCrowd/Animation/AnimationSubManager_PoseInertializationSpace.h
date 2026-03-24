#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationSpace_TypeDefinitionIndex = 59682;

	enum class AnimationSubManager_PoseInertializationSpace : ::System::Int32
	{
		WorldRotation = 2,
		WorldSpace = 1,
		LocalSpace = 0,
	};
}
