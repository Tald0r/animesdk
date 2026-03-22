#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECharacterType_TypeDefinitionIndex = 11630;

	enum class ECharacterType : ::System::Int16
	{
		Exchange = 2,
		Vice = 4,
		Female = 1,
		Male = 0,
		EnumCount = 5,
		Main = 3,
	};
}
