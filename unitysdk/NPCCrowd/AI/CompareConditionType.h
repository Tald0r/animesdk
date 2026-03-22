#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CompareConditionType_TypeDefinitionIndex = 74803;

	enum class CompareConditionType : ::System::Byte
	{
		If = 0x1,
		Equals = 0x6,
		IfNot = 0x2,
		LessEquals = 0xA,
		NotEqual = 0x7,
		Less = 0x4,
		Greater = 0x3,
		GreaterEquals = 0x9,
	};
}
