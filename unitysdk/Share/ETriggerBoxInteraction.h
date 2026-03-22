#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ETriggerBoxInteraction_TypeDefinitionIndex = 14319;

	enum class ETriggerBoxInteraction : ::System::Int16
	{
		OnAddInteract = 3,
		OnRemoveInteract = 4,
		OnExit = 2,
		OnEnter = 0,
		EnumCount = 5,
		OnUpdate = 1,
	};
}
