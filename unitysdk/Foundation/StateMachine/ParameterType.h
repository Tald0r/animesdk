#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 8938;

	enum class ParameterType : ::System::Byte
	{
		Int = 0x3,
		Max = 0xA,
		None = 0x0,
		Bool = 0x4,
		Float = 0x1,
		Trigger = 0x9,
	};
}
