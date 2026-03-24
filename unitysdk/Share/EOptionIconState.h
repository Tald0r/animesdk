#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconState_TypeDefinitionIndex = 10944;

	enum class EOptionIconState : ::System::Int16
	{
		Reduce = 3,
		Add = 1,
		None = 0,
		Replace = 2,
		EnumCount = 4,
	};
}
