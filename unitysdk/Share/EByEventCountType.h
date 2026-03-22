#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EByEventCountType_TypeDefinitionIndex = 12250;

	enum class EByEventCountType : ::System::Int16
	{
		NodeType = 2,
		EventID = 3,
		Tag = 1,
	};
}
