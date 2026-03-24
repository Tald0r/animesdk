#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPassEvent_TypeDefinitionIndex = 44815;

	enum class AnimationPassEvent : ::System::Int32
	{
		BeforeForwardKinematics = 100,
		BeforeInverseKinematics = 400,
		ForwardKinematics = 200,
		AfterAnimation = 1000,
		AfterForwardKinematics = 300,
		InverseKinematics = 500,
		AfterInverseKinematics = 600,
		BeforeAnimation = 0,
	};
}
