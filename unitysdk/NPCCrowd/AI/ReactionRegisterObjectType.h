#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionRegisterObjectType_TypeDefinitionIndex = 60282;

	enum class ReactionRegisterObjectType : ::System::Int32
	{
		Entity = 0,
		ViewObject = 1,
	};
}
