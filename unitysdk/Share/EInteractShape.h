#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EInteractShape_TypeDefinitionIndex = 11031;

	enum class EInteractShape : ::System::Int16
	{
		Sector = 2,
		Cube = 0,
		Sphere = 1,
	};
}
