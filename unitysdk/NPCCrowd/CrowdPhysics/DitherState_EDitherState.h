#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EDitherState_TypeDefinitionIndex = 58320;

	enum class DitherState_EDitherState : ::System::Int32
	{
		None = 0,
		FadeIn = 1,
		FadeOut = 2,
	};
}
