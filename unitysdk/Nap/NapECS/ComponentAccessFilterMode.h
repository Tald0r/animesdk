#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessFilterMode_TypeDefinitionIndex = 34173;

	enum class ComponentAccessFilterMode : ::System::Int32
	{
		OneOrMoreOf = 2,
		OneOf = 1,
		None = 0,
		AllOf = 4,
		Negate = 128,
	};
}
