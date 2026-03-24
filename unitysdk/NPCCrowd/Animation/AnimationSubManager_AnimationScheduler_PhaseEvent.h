#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_PhaseEvent_TypeDefinitionIndex = 59666;

	enum class AnimationSubManager_AnimationScheduler_PhaseEvent : ::System::Int32
	{
		Count = 8,
		BeforePostUpdate = 4,
		BeforeUpdate = 2,
		AfterLateUpdate = 7,
		AfterUpdate = 3,
		BeforePreUpdate = 0,
		BeforeLateUpdate = 6,
		AfterPreUpdate = 1,
		AfterPostUpdate = 5,
	};
}
