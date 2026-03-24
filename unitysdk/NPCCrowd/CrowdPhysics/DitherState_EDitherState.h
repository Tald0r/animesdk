#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EDitherState_TypeDefinitionIndex = 54273;

	enum class DitherState_EDitherState : ::System::Int32
	{
		None = 0,
		FadeOut = 2,
		FadeIn = 1,
	};
}
