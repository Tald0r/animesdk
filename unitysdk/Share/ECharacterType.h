#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECharacterType_TypeDefinitionIndex = 15451;

	enum class ECharacterType : ::System::Int16
	{
		Female = 1,
		Vice = 4,
		Main = 3,
		Male = 0,
		Exchange = 2,
		EnumCount = 5,
	};
}
