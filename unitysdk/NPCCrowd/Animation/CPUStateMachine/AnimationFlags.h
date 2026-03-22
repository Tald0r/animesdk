#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFlags_TypeDefinitionIndex = 60933;

	enum class AnimationFlags : ::System::Byte
	{
		AdjustmentBlending = 0x10,
		None = 0x0,
		Looping = 0x1,
		RootMotion = 0x2,
		MultipleClips = 0x8,
		PhaseMatching = 0x4,
		StripBipMotion = 0x20,
	};
}
