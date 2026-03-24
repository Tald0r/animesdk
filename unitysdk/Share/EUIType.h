#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUIType_TypeDefinitionIndex = 17903;

	enum class EUIType : ::System::Int16
	{
		Default = 0,
		HollowQuest = 2,
		None = 1,
		Archive = 3,
		EnumCount = 4,
	};
}
