#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int MessageItemType_TypeDefinitionIndex = 16433;

	enum class MessageItemType : ::System::Int32
	{
		DynamicLabel = 1,
		Normal = 0,
	};
}
