#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENPCInteraction_TypeDefinitionIndex = 17127;

	enum class ENPCInteraction : ::System::Int16
	{
		OnAddInteract = 3,
		EnumCount = 5,
		OnEnd = 1,
		OnStart = 0,
		OnInteract = 2,
		OnRemoveInteract = 4,
	};
}
