#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WindDirectionType_TypeDefinitionIndex = 78310;

	enum class WindDirectionType : ::System::Int32
	{
		Direct = 1,
		LinkObj = 0,
		WorldY = 3,
		WorldZ = 4,
		WorldX = 2,
	};
}
