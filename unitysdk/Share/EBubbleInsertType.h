#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBubbleInsertType_TypeDefinitionIndex = 17177;

	enum class EBubbleInsertType : ::System::Int16
	{
		Begin = 1,
		EnumCount = 4,
		End = 2,
		Duration = 3,
		None = 0,
	};
}
