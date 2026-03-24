#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKJointAssignPolicy_TypeDefinitionIndex = 59729;

	enum class AnimationSubManager_TwoBonesIKJointAssignPolicy : ::System::Int32
	{
		ManuallySet = 4,
		RelativeToCenter = 3,
		RelativeToEffector = 2,
		UseMiddleBone = 1,
		DontCare = 0,
	};
}
