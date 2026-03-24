#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WindDirectionType_TypeDefinitionIndex = 49883;

	enum class WindDirectionType : ::System::Int32
	{
		LinkObj = 0,
		WorldX = 2,
		WorldZ = 4,
		Direct = 1,
		WorldY = 3,
	};
}
