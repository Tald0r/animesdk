#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFlags_TypeDefinitionIndex = 60877;

	enum class AnimationFlags : ::System::Byte
	{
		StripBipMotion = 0x20,
		None = 0x0,
		Looping = 0x1,
		AdjustmentBlending = 0x10,
		MultipleClips = 0x8,
		PhaseMatching = 0x4,
		RootMotion = 0x2,
	};
}
