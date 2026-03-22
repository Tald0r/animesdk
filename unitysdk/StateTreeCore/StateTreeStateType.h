#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateType_TypeDefinitionIndex = 26975;

	enum class StateTreeStateType : ::System::Int32
	{
		State = 0,
		Group = 1,
		Linked = 2,
		LinkedAsset = 3,
		Subtree = 4,
	};
}
