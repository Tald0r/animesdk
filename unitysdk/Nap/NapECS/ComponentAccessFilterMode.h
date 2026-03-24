#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessFilterMode_TypeDefinitionIndex = 35202;

	enum class ComponentAccessFilterMode : ::System::Int32
	{
		OneOrMoreOf = 2,
		Negate = 128,
		None = 0,
		AllOf = 4,
		OneOf = 1,
	};
}
