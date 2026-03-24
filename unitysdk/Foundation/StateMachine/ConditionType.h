#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 9112;

	enum class ConditionType : ::System::Byte
	{
		Less = 0x4,
		NotEqual = 0x7,
		Greater = 0x3,
		IfNot = 0x2,
		GreaterEquals = 0x9,
		If = 0x1,
		Equals = 0x6,
		None = 0x0,
		Max = 0xB,
		LessEquals = 0xA,
	};
}
