#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceType_TypeDefinitionIndex = 7921;

	enum class ResourceType : ::System::Int32
	{
		Local_Bundle = 1,
		Local_Resource = 0,
		Empty = 3,
		Update_Resource = 2,
	};
}
