#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EConditionType_TypeDefinitionIndex = 42641;

	enum class EConditionType : ::System::Int32
	{
		Default = 3,
		None = 0,
		Compare = 2,
		Time = 1,
		Entity = 4,
	};
}
