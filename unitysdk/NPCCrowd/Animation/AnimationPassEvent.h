#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPassEvent_TypeDefinitionIndex = 75763;

	enum class AnimationPassEvent : ::System::Int32
	{
		BeforeForwardKinematics = 100,
		AfterInverseKinematics = 600,
		BeforeInverseKinematics = 400,
		InverseKinematics = 500,
		BeforeAnimation = 0,
		AfterForwardKinematics = 300,
		ForwardKinematics = 200,
		AfterAnimation = 1000,
	};
}
