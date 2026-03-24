#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENPCInteraction_TypeDefinitionIndex = 15317;

	enum class ENPCInteraction : ::System::Int16
	{
		OnStart = 0,
		OnEnd = 1,
		EnumCount = 5,
		OnAddInteract = 3,
		OnRemoveInteract = 4,
		OnInteract = 2,
	};
}
