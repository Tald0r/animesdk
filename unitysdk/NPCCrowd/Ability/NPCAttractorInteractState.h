#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAttractorInteractState_TypeDefinitionIndex = 41494;

	enum class NPCAttractorInteractState : ::System::Int32
	{
		Using = 3,
		Query = 1,
		Claim = 2,
		Exiting = 4,
		None = 0,
	};
}
