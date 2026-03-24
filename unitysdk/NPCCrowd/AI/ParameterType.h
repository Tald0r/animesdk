#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 49296;

	enum class ParameterType : ::System::Byte
	{
		Bool = 0x3,
		Int = 0x2,
		Float = 0x1,
	};
}
