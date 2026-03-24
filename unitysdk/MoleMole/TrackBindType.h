#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrackBindType_TypeDefinitionIndex = 37712;

	enum class TrackBindType : ::System::Int32
	{
		Null = 2,
		Transform = 0,
		Animator = 1,
	};
}
