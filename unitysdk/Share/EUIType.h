#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUIType_TypeDefinitionIndex = 12149;

	enum class EUIType : ::System::Int16
	{
		Default = 0,
		EnumCount = 4,
		None = 1,
		HollowQuest = 2,
		Archive = 3,
	};
}
