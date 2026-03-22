#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedChain_TypeDefinitionIndex = 35074;

	enum class FullBodyBipedChain : ::System::Int32
	{
		LeftArm = 0,
		RightArm = 1,
		LeftLeg = 2,
		RightLeg = 3,
	};
}
