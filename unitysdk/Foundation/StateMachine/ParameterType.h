#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 9144;

	enum class ParameterType : ::System::Byte
	{
		Int = 0x3,
		Float = 0x1,
		Max = 0xA,
		Trigger = 0x9,
		None = 0x0,
		Bool = 0x4,
	};
}
