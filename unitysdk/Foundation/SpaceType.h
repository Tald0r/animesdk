#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int SpaceType_TypeDefinitionIndex = 8959;

	enum class SpaceType : ::System::Int32
	{
		World = 0,
		Local = 1,
	};
}
