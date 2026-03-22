#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 8885;

	enum class ConditionType : ::System::Byte
	{
		Greater = 0x3,
		GreaterEquals = 0x9,
		Max = 0xB,
		IfNot = 0x2,
		Less = 0x4,
		Equals = 0x6,
		None = 0x0,
		LessEquals = 0xA,
		NotEqual = 0x7,
		If = 0x1,
	};
}
