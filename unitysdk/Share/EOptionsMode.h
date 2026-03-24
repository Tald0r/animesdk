#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsMode_TypeDefinitionIndex = 12746;

	enum class EOptionsMode : ::System::Int16
	{
		SelectByGroup = 1,
		RandomByNum = 2,
		Normal = 0,
		EnumCount = 3,
	};
}
