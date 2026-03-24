#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAttractorInteractState_TypeDefinitionIndex = 79061;

	enum class NPCAttractorInteractState : ::System::Int32
	{
		None = 0,
		Claim = 2,
		Exiting = 4,
		Using = 3,
		Query = 1,
	};
}
