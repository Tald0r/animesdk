#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcValueType_TypeDefinitionIndex = 54966;

	enum class HackerGameNpcValueType : ::System::Int32
	{
		Reward = 2,
		None = 0,
		Health = 1,
		FeverReward = 4,
		Damage = 3,
	};
}
