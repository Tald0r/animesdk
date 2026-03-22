#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_PhaseEvent_TypeDefinitionIndex = 71190;

	enum class AnimationSubManager_AnimationScheduler_PhaseEvent : ::System::Int32
	{
		AfterPostUpdate = 5,
		BeforePreUpdate = 0,
		BeforeLateUpdate = 6,
		AfterLateUpdate = 7,
		AfterUpdate = 3,
		AfterPreUpdate = 1,
		BeforePostUpdate = 4,
		BeforeUpdate = 2,
		Count = 8,
	};
}
