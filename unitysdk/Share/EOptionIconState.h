#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconState_TypeDefinitionIndex = 17548;

	enum class EOptionIconState : ::System::Int16
	{
		Add = 1,
		Reduce = 3,
		Replace = 2,
		EnumCount = 4,
		None = 0,
	};
}
