#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_NPCAnimationStateParams_TypeDefinitionIndex = 62300;

	enum class NPCUnionAnimatorManager_NPCAnimationStateParams : ::System::Int32
	{
		None = 0,
		TestUpperState = 3,
		ReactionState = 2,
		AttractorState = 1,
	};
}
