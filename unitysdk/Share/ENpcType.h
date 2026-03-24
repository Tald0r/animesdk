#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENpcType_TypeDefinitionIndex = 17857;

	enum class ENpcType : ::System::Int16
	{
		CommonNpc = 0,
		TriggerBox = 1,
	};
}
