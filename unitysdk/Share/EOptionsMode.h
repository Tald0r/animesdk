#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsMode_TypeDefinitionIndex = 15578;

	enum class EOptionsMode : ::System::Int16
	{
		SelectByGroup = 1,
		Normal = 0,
		RandomByNum = 2,
		EnumCount = 3,
	};
}
