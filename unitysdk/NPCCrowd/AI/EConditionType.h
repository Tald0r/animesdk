#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EConditionType_TypeDefinitionIndex = 66418;

	enum class EConditionType : ::System::Int32
	{
		Time = 1,
		None = 0,
		Default = 3,
		Compare = 2,
		Entity = 4,
	};
}
